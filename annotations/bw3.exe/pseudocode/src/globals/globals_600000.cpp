#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x600000
// =============================================================================

// CDemonMission*
CDemonMission* g_CDemonMission_PTR_00600530 = (CDemonMission*)0x01D81080; // DAT_01d81080

// CDemonPod*
CDemonPod* g_CDemonPodPtr = (CDemonPod*)&g_CDemonPodInstance;

// CDemonSet*
CDemonSet* g_CDemonSetPtr = (CDemonSet*)&g_CDemonSetInstance;

// CKeys*
CKeys* g_CKeys_PTR_00600284 = (CKeys*)&g_PTR_01d70a78;

// CLevelLoader*
CLevelLoader* g_CLevelLoaderPtr = (CLevelLoader*)&g_CLevelLoaderInstance;

// CMini3D*
CMini3D* g_CMini3DPtr = (CMini3D*)&g_CMini3DInstance;

// CMouse*
CMouse* g_CMousePtr = (CMouse*)&g_CMouseInstance;

// CNetGame*
CNetGame* g_CNetGamePtr = (CNetGame*)&g_CNetGameInstance;

// CScript*
CScript* g_CScriptPtr = (CScript*)&g_CScriptInstance;

// CSound*
CSound* g_CSound_PTR_006045f8 = (CSound*)&g_CSound_02cf5680;

// CTerrain*
CTerrain* g_CTerrain_PTR_00606aa0 = (CTerrain*)&g_CTerrain_02cfd8b8;

// CTextureList*
CTextureList* g_CTextureListPtr = (CTextureList*)&g_CTextureListInstance;

// CVector3i
CVector3i g_CVector3i_00603b2c = {
    .x = 0x00000000,
    .y = -46333,
    .z = 0x0000B4FD
};

// CWater*
CWater* g_CWaterPtr = (CWater*)&g_CWaterInstance;

// CWeather*
CWeather* g_CWeather_PTR_006071f0 = (CWeather*)&g_CWeather_02d0c1a0;

// GUID
GUID g_IID_IKsPropertySet = {0x31EFAC30, 0x515C, 0x11D0, {0xA9, 0xAA, 0x00, 0xAA, 0x00, 0x61, 0xBE, 0x93}};
GUID g_DSPROPSETID_VoiceManager = {0x62A69BAE, 0xDF9D, 0x11D1, {0x99, 0xA6, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x46}};
GUID g_DSPROPSETID_EAX_ReverbProperties = {0x4A4E6FC1, 0xC341, 0x11D1, {0xB7, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00}};
GUID g_IID_IDirectSound3DBuffer = {0x279AFA86, 0x4981, 0x11CE, {0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60}};
GUID g_IID_IDirectSound3DListener = {0x279AFA84, 0x4981, 0x11CE, {0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60}};

// Heap*
Heap* g_Heap_PTR_006075c4 = nullptr;
Heap* g_Heap_PTR_006075c8 = nullptr;

// RuntimeHandlerEntry
RuntimeHandlerEntry g_RuntimeHandlerEntry_006084b6 = {
    .status = 0x00,
    .priority = 0x00,
    .func = (RUNTIME_HANDLER_FUNC *)0x1A82F8BC
};

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
        .func = (RUNTIME_HANDLER_FUNC *)core_disease_cpp_staticInit_FUN_0045c160
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
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_004a76f0
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
        .func = (RUNTIME_HANDLER_FUNC *)core_imp_cpp_staticInit_FUN_004d8280
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
        .func = (RUNTIME_HANDLER_FUNC *)core_mirror_cpp_SClipPlane_dtor_FUN_004f5a70
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
        .func = (RUNTIME_HANDLER_FUNC *)core_skeleton_cpp_staticInit_FUN_00550580
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_00550980
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_0055a660
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
        .func = (RUNTIME_HANDLER_FUNC *)core_tvbat_cpp_staticInit_FUN_00576230
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

// SAudioFormatDescriptor[12]
SAudioFormatDescriptor g_SAudioFormatDescriptor_ARRAY_0060451c[12] = {
    {
        .format_flags = 0x00000001,
        .bits_per_sample = 0x00000008,
        .channels = 0x00000001,
        .sample_rate = 0x00002B11
    },
    {
        .format_flags = 0x00000004,
        .bits_per_sample = 0x00000010,
        .channels = 0x00000001,
        .sample_rate = 0x00002B11
    },
    {
        .format_flags = 0x00000002,
        .bits_per_sample = 0x00000008,
        .channels = 0x00000002,
        .sample_rate = 0x00002B11
    },
    {
        .format_flags = 0x00000008,
        .bits_per_sample = 0x00000010,
        .channels = 0x00000002,
        .sample_rate = 0x00002B11
    },
    {
        .format_flags = 0x00000010,
        .bits_per_sample = 0x00000008,
        .channels = 0x00000001,
        .sample_rate = 0x00005622
    },
    {
        .format_flags = 0x00000040,
        .bits_per_sample = 0x00000010,
        .channels = 0x00000001,
        .sample_rate = 0x00005622
    },
    {
        .format_flags = 0x00000020,
        .bits_per_sample = 0x00000008,
        .channels = 0x00000002,
        .sample_rate = 0x00005622
    },
    {
        .format_flags = 0x00000080,
        .bits_per_sample = 0x00000010,
        .channels = 0x00000002,
        .sample_rate = 0x00005622
    },
    {
        .format_flags = 0x00000100,
        .bits_per_sample = 0x00000008,
        .channels = 0x00000001,
        .sample_rate = 0x0000AC44
    },
    {
        .format_flags = 0x00000400,
        .bits_per_sample = 0x00000010,
        .channels = 0x00000001,
        .sample_rate = 0x0000AC44
    },
    {
        .format_flags = 0x00000200,
        .bits_per_sample = 0x00000008,
        .channels = 0x00000002,
        .sample_rate = 0x0000AC44
    },
    {
        .format_flags = 0x00000800,
        .bits_per_sample = 0x00000010,
        .channels = 0x00000002,
        .sample_rate = 0x0000AC44
    }
};

