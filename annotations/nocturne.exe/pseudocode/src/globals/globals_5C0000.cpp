#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5C0000
// =============================================================================

// RuntimeHandlerEntry
RuntimeHandlerEntry g_FirstInitHandler = {
    .status = 0x00,
    .priority = 0x40,
    .func = (RUNTIME_HANDLER_FUNC *)core_actor_cpp_staticInit_FUN_00409840
};
RuntimeHandlerEntry RuntimeHandlerEntry_005c26ce = {
    .status = 0x00,
    .priority = 0x01,
    .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_00563d13
};
RuntimeHandlerEntry RuntimeHandlerEntry_005c26f8 = {
    .status = 0xE0,
    .priority = 0x0E,
    .func = (RUNTIME_HANDLER_FUNC *)0x4340D7B7
};

// RuntimeHandlerEntry[160]
RuntimeHandlerEntry g_InitHandlers[160] = {
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammo_cpp_staticInit_FUN_0040eb10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammobox_cpp_staticInit_FUN_0040efe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_anvil_cpp_staticInit_FUN_0040f500
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_armour_cpp_staticInit_FUN_0040f900
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_backgnd_cpp_staticInit_FUN_0040fe70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_baron_cpp_staticInit_FUN_00410140
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_barrier_cpp_staticInit_FUN_004116b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bat_cpp_staticInit_FUN_00411910
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_batcreat_cpp_staticInit_FUN_004120a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_batman_cpp_staticInit_FUN_00413380
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_battery_cpp_staticInit_FUN_00414d20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_beast_cpp_staticInit_FUN_00414ff0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_biggs_cpp_staticInit_FUN_00415310
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bodypart_cpp_staticInit_FUN_00415b00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boneguy_cpp_staticInit_FUN_00418150
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boxactor_cpp_staticInit_FUN_0041e260
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bride_cpp_staticInit_FUN_0041fb20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bugs_cpp_staticInit_FUN_00420fe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_charactr_cpp_staticInit_FUN_00423ea0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_chain_cpp_staticInit_FUN_0042b6f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_colonel_cpp_staticInit_FUN_00439cd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_console_cpp_staticInit_FUN_0043abb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_conveyor_cpp_staticInit_FUN_0043aff0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cow_cpp_staticInit_FUN_0043bb80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crate_cpp_staticInit_FUN_0043c7b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crossbow_cpp_staticInit_FUN_0043ceb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_curtain_cpp_staticInit_FUN_0043d8e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcamera_cpp_staticInit_FUN_0043f9c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcube_cpp_staticInit_FUN_00448410
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dest_cpp_staticInit_FUN_0044b740
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dfilter_cpp_staticInit_FUN_0044bc20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dlight_cpp_staticInit_FUN_0044e0f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dmodel_cpp_staticInit_FUN_00452530
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dog_cpp_staticInit_FUN_00454600
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_door_cpp_staticInit_FUN_00454ff0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dracbrid_cpp_staticInit_FUN_00458580
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_drender_cpp_staticInit_FUN_0045ecf0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drip_cpp_staticInit_FUN_00461ff0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drone_cpp_staticInit_FUN_004628e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dskybox_cpp_staticInit_FUN_004633d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtrace_cpp_staticInit_FUN_004671c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtri_cpp_staticInit_FUN_0046c250
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dynamite_cpp_staticInit_FUN_0046eb60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_edittool_cpp_staticInit_FUN_0046ef80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_elephant_cpp_staticInit_FUN_004776b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_emitter_cpp_staticInit_FUN_00478360
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_enemy_cpp_staticInit_FUN_00479530
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_event_cpp_staticInit_FUN_0047a1d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_filmreel_cpp_staticInit_FUN_00481bb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_fire_cpp_staticInit_FUN_004823b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flame_cpp_staticInit_FUN_0048cf00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamecan_cpp_staticInit_FUN_0048e310
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamegun_cpp_staticInit_FUN_0048e960
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_0048ed00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)xxx_unk_c_staticInit_FUN_0048ee50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flies_cpp_staticInit_FUN_0048ee90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_frankgen_cpp_staticInit_FUN_004945d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gabriela_cpp_staticInit_FUN_004954a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_game_cpp_staticInit_FUN_0049a1e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gargoyle_cpp_staticInit_FUN_004a72f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gasmask_cpp_staticInit_FUN_004a89b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ghoul_cpp_staticInit_FUN_004a8c10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_glass_cpp_staticInit_FUN_004abaf0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gore_cpp_staticInit_FUN_004adf90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_grave_cpp_staticInit_FUN_004b0ae0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ground_cpp_staticInit_FUN_004b1060
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gun_cpp_staticInit_FUN_004b2700
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_haystack_cpp_staticInit_FUN_004b3040
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_health_cpp_staticInit_FUN_004b4190
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hero_cpp_staticInit_FUN_004b44b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hiram_cpp_staticInit_FUN_004b65b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hostage_cpp_staticInit_FUN_004b6990
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hotdemon_cpp_staticInit_FUN_004b8c40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hpriest_cpp_staticInit_FUN_004b9a90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_icepick_cpp_staticInit_FUN_004b9cc0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_imp_cpp_staticInit_FUN_004bb700
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_ini_cpp_staticInit_FUN_004bd090
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_inv_cpp_staticInit_FUN_004be9d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_keyactor_cpp_staticInit_FUN_004c3400
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_keys_cpp_staticInit_FUN_004c4170
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ladder_cpp_staticInit_FUN_004c4230
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_larva_cpp_staticInit_FUN_004c4820
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_level_cpp_staticInit_FUN_004c5600
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lever_cpp_staticInit_FUN_004c5fe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lightgun_cpp_staticInit_FUN_004c6dd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_litecone_cpp_staticInit_FUN_004c8090
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_main_c_staticInit_FUN_004c83d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_manpuz_cpp_staticInit_FUN_004c93b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_marquee_cpp_staticInit_FUN_004cc080
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_melee_cpp_staticInit_FUN_004cec00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_menu_cpp_staticInit_FUN_004cf1f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mimic_cpp_staticInit_FUN_004d4390
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_minecar_cpp_staticInit_FUN_004d5fb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mirror_cpp_staticInit_FUN_004d6140
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mission_cpp_staticInit_FUN_004d7dd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mobster_cpp_staticInit_FUN_004d9fd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moloch_cpp_staticInit_FUN_004dd8d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moon_cpp_staticInit_FUN_004de770
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_netgame_cpp_staticInit_FUN_004e94a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_ncursfx_cpp_staticInit_FUN_004ee4e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_npc_cpp_staticInit_FUN_004ee8f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_passngr_cpp_staticInit_FUN_004ef480
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_pendulum_cpp_staticInit_FUN_004f2bd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_platfrm_cpp_staticInit_FUN_004f5d30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_podmain_cpp_staticInit_FUN_004f9280
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_scat_cpp_staticInit_FUN_004fbb40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_script_cpp_staticInit_FUN_004fde80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sentinel_cpp_staticInit_FUN_005058c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_set_cpp_staticInit_FUN_00506b40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setcolid_cpp_staticInit_FUN_0050eb80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setdir_cpp_staticInit_FUN_00511d60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shotgun_cpp_staticInit_FUN_00515cc0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shovel_cpp_staticInit_FUN_005169b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_simbox_cpp_staticInit_FUN_00516b40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_skeleton_cpp_staticInit_FUN_00517140
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_slew_cpp_staticInit_FUN_0051f920
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_smiley_cpp_staticInit_FUN_0051fc90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_00521190
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_snddx_cpp_staticInit_FUN_00529a80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndwav_cpp_staticInit_FUN_0052c120
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sound_cpp_staticInit_FUN_0052c8c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spike_cpp_staticInit_FUN_00532fc0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_spotview_cpp_staticInit_FUN_005341f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stairs_cpp_staticInit_FUN_00534750
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stone_cpp_staticInit_FUN_00534ca0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stranger_cpp_staticInit_FUN_00534e30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_succubus_cpp_staticInit_FUN_00540ae0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_svetlana_cpp_staticInit_FUN_00541950
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tbplayer_cpp_staticInit_FUN_005430d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_teleport_cpp_staticInit_FUN_005437c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tentacle_cpp_staticInit_FUN_00543b00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_texlist_cpp_staticInit_FUN_00544910
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tommygun_cpp_staticInit_FUN_00545b30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trap_cpp_staticInit_FUN_005467c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trash_cpp_staticInit_FUN_00546c30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trigger_cpp_staticInit_FUN_00547850
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_trisock_cpp_staticInit_FUN_00548aa0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_turret_cpp_staticInit_FUN_00549440
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tvbat_cpp_staticInit_FUN_0054b0b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vampboss_cpp_staticInit_FUN_0054c250
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vecdir_cpp_staticInit_FUN_0054e480
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vehicle_cpp_staticInit_FUN_0054e540
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vessel_cpp_staticInit_FUN_0054f8c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_water_cpp_staticInit_FUN_00550730
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_wateract_cpp_staticInit_FUN_005511a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_waypoint_cpp_staticInit_FUN_00552380
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weapon_cpp_staticInit_FUN_00553d60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weather_cpp_staticInit_FUN_00554930
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_werewolf_cpp_staticInit_FUN_00555a00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_zombie_cpp_staticInit_FUN_0055e780
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0056a170
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_00563ce0
    },
    {
        .status = 0x00,
        .priority = 0x01,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_00563d12
    },
    {
        .status = 0x00,
        .priority = 0x02,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0056ada0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0056ddf0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005670b0
    },
    {
        .status = 0x00,
        .priority = 0x0B,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005671c6
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_00570f60
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0056f034
    },
    {
        .status = 0x00,
        .priority = 0x03,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_00570630
    }
};

