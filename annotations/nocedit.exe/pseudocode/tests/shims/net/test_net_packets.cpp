// =============================================================================
// NET PACKETS — the additions' packet header and the serials they de-duplicate by
// =============================================================================
//
// A change re-sent every frame until it is due is taken once: the highest
// serial seen, and a bit for each of the 32 below it, so a lost one re-sent
// after a later one still gets in.

#include "net/net_packets.h"
#include "nocturne.h"
#include "nocturne_test.h"

NOCTURNE_TEST(each_serial_is_taken_once) {
    SNetSerialWindow window = {};
    CHECK_EQ(nocturne_net_serial_take(&window, 1), 1);
    CHECK_EQ(nocturne_net_serial_take(&window, 1), 0);
    CHECK_EQ(nocturne_net_serial_take(&window, 3), 1);
    CHECK_EQ(window.seen_below, 1u << 1); // 1, two below 3
}

// One that arrives after a later one is still taken, once.
NOCTURNE_TEST(a_serial_that_arrives_late_is_still_taken) {
    SNetSerialWindow window = {};
    nocturne_net_serial_take(&window, 5);
    CHECK_EQ(nocturne_net_serial_take(&window, 4), 1);
    CHECK_EQ(nocturne_net_serial_take(&window, 4), 0);
    CHECK_EQ(nocturne_net_serial_take(&window, 2), 1);
}

// More than 32 below the highest is too old to tell from a repeat; a jump of
// 32 or more forgets what was below.
NOCTURNE_TEST(a_serial_too_far_below_is_refused_and_a_long_jump_forgets) {
    SNetSerialWindow window = {};
    nocturne_net_serial_take(&window, 10);
    CHECK_EQ(nocturne_net_serial_take(&window, 50), 1);
    CHECK_EQ(window.seen_below, 0u);
    CHECK_EQ(nocturne_net_serial_take(&window, 17), 0);
    CHECK_EQ(nocturne_net_serial_take(&window, 18), 1);
}

// The header carries the size and type, the rest is zero; a packet is the type
// asked about only when it is there and at least as long as that type.
NOCTURNE_TEST(a_packet_is_its_type_only_when_long_enough) {
    unsigned char packet[16];
    packet[8] = 0xff;
    nocturne_net_packet_init(packet, (int)sizeof(packet), NOCTURNE_NET_PACKET_CAMERA);
    const SNetPacketHeader *header = (const SNetPacketHeader *)packet;
    CHECK_EQ(header->size, 16);
    CHECK_EQ((int)header->type, (int)NOCTURNE_NET_PACKET_CAMERA);
    CHECK_EQ((int)packet[8], 0);

    CHECK_EQ(nocturne_net_packet_is(packet, 16, NOCTURNE_NET_PACKET_CAMERA, 16), 1);
    CHECK_EQ(nocturne_net_packet_is(packet, 16, NOCTURNE_NET_PACKET_WEAPON, 16), 0);
    CHECK_EQ(nocturne_net_packet_is(packet, 15, NOCTURNE_NET_PACKET_CAMERA, 16), 0);
    CHECK_EQ(nocturne_net_packet_is(nullptr, 16, NOCTURNE_NET_PACKET_CAMERA, 16), 0);
}

NOCTURNE_TEST_MAIN()
