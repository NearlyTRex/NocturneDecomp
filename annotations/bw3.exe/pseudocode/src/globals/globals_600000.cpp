#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x600000
// =============================================================================

// CDemonPod*
CDemonPod* g_CDemonPodPtr = (CDemonPod*)&g_CDemonPodInstance;

// CDemonSet*
CDemonSet* g_CDemonSetPtr = (CDemonSet*)&g_CDemonSetInstance;

// CMini3D*
CMini3D* g_CMini3DPtr = (CMini3D*)&g_CMini3DInstance;

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

// RuntimeHandlerEntry[172]
RuntimeHandlerEntry g_InitHandlers[172] = {
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_actor_cpp_staticInit_FUN_004080e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammo_cpp_staticInit_FUN_0040dda0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammobox_cpp_staticInit_FUN_0040e560
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_barrier_cpp_staticInit_FUN_0040ea60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bat_cpp_staticInit_FUN_0040ece0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_battery_cpp_staticInit_FUN_0040f440
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bindevil_cpp_staticInit_FUN_0040f720
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bird_cpp_staticInit_FUN_0040f990
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_blundrbs_cpp_staticInit_FUN_00410390
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bmppuzzl_cpp_staticInit_FUN_004118e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bodypart_cpp_staticInit_FUN_00414520
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boneguy_cpp_staticInit_FUN_00416de0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boxactor_cpp_staticInit_FUN_0041ef40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bugs_cpp_staticInit_FUN_00420e40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_burncrss_cpp_staticInit_FUN_004243d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_carved_cpp_staticInit_FUN_00425550
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_chain_cpp_staticInit_FUN_00429280
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_charactr_cpp_staticInit_FUN_0042ab80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_console_cpp_staticInit_FUN_00441f30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_construc_cpp_staticInit_FUN_00442380
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cow_cpp_staticInit_FUN_00444f00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crate_cpp_staticInit_FUN_00445b70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_curtain_cpp_staticInit_FUN_004462d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcamera_cpp_staticInit_FUN_004486c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcube_cpp_staticInit_FUN_00451500
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_demnfolk_cpp_staticInit_FUN_00454750
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dest_cpp_staticInit_FUN_004590e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dfilter_cpp_staticInit_FUN_00459610
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_disease_cpp_staticInit_FUN_0045bf20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_disease_cpp_FUN_0045c160
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dmodel_cpp_staticInit_FUN_00460430
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dog_cpp_staticInit_FUN_00462650
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_door_cpp_staticInit_FUN_00463a50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_drender_cpp_staticInit_FUN_0046b0d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drip_cpp_staticInit_FUN_0046e9e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dskybox_cpp_staticInit_FUN_0046f2d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtrace_cpp_staticInit_FUN_00473450
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtri_cpp_staticInit_FUN_004786f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dynamite_cpp_staticInit_FUN_0047b010
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_edittool_cpp_staticInit_FUN_0047b4c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_elephant_cpp_staticInit_FUN_00486b40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_emitter_cpp_staticInit_FUN_00487980
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_enemy_cpp_staticInit_FUN_00488fa0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_exorcism_cpp_staticInit_FUN_0048a2b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_event_cpp_staticInit_FUN_0048b780
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_filmreel_cpp_staticInit_FUN_004960f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_fire_cpp_staticInit_FUN_00496930
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_firestff_cpp_staticInit_FUN_004a4a70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flame_cpp_staticInit_FUN_004a5950
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamecan_cpp_staticInit_FUN_004a6ea0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_004a74f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_FUN_004a76f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flattn_cpp_staticInit_FUN_004ad490
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flies_cpp_staticInit_FUN_004ad750
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flintlck_cpp_staticInit_FUN_004ae780
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_game_cpp_staticInit_FUN_004b3cd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gargoyle_cpp_staticInit_FUN_004c4d80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gasmask_cpp_staticInit_FUN_004c65e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ghoul_cpp_staticInit_FUN_004c6850
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_glass_cpp_staticInit_FUN_004c9b40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_goggles_cpp_staticInit_FUN_004cc660
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gore_cpp_staticInit_FUN_004cc8d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_grave_cpp_staticInit_FUN_004cf260
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ground_cpp_staticInit_FUN_004cf850
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gun_cpp_staticInit_FUN_004d0f00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_heal_cpp_staticInit_FUN_004d1900
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_health_cpp_staticInit_FUN_004d1d00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hero_cpp_staticInit_FUN_004d2270
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_holycrss_cpp_staticInit_FUN_004d5070
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hotdemon_cpp_staticInit_FUN_004d5370
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_imp_cpp_staticInit_FUN_004d66a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_imp_cpp_FUN_004d8280
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_inv_cpp_staticInit_FUN_004d9c90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_keyactor_cpp_staticInit_FUN_004de7d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_keys_cpp_staticInit_FUN_004df530
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ladder_cpp_staticInit_FUN_004df5f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_level_cpp_staticInit_FUN_004dfc10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lever_cpp_staticInit_FUN_004e00a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lightsta_cpp_staticInit_FUN_004e0f10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_litecone_cpp_staticInit_FUN_004e3f60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_main_c_staticInit_FUN_004e42c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_melee_cpp_staticInit_FUN_004e6f30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_menu_cpp_staticInit_FUN_004e7610
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_mini3d_cpp_staticInit_FUN_004ec6f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mirror_cpp_staticInit_FUN_004f3b50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mirror_cpp_FUN_004f5a70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moocow_cpp_staticInit_FUN_004f8ae0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moon_cpp_staticInit_FUN_004f93a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_netgame_cpp_staticInit_FUN_005039b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_ncursfx_cpp_staticInit_FUN_00508ad0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_npc_cpp_staticInit_FUN_00508ee0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_passngr_cpp_staticInit_FUN_0050a3f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_pendulum_cpp_staticInit_FUN_0050dca0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_platfrm_cpp_staticInit_FUN_00511080
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_podmain_cpp_staticInit_FUN_005152b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_prye_cpp_staticInit_FUN_00517c20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_pryemorp_cpp_staticInit_FUN_00527350
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_rifle_cpp_staticInit_FUN_00527bb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_script_cpp_staticInit_FUN_005286b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sentinel_cpp_staticInit_FUN_005310a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_set_cpp_staticInit_FUN_005325b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setcolid_cpp_staticInit_FUN_0053bb80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setdir_cpp_staticInit_FUN_0053f0d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shadow_cpp_staticInit_FUN_00543400
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shotgun_cpp_staticInit_FUN_00546260
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shovel_cpp_staticInit_FUN_00546fd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_simbox_cpp_staticInit_FUN_00547160
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_skeleton_cpp_staticInit_FUN_00547790
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_skeleton_cpp_FUN_00550580
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_00550980
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_FUN_0055a660
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndwav_cpp_staticInit_FUN_0055d6a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sound_cpp_staticInit_FUN_0055e7a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spawner_cpp_staticInit_FUN_00563840
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spike_cpp_staticInit_FUN_00566800
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_spotview_cpp_staticInit_FUN_00567c50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sps_cpp_staticInit_FUN_005681b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stairs_cpp_staticInit_FUN_00568350
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stone_cpp_staticInit_FUN_005688c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_storm_cpp_staticInit_FUN_00568a50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_teleport_cpp_staticInit_FUN_00568cd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_texlist_cpp_staticInit_FUN_00569080
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tommygun_cpp_staticInit_FUN_0056b310
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_toxhand_cpp_staticInit_FUN_0056c000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trap_cpp_staticInit_FUN_0056cca0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trash_cpp_staticInit_FUN_0056d180
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trigger_cpp_staticInit_FUN_0056df40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_trisock_cpp_staticInit_FUN_0056f460
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_trstream_cpp_staticInit_FUN_00572510
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tvbat_cpp_staticInit_FUN_00574fd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tvbat_cpp_FUN_00576230
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vessel_cpp_staticInit_FUN_005762f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_water_cpp_staticInit_FUN_005771c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_wateract_cpp_staticInit_FUN_00577cf0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_waypoint_cpp_staticInit_FUN_00579100
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weapon_cpp_staticInit_FUN_0057ad40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weather_cpp_staticInit_FUN_0057bd20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_werewolf_cpp_staticInit_FUN_0057d4c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_yow_cpp_staticInit_FUN_005862e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_zombie_cpp_staticInit_FUN_00588410
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_zombiepriest_cpp_staticInit_FUN_0058d2c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_kedward_cpp_staticInit_FUN_0058fd10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mattnntt_cpp_staticInit_FUN_00591b40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tawiscara_cpp_staticInit_FUN_00593d40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_baal_cpp_staticInit_FUN_00596600
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hecaitmx_cpp_staticInit_FUN_00597d90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_darkwolf_cpp_staticInit_FUN_00598700
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spireagl_cpp_staticInit_FUN_00599170
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spirindi_cpp_staticInit_FUN_00599f00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spirbear_cpp_staticInit_FUN_0059aa40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hino_cpp_staticInit_FUN_0059b610
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_styler_cpp_staticInit_FUN_0059d6f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_styldemo_cpp_staticInit_FUN_0059e010
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_asgaya_cpp_staticInit_FUN_005a09b0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a71b0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a2910
    },
    {
        .status = 0x00,
        .priority = 0x01,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a2942
    },
    {
        .status = 0x00,
        .priority = 0x02,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a7de0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005ace10
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a5ff6
    },
    {
        .status = 0x00,
        .priority = 0x0B,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a613c
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005af560
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005ad524
    },
    {
        .status = 0x00,
        .priority = 0x03,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005aeba0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005b0234
    },
    {
        .status = 0x00,
        .priority = 0x01,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a2943
    },
    {
        .status = 0x00,
        .priority = 0x28,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a9e24
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005aceb0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005a8258
    },
    {
        .status = 0x00,
        .priority = 0x1F,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005abc20
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005af64c
    },
    {
        .status = 0x00,
        .priority = 0x0A,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005add3c
    }
};