// SHuffmanTableSource[34]
SHuffmanTableSource g_SHuffmanTableSource_ARRAY_00603110[34] = {
    {
        .table_size = 0x00000000,
        .xlen = 0x00000000,
        .ylen = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000007,
        .xlen = 0x00000002,
        .ylen = 0x00000002,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601B00
    },
    {
        .table_size = 0x00000011,
        .xlen = 0x00000003,
        .ylen = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601B10
    },
    {
        .table_size = 0x00000011,
        .xlen = 0x00000003,
        .ylen = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601B38
    },
    {
        .table_size = 0x00000000,
        .xlen = 0x00000000,
        .ylen = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000004,
        .ylen = 0x00000004,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601B60
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000004,
        .ylen = 0x00000004,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601BA0
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601BE0
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601C70
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601D00
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601D90
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601E90
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00601F90
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00602090
    },
    {
        .table_size = 0x00000000,
        .xlen = 0x00000000,
        .ylen = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00602490
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000001,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00602890
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000002,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000003,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000004,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000006,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000008,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x0000000A,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x0000000D,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000004,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00602C90
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000005,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000006,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000007,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000008,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000009,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x0000000B,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x0000000D,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000001,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00603090
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000001,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x006030D0
    }
};

// SIGNAL_HANDLER_TYPE[26]
SIGNAL_HANDLER_TYPE g_SIGNAL_HANDLER_TYPE_ARRAY_00607e88[26] = {
    0x00000001, -1, 0x00000002, -1, 0x00000001, -1, 0x00000002, -1073741795,
    0x00000002, -1073741510, 0x00000002, -1073741819, 0x00000002, -1073741510, 0x00000002, -1073741510,
    0x00000001, -1, 0x00000001, -1, 0x00000001, -1, 0x00000002, -1073741676,
    0x00000001, -1073741675
};

// SIOControlBlock*
SIOControlBlock* g_SIOControlBlock_PTR_00607bdc = nullptr;

// SMRGLPrimitiveQuad
SMRGLPrimitiveQuad g_SMRGLPrimitiveQuad_00606e2c = {
    .base = {
        .base = {.type = 0x00000000, .count = 0x00000004},
        .surface_normal = {
            .A = 0x00000000,
            .B = 0x00000000,
            .C = 0x00000000,
            .D = 0x00000000
        }
    },
    .vertices = {{
        .vertex_index = 0x00000000,
        .texture_u = 0x00000000,
        .texture_v = 0x00000000
    }, {
        .vertex_index = 0x00000001,
        .texture_u = 0x01000000,
        .texture_v = 0x00000000
    }, {
        .vertex_index = 0x00000002,
        .texture_u = 0x01000000,
        .texture_v = 0x01000000
    }, {
        .vertex_index = 0x00000003,
        .texture_u = 0x00000000,
        .texture_v = 0x01000000
    }}
};

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_00600254 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "INV3D.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_0060360c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_00603e44 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BACKGND.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_0060409c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_006040b8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_006071f4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINDRP1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_0060720c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINSPLT.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_00607224 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SNOWFLKE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_00607240 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_00607390 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};

// SMRGLTextureBasic[16]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_00606cac[16] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA0.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA4.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA5.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA6.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA7.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA8.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA9.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LAVA15.RAW"
    }
};

// SMRGLTextureBasic[8]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_006003b8[8] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1500.RAW"
    }
};

// SMpegLayer3BandIndex[6]
SMpegLayer3BandIndex g_SMpegLayer3BandIndex_ARRAY_00601668[6] = {
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000074, 0x0000008C, 0x000000A8, 0x000000C8, 0x000000EE, 0x0000011C, 0x00000150, 0x0000018C, 0x000001D0, 0x0000020A, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x00000018, 0x00000020, 0x0000002A, 0x00000038, 0x0000004A, 0x00000064, 0x00000084, 0x000000AE, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000072, 0x00000088, 0x000000A2, 0x000000C2, 0x000000E8, 0x00000116, 0x0000014A, 0x0000018A, 0x000001D0, 0x0000021C, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x0000001A, 0x00000024, 0x00000030, 0x0000003E, 0x00000050, 0x00000068, 0x00000088, 0x000000B4, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000074, 0x0000008C, 0x000000A8, 0x000000C8, 0x000000EE, 0x0000011C, 0x00000150, 0x0000018C, 0x000001D0, 0x0000020A, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x0000001A, 0x00000024, 0x00000030, 0x0000003E, 0x00000050, 0x00000068, 0x00000086, 0x000000AE, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000034, 0x0000003E, 0x0000004A, 0x0000005A, 0x0000006E, 0x00000086, 0x000000A2, 0x000000C4, 0x000000EE, 0x00000120, 0x00000156, 0x000001A2, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001E, 0x00000028, 0x00000034, 0x00000042, 0x00000054, 0x0000006A, 0x00000088, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002A, 0x00000032, 0x0000003C, 0x00000048, 0x00000058, 0x0000006A, 0x00000080, 0x0000009C, 0x000000BE, 0x000000E6, 0x00000114, 0x0000014A, 0x00000180, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001C, 0x00000026, 0x00000032, 0x00000040, 0x00000050, 0x00000064, 0x0000007E, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000052, 0x00000066, 0x0000007E, 0x0000009C, 0x000000C2, 0x000000F0, 0x00000128, 0x0000016C, 0x000001C0, 0x00000226, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001E, 0x0000002A, 0x0000003A, 0x0000004E, 0x00000068, 0x0000008A, 0x000000B4, 0x000000C0}
    }
};

// SRenderVertex[20000]
SRenderVertex g_SRenderVertex_ARRAY_0060b014[20000] = {};

