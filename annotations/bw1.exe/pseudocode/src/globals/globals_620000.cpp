#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x620000
// =============================================================================

// CDemonPod*
CDemonPod* g_CDemonPodPtr = (CDemonPod*)&g_CDemonPodInstance;

// CDemonSet*
CDemonSet* g_CDemonSetPtr = (CDemonSet*)&g_CDemonSetInstance;

// CMouse*
CMouse* g_CMousePtr = (CMouse*)&g_CMouseInstance;

// CNetGame*
CNetGame* g_CNetGamePtr = (CNetGame*)&g_CNetGameInstance;

// CScript*
CScript* g_CScriptPtr = (CScript*)&g_CScriptInstance;

// CTextureList*
CTextureList* g_CTextureListPtr = (CTextureList*)&g_CTextureListInstance;

// CWater*
CWater* g_CWaterPtr = (CWater*)&g_CWaterInstance;

// RuntimeHandlerEntry[187]
RuntimeHandlerEntry g_InitHandlers[187] = {
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_actor_cpp_staticInit_FUN_004080a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammo_cpp_staticInit_FUN_0040db60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammobox_cpp_staticInit_FUN_0040e050
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_anvil_cpp_staticInit_FUN_0040e570
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_armour_cpp_staticInit_FUN_0040e980
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_backgnd_cpp_staticInit_FUN_0040ee50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_baron_cpp_staticInit_FUN_0040f180
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_barrier_cpp_staticInit_FUN_004107d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bat_cpp_staticInit_FUN_00410a50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_batcreat_cpp_staticInit_FUN_004111b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_batman_cpp_staticInit_FUN_00412720
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_battery_cpp_staticInit_FUN_004143b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_beast_cpp_staticInit_FUN_00414690
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_biggs_cpp_staticInit_FUN_00414990
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bird_cpp_staticInit_FUN_00415190
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bmppuzzl_cpp_staticInit_FUN_00415b20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bodypart_cpp_staticInit_FUN_00418910
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boneguy_cpp_staticInit_FUN_0041b1b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boxactor_cpp_staticInit_FUN_00421c00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bride_cpp_staticInit_FUN_00423830
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bugs_cpp_staticInit_FUN_00424f20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_carved_cpp_staticInit_FUN_004282c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_charactr_cpp_staticInit_FUN_0042bfe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_chain_cpp_staticInit_FUN_00435600
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_colonel_cpp_staticInit_FUN_004442d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_console_cpp_staticInit_FUN_00445370
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_construc_cpp_staticInit_FUN_004457c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_conveyor_cpp_staticInit_FUN_004476f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cow_cpp_staticInit_FUN_00448340
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crate_cpp_staticInit_FUN_00448fb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crossbow_cpp_staticInit_FUN_00449710
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_curtain_cpp_staticInit_FUN_0044a190
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcamera_cpp_staticInit_FUN_0044c580
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcube_cpp_staticInit_FUN_004553b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_demnfolk_cpp_staticInit_FUN_00458600
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dest_cpp_staticInit_FUN_0045d190
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dfilter_cpp_staticInit_FUN_0045d6c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_djien_cpp_staticInit_FUN_0045fdb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_djien_cpp_FUN_00462450
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dmodel_cpp_staticInit_FUN_00466780
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_doc_cpp_staticInit_FUN_004689b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dog_cpp_staticInit_FUN_00476750
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_door_cpp_staticInit_FUN_00477210
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dracbrid_cpp_staticInit_FUN_0047b000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_drender_cpp_staticInit_FUN_00481a10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drip_cpp_staticInit_FUN_00485300
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drone_cpp_staticInit_FUN_00485bf0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dskybox_cpp_staticInit_FUN_00486750
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtrace_cpp_staticInit_FUN_0048a8d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtri_cpp_staticInit_FUN_0048fb70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dynamite_cpp_staticInit_FUN_00492470
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_edittool_cpp_staticInit_FUN_00492920
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_elephant_cpp_staticInit_FUN_0049dfa0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_emitter_cpp_staticInit_FUN_0049ede0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_enemy_cpp_staticInit_FUN_004a03e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_event_cpp_staticInit_FUN_004a11a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_filmreel_cpp_staticInit_FUN_004ab250
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_fire_cpp_staticInit_FUN_004aba90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flame_cpp_staticInit_FUN_004b79d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamecan_cpp_staticInit_FUN_004b8f10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamegun_cpp_staticInit_FUN_004b9560
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_004b98b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_FUN_004b9ab0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flattn_cpp_staticInit_FUN_004bf740
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flies_cpp_staticInit_FUN_004bfa00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_frankgen_cpp_staticInit_FUN_004c50f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gabriela_cpp_staticInit_FUN_004c6070
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_game_cpp_staticInit_FUN_004cb7d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gargoyle_cpp_staticInit_FUN_004dc210
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gasmask_cpp_staticInit_FUN_004dda60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ghoul_cpp_staticInit_FUN_004ddcd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_glass_cpp_staticInit_FUN_004e0fb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_goggles_cpp_staticInit_FUN_004e3ad0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gore_cpp_staticInit_FUN_004e3d40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_grave_cpp_staticInit_FUN_004e68d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ground_cpp_staticInit_FUN_004e6ec0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gun_cpp_staticInit_FUN_004e8570
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_haystack_cpp_staticInit_FUN_004e8fc0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_health_cpp_staticInit_FUN_004ea2d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hero_cpp_staticInit_FUN_004ea5f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hiram_cpp_staticInit_FUN_004ed130
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hostage_cpp_staticInit_FUN_004ed4a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hotdemon_cpp_staticInit_FUN_004ef9b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hpriest_cpp_staticInit_FUN_004f0930
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_icepick_cpp_staticInit_FUN_004f0b30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_imp_cpp_staticInit_FUN_004f2790
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_ini_cpp_staticInit_FUN_004f4360
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_inv_cpp_staticInit_FUN_004f5ef0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_keyactor_cpp_staticInit_FUN_004fc4b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_keys_cpp_staticInit_FUN_004fd210
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ladder_cpp_staticInit_FUN_004fd2d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_larva_cpp_staticInit_FUN_004fd8f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_level_cpp_staticInit_FUN_004fe800
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lever_cpp_staticInit_FUN_004fefe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lightgun_cpp_staticInit_FUN_004ffe50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lightpis_cpp_staticInit_FUN_005015b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_litecone_cpp_staticInit_FUN_00502d10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_main_c_staticInit_FUN_00503070
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_manpuz_cpp_staticInit_FUN_00503ac0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_marquee_cpp_staticInit_FUN_005068c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_melee_cpp_staticInit_FUN_005094f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_menu_cpp_staticInit_FUN_00509bd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mimic_cpp_staticInit_FUN_0050f000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_minecar_cpp_staticInit_FUN_00510d90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_mini3d_cpp_staticInit_FUN_00510f20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mirror_cpp_staticInit_FUN_00518380
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mission_cpp_staticInit_FUN_0051a2a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mobster_cpp_staticInit_FUN_0051c5b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moloch_cpp_staticInit_FUN_00520290
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moocow_cpp_staticInit_FUN_005212a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moon_cpp_staticInit_FUN_00521b60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_netgame_cpp_staticInit_FUN_0052c0a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_ncursfx_cpp_staticInit_FUN_00531200
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_npc_cpp_staticInit_FUN_00531610
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_passngr_cpp_staticInit_FUN_00532710
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_pendulum_cpp_staticInit_FUN_00535fc0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_platfrm_cpp_staticInit_FUN_005393a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_podmain_cpp_staticInit_FUN_0053d550
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_rifle_cpp_staticInit_FUN_0053fec0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_scat_cpp_staticInit_FUN_00540a10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_script_cpp_staticInit_FUN_005430c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sentinel_cpp_staticInit_FUN_0054b9b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_set_cpp_staticInit_FUN_0054cec0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setcolid_cpp_staticInit_FUN_005561c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setdir_cpp_staticInit_FUN_00559710
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shadow_cpp_staticInit_FUN_0055da40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shadowsc_cpp_staticInit_FUN_00560440
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shotgun_cpp_staticInit_FUN_00561560
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shovel_cpp_staticInit_FUN_005623b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_simbox_cpp_staticInit_FUN_00562540
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_skeleton_cpp_staticInit_FUN_00562b70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_slew_cpp_staticInit_FUN_0056b9f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_smiley_cpp_staticInit_FUN_0056bdf0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_0056d490
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_FUN_005774f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndwav_cpp_staticInit_FUN_0057a570
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sound_cpp_staticInit_FUN_0057b670
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spike_cpp_staticInit_FUN_00582f30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_spotview_cpp_staticInit_FUN_00584380
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stairs_cpp_staticInit_FUN_005848e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stone_cpp_staticInit_FUN_00584e50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stranger_cpp_staticInit_FUN_00584fe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_succubus_cpp_staticInit_FUN_00591eb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_svetlana_cpp_staticInit_FUN_00592da0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tbplayer_cpp_staticInit_FUN_00594700
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_teleport_cpp_staticInit_FUN_00594df0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tentacle_cpp_staticInit_FUN_005951a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_texlist_cpp_staticInit_FUN_00596090
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tommygun_cpp_staticInit_FUN_00598320
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_thehand_cpp_staticInit_FUN_00599010
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trap_cpp_staticInit_FUN_00599cb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trash_cpp_staticInit_FUN_0059a190
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trigger_cpp_staticInit_FUN_0059af50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_trisock_cpp_staticInit_FUN_0059c470
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_trstream_cpp_staticInit_FUN_0059f520
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_turret_cpp_staticInit_FUN_005a1fe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tvbat_cpp_staticInit_FUN_005a3eb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vampboss_cpp_staticInit_FUN_005a5110
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vecdir_cpp_staticInit_FUN_005a7500
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vehicle_cpp_staticInit_FUN_005a75c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vessel_cpp_staticInit_FUN_005a8aa0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_water_cpp_staticInit_FUN_005a9970
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_wateract_cpp_staticInit_FUN_005aa550
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_waypoint_cpp_staticInit_FUN_005ab850
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weapon_cpp_staticInit_FUN_005ad490
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weather_cpp_staticInit_FUN_005ae140
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_werewolf_cpp_staticInit_FUN_005af240
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_yow_cpp_staticInit_FUN_005b8100
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_zombie_cpp_staticInit_FUN_005ba700
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c4340
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005bfb90
    },
    {
        .status = 0x00,
        .priority = 0x01,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005bfbc2
    },
    {
        .status = 0x00,
        .priority = 0x02,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c4f70
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c9fa0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c3186
    },
    {
        .status = 0x00,
        .priority = 0x0B,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c32cc
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005cc8b0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005ca6b4
    },
    {
        .status = 0x00,
        .priority = 0x03,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005cbd30
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005cd4a4
    },
    {
        .status = 0x00,
        .priority = 0x01,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005bfbc3
    },
    {
        .status = 0x00,
        .priority = 0x28,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c6fb4
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005ca040
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c53e8
    },
    {
        .status = 0x00,
        .priority = 0x1F,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c8de0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005cc99c
    },
    {
        .status = 0x00,
        .priority = 0x0A,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005caecc
    }
};

