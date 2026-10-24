# The netplay shims, together, since they call one another: the game state they
# read and the engine and shim calls they make are net_support.cpp's. The
# netplay.ini reader finds its file through the path resolver, and the gas room
# names its events through the Watcom runtime's _stricmp; both come along.
nocturne_test_suite(shims_net
    SUBJECTS
        shims/net/net_camera.cpp
        shims/net/net_cheats.cpp
        shims/net/net_config.cpp
        shims/net/net_disconnect.cpp
        shims/net/net_friendly.cpp
        shims/net/net_hero.cpp
        shims/net/net_input.cpp
        shims/net/net_keepalive.cpp
        shims/net/net_menu.cpp
        shims/net/net_mission.cpp
        shims/net/net_packets.cpp
        shims/net/net_pathcache.cpp
        shims/net/net_respawn.cpp
        shims/net/net_session.cpp
        shims/net/net_sim.cpp
        shims/net/net_skip.cpp
        shims/net/net_sync.cpp
        shims/net/net_weapon.cpp
        shims/net/rng.cpp
        shims/net/sim_trace.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
        # _stricmp, and the Watcom rand() the game's seeds are for.
        shims/watcom/crt.cpp
    SUPPORT
        net_support.cpp
)
