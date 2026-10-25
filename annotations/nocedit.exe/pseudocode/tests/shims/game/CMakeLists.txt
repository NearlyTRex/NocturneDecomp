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
        hero_support.cpp
        class_support.cpp
        ../watcom/rng_audit_support.cpp
)

# What the heroes do: motion, melee, interaction, items, weapons, lights, falls,
# grabs and Moloch. They call one another, and the engine calls they make are
# behaviour_support.cpp's. The light-filter replay matches commands without
# case through core/ascii_case.h; the weapon names go through the Watcom
# runtime's _stricmp.
set(_behaviour_subjects
    shims/game/hero_weapon.cpp
    shims/game/hero_colonel.cpp
    shims/game/hero_gabriella.cpp
    shims/watcom/crt.cpp
    shims/watcom/path.cpp
    shims/core/file_search.cpp
    shims/game/hero_motion.cpp
    shims/game/hero_melee.cpp
    shims/game/hero_interact.cpp
    shims/game/hero_items.cpp
    shims/game/goggle_look.cpp
    shims/game/gun_flashlight.cpp
    shims/game/light_filter_load.cpp
    shims/game/actor_delete.cpp
    shims/game/hero_light.cpp
    shims/game/hero_fall.cpp
    shims/game/hero_grab.cpp
    shims/game/hero_moloch.cpp
    shims/game/hero_shove.cpp
    shims/game/hero_slot.cpp)
set(_behaviour_support behaviour_support.cpp hero_support.cpp class_support.cpp
    ../watcom/rng_audit_support.cpp)

nocturne_test_suite(shims_game_behaviour
    TESTS test_hero_motion.cpp test_hero_melee.cpp test_hero_interact.cpp test_hero_items.cpp
          test_goggle_look.cpp test_gun_flashlight.cpp test_light_filter_load.cpp
          test_actor_delete.cpp test_hero_light.cpp test_hero_fall.cpp test_hero_grab.cpp
          test_hero_moloch.cpp test_hero_weapon.cpp test_hero_colonel.cpp test_hero_gabriella.cpp
    SUBJECTS ${_behaviour_subjects}
    SUPPORT ${_behaviour_support}
)

# The same, with the additions off; and with the additions on but the shipped
# damage rules inside them, which the first set would compile away.
nocturne_test_suite(shims_game_behaviour_authentic
    TESTS test_behaviour_authentic.cpp
    SUBJECTS ${_behaviour_subjects}
    SUPPORT ${_behaviour_support}
    DEFINITIONS
        NOCTURNE_AUTHENTIC_HERO_ACTIONS=1 NOCTURNE_AUTHENTIC_LIGHT_FILTER_LOAD=1
        NOCTURNE_AUTHENTIC_ACTOR_DELETE=1 NOCTURNE_AUTHENTIC_BOTTOMLESS_FALL=1
)

nocturne_test_suite(shims_game_behaviour_authentic_damage
    TESTS test_behaviour_authentic_damage.cpp
    SUBJECTS ${_behaviour_subjects}
    SUPPORT ${_behaviour_support}
    DEFINITIONS
        NOCTURNE_AUTHENTIC_GOD_MODE_FALL=1 NOCTURNE_AUTHENTIC_FATAL_FALL_HEAL=1
        NOCTURNE_AUTHENTIC_FRIENDLY_FIRE=1 NOCTURNE_AUTHENTIC_NETPLAY=1
)

# The warps, the story list and the save slots, which share the pick list and
# the chapter table: the engine's lists, file finder, decoder and dialogs are
# menus_support.cpp's, the settings go through a stand-in for the engine's CIni,
# and the Watcom runtime brings _stricmp, _localtime and _strftime.
set(_menus_subjects
    shims/game/warps.cpp
    shims/game/chapter_select.cpp
    shims/game/save_slots.cpp
    shims/core/ini_setting.cpp
    shims/watcom/crt.cpp
    shims/watcom/path.cpp
    shims/core/file_search.cpp)
set(_menus_support menus_support.cpp ../gl/ini_support.cpp ../watcom/rng_audit_support.cpp)

