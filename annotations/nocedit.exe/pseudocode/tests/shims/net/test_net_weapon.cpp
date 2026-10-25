// =============================================================================
// NET WEAPON — a weapon, item, ammo or goggles change applied on one frame everywhere
// =============================================================================
//
// Out of play a change applies at once, as shipped. In play it is scheduled a
// few frames ahead, sent to the other machines, and applied there and here on
// that frame, in the same order. A peer's changes are written as the wire has
// them.

#include "net/net_packets.h"
#include "net/net_weapon.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <string>

namespace {

using net_support::heroes;
using net_support::net;
using net_support::stand;

#pragma pack(push, 1)
struct Selection {
    SNetPacketHeader header;
    int apply_sequence;
    int origin_player;
    int serial;
    int hero_index;
    int action;
    int category;
    int direction;
};
#pragma pack(pop)

Selection selection(int apply, int origin, int serial, int direction) {
    Selection packet;
    nocturne_net_packet_init(&packet, (int)sizeof(packet), NOCTURNE_NET_PACKET_WEAPON);
    packet.apply_sequence = apply;
    packet.origin_player = origin;
    packet.serial = serial;
    packet.hero_index = origin;
    packet.action = NOCTURNE_NET_WEAPON_ITEM;
    packet.category = 0;
    packet.direction = direction;
    return packet;
}

int deliver(const Selection &packet) {
    return nocturne_net_weapon_on_packet(&packet, (int)sizeof(packet));
}

void playing(int frame) {
    stand.reset();
    nocturne_net_weapon_reset();
    net_support::place_heroes(2);
    net_support::start_session(CONNECTION_HOST, 2, 0);
    net.players[0].sim_frame_index = frame;
}

// The directions applied, in order.
std::string directions() {
    std::string order;
    for (const auto &s : stand.selections)
        order += std::to_string(s.direction);
    return order;
}

} // namespace

// Each kind of change goes to its own inventory call, on the local hero.
NOCTURNE_TEST(out_of_play_a_change_applies_at_once) {
    stand.reset();
    nocturne_net_weapon_reset();
    net_support::place_heroes(2);
    g_LocalHeroIndex = 1;
    nocturne_net_weapon_request(NOCTURNE_NET_WEAPON_SELECT, 3, 1);
    nocturne_net_weapon_apply_local(NOCTURNE_NET_WEAPON_ITEM, 0, -1);
    nocturne_net_weapon_apply_local(NOCTURNE_NET_WEAPON_AMMO, 0, 1);
    nocturne_net_weapon_apply_local(NOCTURNE_NET_WEAPON_GOGGLES, 0, 1);
    nocturne_net_weapon_apply_local(99, 0, 1);
    CHECK_EQ(stand.selections.size(), (size_t)3);
    CHECK_EQ(stand.selections[0].kind, std::string("weapon"));
    CHECK_EQ(stand.selections[0].category, 3);
    CHECK(stand.selections[0].inventory == &heroes[1]->inventory);
    CHECK_EQ(stand.selections[1].kind, std::string("item"));
    CHECK_EQ(stand.selections[2].kind, std::string("ammo"));
    CHECK_EQ(stand.goggles.size(), (size_t)1);
    CHECK(stand.goggles[0].first == heroes[1]);
    CHECK(stand.sent.empty());

    // No hero there, or no such slot.
    g_HeroActors[1] = nullptr;
    nocturne_net_weapon_apply_local(NOCTURNE_NET_WEAPON_ITEM, 0, 1);
    g_LocalHeroIndex = -1;
    nocturne_net_weapon_apply_local(NOCTURNE_NET_WEAPON_ITEM, 0, 1);
    g_LocalHeroIndex = 4;
    nocturne_net_weapon_apply_local(NOCTURNE_NET_WEAPON_ITEM, 0, 1);
    CHECK_EQ(stand.selections.size(), (size_t)3);
}

// In play this machine waits for the scheduled frame with everyone else,
// re-sending its change until then.
NOCTURNE_TEST(in_play_a_change_waits_for_its_frame) {
    playing(10);
    nocturne_net_weapon_request(NOCTURNE_NET_WEAPON_ITEM, 0, 1);
    deliver(selection(30, 1, 1, 2)); // a peer's: not this machine's to re-send
    CHECK(stand.selections.empty());
    CHECK_EQ(stand.sent.size(), (size_t)1);
    nocturne_net_weapon_apply_if_due(21);
    CHECK_EQ(stand.sent.size(), (size_t)2);
    CHECK(stand.selections.empty());
    nocturne_net_weapon_apply_if_due(22);
    CHECK_EQ(stand.selections.size(), (size_t)1);
}

// Changes apply in frame, then player, then serial order, whatever order they
// arrived in; a repeat is taken once, and one that is late still applies.
NOCTURNE_TEST(changes_apply_in_the_order_they_were_made) {
    playing(0);
    deliver(selection(5, 1, 2, 2));
    deliver(selection(5, 1, 1, 1));
    deliver(selection(5, 1, 1, 1));
    deliver(selection(4, 1, 3, 0));
    deliver(selection(6, 1, 4, 4));
    deliver(selection(5, 1, 5, 3));
    nocturne_net_weapon_request(NOCTURNE_NET_WEAPON_ITEM, 0, 5); // frame 12, player 0
    Selection own_peer = selection(12, 1, 6, 6);
    deliver(own_peer);
    Selection first = selection(12, 0, 9, 7); // an earlier player on the same frame
    first.hero_index = 0;
    deliver(first);
    nocturne_net_weapon_apply_if_due(20);
    CHECK_EQ(directions(), std::string("01234576"));
    nocturne_net_weapon_apply_if_due(21);
}

// Not this type, too short, or from no player: not taken; a full queue drops
// the change; with no session a change is kept but nothing re-sent.
NOCTURNE_TEST(what_cannot_be_queued_is_not) {
    playing(0);
    Selection packet = selection(1, 1, 1, 1);
    CHECK_EQ(nocturne_net_weapon_on_packet(&packet, (int)sizeof(packet) - 1), 0);
    CHECK_EQ(deliver(selection(1, -1, 1, 1)), 1);
    CHECK_EQ(deliver(selection(1, 4, 1, 1)), 1);
    for (int serial = 1; serial <= 17; serial++)
        deliver(selection(50, 1, serial, 1));

    nocturne_net_weapon_request(NOCTURNE_NET_WEAPON_ITEM, 0, 1);
    g_CNetGamePtr = nullptr;
    const size_t sent = stand.sent.size();
    nocturne_net_weapon_apply_if_due(0);
    CHECK_EQ(stand.sent.size(), sent);
    nocturne_net_weapon_apply_if_due(50);
    CHECK_EQ(stand.selections.size(), (size_t)16);
}

NOCTURNE_TEST_MAIN()
