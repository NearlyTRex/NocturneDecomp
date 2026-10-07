// =============================================================================
// NETPLAY — THE PACKET TYPES THE ADDITIONS SEND — implementation
// =============================================================================

#include "net/net_packets.h"
#include "nocturne.h"

#include <cstring>

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