// TerminatedCString
TerminatedCString s_d3d_dll_00606733 = "d3d.dll";

// WatcomStaticDestructorNode
WatcomStaticDestructorNode DAT_00600130 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E20C0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d70890
};
WatcomStaticDestructorNode DAT_00600140 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E20CC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d708a4
};
WatcomStaticDestructorNode DAT_00600150 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E20D8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d708b8
};
WatcomStaticDestructorNode DAT_00600160 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E20E4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d708cc
};
WatcomStaticDestructorNode DAT_00600170 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E20F0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01d708e0
};
WatcomStaticDestructorNode DAT_0060029C = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2380,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d70be8
};
WatcomStaticDestructorNode DAT_00600302 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2730,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d71dec
};
WatcomStaticDestructorNode DAT_00600312 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E273C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d71e00
};
WatcomStaticDestructorNode DAT_00600322 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2748,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d71e14
};
WatcomStaticDestructorNode DAT_00600332 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2754,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d71e28
};
WatcomStaticDestructorNode DAT_00600358 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E28C0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomStaticDestructorNode DAT_00600368 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E28CC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomStaticDestructorNode DAT_00600378 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E28D8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomStaticDestructorNode DAT_00600388 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E28E4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomStaticDestructorNode DAT_00600398 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E28F0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomStaticDestructorNode DAT_006003A8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E28FC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CalibrationBitmap
};
WatcomStaticDestructorNode DAT_006004A8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2950,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMini3DInstance
};
WatcomStaticDestructorNode DAT_006006B8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2BB0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d883a8
};
WatcomStaticDestructorNode DAT_006006C8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2BBC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonAnimTextures
};
WatcomStaticDestructorNode DAT_006006D8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2BC8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d88614
};
WatcomStaticDestructorNode DAT_006006E8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2BD4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d88628
};
WatcomStaticDestructorNode g_CNetGameInstanceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2CD0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CNetGameInstance
};
WatcomStaticDestructorNode g_CMouseDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E2D80,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMouseInstance
};
WatcomStaticDestructorNode g_PathMapCacheDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E3150,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PathMapCache
};
WatcomStaticDestructorNode g_CDemonPodMainDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_CDemonPodDestructorNode,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonPodInstance
};
WatcomStaticDestructorNode DAT_006039C0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E3990,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ScriptPickList
};
WatcomStaticDestructorNode DAT_006039D0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E399C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CScriptInstance
};
WatcomStaticDestructorNode g_CDemonSetDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E3B90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonSetInstance
};
WatcomStaticDestructorNode g_CDemonCameraDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E3B9C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonCameraInstance
};
WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E3BA8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonRaytraceInstance
};
WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E3BB4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModelInstance
};
WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E4740,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_DeformableModelPool
};
WatcomStaticDestructorNode g_SkeletonPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E474C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SkeletonPool
};
WatcomStaticDestructorNode g_SfxSamplesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E4800,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SfxSamples
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode1 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E480C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E4818,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstanceOther
};
WatcomStaticDestructorNode DAT_006045E0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E49B0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CStrListInstance
};
WatcomStaticDestructorNode g_CTextureListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E5350,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CTextureListInstance
};
WatcomStaticDestructorNode DAT_00606ABC = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E5A40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_COutStreamDebugInstance
};
WatcomStaticDestructorNode g_CWaterDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005E5E70,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CWaterInstance
};