// RuntimeHandlerEntry[6]
RuntimeHandlerEntry RuntimeHandlerEntry_ARRAY_005c26d4[6] = {
    {
        .status = 0x00,
        .priority = 0x28,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0056b1ee
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0056de90
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005674f8
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0057104c
    },
    {
        .status = 0x00,
        .priority = 0x1F,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0056e230
    },
    {
        .status = 0x00,
        .priority = 0x0A,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_0056e7fc
    }
};

// TerminatedCString
TerminatedCString s_d3d_dll_005c0e83 = "d3d.dll";

// WatcomStaticDestructorNode
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005c10c8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a3270,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x02DCA21C
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005c11dc = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a3e80,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x02DD1210
};

// int
int INT_005c0ff0 = 0x9;
int INT_005c10b0 = 0x2;
int INT_005c1130 = 0xB;
int INT_005c1160 = 0x2;
int INT_005c1174 = 0x5;
int INT_005c1188 = 0x4;
int INT_005c11a0 = 0x3;
int g_INT_005c11c4 = 0x4;
int INT_005c154c = 0x6;
int INT_005c1578 = 0x2;
int INT_005c1590 = 0x7;
int INT_005c1614 = 0x6;
int INT_005c1654 = 0x8;
int INT_005c1668 = -1;
int INT_005c166c = 0xB;

