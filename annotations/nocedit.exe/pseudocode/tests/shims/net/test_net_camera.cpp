// =============================================================================
// NET CAMERA — every machine agrees which cameras the players are looking through
// =============================================================================
//
// A script asking isCurrentCamera gets the same answer everywhere: each player's
// camera changes are scheduled a few frames ahead and applied on that frame on
// every machine. The changes from a peer are written here as the wire has them.

#include "net/net_camera.h"
#include "net/net_packets.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstring>

namespace {

using net_support::heroes;
using net_support::net;
using net_support::stand;

#pragma pack(push, 1)
struct CameraChange {
    SNetPacketHeader header;
    int apply_sequence;
    int origin_player;
    int serial;
    int camera_index;
};
#pragma pack(pop)

CameraChange change(int apply, int origin, int serial, int camera) {
    CameraChange packet;
    nocturne_net_packet_init(&packet, (int)sizeof(packet), NOCTURNE_NET_PACKET_CAMERA);
    packet.apply_sequence = apply;
    packet.origin_player = origin;
    packet.serial = serial;
    packet.camera_index = camera;
    return packet;
}

int deliver(const CameraChange &packet) {
    return nocturne_net_camera_on_packet(&packet, (int)sizeof(packet));
}

// A session in play with two cameras, the host at frame `frame`.
void playing(int frame) {
    stand.reset();
    nocturne_net_camera_reset();
    net_support::start_session(CONNECTION_HOST, 2, 0);
    net.players[0].sim_frame_index = frame;
    net_support::set->camera_count = 2;
    std::strcpy(net_support::set->cameras[0].name, "Hall");
    std::strcpy(net_support::set->cameras[1].name, "Stairs");
    net_support::set->selected_camera_index = 1;
}

} // namespace

// The host's own cut is announced for twelve frames on, re-sent while it waits,
// and counts from that frame.
NOCTURNE_TEST(a_cut_counts_from_the_frame_it_was_scheduled_for) {
    playing(5);
    nocturne_net_camera_apply_if_due(5);
    CHECK_EQ(stand.sent.size(), (size_t)2);
    CHECK_EQ(nocturne_net_camera_is_current("stairs"), 0);
    nocturne_net_camera_apply_if_due(16);
    CHECK_EQ(stand.sent.size(), (size_t)3);
    nocturne_net_camera_apply_if_due(17);
    CHECK_EQ(nocturne_net_camera_is_current("STAIRS"), 1);
    CHECK_EQ(nocturne_net_camera_is_current("Hall"), 0);
    CHECK_EQ(stand.sent.size(), (size_t)3);
}

// A peer's cut is taken once however often it is re-sent; one that arrives
// late still applies, and an older one never undoes a newer.
NOCTURNE_TEST(a_peers_cut_is_taken_once_and_in_order) {
    playing(0);
    net_support::set->selected_camera_index = -1;
    CHECK_EQ(deliver(change(10, 1, 2, 0)), 1);
    CHECK_EQ(deliver(change(10, 1, 2, 0)), 1);
    nocturne_net_camera_apply_if_due(12);
    CHECK_EQ(nocturne_net_camera_is_current("Hall"), 1);
    nocturne_net_camera_apply_if_due(13); // nothing left, reported late once

    deliver(change(14, 1, 1, 1));
    nocturne_net_camera_apply_if_due(14);
    CHECK_EQ(nocturne_net_camera_is_current("Stairs"), 0);
    CHECK_EQ(nocturne_net_camera_is_current("Hall"), 1);

    // An index past the set's cameras names none of them.
    deliver(change(15, 1, 3, 7));
    nocturne_net_camera_apply_if_due(15);
    CHECK_EQ(nocturne_net_camera_is_current("Hall"), 0);

    // A peer's cut still to come is not this machine's to re-send; late a
    // second time, it is not reported again.
    deliver(change(20, 1, 4, 0));
    const size_t sent = stand.sent.size();
    nocturne_net_camera_apply_if_due(16);
    CHECK_EQ(stand.sent.size(), sent);
    nocturne_net_camera_apply_if_due(25);
    CHECK_EQ(nocturne_net_camera_is_current("Hall"), 1);
}

// Not this type, too short, or from no player: not taken.
NOCTURNE_TEST(a_packet_that_is_not_a_cut_is_not_taken) {
    playing(0);
    CameraChange packet = change(1, 1, 1, 0);
    CHECK_EQ(nocturne_net_camera_on_packet(&packet, (int)sizeof(packet) - 1), 0);
    packet.header.type = (ENetPacketType)NOCTURNE_NET_PACKET_WEAPON;
    CHECK_EQ(nocturne_net_camera_on_packet(&packet, (int)sizeof(packet)), 0);
    CHECK_EQ(deliver(change(1, -1, 1, 0)), 1);
    CHECK_EQ(deliver(change(1, 4, 1, 0)), 1);
    nocturne_net_camera_apply_if_due(1);
    CHECK_EQ(nocturne_net_camera_is_current("Hall"), 0);
}

// The queue holds 32; the rest are dropped with a warning.
NOCTURNE_TEST(a_full_queue_drops_the_cut) {
    playing(0);
    for (int serial = 1; serial <= 33; serial++)
        deliver(change(100, 1, serial, 0));
    nocturne_net_camera_apply_if_due(100);
    CHECK_EQ(nocturne_net_camera_is_current("Hall"), 1);
}

// Out of play nothing is published; with no game or no set nothing happens;
// with no set or no name nothing is current.
NOCTURNE_TEST(out_of_play_nothing_is_published) {
    playing(0);
    net.network_mode = NET_MODE_LOBBY;
    CHECK_EQ(nocturne_net_camera_active(), 0);
    nocturne_net_camera_apply_if_due(0);
    CHECK(stand.sent.empty());

    CHECK_EQ(nocturne_net_camera_is_current(nullptr), 0);
    g_CDemonSetPtr = nullptr;
    CHECK_EQ(nocturne_net_camera_is_current("Hall"), 0);
    nocturne_net_camera_apply_if_due(0);
    g_CNetGamePtr = nullptr;
    nocturne_net_camera_apply_if_due(0);
    CHECK(stand.sent.empty());
}

// In a session a camera that follows a player follows this machine's hero.
NOCTURNE_TEST(a_camera_on_a_player_follows_this_machines_hero) {
    stand.reset();
    net_support::place_heroes(2);
    CDemonActor *other = &heroes[1]->base.base;
    static CDemonActor enemy = {};
    CHECK(nocturne_net_camera_focus_actor(other) == other);

    net_support::start_session(CONNECTION_HOST, 2, 0);
    CHECK(nocturne_net_camera_focus_actor(other) == &heroes[0]->base.base);
    CHECK(nocturne_net_camera_focus_actor(&enemy) == &enemy);
    g_LocalHeroIndex = 5;
    CHECK(nocturne_net_camera_focus_actor(other) == other);
}

NOCTURNE_TEST_MAIN()