// TerminatedCString
TerminatedCString s_d3d_dll_006257d3 = "d3d.dll";

// WatcomStaticDestructorNode
WatcomStaticDestructorNode g_CNetGameInstanceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604330,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CNetGameInstance
};
WatcomStaticDestructorNode g_CMouseDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006043E0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMouseInstance
};
WatcomStaticDestructorNode g_PathMapCacheDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604780,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PathMapCache
};
WatcomStaticDestructorNode g_CDemonPodMainDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_CDemonPodDestructorNode,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonPodInstance
};
WatcomStaticDestructorNode DAT_00622AB0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604DD0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ScriptPickList
};
WatcomStaticDestructorNode DAT_00622AC0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604DDC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CScriptInstance
};
WatcomStaticDestructorNode g_CDemonSetDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604FD0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonSetInstance
};
WatcomStaticDestructorNode g_CDemonCameraDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604FDC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonCameraInstance
};
WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604FE8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonRaytraceInstance
};
WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00604FF4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModelInstance
};
WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00605870,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_DeformableModelPool
};
WatcomStaticDestructorNode g_SkeletonPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x0060587C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SkeletonPool
};
WatcomStaticDestructorNode g_SfxSamplesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00605AD0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SfxSamples
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode1 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00605ADC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00605AE8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstanceOther
};
WatcomStaticDestructorNode DAT_006236A0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00605C70,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CStrListInstance
};
WatcomStaticDestructorNode g_CTextureListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00606C50,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CTextureListInstance
};
WatcomStaticDestructorNode DAT_00625BDC = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00607340,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_COutStreamDebugInstance
};
WatcomStaticDestructorNode g_CWaterDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x00607BA0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CWaterInstance
};

