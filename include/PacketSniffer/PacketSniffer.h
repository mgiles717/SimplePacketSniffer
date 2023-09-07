#ifndef PACKETSNIFFER_H
#define PACKETSNIFFER_H

#include <pcap.h>
#include <stdio.h>
#include <string>

class PacketSniffer {
private:
    std::string device;
    pcap_t *handle;

public:
    PacketSniffer(const std::string &device);
    ~PacketSniffer();

    void startSniffing(int num_packets);
    void stopSniffing();
    void setFilter(const std::string &filter_expr);

    void packetHandler(u_char *user_data, const struct pcap_pkthdr *pkthdr, const u_char *packet);
};


#endif