// undefined1
undefined1 DAT_005c0e80 = 0x74;
undefined1 DAT_005c0e81 = 0x72;
undefined1 DAT_005c0e82 = 0x69;
undefined1 DAT_005c1a9c = 0x61;
undefined1 DAT_005c1b23 = 0x00;
undefined1 DAT_005c1b24 = 0x00;
undefined1 DAT_005c1b25 = 0x00;
undefined1 DAT_005c1b26 = 0x00;
undefined1 DAT_005c1b27 = 0x00;
undefined1 DAT_005c1d0f = 0x00;
undefined1 DAT_005c1e89 = 0x45;
undefined1 DAT_005c2050 = 0x00;
undefined1 DAT_005c2140 = 0x00;

// undefined2
undefined2 DAT_005c1d11 = 0x0000;
undefined2 DAT_005c1f4c = 0x0000;

// undefined4
undefined4 DAT_005c1660 = 0xFFFFFFFF;
undefined4 DAT_005c1664 = 0x00000001;
undefined4 DAT_005c1680 = 0x00000000;
undefined4 DAT_005c1684 = 0x00000000;
undefined4 DAT_005c1688 = 0x00000000;
undefined4 DAT_005c1ab8 = 0xFFFFFFFF;
undefined4 DAT_005c1b04 = 0x00000000;
undefined4 DAT_005c1c28 = 0x00000000;
undefined4 DAT_005c1cc8 = 0x00000000;
undefined4 DAT_005c1ccc = 0x00000000;
undefined4 DAT_005c1cf0 = 0x00000000;
undefined4 DAT_005c1cf8 = 0x00000000;
undefined4 DAT_005c1d17 = 0x00000000;
undefined4 DAT_005c1d1b = 0x00000000;
undefined4 DAT_005c1d50 = 0x00000000;
undefined4 DAT_005c1d54 = 0x00000000;
undefined4 DAT_005c1d58 = 0x00000000;
undefined4 DAT_005c1d5c = 0x00000000;
undefined4 DAT_005c1d60 = 0x00000000;
undefined4 DAT_005c1d7c = 0x00000000;
undefined4 DAT_005c1d80 = 0x00000000;
undefined4 DAT_005c1d88 = 0x00000000;
undefined4 DAT_005c1d90 = 0x00000000;
undefined4 DAT_005c1d94 = 0x00000000;
undefined4 DAT_005c1dd8 = 0x00000000;
undefined4 DAT_005c1ddc = 0x00000000;
undefined4 DAT_005c1de0 = 0x00000000;
undefined4 DAT_005c1de4 = 0x00000000;
undefined4 DAT_005c1de8 = 0x00000000;
undefined4 DAT_005c1dec = 0x00000001;
undefined4 DAT_005c1dfc = 0x00000000;
undefined4 DAT_005c1e00 = 0x00000000;
undefined4 DAT_005c1e04 = 0x00000000;
undefined4 DAT_005c1f14 = 0x00004650;
undefined4 DAT_005c1f1c = 0x00000E10;
undefined4 DAT_005c1f20 = 0x00000001;
undefined4 DAT_005c1f50 = 0x00000000;
undefined4 DAT_005c1f54 = 0x00000000;
undefined4 DAT_005c1f58 = 0x00000000;
undefined4 DAT_005c1f5c = 0x80000000;
undefined4 DAT_005c1f6c = 0x00000000;
undefined4 DAT_005c1f70 = 0x00000000;
undefined4 DAT_005c204c = 0x00000000;
undefined4 DAT_005c206c = 0x00000000;
undefined4 DAT_005c20d0 = 0xFFFFFFFF;
undefined4 DAT_005c20d4 = 0xFFFFFFFF;
undefined4 DAT_005c2144 = 0x00000001;
undefined4 DAT_005c5010 = {};
undefined4 DAT_005c5014 = {};
undefined4 DAT_005c5018 = {};
undefined4 DAT_005c501c = {};
undefined4 DAT_005c5024 = {};
undefined4 DAT_005c502c = {};
undefined4 DAT_005c5034 = {};
undefined4 DAT_005c5038 = {};
undefined4 DAT_005c503c = {};
undefined4 DAT_005c5040 = {};
undefined4 DAT_005c5044 = {};
undefined4 DAT_005c5048 = {};
undefined4 DAT_005c504c = {};
undefined4 DAT_005c5054 = {};
undefined4 DAT_005c5064 = {};
undefined4 DAT_005c5068 = {};
undefined4 DAT_005c506c = {};
undefined4 DAT_005c5070 = {};
undefined4 DAT_005c5074 = {};
undefined4 DAT_005c5078 = {};
undefined4 DAT_005c5084 = {};
undefined4 DAT_005c5088 = {};
undefined4 DAT_005c5094 = {};
undefined4 DAT_005c5098 = {};
undefined4 DAT_005c509c = {};
undefined4 DAT_005c50a4 = {};
undefined4 DAT_005c50a8 = {};
undefined4 DAT_005c50b4 = {};
undefined4 DAT_005c50c4 = {};
undefined4 DAT_005c50c8 = {};
undefined4 DAT_005c50cc = {};
undefined4 DAT_005c50e4 = {};
undefined4 DAT_005c5114 = {};
undefined4 DAT_005c5144 = {};
undefined4 DAT_005c5174 = {};