nocturne_test_suite(shims_game_menus
    TESTS test_warps.cpp test_chapter_select.cpp test_save_slots.cpp
    SUBJECTS ${_menus_subjects}
    SUPPORT ${_menus_support}
)

nocturne_test_suite(shims_game_menus_authentic
    TESTS test_menus_authentic.cpp
    SUBJECTS ${_menus_subjects}
    SUPPORT ${_menus_support}
    DEFINITIONS
        NOCTURNE_AUTHENTIC_CHEAT_MENU=1 NOCTURNE_AUTHENTIC_SAVE_SLOTS=1
        NOCTURNE_AUTHENTIC_AUTOSAVE=1 NOCTURNE_AUTHENTIC_MENU_FONT=1
)

nocturne_test_suite(shims_game_menus_authentic_single_player
    TESTS test_menus_authentic_single_player.cpp
    SUBJECTS ${_menus_subjects}
    SUPPORT ${_menus_support}
    DEFINITIONS NOCTURNE_AUTHENTIC_SINGLE_PLAYER_MENU=1
)

# The cheat presets, against the menu, the inventory and the world
# cheats_support.cpp stands in for. Their settings go through a stand-in for the
# engine's CIni, and the Watcom runtime brings _stricmp. Settings load once a
# process, so a saved INI is a binary of its own.
set(_cheats_subjects
    shims/game/cheats.cpp
    shims/core/ini_setting.cpp
    shims/watcom/crt.cpp
    shims/watcom/path.cpp
    shims/core/file_search.cpp)
set(_cheats_support cheats_support.cpp hero_support.cpp class_support.cpp
    ../gl/ini_support.cpp ../watcom/rng_audit_support.cpp)

nocturne_test_suite(shims_game_cheats
    TESTS test_cheats.cpp test_cheats_saved.cpp
    SUBJECTS ${_cheats_subjects}
    SUPPORT ${_cheats_support}
)

# Without them: the shipped game has no presets.
nocturne_test_suite(shims_game_cheats_authentic
    TESTS test_cheats_authentic.cpp
    SUBJECTS
        shims/game/cheats.cpp
    DEFINITIONS NOCTURNE_AUTHENTIC_CHEAT_MENU=1
)

# The controller, its SDL calls renamed in this directory's build of it for
# gamepad_support.cpp to answer, so no pad on the machine is ever opened. Its
# start-up runs once a process, so each way it can start is a binary of its own.
set(_gamepad_sdl
    SDL_SetHint SDL_InitSubSystem SDL_GetError SDL_RWFromFile
    SDL_GameControllerAddMappingsFromRW SDL_GetBasePath SDL_free SDL_NumJoysticks SDL_IsGameController SDL_GameControllerOpen
    SDL_GameControllerName SDL_GameControllerGetType SDL_GameControllerClose
    SDL_GameControllerGetAttached SDL_GameControllerGetButton SDL_GameControllerGetAxis
    SDL_GetKeyboardFocus SDL_GetTicks SDL_sqrtf)
list(TRANSFORM _gamepad_sdl REPLACE "^(.+)$" "\\1=gamepad_sdl_\\1")
set_source_files_properties("${NOCTURNE_PSEUDOCODE_DIR}/shims/game/gamepad.cpp"
    PROPERTIES COMPILE_DEFINITIONS "${_gamepad_sdl}")

nocturne_test_suite(shims_game_gamepad
    TESTS test_gamepad.cpp test_gamepad_mappings.cpp test_gamepad_no_base.cpp
          test_gamepad_no_subsystem.cpp
    SUBJECTS
        shims/game/gamepad.cpp
        shims/game/pad_tuning.cpp
        shims/core/ini_setting.cpp
        shims/watcom/path.cpp
        shims/core/file_search.cpp
    SUPPORT
        gamepad_support.cpp
        ../gl/ini_support.cpp
)

nocturne_test_suite(shims_game_gamepad_authentic
    TESTS test_gamepad_authentic.cpp
    SUBJECTS
        shims/game/gamepad.cpp
    SUPPORT
        gamepad_support.cpp
    DEFINITIONS NOCTURNE_AUTHENTIC_GAMEPAD=1
)

# The small shims with the shipped behaviour back.
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
