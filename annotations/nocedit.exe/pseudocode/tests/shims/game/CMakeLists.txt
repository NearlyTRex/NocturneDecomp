nocturne_test_suite(shims_game
    EXCLUDE "/test_automap[^/]*\\.cpp$"
    SUBJECTS
        # Arithmetic on two arguments; no engine state.
        shims/game/walk_turn.cpp
        # Reads nocturne.ini through a stand-in for the engine's CIni.
        shims/game/pad_tuning.cpp
        shims/core/ini_setting.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        ../gl/ini_support.cpp
)

# The map, against a level and actors automap_support.cpp builds and the engine
# calls it stands in for. It saves through the Watcom runtime's files, whose
# rand() reports to a counter rather than the netplay funnel.
nocturne_test_suite(shims_game_automap
    TESTS test_automap.cpp
    SUBJECTS
        shims/game/automap.cpp
        shims/watcom/crt.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        automap_support.cpp
        ../watcom/rng_audit_support.cpp
)

# Without it: the shipped game has no map.
nocturne_test_suite(shims_game_automap_authentic
    TESTS test_automap_authentic.cpp
    SUBJECTS
        shims/game/automap.cpp
    DEFINITIONS NOCTURNE_AUTHENTIC_AUTOMAP=1
)