// int
int g_CHolycrossClassVersion = 0x1;
int g_CHotDemonClassVersion = 0x1;
int g_CImpClassVersion = 0x1;
int g_CKeyActorClassVersion = 0x3;
int g_CLadderClassVersion = 0x2;
int g_CLeverClassVersion = 0x8;
int g_CLightStaffClassVersion = 0x1;
int g_CLightConeClassVersion = 0x2;
int g_CMeleeClassVersion = 0x7;
int g_CMooCowClassVersion = 0x1;
int g_CNPCClassVersion = 0x8;
int g_CPassengerClassVersion = 0x6;
int g_CPendulumClassVersion = 0x8;
int g_CPlatformClassVersion = 0xB;
int g_CPryeClassVersion = 0x1;
int g_CPryeMorphClassVersion = 0x8;
int g_CRifleClassVersion = 0x1;
int g_CSentinelClassVersion = 0x2;
int g_CShadowClassVersion = 0x2;
int g_CShadowscClassVersion = 0x1;
int g_CShovelClassVersion = 0x1;
int g_CSimBoxClassVersion = 0x3;
int g_CSpawnerClassVersion = 0x5;
int g_CSpikeClassVersion = 0x1;
int g_CSpsClassVersion = 0x1;
int g_CStairsClassVersion = 0x2;
int g_CTempleStoneClassVersion = 0x1;
int g_CStormClassVersion = 0x1;
int g_CTeleportDestClassVersion = 0x1;
int g_CTommyGunClassVersion = 0x1;
int g_CTheHandClassVersion = 0x1;
int g_CTrapClassVersion = 0x1;
int g_CTrashClassVersion = 0x1;
int g_CTriggerClassVersion = 0xD;
int g_CTVBatClassVersion = 0x5;
int g_CCryptVesselClassVersion = 0x4;
int g_CWaterActorClassVersion = 0x7;
int g_CWayPointClassVersion = 0x2;
int g_CWeaponClassVersion = 0xC;
int g_CWerewolfClassVersion = 0x6;
int g_CYowClassVersion = 0x1;
int g_CZombieClassVersion = 0xC;
int g_CZombiePriestClassVersion = 0x7;
int g_CKedwardClassVersion = 0x4;
int g_CMattanntoteClassVersion = 0x1;
int g_CTawiscaraClassVersion = 0x1;
int g_CBaalClassVersion = 0x1;
int g_CHecaitomixClassVersion = 0x1;
int g_CDarkwolfClassVersion = 0x2;
int g_CSpiritEagleClassVersion = 0x2;
int g_CSpiritIndianClassVersion = 0x1;
int g_CSpiritBearClassVersion = 0x1;
int g_CHinoClassVersion = 0x1;
int g_CStylerClassVersion = 0x2;
int g_CStylerDemonClassVersion = 0x1;
int g_CAsgayaClassVersion = 0x1;

