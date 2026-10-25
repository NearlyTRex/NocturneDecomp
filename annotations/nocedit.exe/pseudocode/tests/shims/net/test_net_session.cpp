// =============================================================================
// NET SESSION — what a network game is, and the session-wide calls around it
// =============================================================================
//
// Whether one is running and in play, which side this machine is, the frame
// it has reached; a packet to every other player; the goodbye sent on leaving
// without the handshake; and the path-map cache started fresh per mission.

#include "net/net_disconnect.h"
#include "net/net_pathcache.h"
#include "net/net_session.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

namespace {

using net_support::net;
using net_support::stand;

} // namespace

// No CNetGame, or one that is not connected, is no session.
NOCTURNE_TEST(with_no_connection_there_is_no_session) {
    stand.reset();
    CHECK_EQ(nocturne_net_session_active(), 0);
    CHECK_EQ(nocturne_net_session_playing(), 0);
    CHECK_EQ(nocturne_net_session_is_host(), 0);
    CHECK_EQ(nocturne_net_session_is_guest(), 0);
    g_CNetGamePtr = &net;
    CHECK_EQ(nocturne_net_session_active(), 0);
}

// A host is the host from the lobby on; a guest is one only once in play.
NOCTURNE_TEST(the_host_and_a_guest_are_told_apart) {
    stand.reset();
    net_support::start_session(CONNECTION_HOST, 2, 0);
    net.network_mode = NET_MODE_LOBBY;
    CHECK_EQ(nocturne_net_session_active(), 1);
    CHECK_EQ(nocturne_net_session_playing(), 0);
    CHECK_EQ(nocturne_net_session_is_host(), 1);
    CHECK_EQ(nocturne_net_session_is_guest(), 0);

    net.connection_type = CONNECTION_CLIENT;
    CHECK_EQ(nocturne_net_session_is_guest(), 0);
    net.network_mode = NET_MODE_PLAYING;
    CHECK_EQ(nocturne_net_session_is_guest(), 1);
    CHECK_EQ(nocturne_net_session_playing(), 1);
    CHECK_EQ(nocturne_net_session_is_host(), 0);

    net.local_player_index = 1;
    net.players[1].sim_frame_index = 42;
    CHECK_EQ(nocturne_net_session_local_frame(), 42);
}

// A broadcast reaches everyone but this machine.
NOCTURNE_TEST(a_broadcast_goes_to_every_other_player) {
    stand.reset();
    net_support::start_session(CONNECTION_HOST, 2, 1);
    SNetPacketHeader header = {sizeof(SNetPacketHeader),
                               (ENetPacketType)NOCTURNE_NET_PACKET_CAMERA};
    nocturne_net_session_broadcast(&header);
    CHECK_EQ(stand.sent.size(), (size_t)1);
    CHECK_EQ(stand.sent[0].player, 0);
}

// The reset clears what the session-scoped shims hold; the weapon queue's
// goggles go with it.
NOCTURNE_TEST(a_reset_clears_the_session_shims) {
    stand.reset();
    nocturne_net_session_reset();
    CHECK_EQ(stand.goggles_resets, 1);
}

// Three copies to each peer a host has; a guest says goodbye to the host only;
// outside a session nothing is sent.
NOCTURNE_TEST(leaving_tells_the_peers_three_times) {
    stand.reset();
    nocturne_net_disconnect_notify(nullptr);
    nocturne_net_disconnect_notify(&net);
    CHECK(stand.disconnect_notices.empty());

    net_support::start_session(CONNECTION_HOST, 2, 0);
    nocturne_net_disconnect_notify(&net);
    CHECK_EQ(stand.disconnect_notices.size(), (size_t)3);
    CHECK(stand.disconnect_notices[0] == &net.players[1].addr);

    stand.disconnect_notices.clear();
    net.connection_type = CONNECTION_CLIENT;
    net.player_count = 3;
    net.local_player_index = 2;
    net.server_player_index = 0;
    nocturne_net_disconnect_notify(&net);
    CHECK_EQ(stand.disconnect_notices.size(), (size_t)3);
    CHECK(stand.disconnect_notices[0] == &net.players[0].addr);
}

// In a session the cache is set up on first use, and after that each entry is
// reset in place; the LRU order starts over either way. Outside one, nothing.
NOCTURNE_TEST(the_path_map_cache_starts_each_mission_fresh) {
    stand.reset();
    nocturne_net_pathcache_rewind();
    CHECK_EQ(net_support::array_inits(), 0);

    net_support::start_session(CONNECTION_HOST, 2, 0);
    g_PathMapLRUCounters[3] = 9;
    nocturne_net_pathcache_rewind();
    CHECK_EQ(net_support::array_inits(), 1);
    CHECK_EQ(net_support::atexits(), 1);
    CHECK_EQ((int)(g_PathMapCacheInitFlag & 1), 1);
    CHECK_EQ(g_PathMapLRUCounters[3], 3);

    g_PathMapCache[5].cached_voxel_coords.x = 4;
    nocturne_net_pathcache_rewind();
    CHECK_EQ(net_support::array_inits(), 1);
    CHECK_EQ(net_support::path_resets(), 12);
    CHECK_EQ(g_PathMapCache[5].cached_voxel_coords.x, 0x7fffffff);
}

NOCTURNE_TEST_MAIN()
