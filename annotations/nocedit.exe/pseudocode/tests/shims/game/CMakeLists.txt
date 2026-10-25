nocturne_test_suite(shims_game
    TESTS test_walk_turn.cpp test_pad_tuning.cpp test_movie_audio.cpp test_movie_audio_saved.cpp
    SUBJECTS
        # Arithmetic on two arguments; no engine state.
        shims/game/walk_turn.cpp
        # Read nocturne.ini through a stand-in for the engine's CIni.
        shims/game/pad_tuning.cpp
        shims/game/movie_audio.cpp
        shims/core/ini_setting.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        ../gl/ini_support.cpp
        sound_support.cpp
)

# The heroes, the mission and the sound cues: the engine calls they make, and
# the other game shims they lean on, are game_support.cpp's; their classes are
# class_support.cpp's. The Watcom runtime brings _stricmp, and the path
# resolver the leaf of a sound's name.
nocturne_test_suite(shims_game_heroes
    TESTS test_goggles_camera_hold.cpp test_hero_slot.cpp test_hero_breath.cpp
          test_hero_svetlana.cpp test_hq_weapon.cpp test_item_names.cpp test_hero_frame.cpp
          test_hero_baron.cpp test_hero_shove.cpp test_attract.cpp test_helper_death.cpp
          test_hero_death.cpp test_dialogue_override.cpp test_script_cue.cpp
          test_status_bar.cpp
    SUBJECTS
        shims/game/goggles_camera_hold.cpp
        shims/game/hero_slot.cpp
        shims/game/hero_breath.cpp
        shims/game/hero_svetlana.cpp
        shims/game/hq_weapon.cpp
        shims/game/item_names.cpp
        shims/game/hero_frame.cpp
        shims/game/hero_baron.cpp
        shims/game/hero_shove.cpp
        shims/game/attract.cpp
        shims/game/helper_death.cpp
        shims/game/hero_death.cpp
        shims/game/dialogue_override.cpp
        shims/game/script_cue.cpp
        shims/game/status_bar.cpp
        shims/watcom/crt.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        game_support.cpp
        class_support.cpp
        ../watcom/rng_audit_support.cpp
)

# The same shims with the shipped behaviour back.
nocturne_test_suite(shims_game_authentic
    TESTS test_game_authentic.cpp
    SUBJECTS
        shims/game/hero_svetlana.cpp
        shims/game/helper_death.cpp
        shims/game/script_cue.cpp
        shims/game/status_bar.cpp
        shims/game/movie_audio.cpp
        shims/core/ini_setting.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        ../gl/ini_support.cpp
        sound_support.cpp
    DEFINITIONS
        NOCTURNE_AUTHENTIC_HERO_ACTIONS=1 NOCTURNE_AUTHENTIC_HELPER_DEATH=1
        NOCTURNE_AUTHENTIC_CUE_RETRIGGER=1 NOCTURNE_AUTHENTIC_STATUS_BAR_WIDTH=1
        NOCTURNE_AUTHENTIC_FMV=1
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
        class_support.cpp
        ../watcom/rng_audit_support.cpp
)

# Without it: the shipped game has no map.
nocturne_test_suite(shims_game_automap_authentic
    TESTS test_automap_authentic.cpp
    SUBJECTS
        shims/game/automap.cpp
    DEFINITIONS NOCTURNE_AUTHENTIC_AUTOMAP=1
)