// SReverbPreset[27]
SReverbPreset g_ReverbPresetTable[27] = {
    {
        .name = (char *)s_OFF_005d53b5,
        .reverb = {
            .volume = 0.0f,
            .decay_time = 0.0f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_GENERIC_005d53b9,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 1.493f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_PADDEDCELL_005d53c1,
        .reverb = {
            .volume = 0.25f,
            .decay_time = 0.1f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)0x005D53CC,
        .reverb = {
            .volume = 0.417f,
            .decay_time = 0.40000001f,
            .damping = 0.66600001f
        }
    },
    {
        .name = (char *)s_BATHROOM_005d53d1,
        .reverb = {
            .volume = 0.653f,
            .decay_time = 1.499f,
            .damping = 0.16599999f
        }
    },
    {
        .name = (char *)s_LIVINGROOM_005d53da,
        .reverb = {
            .volume = 0.208f,
            .decay_time = 0.47799999f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_STONEROOM_005d53e5,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 2.309f,
            .damping = 0.88800001f
        }
    },
    {
        .name = (char *)s_AUDITORIUM_005d53ef,
        .reverb = {
            .volume = 0.403f,
            .decay_time = 4.2789998f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_CONCERTHALL_005d53fa,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 3.961f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)0x005D5406,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 2.8859999f,
            .damping = 1.304f
        }
    },
    {
        .name = (char *)s_ARENA_005d540b,
        .reverb = {
            .volume = 0.361f,
            .decay_time = 7.2839999f,
            .damping = 0.33199999f
        }
    },
    {
        .name = (char *)s_HANGAR_005d5411,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 10.0f,
            .damping = 0.30000001f
        }
    },
    {
        .name = (char *)s_CARPETEDHALLWAY_005d5418,
        .reverb = {
            .volume = 0.153f,
            .decay_time = 0.259f,
            .damping = 2.0f
        }
    },
    {
        .name = (char *)s_HALLWAY_005d5428,
        .reverb = {
            .volume = 0.361f,
            .decay_time = 1.493f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_STONECORRIDOR_005d5430,
        .reverb = {
            .volume = 0.44400001f,
            .decay_time = 2.697f,
            .damping = 0.63800001f
        }
    },
    {
        .name = (char *)s_ALLEY_005d543e,
        .reverb = {
            .volume = 0.25f,
            .decay_time = 1.752f,
            .damping = 0.77600002f
        }
    },
    {
        .name = (char *)s_FOREST_005d5444,
        .reverb = {
            .volume = 0.111f,
            .decay_time = 3.145f,
            .damping = 0.472f
        }
    },
    {
        .name = (char *)0x005D544B,
        .reverb = {
            .volume = 0.111f,
            .decay_time = 2.767f,
            .damping = 0.22400001f
        }
    },
    {
        .name = (char *)s_MOUNTAINS_005d5450,
        .reverb = {
            .volume = 0.19400001f,
            .decay_time = 7.8410001f,
            .damping = 0.472f
        }
    },
    {
        .name = (char *)s_QUARRY_005d545a,
        .reverb = {
            .volume = 1.0f,
            .decay_time = 1.499f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_PLAIN_005d5461,
        .reverb = {
            .volume = 0.097000003f,
            .decay_time = 2.767f,
            .damping = 0.22400001f
        }
    },
    {
        .name = (char *)s_PARKINGLOT_005d5467,
        .reverb = {
            .volume = 0.208f,
            .decay_time = 1.652f,
            .damping = 1.5f
        }
    },
    {
        .name = (char *)s_SEWERPIPE_005d5472,
        .reverb = {
            .volume = 0.65200001f,
            .decay_time = 2.8859999f,
            .damping = 0.25f
        }
    },
    {
        .name = (char *)s_UNDERWATER_005d547c,
        .reverb = {
            .volume = 1.0f,
            .decay_time = 1.499f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_DRUGGED_005d5487,
        .reverb = {
            .volume = 0.875f,
            .decay_time = 8.3920002f,
            .damping = 1.388f
        }
    },
    {
        .name = (char *)0x005D548F,
        .reverb = {
            .volume = 0.139f,
            .decay_time = 17.233999f,
            .damping = 0.66600001f
        }
    },
    {
        .name = (char *)s_PSYCHOTIC_005d5495,
        .reverb = {
            .volume = 0.486f,
            .decay_time = 7.5630002f,
            .damping = 0.80599999f
        }
    }
};

// TerminatedCString
TerminatedCString s_EST_00607c30 = "EST";
TerminatedCString s_EDT_00607cb1 = "EDT";

// WCHAR*
WCHAR* g_WCHAR_PTR_0060794c = nullptr;
WCHAR* g_WCHAR_PTR_00607950 = nullptr;
WCHAR* g_WCHAR_PTR_00607954 = nullptr;

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

// WatcomStaticDestructorNode*
WatcomStaticDestructorNode* g_WatcomStaticDestructorNode_PTR_00607b10 = nullptr;

// _FILE
_FILE g_FILE_00607692 = {
    ._ptr = nullptr,
    ._cnt = 0x00000000,
    ._link = nullptr,
    ._flag = 0x00000002,
    ._handle = 0x00000001,
    ._bufsize = 0x00000000,
    ._ungotten = 0x0000
};
_FILE g_FILE_006076ac = {
    ._ptr = nullptr,
    ._cnt = 0x00000000,
    ._link = nullptr,
    ._flag = 0x00000002,
    ._handle = 0x00000002,
    ._bufsize = 0x00000000,
    ._ungotten = 0x0000
};

// _FILE*
_FILE* g_FILE_PTR_00607678 = nullptr;

// _MMX_INTEGER
_MMX_INTEGER g_MMX_INTEGER_00604d98 = {};
_MMX_INTEGER g_MMX_INTEGER_00604da0 = {};
_MMX_INTEGER g_MMX_INTEGER_00604db8 = {};
_MMX_INTEGER g_MMX_INTEGER_00604dc0 = {};
_MMX_INTEGER g_MMX_INTEGER_00604e60 = {0x000000000000F800ULL};
_MMX_INTEGER g_MMX_INTEGER_00604e68 = {0x00000000000007E0ULL};
_MMX_INTEGER g_MMX_INTEGER_00604e70 = {0x000000000000001FULL};

// byte
byte g_BYTE_0060069b = 0;
byte g_BYTE_006075c0 = 0;
byte g_BYTE_006075c1 = 0;
byte g_BYTE_00607983 = 0;
byte g_BYTE_00607984 = 0;
byte g_BYTE_00607b5c = 0;
byte g_BYTE_00607d48 = 0x1;
byte g_BYTE_00607d74 = 0;
byte g_BYTE_00607ef0 = 0;

// byte[16]
byte g_BYTE_ARRAY_00609ef8[16] = {0x00, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x0D, 0x00, 0x00};

// char*
char* g_CHAR_PTR_00607944 = nullptr;
char* g_CHAR_PTR_00607948 = nullptr;
char* g_CHAR_PTR_0060797d = nullptr;

// char[100]
char g_CHAR_ARRAY_006001f0[100] = "";

// char[104]
char g_CHAR_ARRAY_00600188[104] = "";
char g_CHAR_ARRAY_006005a0[104] = "";
char g_CHAR_ARRAY_00600608[104] = "";
char g_CHAR_ARRAY_006047b0[104] = "";

// char[128]
char g_CHAR_ARRAY_006034c0[128] = {
    (char)0x82, (char)0x6C, (char)0x82, (char)0x72, (char)0x20, (char)0x82, (char)0x6F, (char)0x83, (char)0x53, (char)0x83, (char)0x56, (char)0x83,
    (char)0x62, (char)0x83, (char)0x4E, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00
};

// char[145]
char g_CHAR_ARRAY_00607f1c[145] = {
    (char)0x60, (char)0x0D, (char)0x5B, (char)0x00, (char)0xFF, (char)0xFF, (char)0xFF, (char)0x7F, (char)0x55, (char)0x55, (char)0x55, (char)0x55,
    (char)0xFF, (char)0xFF, (char)0xFF, (char)0x3F, (char)0x33, (char)0x33, (char)0x33, (char)0x33, (char)0xAA, (char)0xAA, (char)0xAA, (char)0x2A,
    (char)0x24, (char)0x49, (char)0x92, (char)0x24, (char)0xFF, (char)0xFF, (char)0xFF, (char)0x1F, (char)0x1C, (char)0xC7, (char)0x71, (char)0x1C,
    (char)0x99, (char)0x99, (char)0x99, (char)0x19, (char)0x74, (char)0xD1, (char)0x45, (char)0x17, (char)0x55, (char)0x55, (char)0x55, (char)0x15,
    (char)0x13, (char)0x3B, (char)0xB1, (char)0x13, (char)0x92, (char)0x24, (char)0x49, (char)0x12, (char)0x11, (char)0x11, (char)0x11, (char)0x11,
    (char)0xFF, (char)0xFF, (char)0xFF, (char)0x0F, (char)0x0F, (char)0x0F, (char)0x0F, (char)0x0F, (char)0x8E, (char)0xE3, (char)0x38, (char)0x0E,
    (char)0x5E, (char)0x43, (char)0x79, (char)0x0D, (char)0xCC, (char)0xCC, (char)0xCC, (char)0x0C, (char)0x0C, (char)0xC3, (char)0x30, (char)0x0C,
    (char)0xBA, (char)0xE8, (char)0xA2, (char)0x0B, (char)0x2C, (char)0x64, (char)0x21, (char)0x0B, (char)0xAA, (char)0xAA, (char)0xAA, (char)0x0A,
    (char)0xA3, (char)0x70, (char)0x3D, (char)0x0A, (char)0x89, (char)0x9D, (char)0xD8, (char)0x09, (char)0x5E, (char)0x42, (char)0x7B, (char)0x09,
    (char)0x49, (char)0x92, (char)0x24, (char)0x09, (char)0xB0, (char)0xDC, (char)0xD3, (char)0x08, (char)0x88, (char)0x88, (char)0x88, (char)0x08,
    (char)0x84, (char)0x10, (char)0x42, (char)0x08, (char)0xFF, (char)0xFF, (char)0xFF, (char)0x07, (char)0x7C, (char)0xF0, (char)0xC1, (char)0x07,
    (char)0x87, (char)0x87, (char)0x87, (char)0x07, (char)0x07, (char)0x75, (char)0x50, (char)0x07, (char)0xC7, (char)0x71, (char)0x1C, (char)0x07,
    (char)0x00
};

// char[200]
char g_CHAR_ARRAY_006039f0[200] = "";

// char[256]
char g_CHAR_ARRAY_00604268[256] = "";
char g_CHAR_ARRAY_00606730[256] = "trid3d.dll";

// char[260]
char g_CHAR_ARRAY_00607a08[260] = "";

// double
double g_DOUBLE_00604d1c = 0;
double g_DOUBLE_00604d24 = 0;

// dst_rule
dst_rule g_dst_rule_00607be8 = {
    .seconds = 0x00000000,
    .minutes = 0x00000000,
    .hours = 0x00000002,
    .day = 0x00000001,
    .month = 0x00000003,
    .week = 0x00000000,
    .day_of_year = 0x00000000,
    .rule_type = 0x00000000
};

// float
float g_FLOAT_00604240 = 1.0f;
float g_FLOAT_00604244 = 1.0f;
float g_FLOAT_00604250 = 0.5f;
float g_FLOAT_00606b24 = 0.25f;

// int
int g_CHolycrossClassVersion = 0x1;
int g_CHotDemonClassVersion = 0x1;
int g_INT_00600024 = 0x1;
int g_INT_00600028 = 0x1;
int g_INT_0060002c = 0x1;
int g_CImpClassVersion = 0x1;
int g_INT_00600180 = 0xD0;
int g_INT_00600184 = 0x60;
int g_CKeyActorClassVersion = 0x3;
int g_CLadderClassVersion = 0x2;
int g_CLeverClassVersion = 0x8;
int g_INT_006002c4 = 0x8000;
int g_INT_006002c8 = 0x1;
int g_INT_006002cc = 0x10000;
int g_INT_006002d0 = 0x10000;
int g_CLightStaffClassVersion = 0x1;
int g_CLightConeClassVersion = 0x2;
int g_CMeleeClassVersion = 0x7;
int g_INT_00600690 = 0x730A0600;
int g_INT_00600694 = 0x900004A;
int g_CMooCowClassVersion = 0x1;
int g_INT_00600774 = 0x1;
int g_INT_00600778 = 0x1;
int g_INT_0060077c = 0x1;
int g_INT_00601110 = 0x1;
int g_INT_0060116c = 0x1;
int g_INT_006011b0 = 0x1;
int g_INT_00603454 = 0x1;
int g_CNPCClassVersion = 0x8;
int g_CPassengerClassVersion = 0x6;
int g_CPendulumClassVersion = 0x8;
int g_CPlatformClassVersion = 0xB;
int g_INT_00603974 = 0x4B0;
int g_CPryeClassVersion = 0x1;
int g_CPryeMorphClassVersion = 0x8;
int g_CRifleClassVersion = 0x1;
int g_CSentinelClassVersion = 0x2;
int g_INT_00603b38 = 0x1;
int g_CShadowClassVersion = 0x2;
int g_INT_006040d0 = 0x1;
int g_INT_006040d4 = 0x1;
int g_INT_006040d8 = 0x1;
int g_CShadowscClassVersion = 0x1;
int g_CShovelClassVersion = 0x1;
int g_CSimBoxClassVersion = 0x3;
int g_INT_00604170 = 0x3;
int g_INT_00604174 = 0x7;
int g_INT_00604210 = 0x1;
int g_INT_00604224 = 0x20;
int g_INT_00604228 = 0x10;
int g_INT_0060422c = 0x2;
int g_INT_00604230 = 0x5622;
int g_INT_00604238 = -1;
int g_INT_0060423c = -1;
int g_INT_00604248 = 0x200000;
int g_INT_0060424c = 0x400000;
int g_INT_00604254 = -1;
int g_INT_00604258 = -1;
int g_INT_0060425c = 0x8;
int g_INT_00604260 = 0x1;
int g_INT_00604264 = 0x2B11;
int g_INT_00604510 = -1;
int g_INT_00604514 = -1;
int g_INT_00604518 = -1;
int g_INT_006048a4 = 0;
int g_INT_006048e0 = 0;
int g_INT_006048e4 = 0;
int g_INT_006048ec = 0;
int g_INT_00604d10 = 0;
int g_INT_00604d14 = 0;
int g_INT_00604d18 = 0;
int g_INT_00604d34 = 0;
int g_INT_00604d38 = 0;
int g_INT_00604d3c = 0;
int g_INT_00604d40 = 0;
int g_INT_00604d68 = 0;
int g_INT_00604d6c = 0;
int g_INT_00604d70 = 0;
int g_INT_00604d78 = 0;
int g_INT_00604d7c = 0;
int g_INT_00604d80 = 0;
int g_INT_00604dd0 = 0;
int g_INT_00604dd8 = 0;
int g_INT_00604de0 = 0;
int g_INT_00604de8 = 0;
int g_INT_00604f08 = 0xFFFFFF;
int g_CSpawnerClassVersion = 0x5;
int g_INT_00606830 = 0x1;
int g_INT_00606834 = 0x1;
int g_INT_00606838 = 0x40;
int g_INT_0060683c = 0x3C000;
int g_CSpikeClassVersion = 0x1;
int g_CSpsClassVersion = 0x1;
int g_CStairsClassVersion = 0x2;
int g_CTempleStoneClassVersion = 0x1;
int g_CStormClassVersion = 0x1;
int g_CTeleportDestClassVersion = 0x1;
int g_INT_006068b8 = 0x1;
int g_CTommyGunClassVersion = 0x1;
int g_CTheHandClassVersion = 0x1;
int g_CTrapClassVersion = 0x1;
int g_CTrashClassVersion = 0x1;
int g_CTriggerClassVersion = 0xD;
int g_CTVBatClassVersion = 0x5;
int g_CCryptVesselClassVersion = 0x4;
int g_INT_00606b28 = 0x2000;
int g_CWaterActorClassVersion = 0x7;
int g_INT_00607188 = 0x1;
int g_CWayPointClassVersion = 0x2;
int g_CWeaponClassVersion = 0xC;
int g_CWerewolfClassVersion = 0x6;
int g_INT_0060727c = 0x8;
int g_INT_00607288 = -1;
int g_INT_0060728c = 0x1;
int g_INT_00607290 = -1;
int g_CYowClassVersion = 0x1;
int g_CZombieClassVersion = 0xC;
int g_INT_006072a8 = 0x1;
int g_INT_006072ac = 0x1;
int g_INT_006072b0 = 0x1;
int g_INT_006072b4 = 0x1;
int g_INT_006072b8 = 0x1;
int g_CZombiePriestClassVersion = 0x7;
int g_CKedwardClassVersion = 0x4;
int g_CMattanntoteClassVersion = 0x1;
int g_CTawiscaraClassVersion = 0x1;
int g_CBaalClassVersion = 0x1;
int g_CHecaitomixClassVersion = 0x1;
int g_CDarkwolfClassVersion = 0x2;
int g_INT_006073ec = 0x2;
int g_CSpiritEagleClassVersion = 0x2;
int g_CSpiritIndianClassVersion = 0x1;
int g_CSpiritBearClassVersion = 0x1;
int g_CHinoClassVersion = 0x1;
int g_CStylerClassVersion = 0x2;
int g_CStylerDemonClassVersion = 0x1;
int g_CAsgayaClassVersion = 0x1;
int g_INT_006075cc = 0;
int g_INT_00607884 = 0x100;
int g_INT_0060793c = 0;
int g_INT_00607940 = 0;
int g_INT_00607964 = 0;
int g_INT_0060796c = 0;
int g_INT_0060799c = -1;
int g_INT_00607b14 = 0;
int g_INT_00607be0 = 0;
int g_INT_00607be4 = -2147483648;
int g_INT_00607c0c = 0;
int g_INT_00607c10 = 0;
int g_INT_00607c14 = 0x1;
int g_INT_00607d3c = 0x4650;
int g_INT_00607d40 = 0x1;
int g_INT_00607d44 = 0xE10;
int g_INT_00607e0c = 0;
int g_INT_00607e10 = 0x1;
int g_INT_00607e14 = 0x10000;
int g_INT_00607e18 = 0;
int g_INT_00607e80 = -1;
int g_INT_00607e84 = -1;

// int*
int* g_INT_PTR_00604908 = nullptr;
int* g_INT_PTR_0060490c = nullptr;

// int[12]
int g_INT_ARRAY_00603634[12] = {
    -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// int[22]
int g_INT_ARRAY_00601114[22] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000002,
    0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000002, 0x00000000
};

// int[2][16]
int g_INT_ARRAY_ARRAY_006015e8[2][16] = {
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000001, 0x00000001, 0x00000001, 0x00000002, 0x00000002, 0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000004, 0x00000004},
    {0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000003, 0x00000002, 0x00000003}
};

// int[2][3][15]
int g_INT_ARRAY_ARRAY_ARRAY_006011f8[2][3][15] = {
    {{0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0, 0x000000B0, 0x000000C0, 0x000000E0, 0x00000100}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}},
    {{0x00000000, 0x00000020, 0x00000040, 0x00000060, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000120, 0x00000140, 0x00000160, 0x00000180, 0x000001A0, 0x000001C0}, {0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140, 0x00000180}, {0x00000000, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140}}
};

