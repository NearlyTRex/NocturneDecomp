// =============================================================================
// NET CHEATS — the host's cheat list is the session's
// =============================================================================
//
// The host announces its packed cheat table and its auto-use-health setting;
// a guest adopts the table when it is the same size as its own, and the
// setting either way. The packets are the host's own, played back.

#include "game/cheats.h"
#include "net/net_cheats.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstring>
#include <vector>

namespace {

using net_support::game;
using net_support::stand;

// What a host announces, with two cheats on.
std::vector<unsigned char> host_packet() {
    stand.reset();
    net_support::start_session(CONNECTION_HOST, 2, 0);
    stand.cheats_packed.assign(NOCTURNE_CHEAT_COUNT, 0);
    stand.cheats_packed[3] = 1;
    stand.cheats_packed[7] = 2;
    game.auto_use_health = 5;
    nocturne_net_cheats_announce();
    return stand.sent.empty() ? std::vector<unsigned char>() : stand.sent[0].bytes;
}

} // namespace

// Three copies to each guest; a guest announces nothing.
NOCTURNE_TEST(the_host_announces_its_cheats_three_times) {
    std::vector<unsigned char> packet = host_packet();
    CHECK_EQ(stand.sent.size(), (size_t)3);
    CHECK_EQ(stand.sent[0].player, 1);
    CHECK_EQ(net_support::type_of(stand.sent[0]), (int)NOCTURNE_NET_PACKET_CHEATS);

    stand.sent.clear();
    net_support::net.connection_type = CONNECTION_CLIENT;
    nocturne_net_cheats_announce();
    CHECK(stand.sent.empty());
}

// A guest adopts the table and the setting; its own setting answers again
// after a reset.
NOCTURNE_TEST(a_guest_adopts_the_hosts_cheats) {
    std::vector<unsigned char> packet = host_packet();
    net_support::net.connection_type = CONNECTION_CLIENT;
    nocturne_net_cheats_reset();
    game.auto_use_health = 0;
    CHECK_EQ(nocturne_net_cheats_auto_use_health(), 0);

    CHECK_EQ(nocturne_net_cheats_on_packet(packet.data(), (int)packet.size()), 1);
    CHECK_EQ(stand.cheat_override_active, 1);
    CHECK_EQ((int)stand.cheat_override.size(), NOCTURNE_CHEAT_COUNT);
    CHECK_EQ((int)stand.cheat_override[7], 2);
    CHECK_EQ(nocturne_net_cheats_auto_use_health(), 1);

    // The host reads its own.
    net_support::net.connection_type = CONNECTION_HOST;
    CHECK_EQ(nocturne_net_cheats_auto_use_health(), 0);
    net_support::net.connection_type = CONNECTION_CLIENT;

    nocturne_net_cheats_reset();
    CHECK_EQ(stand.cheat_override_active, 0);
    CHECK_EQ(nocturne_net_cheats_auto_use_health(), 0);
    nocturne_net_cheats_reset();
    CHECK_EQ(stand.cheat_overrides_cleared, 3);

    // Out of a session, the game's own.
    nocturne_net_cheats_on_packet(packet.data(), (int)packet.size());
    g_CNetGamePtr = nullptr;
    CHECK_EQ(nocturne_net_cheats_auto_use_health(), 0);
}

// A table of another size is not applied, but the setting still is; a packet
// of another type, or cut short, is not this one.
NOCTURNE_TEST(a_table_of_another_size_is_kept_out) {
    std::vector<unsigned char> packet = host_packet();
    net_support::net.connection_type = CONNECTION_CLIENT;
    nocturne_net_cheats_reset();
    game.auto_use_health = 0;
    const int other_count = NOCTURNE_CHEAT_COUNT - 1;
    std::memcpy(packet.data() + sizeof(SNetPacketHeader), &other_count, sizeof(other_count));
    CHECK_EQ(nocturne_net_cheats_on_packet(packet.data(), (int)packet.size()), 1);
    CHECK_EQ(stand.cheat_override_active, 0);
    CHECK_EQ(nocturne_net_cheats_auto_use_health(), 1);

    CHECK_EQ(nocturne_net_cheats_on_packet(packet.data(), (int)packet.size() - 1), 0);
    packet[4] = (unsigned char)NOCTURNE_NET_PACKET_CAMERA;
    CHECK_EQ(nocturne_net_cheats_on_packet(packet.data(), (int)packet.size()), 0);
}

NOCTURNE_TEST_MAIN()
