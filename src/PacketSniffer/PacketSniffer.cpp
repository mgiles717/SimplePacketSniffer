#include <iostream>

// Ugly relative path because no CMake file included or compiler switch
#include "../../include/PacketSniffer/PacketSniffer.h"

PacketSniffer::PacketSniffer(const std::string &device){
    this->device = device;
}