// int
int g_CNPCClassVersion = 0x6;
int g_CPassengerClassVersion = 0x6;
int g_CPendulumClassVersion = 0x8;
int g_CPlatformClassVersion = 0xB;
int g_CRifleClassVersion = 0x1;
int g_CScatClassVersion = 0x1;
int g_CSentinelClassVersion = 0x2;
int g_CShadowClassVersion = 0x2;
int g_CShadowscClassVersion = 0x1;
int g_CShotgunClassVersion = 0x1;
int g_CShovelClassVersion = 0x1;
int g_CSimBoxClassVersion = 0x3;
int g_CSmileyClassVersion = 0x1;
int g_CSpikeClassVersion = 0x1;
int g_CStairsClassVersion = 0x2;
int g_CTempleStoneClassVersion = 0x1;
int g_CStrangerClassVersion = 0x9;
int g_CSuccubusClassVersion = 0x1;
int g_CSvetlanaClassVersion = 0x1;
int g_CBassPlayerClassVersion = 0x1;
int g_CTeleportDestClassVersion = 0x1;
int g_CTentacleClassVersion = 0x2;
int g_CTommyGunClassVersion = 0x1;
int g_CTheHandClassVersion = 0x1;
int g_CTrapClassVersion = 0x1;
int g_CTrashClassVersion = 0x1;
int g_CTriggerClassVersion = 0xD;
int g_CTurretClassVersion = 0x2;
int g_CTVBatClassVersion = 0x5;
int g_CVampireBossClassVersion = 0x4;
int g_CVehicleClassVersion = 0x3;
int g_CCryptVesselClassVersion = 0x4;
int g_CWaterActorClassVersion = 0x6;
int g_CWayPointClassVersion = 0x2;
int g_CWeaponClassVersion = 0x7;
int g_CWerewolfClassVersion = 0x6;
int g_CYowClassVersion = 0x1;
int g_CZombieClassVersion = 0xB;