// int[3]
int g_INT_ARRAY_006015dc[3] = {0x00000000, 0x00000006, 0x0000000C};

// int[5]
int g_INT_ARRAY_006015c8[5] = {0x00000000, 0x00000006, 0x0000000B, 0x00000010, 0x00000015};

// int[6][3][4]
int g_INT_ARRAY_ARRAY_ARRAY_006019e0[6][3][4] = {
    {{0x00000006, 0x00000005, 0x00000005, 0x00000005}, {0x00000009, 0x00000009, 0x00000009, 0x00000009}, {0x00000006, 0x00000009, 0x00000009, 0x00000009}},
    {{0x00000006, 0x00000005, 0x00000007, 0x00000003}, {0x00000009, 0x00000009, 0x0000000C, 0x00000006}, {0x00000006, 0x00000009, 0x0000000C, 0x00000006}},
    {{0x0000000B, 0x0000000A, 0x00000000, 0x00000000}, {0x00000012, 0x00000012, 0x00000000, 0x00000000}, {0x0000000F, 0x00000012, 0x00000000, 0x00000000}},
    {{0x00000007, 0x00000007, 0x00000007, 0x00000000}, {0x0000000C, 0x0000000C, 0x0000000C, 0x00000000}, {0x00000006, 0x0000000F, 0x0000000C, 0x00000000}},
    {{0x00000006, 0x00000006, 0x00000006, 0x00000003}, {0x0000000C, 0x00000009, 0x00000009, 0x00000006}, {0x00000006, 0x0000000C, 0x00000009, 0x00000006}},
    {{0x00000008, 0x00000008, 0x00000005, 0x00000000}, {0x0000000F, 0x0000000C, 0x00000009, 0x00000000}, {0x00000006, 0x00000012, 0x00000009, 0x00000000}}
};