// undefined1
undefined1 DAT_00600698 = 0x0A;
undefined1 DAT_0060069c = 0x00;
undefined1 DAT_006006a1 = 0x00;
undefined1 DAT_00604df8 = 0x10;
undefined1 DAT_00604e18 = 0x08;
undefined1 DAT_00606730 = 0x74;
undefined1 DAT_00606731 = 0x72;
undefined1 DAT_00606732 = 0x69;
undefined1 DAT_00607983 = 0x00;
undefined1 DAT_00607a07 = 0x00;
undefined1 DAT_00607a08 = 0x00;
undefined1 DAT_00607a09 = 0x00;
undefined1 DAT_00607a0a = 0x00;
undefined1 DAT_00607a0b = 0x00;
undefined1 DAT_00607cb1 = 0x45;
undefined1 DAT_00607d48 = 0x01;
undefined1 DAT_00607d74 = 0x00;
undefined1 DAT_00607ef0 = 0x00;
undefined1 DAT_006084b6 = 0x00;
undefined1 DAT_006084b7 = 0x00;

// undefined2
undefined2 DAT_00607985 = 0x0000;
undefined2 DAT_00607b0c = 0x0000;

// undefined4
undefined4 DAT_00600188 = 0x00000000;
undefined4 DAT_0060018c = 0x00000000;
undefined4 DAT_006001f0 = 0x00000000;
undefined4 DAT_006001f4 = 0x00000000;
undefined4 DAT_006002c4 = 0x00008000;
undefined4 DAT_006002c8 = 0x00000001;
undefined4 DAT_006005a0 = 0x00000000;
undefined4 DAT_006005a4 = 0x00000000;
undefined4 DAT_00600608 = 0x00000000;
undefined4 DAT_0060060c = 0x00000000;
undefined4 DAT_0060069d = 0x00000000;
undefined4 DAT_00600774 = 0x00000001;
undefined4 DAT_00600778 = 0x00000001;
undefined4 DAT_0060077c = 0x00000001;
undefined4 DAT_00601110 = 0x00000001;
undefined4 DAT_00601124 = 0x00000000;
undefined4 DAT_0060116c = 0x00000001;
undefined4 DAT_006011b0 = 0x00000001;
undefined4 DAT_00603454 = 0x00000001;
undefined4 DAT_00603634 = 0xFFFFFFFF;
undefined4 DAT_00603638 = 0x00000000;
undefined4 DAT_00603974 = 0x000004B0;
undefined4 DAT_006039f0 = 0x00000000;
undefined4 DAT_006039f4 = 0x00000000;
undefined4 DAT_00603b38 = 0x00000001;
undefined4 DAT_00603cbc = 0x00000000;
undefined4 DAT_00603cc0 = 0x00000000;
undefined4 DAT_00603ef8 = 0x00000000;
undefined4 DAT_00603efc = 0x00000000;
undefined4 DAT_00603f00 = 0x00000000;
undefined4 DAT_00603f04 = 0x00000000;
undefined4 DAT_00603f40 = 0x00000000;
undefined4 DAT_00603f44 = 0x00000000;
undefined4 DAT_00603f48 = 0x00000000;
undefined4 DAT_00604210 = 0x00000001;
undefined4 DAT_00604224 = 0x00000020;
undefined4 DAT_00604228 = 0x00000010;
undefined4 DAT_0060422c = 0x00000002;
undefined4 DAT_00604230 = 0x00005622;
undefined4 DAT_00604238 = 0xFFFFFFFF;
undefined4 DAT_0060423c = 0xFFFFFFFF;
undefined4 DAT_00604240 = 0x3F800000;
undefined4 DAT_0060424c = 0x00400000;
undefined4 DAT_00604250 = 0x3F000000;
undefined4 DAT_00604254 = 0xFFFFFFFF;
undefined4 DAT_00604258 = 0xFFFFFFFF;
undefined4 DAT_00604268 = 0x00000000;
undefined4 DAT_0060426c = 0x00000000;
undefined4 DAT_00604368 = 0x00000000;
undefined4 DAT_0060436c = 0x00000000;
undefined4 DAT_00604510 = 0xFFFFFFFF;
undefined4 DAT_00604514 = 0xFFFFFFFF;
undefined4 DAT_00604518 = 0xFFFFFFFF;
undefined4 DAT_006047b0 = 0x00000000;
undefined4 DAT_006047b4 = 0x00000000;
undefined4 DAT_00604818 = 0x00000000;
undefined4 DAT_0060481c = 0x00000000;
undefined4 DAT_006048a4 = 0x00000000;
undefined4 DAT_006048e0 = 0x00000000;
undefined4 DAT_006048e4 = 0x00000000;
undefined4 DAT_006048ec = 0x00000000;
undefined4 DAT_00604908 = 0x00000000;
undefined4 DAT_0060490c = 0x00000000;
undefined4 DAT_00604d18 = 0x00000000;
undefined4 DAT_00604d68 = 0x00000000;
undefined4 DAT_00604d6c = 0x00000000;
undefined4 DAT_00604d70 = 0x00000000;
undefined4 DAT_00604d78 = 0x00000000;
undefined4 DAT_00604d7c = 0x00000000;
undefined4 DAT_00604d80 = 0x00000000;
undefined4 DAT_00604dd0 = 0x00000000;
undefined4 DAT_00604de0 = 0x00000000;
undefined4 DAT_00604e60 = 0x0000F800;
undefined4 DAT_00604e68 = 0x000007E0;
undefined4 DAT_00604e70 = 0x0000001F;
undefined4 DAT_00606980 = 0x00000000;
undefined4 DAT_00606984 = 0x00000000;
undefined4 DAT_00606b28 = 0x00002000;
undefined4 DAT_00606e54 = 0x01000000;
undefined4 DAT_00606e64 = 0x01000000;
undefined4 DAT_00607288 = 0xFFFFFFFF;
undefined4 DAT_0060728c = 0x00000001;
undefined4 DAT_00607290 = 0xFFFFFFFF;
undefined4 DAT_006075c4 = 0x00000000;
undefined4 DAT_006075c8 = 0x00000000;
undefined4 DAT_006075cc = 0x00000000;
undefined4 DAT_0060789c = 0x00000000;
undefined4 DAT_0060793c = 0x00000000;
undefined4 DAT_00607940 = 0x00000000;
undefined4 DAT_00607964 = 0x00000000;
undefined4 DAT_0060796c = 0x00000000;
undefined4 DAT_0060798b = 0x00000000;
undefined4 DAT_0060798f = 0x00000000;
undefined4 DAT_0060799c = 0xFFFFFFFF;
undefined4 DAT_006079e8 = 0x00000000;
undefined4 DAT_00607b10 = 0x00000000;
undefined4 DAT_00607b14 = 0x00000000;
undefined4 DAT_00607b18 = 0x00000000;
undefined4 DAT_00607b1c = 0x00000000;
undefined4 DAT_00607b20 = 0x00000000;
undefined4 DAT_00607b24 = 0x00000000;
undefined4 DAT_00607b40 = 0x00000000;
undefined4 DAT_00607b44 = 0x00000000;
undefined4 DAT_00607b4c = 0x00000000;
undefined4 DAT_00607b54 = 0x00000000;
undefined4 DAT_00607b58 = 0x00000000;
undefined4 DAT_00607bdc = 0x00000000;
undefined4 DAT_00607be0 = 0x00000000;
undefined4 DAT_00607be4 = 0x80000000;
undefined4 DAT_00607c00 = 0x00000000;
undefined4 DAT_00607c04 = 0x00000000;
undefined4 DAT_00607c08 = 0x00000000;
undefined4 DAT_00607c0c = 0x00000000;
undefined4 DAT_00607c10 = 0x00000000;
undefined4 DAT_00607c14 = 0x00000001;
undefined4 DAT_00607c24 = 0x00000000;
undefined4 DAT_00607c28 = 0x00000000;
undefined4 DAT_00607c2c = 0x00000000;
undefined4 DAT_00607d3c = 0x00004650;
undefined4 DAT_00607d44 = 0x00000E10;
undefined4 DAT_00607df0 = 0x00000000;
undefined4 DAT_00607df4 = 0x00000000;
undefined4 DAT_00607e0c = 0x00000000;
undefined4 DAT_00607e18 = 0x00000000;
undefined4 DAT_00607e7c = 0x00000001;
undefined4 DAT_00607e80 = 0xFFFFFFFF;
undefined4 DAT_00607e84 = 0xFFFFFFFF;
undefined4 DAT_0060b010 = {};
undefined4 DAT_0060b014 = {};
undefined4 DAT_0060b018 = {};
undefined4 DAT_0060b01c = {};
undefined4 DAT_0060b024 = {};
undefined4 DAT_0060b02c = {};
undefined4 DAT_0060b034 = {};
undefined4 DAT_0060b038 = {};
undefined4 DAT_0060b03c = {};
undefined4 DAT_0060b040 = {};
undefined4 DAT_0060b044 = {};
undefined4 DAT_0060b048 = {};
undefined4 DAT_0060b04c = {};
undefined4 DAT_0060b054 = {};
undefined4 DAT_0060b064 = {};
undefined4 DAT_0060b068 = {};
undefined4 DAT_0060b06c = {};
undefined4 DAT_0060b070 = {};
undefined4 DAT_0060b084 = {};
undefined4 DAT_0060b090 = {};
undefined4 DAT_0060b0b4 = {};
undefined4 DAT_0060b0e4 = {};
undefined4 DAT_0060b114 = {};
undefined4 DAT_0060b144 = {};
undefined4 DAT_0060b174 = {};

// undefined8
undefined8 DAT_00604d1c = 0x0000000000000000;
undefined8 DAT_00604d90 = 0x0000000000000000;
undefined8 DAT_00604db0 = 0x0000000000000000;
undefined8 DAT_00604de8 = 0x0000000000000000;
undefined8 DAT_00604df0 = 0x0000000000000000;
undefined8 DAT_00605710 = 0x0000000000000000;