// undefined1
undefined1 DAT_00623eb8 = 0x10;
undefined1 DAT_00623ed8 = 0x08;
undefined1 DAT_006257d0 = 0x74;
undefined1 DAT_006257d1 = 0x72;
undefined1 DAT_006257d2 = 0x69;
undefined1 DAT_006265df = 0x00;
undefined1 DAT_00626663 = 0x00;
undefined1 DAT_00626664 = 0x00;
undefined1 DAT_00626665 = 0x00;
undefined1 DAT_00626666 = 0x00;
undefined1 DAT_00626667 = 0x00;
undefined1 DAT_0062690d = 0x45;
undefined1 DAT_006269a4 = 0x01;
undefined1 DAT_006269d0 = 0x00;
undefined1 DAT_00626b4c = 0x00;
undefined1 DAT_0062716c = 0x00;
undefined1 DAT_0062716d = 0x00;

// undefined2
undefined2 DAT_006265e1 = 0x0000;
undefined2 DAT_00626768 = 0x0000;

// undefined4
undefined4 DAT_00620240 = 0x00000001;
undefined4 DAT_00620254 = 0x00000000;
undefined4 DAT_0062029c = 0x00000001;
undefined4 DAT_006202e0 = 0x00000001;
undefined4 DAT_00622584 = 0x00000001;
undefined4 DAT_00622758 = 0xFFFFFFFF;
undefined4 DAT_0062275c = 0x00000000;
undefined4 DAT_00622a84 = 0x000004B0;
undefined4 DAT_00622ae0 = 0x00000000;
undefined4 DAT_00622ae4 = 0x00000000;
undefined4 DAT_00622c28 = 0x00000001;
undefined4 DAT_00622dac = 0x00000000;
undefined4 DAT_00622db0 = 0x00000000;
undefined4 DAT_00622fe8 = 0x00000000;
undefined4 DAT_00622fec = 0x00000000;
undefined4 DAT_00622ff0 = 0x00000000;
undefined4 DAT_00622ff4 = 0x00000000;
undefined4 DAT_00623030 = 0x00000000;
undefined4 DAT_00623034 = 0x00000000;
undefined4 DAT_00623038 = 0x00000000;
undefined4 DAT_006232d0 = 0x00000001;
undefined4 DAT_006232e4 = 0x00000020;
undefined4 DAT_006232e8 = 0x00000010;
undefined4 DAT_006232ec = 0x00000002;
undefined4 DAT_006232f0 = 0x00005622;
undefined4 DAT_006232f8 = 0xFFFFFFFF;
undefined4 DAT_006232fc = 0xFFFFFFFF;
undefined4 DAT_00623300 = 0x00000002;
undefined4 DAT_00623304 = 0x3F800000;
undefined4 DAT_00623310 = 0x00400000;
undefined4 DAT_00623314 = 0x3F000000;
undefined4 DAT_00623318 = 0xFFFFFFFF;
undefined4 DAT_0062331c = 0xFFFFFFFF;
undefined4 DAT_00623330 = 0x00000000;
undefined4 DAT_00623334 = 0x00000000;
undefined4 DAT_00623430 = 0x00000000;
undefined4 DAT_00623434 = 0x00000000;
undefined4 DAT_006235d0 = 0xFFFFFFFF;
undefined4 DAT_006235d4 = 0xFFFFFFFF;
undefined4 DAT_006235d8 = 0xFFFFFFFF;
undefined4 DAT_00623870 = 0x00000000;
undefined4 DAT_00623874 = 0x00000000;
undefined4 DAT_006238d8 = 0x00000000;
undefined4 DAT_006238dc = 0x00000000;
undefined4 DAT_00623964 = 0x00000000;
undefined4 DAT_006239a0 = 0x00000000;
undefined4 DAT_006239a4 = 0x00000000;
undefined4 DAT_006239ac = 0x00000000;
undefined4 DAT_006239c8 = 0x00000000;
undefined4 DAT_006239cc = 0x00000000;
undefined4 DAT_00623dd8 = 0x00000000;
undefined4 DAT_00623e28 = 0x00000000;
undefined4 DAT_00623e2c = 0x00000000;
undefined4 DAT_00623e30 = 0x00000000;
undefined4 DAT_00623e38 = 0x00000000;
undefined4 DAT_00623e3c = 0x00000000;
undefined4 DAT_00623e40 = 0x00000000;
undefined4 DAT_00623e90 = 0x00000000;
undefined4 DAT_00623ea0 = 0x00000000;
undefined4 DAT_00623f20 = 0x0000F800;
undefined4 DAT_00623f28 = 0x000007E0;
undefined4 DAT_00623f30 = 0x0000001F;
undefined4 DAT_00625aa0 = 0x00000000;
undefined4 DAT_00625aa4 = 0x00000000;
undefined4 DAT_00625c98 = 0x00002000;
undefined4 DAT_00625e44 = 0x01000000;
undefined4 DAT_00625e54 = 0x01000000;
undefined4 DAT_006260e4 = 0xFFFFFFFF;
undefined4 DAT_006260e8 = 0x00000001;
undefined4 DAT_006260ec = 0xFFFFFFFF;
undefined4 DAT_00626220 = 0x00000000;
undefined4 DAT_00626224 = 0x00000000;
undefined4 DAT_00626228 = 0x00000000;
undefined4 DAT_006264f8 = 0x00000000;
undefined4 DAT_00626598 = 0x00000000;
undefined4 DAT_0062659c = 0x00000000;
undefined4 DAT_006265c0 = 0x00000000;
undefined4 DAT_006265c8 = 0x00000000;
undefined4 DAT_006265e7 = 0x00000000;
undefined4 DAT_006265eb = 0x00000000;
undefined4 DAT_006265f8 = 0xFFFFFFFF;
undefined4 DAT_00626644 = 0x00000000;
undefined4 DAT_0062676c = 0x00000000;
undefined4 DAT_00626770 = 0x00000000;
undefined4 DAT_00626774 = 0x00000000;
undefined4 DAT_00626778 = 0x00000000;
undefined4 DAT_0062677c = 0x00000000;
undefined4 DAT_00626780 = 0x00000000;
undefined4 DAT_0062679c = 0x00000000;
undefined4 DAT_006267a0 = 0x00000000;
undefined4 DAT_006267a8 = 0x00000000;
undefined4 DAT_006267b0 = 0x00000000;
undefined4 DAT_006267b4 = 0x00000000;
undefined4 DAT_00626838 = 0x00000000;
undefined4 DAT_0062683c = 0x00000000;
undefined4 DAT_00626840 = 0x80000000;
undefined4 DAT_0062685c = 0x00000000;
undefined4 DAT_00626860 = 0x00000000;
undefined4 DAT_00626864 = 0x00000000;
undefined4 DAT_00626868 = 0x00000000;
undefined4 DAT_0062686c = 0x00000000;
undefined4 DAT_00626870 = 0x00000001;
undefined4 DAT_00626880 = 0x00000000;
undefined4 DAT_00626884 = 0x00000000;
undefined4 DAT_00626888 = 0x00000000;
undefined4 DAT_00626998 = 0x00004650;
undefined4 DAT_006269a0 = 0x00000E10;
undefined4 DAT_00626a4c = 0x00000000;
undefined4 DAT_00626a50 = 0x00000000;
undefined4 DAT_00626a68 = 0x00000000;
undefined4 DAT_00626a74 = 0x00000000;
undefined4 DAT_00626ad8 = 0x00000001;
undefined4 DAT_00626adc = 0xFFFFFFFF;
undefined4 DAT_00626ae0 = 0xFFFFFFFF;
undefined4 DAT_00629010 = {};
undefined4 DAT_00629014 = {};
undefined4 DAT_00629018 = {};
undefined4 DAT_0062901c = {};
undefined4 DAT_00629024 = {};
undefined4 DAT_0062902c = {};
undefined4 DAT_00629034 = {};
undefined4 DAT_00629038 = {};
undefined4 DAT_0062903c = {};
undefined4 DAT_00629040 = {};
undefined4 DAT_00629044 = {};
undefined4 DAT_00629048 = {};
undefined4 DAT_0062904c = {};
undefined4 DAT_00629054 = {};
undefined4 DAT_00629064 = {};
undefined4 DAT_00629068 = {};
undefined4 DAT_0062906c = {};
undefined4 DAT_00629070 = {};
undefined4 DAT_00629084 = {};
undefined4 DAT_00629090 = {};
undefined4 DAT_00629094 = {};
undefined4 DAT_00629098 = {};
undefined4 DAT_0062909c = {};
undefined4 DAT_006290b4 = {};
undefined4 DAT_006290c4 = {};
undefined4 DAT_006290c8 = {};
undefined4 DAT_006290cc = {};
undefined4 DAT_006290e4 = {};
undefined4 DAT_00629114 = {};
undefined4 DAT_00629144 = {};
undefined4 DAT_00629174 = {};

// undefined8
undefined8 DAT_00623ddc = 0x0000000000000000;
undefined8 DAT_00623e50 = 0x0000000000000000;
undefined8 DAT_00623e70 = 0x0000000000000000;
undefined8 DAT_00623ea8 = 0x0000000000000000;
undefined8 DAT_00623eb0 = 0x0000000000000000;
undefined8 DAT_006247d0 = 0x0000000000000000;