// int[96]
int g_INT_ARRAY_00603b3c[96] = {
    0x00000180, 0x00000200, 0x00000180, 0x00000200, 0x00000000, 0x00000080, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};
int g_INT_ARRAY_00603cbc[96] = {
    0x00000000, 0x00000000, 0x00000080, 0x00000080, 0x00000160, 0x00000160, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// int[9]
int g_INT_ARRAY_00603664[9] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000001, -1, 0x00000001, -1, 0x00000001,
    -1
};
int g_INT_ARRAY_00603688[9] = {
    0x00000000, 0x00000001, -1, 0x00000000, 0x00000000, 0x00000001, 0x00000001, -1,
    -1
};

// qword
qword g_QWORD_00604d90 = 0;
qword g_QWORD_00604db0 = 0;
qword g_QWORD_00604df0 = 0;
qword g_QWORD_00604df8 = 0x10;
qword g_QWORD_00604e18 = 0x8;
qword g_QWORD_00604e38 = 0xFF;
qword g_QWORD_00604e58 = 0xFF00;
qword g_QWORD_00604e78 = 0xF80000;
qword g_QWORD_00604e98 = 0xFC00;
qword g_QWORD_00604eb8 = 0xF8;
qword g_QWORD_00604ec0 = 0x8;
qword g_QWORD_00604ee0 = 0x5;
qword g_QWORD_00604f00 = 0x3;

