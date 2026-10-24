nocturne_test_suite(shims_game
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
