// =============================================================================
// NETPLAY — THE PACKET TYPES THE ADDITIONS SEND — implementation
// =============================================================================

#include "net/net_packets.h"
#include "nocturne.h"

#include <cstring>

extern "C" int nocturne_net_serial_take(SNetSerialWindow *window, int serial)
{
    int highest = window->highest;

    if (highest < serial) {
        int shift = serial - highest;
        window->seen_below = (shift < 32)
            ? ((window->seen_below << shift) | (1u << (shift - 1)))
            : 0u;
        if (highest == 0) {
            window->seen_below = 0u;
        }
        window->highest = serial;
        return 1;
    }
    if ((serial == highest) || (32 < highest - serial)) {
        return 0;
    }
    unsigned int bit = 1u << (highest - serial - 1);
    if ((window->seen_below & bit) != 0u) {
        return 0;
    }
    window->seen_below |= bit;
    return 1;
}

extern "C" void nocturne_net_packet_init(void *packet, int size, int type)
{
    SNetPacketHeader *header = (SNetPacketHeader *)packet;

    std::memset(packet, 0, (size_t)size);
    header->size = size;
    header->type = (ENetPacketType)type;
}

extern "C" int nocturne_net_packet_is(const void *packet, int packet_size, int type, int min_size)
{
    if ((packet == (const void *)0x0) || (packet_size < min_size)) {
        return 0;
    }
    return ((const SNetPacketHeader *)packet)->type == (ENetPacketType)type;
}