// qword[512]
qword g_QWORD_ARRAY_00605710[512] = {
    0x0000000000000000, 0x0000000100010001, 0x0000000200020002, 0x0000000300030003, 0x0000000400040004, 0x0000000500050005, 0x0000000600060006, 0x0000000700070007,
    0x0000000800080008, 0x0000000900090009, 0x0000000A000A000A, 0x0000000B000B000B, 0x0000000C000C000C, 0x0000000D000D000D, 0x0000000E000E000E, 0x0000000F000F000F,
    0x0000001000100010, 0x0000001100110011, 0x0000001200120012, 0x0000001300130013, 0x0000001400140014, 0x0000001500150015, 0x0000001600160016, 0x0000001700170017,
    0x0000001800180018, 0x0000001900190019, 0x0000001A001A001A, 0x0000001B001B001B, 0x0000001C001C001C, 0x0000001D001D001D, 0x0000001E001E001E, 0x0000001F001F001F,
    0x0000002000200020, 0x0000002100210021, 0x0000002200220022, 0x0000002300230023, 0x0000002400240024, 0x0000002500250025, 0x0000002600260026, 0x0000002700270027,
    0x0000002800280028, 0x0000002900290029, 0x0000002A002A002A, 0x0000002B002B002B, 0x0000002C002C002C, 0x0000002D002D002D, 0x0000002E002E002E, 0x0000002F002F002F,
    0x0000003000300030, 0x0000003100310031, 0x0000003200320032, 0x0000003300330033, 0x0000003400340034, 0x0000003500350035, 0x0000003600360036, 0x0000003700370037,
    0x0000003800380038, 0x0000003900390039, 0x0000003A003A003A, 0x0000003B003B003B, 0x0000003C003C003C, 0x0000003D003D003D, 0x0000003E003E003E, 0x0000003F003F003F,
    0x0000004000400040, 0x0000004100410041, 0x0000004200420042, 0x0000004300430043, 0x0000004400440044, 0x0000004500450045, 0x0000004600460046, 0x0000004700470047,
    0x0000004800480048, 0x0000004900490049, 0x0000004A004A004A, 0x0000004B004B004B, 0x0000004C004C004C, 0x0000004D004D004D, 0x0000004E004E004E, 0x0000004F004F004F,
    0x0000005000500050, 0x0000005100510051, 0x0000005200520052, 0x0000005300530053, 0x0000005400540054, 0x0000005500550055, 0x0000005600560056, 0x0000005700570057,
    0x0000005800580058, 0x0000005900590059, 0x0000005A005A005A, 0x0000005B005B005B, 0x0000005C005C005C, 0x0000005D005D005D, 0x0000005E005E005E, 0x0000005F005F005F,
    0x0000006000600060, 0x0000006100610061, 0x0000006200620062, 0x0000006300630063, 0x0000006400640064, 0x0000006500650065, 0x0000006600660066, 0x0000006700670067,
    0x0000006800680068, 0x0000006900690069, 0x0000006A006A006A, 0x0000006B006B006B, 0x0000006C006C006C, 0x0000006D006D006D, 0x0000006E006E006E, 0x0000006F006F006F,
    0x0000007000700070, 0x0000007100710071, 0x0000007200720072, 0x0000007300730073, 0x0000007400740074, 0x0000007500750075, 0x0000007600760076, 0x0000007700770077,
    0x0000007800780078, 0x0000007900790079, 0x0000007A007A007A, 0x0000007B007B007B, 0x0000007C007C007C, 0x0000007D007D007D, 0x0000007E007E007E, 0x0000007F007F007F,
    0x0000008000800080, 0x0000008100810081, 0x0000008200820082, 0x0000008300830083, 0x0000008400840084, 0x0000008500850085, 0x0000008600860086, 0x0000008700870087,
    0x0000008800880088, 0x0000008900890089, 0x0000008A008A008A, 0x0000008B008B008B, 0x0000008C008C008C, 0x0000008D008D008D, 0x0000008E008E008E, 0x0000008F008F008F,
    0x0000009000900090, 0x0000009100910091, 0x0000009200920092, 0x0000009300930093, 0x0000009400940094, 0x0000009500950095, 0x0000009600960096, 0x0000009700970097,
    0x0000009800980098, 0x0000009900990099, 0x0000009A009A009A, 0x0000009B009B009B, 0x0000009C009C009C, 0x0000009D009D009D, 0x0000009E009E009E, 0x0000009F009F009F,
    0x000000A000A000A0, 0x000000A100A100A1, 0x000000A200A200A2, 0x000000A300A300A3, 0x000000A400A400A4, 0x000000A500A500A5, 0x000000A600A600A6, 0x000000A700A700A7,
    0x000000A800A800A8, 0x000000A900A900A9, 0x000000AA00AA00AA, 0x000000AB00AB00AB, 0x000000AC00AC00AC, 0x000000AD00AD00AD, 0x000000AE00AE00AE, 0x000000AF00AF00AF,
    0x000000B000B000B0, 0x000000B100B100B1, 0x000000B200B200B2, 0x000000B300B300B3, 0x000000B400B400B4, 0x000000B500B500B5, 0x000000B600B600B6, 0x000000B700B700B7,
    0x000000B800B800B8, 0x000000B900B900B9, 0x000000BA00BA00BA, 0x000000BB00BB00BB, 0x000000BC00BC00BC, 0x000000BD00BD00BD, 0x000000BE00BE00BE, 0x000000BF00BF00BF,
    0x000000C000C000C0, 0x000000C100C100C1, 0x000000C200C200C2, 0x000000C300C300C3, 0x000000C400C400C4, 0x000000C500C500C5, 0x000000C600C600C6, 0x000000C700C700C7,
    0x000000C800C800C8, 0x000000C900C900C9, 0x000000CA00CA00CA, 0x000000CB00CB00CB, 0x000000CC00CC00CC, 0x000000CD00CD00CD, 0x000000CE00CE00CE, 0x000000CF00CF00CF,
    0x000000D000D000D0, 0x000000D100D100D1, 0x000000D200D200D2, 0x000000D300D300D3, 0x000000D400D400D4, 0x000000D500D500D5, 0x000000D600D600D6, 0x000000D700D700D7,
    0x000000D800D800D8, 0x000000D900D900D9, 0x000000DA00DA00DA, 0x000000DB00DB00DB, 0x000000DC00DC00DC, 0x000000DD00DD00DD, 0x000000DE00DE00DE, 0x000000DF00DF00DF,
    0x000000E000E000E0, 0x000000E100E100E1, 0x000000E200E200E2, 0x000000E300E300E3, 0x000000E400E400E4, 0x000000E500E500E5, 0x000000E600E600E6, 0x000000E700E700E7,
    0x000000E800E800E8, 0x000000E900E900E9, 0x000000EA00EA00EA, 0x000000EB00EB00EB, 0x000000EC00EC00EC, 0x000000ED00ED00ED, 0x000000EE00EE00EE, 0x000000EF00EF00EF,
    0x000000F000F000F0, 0x000000F100F100F1, 0x000000F200F200F2, 0x000000F300F300F3, 0x000000F400F400F4, 0x000000F500F500F5, 0x000000F600F600F6, 0x000000F700F700F7,
    0x000000F800F800F8, 0x000000F900F900F9, 0x000000FA00FA00FA, 0x000000FB00FB00FB, 0x000000FC00FC00FC, 0x000000FD00FD00FD, 0x000000FE00FE00FE, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF,
    0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF, 0x000000FF00FF00FF
};

// short
short g_SHORT_00607985 = 0;
short g_SHORT_00607b0c = 0;

// uchar
uchar g_UCHAR_00600698 = 0x0A;
uchar g_UCHAR_00600699 = '\0';
uchar g_UCHAR_0060069a = 'J';
uchar g_UCHAR_0060069c = '\0';
uchar g_UCHAR_006006a1 = '\0';

// uint
uint g_UINT_0060069d = 0;
uint g_UINT_00607987 = 0;
uint g_UINT_0060798b = 0;
uint g_UINT_0060798f = 0;
uint g_UINT_00607993 = 0;
uint g_UINT_00607b84 = 0x14;
uint g_UINT_00607e7c = 0x1;

// uint*
uint* g_UINT_PTR_00607960 = nullptr;

// uint[18]
uint g_UINT_ARRAY_00601580[18] = {
    0x00000000, 0x00000001, 0x00000003, 0x00000007, 0x0000000F, 0x0000001F, 0x0000003F, 0x0000007F,
    0x000000FF, 0x000000FF, 0x000000FE, 0x000000FC, 0x000000F8, 0x000000F0, 0x000000E0, 0x000000C0,
    0x00000080, 0x00000000
};

// uint[8]
uint g_UINT_ARRAY_00601560[8] = {0x00000001, 0x00000002, 0x00000004, 0x00000008, 0x00000010, 0x00000020, 0x00000040, 0x00000080};

// ulong
ulong g_ULONG_00607e78 = 0xF4;

// undefined1
undefined1 DAT_00607a07 = 0x00;

// undefined4
undefined4 DAT_00603ef8 = 0x00000000;
undefined4 DAT_00603efc = 0x00000000;
undefined4 DAT_00603f00 = 0x00000000;
undefined4 DAT_00603f04 = 0x00000000;
undefined4 DAT_00603f40 = 0x00000000;
undefined4 DAT_00603f44 = 0x00000000;
undefined4 DAT_00603f48 = 0x00000000;
undefined4 DAT_00604368 = 0x00000000;
undefined4 DAT_0060436c = 0x00000000;
undefined4 DAT_00604818 = 0x00000000;
undefined4 DAT_0060481c = 0x00000000;
undefined4 DAT_00606980 = 0x00000000;
undefined4 DAT_00606984 = 0x00000000;
undefined4 DAT_0060789c = 0x00000000;
undefined4 DAT_00607c08 = 0x00000000;
undefined4 DAT_00607c24 = 0x00000000;
undefined4 DAT_00607c28 = 0x00000000;
undefined4 DAT_00607c2c = 0x00000000;

// ushort
ushort g_USHORT_006004b8 = 0;

// void*
void* g_PTR_00606840 = (void*)0x02CF5FE0; // DAT_02cf5fe0
void* g_PTR_00607968 = nullptr;
void* g_PTR_00607997 = (void*)crt_unknown_c_FUN_005a7e24;
void* g_PTR_006079e8 = nullptr;
void* g_PTR_00607b18 = nullptr;
void* g_PTR_00607b1c = nullptr;
void* g_PTR_00607b20 = nullptr;
void* g_PTR_00607b24 = nullptr;
void* g_PTR_00607b40 = nullptr;
void* g_PTR_00607b44 = nullptr;
void* g_PTR_00607b4c = nullptr;
void* g_PTR_00607b54 = nullptr;
void* g_PTR_00607b58 = nullptr;
void* g_PTR_00607df0 = nullptr;
void* g_PTR_00607df4 = nullptr;
void* g_PTR_00607f14 = (void*)crt_unknown_c_FUN_005b1840;
void* g_PTR_00607f18 = (void*)crt_unknown_c_FUN_005b1938;
void* g_PTR_00609f14 = (void*)crt_unknown_c_FUN_005aa62d;
void* g_PTR_0060b010 = {};

// void*[2]
void* g_ARRAY_PTR_00607dd8[2] = {(void*)crt_unknown_c_FUN_005ad750, (void*)crt_unknown_c_FUN_005ad750};

// void*[4]
void* g_ARRAY_PTR_00607928[4] = {(void*)crt_unknown_c_FUN_005a7d7f, (void*)crt_unknown_c_FUN_005a7d7f, (void*)crt_unknown_c_FUN_005a7d7f, (void*)crt_unknown_c_FUN_005a7d7f};

// void*[8]
void* g_ARRAY_PTR_0060a024[8] = {
    (void*)crt_unknown_c_FUN_005af4b0, (void*)crt_unknown_c_FUN_005af4bb, (void*)crt_unknown_c_FUN_005af4c8, (void*)crt_unknown_c_FUN_005af4db,
    (void*)crt_unknown_c_FUN_005af4f0, (void*)crt_unknown_c_FUN_005af503, (void*)crt_unknown_c_FUN_005af518, (void*)crt_unknown_c_FUN_005af52b
};

