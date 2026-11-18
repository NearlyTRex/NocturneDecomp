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

// CSound*
CSound* g_CSound_PTR_006236b8 = (CSound*)&g_CSoundInstance;

// CTerrain*
CTerrain* g_CTerrainPtr = (CTerrain*)&g_CTerrainInstance;

// CTextureList*
CTextureList* g_CTextureListPtr = (CTextureList*)&g_CTextureListInstance;

// CVector3i
CVector3i g_GlobalLightDirection = {
    .x = 0x00000000,
    .y = -46333,
    .z = 0x0000B4FD
};

// CWater*
CWater* g_CWaterPtr = (CWater*)&g_CWaterInstance;

// CWeather*
CWeather* g_CWeatherPtr = (CWeather*)&g_CWeatherInstance;

// GUID
GUID g_IID_IKsPropertySet = {0x31EFAC30, 0x515C, 0x11D0, {0xA9, 0xAA, 0x00, 0xAA, 0x00, 0x61, 0xBE, 0x93}};
GUID g_DSPROPSETID_VoiceManager = {0x62A69BAE, 0xDF9D, 0x11D1, {0x99, 0xA6, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x46}};
GUID g_DSPROPSETID_EAX_ReverbProperties = {0x4A4E6FC1, 0xC341, 0x11D1, {0xB7, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00}};
GUID g_IID_IDirectSound3DBuffer = {0x279AFA86, 0x4981, 0x11CE, {0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60}};
GUID g_IID_IDirectSound3DListener = {0x279AFA84, 0x4981, 0x11CE, {0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60}};

// Heap*
Heap* g_MainHeap = nullptr;
Heap* g_SecondaryHeap = nullptr;

// RuntimeHandlerEntry
RuntimeHandlerEntry g_ExitHandlerTableEnd = {
    .status = 0x00,
    .priority = 0x00,
    .func = (RUNTIME_HANDLER_FUNC *)0xF8BC0000
};

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
        .func = (RUNTIME_HANDLER_FUNC *)core_djien_cpp_staticInit_FUN_00462450
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
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_004b9ab0
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
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_005774f0
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

// SAudioFormatDescriptor[12]
SAudioFormatDescriptor g_WaveInFormatTable[12] = {
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
SHuffmanTableSource g_HuffmanTableSources[34] = {
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
        .huffman_data_ptr = (char *)0x00620C30
    },
    {
        .table_size = 0x00000011,
        .xlen = 0x00000003,
        .ylen = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00620C40
    },
    {
        .table_size = 0x00000011,
        .xlen = 0x00000003,
        .ylen = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00620C68
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
        .huffman_data_ptr = (char *)0x00620C90
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000004,
        .ylen = 0x00000004,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00620CD0
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00620D10
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00620DA0
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00620E30
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00620EC0
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00620FC0
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x006210C0
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x006211C0
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
        .huffman_data_ptr = (char *)0x006215C0
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000001,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x006219C0
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
        .huffman_data_ptr = (char *)0x00621DC0
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
        .huffman_data_ptr = (char *)0x006221C0
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000001,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00622200
    }
};

// SIGNAL_HANDLER_TYPE[26]
SIGNAL_HANDLER_TYPE g_GlobalSignalHandlers[26] = {
    0x00000001, -1, 0x00000002, -1, 0x00000001, -1, 0x00000002, -1073741795,
    0x00000002, -1073741510, 0x00000002, -1073741819, 0x00000002, -1073741510, 0x00000002, -1073741510,
    0x00000001, -1, 0x00000001, -1, 0x00000001, -1, 0x00000002, -1073741676,
    0x00000001, -1073741675
};

// SIOControlBlock*
SIOControlBlock* g_IOControlBlock = nullptr;

// SMRGLPrimitiveQuad
SMRGLPrimitiveQuad g_WaterRenderQuad = {
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
SMRGLTextureBasic g_PathMapTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_EnvMapTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BACKGND.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_0062318c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_006231a8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};
SMRGLTextureBasic g_RainDropTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINDRP1.RAW"
};
SMRGLTextureBasic g_RainSplashTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINSPLT.RAW"
};
SMRGLTextureBasic g_SnowflakeTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SNOWFLKE.RAW"
};
SMRGLTextureBasic g_WerewolfEyeGlowTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};

// SMRGLTextureBasic[16]
SMRGLTextureBasic g_WaterTextures[16] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER0.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER4.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER5.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER6.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER7.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER8.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER9.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER15.RAW"
    }
};
SMRGLTextureBasic g_WaterActorTextures[16] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER0.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER4.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER5.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER6.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER7.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER8.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER9.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "WATER15.RAW"
    }
};

// SMpegLayer3BandIndex[6]
SMpegLayer3BandIndex g_Layer3BandIndex[6] = {
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
SRenderVertex g_SRenderVertex_ARRAY_00629014[20000] = {};

// SReverbPreset[27]
SReverbPreset g_ReverbPresetTable[27] = {
    {
        .name = (char *)s_OFF_005f5b65,
        .reverb = {
            .volume = 0.0f,
            .decay_time = 0.0f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_GENERIC_005f5b69,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 1.493f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_PADDEDCELL_005f5b71,
        .reverb = {
            .volume = 0.25f,
            .decay_time = 0.1f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)0x005F5B7C,
        .reverb = {
            .volume = 0.417f,
            .decay_time = 0.40000001f,
            .damping = 0.66600001f
        }
    },
    {
        .name = (char *)s_BATHROOM_005f5b81,
        .reverb = {
            .volume = 0.653f,
            .decay_time = 1.499f,
            .damping = 0.16599999f
        }
    },
    {
        .name = (char *)s_LIVINGROOM_005f5b8a,
        .reverb = {
            .volume = 0.208f,
            .decay_time = 0.47799999f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_STONEROOM_005f5b95,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 2.309f,
            .damping = 0.88800001f
        }
    },
    {
        .name = (char *)s_AUDITORIUM_005f5b9f,
        .reverb = {
            .volume = 0.403f,
            .decay_time = 4.2789998f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_CONCERTHALL_005f5baa,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 3.961f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)0x005F5BB6,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 2.8859999f,
            .damping = 1.304f
        }
    },
    {
        .name = (char *)s_ARENA_005f5bbb,
        .reverb = {
            .volume = 0.361f,
            .decay_time = 7.2839999f,
            .damping = 0.33199999f
        }
    },
    {
        .name = (char *)s_HANGAR_005f5bc1,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 10.0f,
            .damping = 0.30000001f
        }
    },
    {
        .name = (char *)s_CARPETEDHALLWAY_005f5bc8,
        .reverb = {
            .volume = 0.153f,
            .decay_time = 0.259f,
            .damping = 2.0f
        }
    },
    {
        .name = (char *)s_HALLWAY_005f5bd8,
        .reverb = {
            .volume = 0.361f,
            .decay_time = 1.493f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_STONECORRIDOR_005f5be0,
        .reverb = {
            .volume = 0.44400001f,
            .decay_time = 2.697f,
            .damping = 0.63800001f
        }
    },
    {
        .name = (char *)s_ALLEY_005f5bee,
        .reverb = {
            .volume = 0.25f,
            .decay_time = 1.752f,
            .damping = 0.77600002f
        }
    },
    {
        .name = (char *)s_FOREST_005f5bf4,
        .reverb = {
            .volume = 0.111f,
            .decay_time = 3.145f,
            .damping = 0.472f
        }
    },
    {
        .name = (char *)0x005F5BFB,
        .reverb = {
            .volume = 0.111f,
            .decay_time = 2.767f,
            .damping = 0.22400001f
        }
    },
    {
        .name = (char *)s_MOUNTAINS_005f5c00,
        .reverb = {
            .volume = 0.19400001f,
            .decay_time = 7.8410001f,
            .damping = 0.472f
        }
    },
    {
        .name = (char *)s_QUARRY_005f5c0a,
        .reverb = {
            .volume = 1.0f,
            .decay_time = 1.499f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_PLAIN_005f5c11,
        .reverb = {
            .volume = 0.097000003f,
            .decay_time = 2.767f,
            .damping = 0.22400001f
        }
    },
    {
        .name = (char *)s_PARKINGLOT_005f5c17,
        .reverb = {
            .volume = 0.208f,
            .decay_time = 1.652f,
            .damping = 1.5f
        }
    },
    {
        .name = (char *)s_SEWERPIPE_005f5c22,
        .reverb = {
            .volume = 0.65200001f,
            .decay_time = 2.8859999f,
            .damping = 0.25f
        }
    },
    {
        .name = (char *)s_UNDERWATER_005f5c2c,
        .reverb = {
            .volume = 1.0f,
            .decay_time = 1.499f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_DRUGGED_005f5c37,
        .reverb = {
            .volume = 0.875f,
            .decay_time = 8.3920002f,
            .damping = 1.388f
        }
    },
    {
        .name = (char *)0x005F5C3F,
        .reverb = {
            .volume = 0.139f,
            .decay_time = 17.233999f,
            .damping = 0.66600001f
        }
    },
    {
        .name = (char *)s_PSYCHOTIC_005f5c45,
        .reverb = {
            .volume = 0.486f,
            .decay_time = 7.5630002f,
            .damping = 0.80599999f
        }
    }
};

// TerminatedCString
TerminatedCString s_EST_0062688c = "EST";
TerminatedCString s_EDT_0062690d = "EDT";

// WCHAR*
WCHAR* g_CommandLineArgsW = nullptr;
WCHAR* g_ExeFileNameW = nullptr;
WCHAR* g_DllFileNameW = nullptr;

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

// WatcomStaticDestructorNode*
WatcomStaticDestructorNode* g_AtexitListHead = nullptr;

// _FILE
_FILE g_StdoutLogFile = {
    ._ptr = nullptr,
    ._cnt = 0x00000000,
    ._link = nullptr,
    ._flag = 0x00000002,
    ._handle = 0x00000001,
    ._bufsize = 0x00000000,
    ._ungotten = 0x0000
};
_FILE g_FILE_00626308 = {
    ._ptr = nullptr,
    ._cnt = 0x00000000,
    ._link = nullptr,
    ._flag = 0x00000002,
    ._handle = 0x00000002,
    ._bufsize = 0x00000000,
    ._ungotten = 0x0000
};

// _FILE*
_FILE* g_StaticFilePoolStart = nullptr;

// _MMX_INTEGER
_MMX_INTEGER g_VertexGreenStart = {};
_MMX_INTEGER g_VertexBlueStart = {};
_MMX_INTEGER g_VertexGreenDelta = {};
_MMX_INTEGER g_VertexBlueDelta = {};
_MMX_INTEGER g_RedMask16 = {0x000000000000F800ULL};
_MMX_INTEGER g_GreenMask16 = {0x00000000000007E0ULL};
_MMX_INTEGER g_BlueMask16 = {0x000000000000001FULL};

// byte
byte g_BYTE_0062621c = 0;
byte g_BYTE_0062621d = 0;
byte g_WindowsMinorVersion = 0;
byte g_BYTE_006265e0 = 0;
byte g_UseSoftwareMath = 0;
byte g_TimezoneInitFlags = 0x1;
byte g_DebuggerIsAttached = 0;
byte g_ConsoleHandlerRegistered = 0;

// byte[16]
byte g_IEEE754ExponentClassTable[16] = {0x00, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x0D, 0x00, 0x00};

// char*
char* g_ExeFileNameA = nullptr;
char* g_DllFileNameA = nullptr;
char* g_EnvironmentStrings = nullptr;

// char[104]
char g_SoundResultBufferTemplate[104] = "";

// char[128]
char g_OSFontName[128] = {
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

// char[200]
char g_ActorRefDefaultBuffer[200] = "";

// char[256]
char g_DefaultSoundDeviceName[256] = "";
char g_DefaultDeviceName[256] = "";
char g_CHAR_ARRAY_006257d0[256] = "trid3d.dll";

// char[260]
char g_TempDirectoryBuffer[260] = "";

// double
double g_BufferFillZeroQword = 0;
double g_BufferFillFpuPopST0 = 0;

// dst_rule
dst_rule g_DstStartRule = {
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
float g_FLOAT_00623304 = 1.0f;
float g_FLOAT_00623308 = 1.0f;
float g_MaxSoftwareLatency = 0.5f;
float g_FLOAT_00625c94 = 0.25f;

// int
int g_MpegSynthesisTableInitialized = 0x1;
int g_Mp3AntiAliasInitialized = 0x1;
int g_Mp3SynthesisTablesInitialized = 0x1;
int g_NetLobbyStateChanged = 0x1;
int g_CNPCClassVersion = 0x6;
int g_CPassengerClassVersion = 0x6;
int g_CPendulumClassVersion = 0x8;
int g_CPlatformClassVersion = 0xB;
int g_MaxViewportScanline = 0x4B0;
int g_CRifleClassVersion = 0x1;
int g_CScatClassVersion = 0x1;
int g_CSentinelClassVersion = 0x2;
int g_RenderMirrorsFlag = 0x1;
int g_CShadowClassVersion = 0x2;
int g_CShadowscClassVersion = 0x1;
int g_CShotgunClassVersion = 0x1;
int g_CShovelClassVersion = 0x1;
int g_CSimBoxClassVersion = 0x3;
int g_INT_00623224 = 0x4;
int g_INT_00623228 = 0x7;
int g_CSmileyClassVersion = 0x1;
int g_INT_006232d0 = 0x1;
int g_MaxSoundChannels = 0x20;
int g_AudioBitsPerSample = 0x10;
int g_AudioChannelCount = 0x2;
int g_AudioSampleRate = 0x5622;
int g_SoundDeviceCount = -1;
int g_CurrentSoundDevice = -1;
int g_INT_00623300 = 0x2;
int g_MinimumSoundMemoryBudget = 0x200000;
int g_MaximumSoundMemoryBudget = 0x400000;
int g_RecordingDeviceCount = -1;
int g_CurrentRecordingDevice = -1;
int g_RecordingBitsPerSample = 0x8;
int g_RecordingChannelCount = 0x1;
int g_RecordingSampleRate = 0x2B11;
int g_DirectSoundDeviceCount = -1;
int g_WaveOutDeviceID = -1;
int g_WaveInDeviceID = -1;
int g_ScanlinePixelCount = 0;
int g_StartTextureU = 0;
int g_StartTextureV = 0;
int g_StartDepthW = 0;
int g_HardwareDeltaTextureU = 0;
int g_HardwareDeltaTextureV = 0;
int g_HardwareDeltaDepthZ = 0;
int g_INT_00623df4 = 0;
int g_INT_00623df8 = 0;
int g_INT_00623dfc = 0;
int g_INT_00623e00 = 0;
int g_INT_00623e28 = 0;
int g_INT_00623e2c = 0;
int g_INT_00623e30 = 0;
int g_INT_00623e38 = 0;
int g_INT_00623e3c = 0;
int g_INT_00623e40 = 0;
int g_VertexAlphaStart = 0;
int g_VertexAlphaDelta = 0;
int g_INT_00623ea0 = 0;
int g_INT_00623ea8 = 0;
int g_SpecialColor = 0xFFFFFF;
int g_INT_006258d0 = 0x1;
int g_FullScreenQuadDepth = 0x3C000;
int g_CSpikeClassVersion = 0x1;
int g_CStairsClassVersion = 0x2;
int g_CTempleStoneClassVersion = 0x1;
int g_CStrangerClassVersion = 0x9;
int g_CSuccubusClassVersion = 0x1;
int g_CSvetlanaClassVersion = 0x1;
int g_CBassPlayerClassVersion = 0x1;
int g_INT_00625994 = 0x1;
int g_CTeleportDestClassVersion = 0x1;
int g_INT_006259c0 = 0x1;
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
int g_INT_00625c98 = 0x2000;
int g_CWaterActorClassVersion = 0x6;
int g_CWayPointClassVersion = 0x2;
int g_CWeaponClassVersion = 0x7;
int g_CWerewolfClassVersion = 0x6;
int g_BrightnessDirection = 0x8;
int g_WindowActive = -1;
int g_ForceMessagePump = 0x1;
int g_INT_006260ec = -1;
int g_CYowClassVersion = 0x1;
int g_CZombieClassVersion = 0xB;
int g_INT_00626228 = 0;
int g_INT_006264e0 = 0x100;
int g_INT_00626598 = 0;
int g_WinMainCmdShow = 0;
int g_StackAllocSize = 0;
int g_ConsoleInitializationFlag = 0;
int g_INT_006265f8 = -1;
int g_INT_00626770 = 0;
int g_INT_0062683c = 0;
int g_INT_00626840 = -2147483648;
int g_DstTransitionSecond = 0;
int g_DstTransitionMinute = 0;
int g_DstTransitionHour = 0x1;
int g_TimezoneOffset = 0x4650;
int g_DaylightSavingActive = 0x1;
int g_DaylightSavingOffset = 0xE10;
int g_ConsoleInputState = 0;
int g_INT_00626a6c = 0x1;
int g_HeapFlags = 0x10000;
int g_INT_00626a74 = 0;
int g_ConsoleInputHandle = -1;
int g_ConsoleOutputHandle = -1;

// int*
int* g_CurrentScreenPtr = nullptr;
int* g_CurrentZBufferPtr = nullptr;

// int[12]
int g_PathMapLRUCounters[12] = {
    -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// int[22]
int g_Layer3Pretab[22] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000002,
    0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000002, 0x00000000
};

// int[2][16]
int g_Layer3ScalefacLengths[2][16] = {
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000001, 0x00000001, 0x00000001, 0x00000002, 0x00000002, 0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000004, 0x00000004},
    {0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000003, 0x00000002, 0x00000003}
};

// int[2][3][15]
int g_MpegBitrateTable[2][3][15] = {
    {{0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0, 0x000000B0, 0x000000C0, 0x000000E0, 0x00000100}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}},
    {{0x00000000, 0x00000020, 0x00000040, 0x00000060, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000120, 0x00000140, 0x00000160, 0x00000180, 0x000001A0, 0x000001C0}, {0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140, 0x00000180}, {0x00000000, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140}}
};

// int[3]
int g_Layer3ShortBandGroupCounts[3] = {0x00000000, 0x00000006, 0x0000000C};

// int[5]
int g_Layer3LongBandGroupCounts[5] = {0x00000000, 0x00000006, 0x0000000B, 0x00000010, 0x00000015};

// int[6][3][4]
int g_Layer3ScalefactorBandCounts[6][3][4] = {
    {{0x00000006, 0x00000005, 0x00000005, 0x00000005}, {0x00000009, 0x00000009, 0x00000009, 0x00000009}, {0x00000006, 0x00000009, 0x00000009, 0x00000009}},
    {{0x00000006, 0x00000005, 0x00000007, 0x00000003}, {0x00000009, 0x00000009, 0x0000000C, 0x00000006}, {0x00000006, 0x00000009, 0x0000000C, 0x00000006}},
    {{0x0000000B, 0x0000000A, 0x00000000, 0x00000000}, {0x00000012, 0x00000012, 0x00000000, 0x00000000}, {0x0000000F, 0x00000012, 0x00000000, 0x00000000}},
    {{0x00000007, 0x00000007, 0x00000007, 0x00000000}, {0x0000000C, 0x0000000C, 0x0000000C, 0x00000000}, {0x00000006, 0x0000000F, 0x0000000C, 0x00000000}},
    {{0x00000006, 0x00000006, 0x00000006, 0x00000003}, {0x0000000C, 0x00000009, 0x00000009, 0x00000006}, {0x00000006, 0x0000000C, 0x00000009, 0x00000006}},
    {{0x00000008, 0x00000008, 0x00000005, 0x00000000}, {0x0000000F, 0x0000000C, 0x00000009, 0x00000000}, {0x00000006, 0x00000012, 0x00000009, 0x00000000}}
};

// int[96]
int g_LightDebugScreenX[96] = {
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
int g_LightDebugScreenY[96] = {
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
int g_PathfindingDeltaX[9] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000001, -1, 0x00000001, -1, 0x00000001,
    -1
};
int g_PathfindingDeltaZ[9] = {
    0x00000000, 0x00000001, -1, 0x00000000, 0x00000000, 0x00000001, 0x00000001, -1,
    -1
};

// qword
qword g_VertexRedStart = 0;
qword g_VertexRedDelta = 0;
qword g_QWORD_00623eb0 = 0;
qword g_TextureShift1 = 0x10;
qword g_TextureShift2 = 0x8;
qword g_TextureMask1 = 0xFF;
qword g_TextureMask2 = 0xFF00;
qword g_RedMask32 = 0xF80000;
qword g_GreenMask32 = 0xFC00;
qword g_BlueMask32 = 0xF8;
qword g_TotalDitherShift = 0x8;
qword g_GreenBlueDitherShift = 0x5;
qword g_BlueBitShift = 0x3;

// qword[512]
qword g_QWORD_ARRAY_006247d0[512] = {
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
short g_WindowsPlatformVersion = 0;
short g_PureVirtualCallFlag = 0;

// uint
uint g_WindowsPlatformVersionExt = 0;
uint g_WindowsVersionLow = 0;
uint g_WindowsVersionMid = 0;
uint g_WindowsVersionCombined = 0;
uint g_MaxHandleCount = 0x14;
uint g_CodePage = 0x1;

// uint*
uint* g_HeapBound = nullptr;

// uint[18]
uint g_MpegBitMaskTableMultiBit[18] = {
    0x00000000, 0x00000001, 0x00000003, 0x00000007, 0x0000000F, 0x0000001F, 0x0000003F, 0x0000007F,
    0x000000FF, 0x000000FF, 0x000000FE, 0x000000FC, 0x000000F8, 0x000000F0, 0x000000E0, 0x000000C0,
    0x00000080, 0x00000000
};

// uint[8]
uint g_MpegBitMaskTableSingleBit[8] = {0x00000001, 0x00000002, 0x00000004, 0x00000008, 0x00000010, 0x00000020, 0x00000040, 0x00000080};

// ulong
ulong g_RuntimeBufferSize = 0xF4;

// undefined1
undefined1 DAT_00626663 = 0x00;

// undefined4
undefined4 DAT_00622fe8 = 0x00000000;
undefined4 DAT_00622fec = 0x00000000;
undefined4 DAT_00622ff0 = 0x00000000;
undefined4 DAT_00622ff4 = 0x00000000;
undefined4 DAT_00623030 = 0x00000000;
undefined4 DAT_00623034 = 0x00000000;
undefined4 DAT_00623038 = 0x00000000;
undefined4 DAT_006238d8 = 0x00000000;
undefined4 DAT_006238dc = 0x00000000;
undefined4 DAT_00625aa0 = 0x00000000;
undefined4 DAT_00625aa4 = 0x00000000;
undefined4 DAT_006264f8 = 0x00000000;
undefined4 DAT_00626864 = 0x00000000;
undefined4 DAT_00626880 = 0x00000000;
undefined4 DAT_00626884 = 0x00000000;
undefined4 DAT_00626888 = 0x00000000;

// void*
void* g_PTR_006258e0 = (void*)0x02C83384; // DAT_02c83384
void* g_CrtStackBuffer = nullptr;
void* g_PTR_006265f3 = (void*)crt_unknown_c_FUN_005c4fb4;
void* g_SpecialExitHandler = nullptr;
void* g_IsSpecialDeviceFuncPtr = nullptr;
void* g_SpecialDeviceCleanupFunc = nullptr;
void* g_PTR_0062677c = nullptr;
void* g_SpecialDeviceCloseFunc = nullptr;
void* g_PTR_0062679c = nullptr;
void* g_SpecialDeviceWriteFuncPtr = nullptr;
void* g_SpecialConsoleInputHandler = nullptr;
void* g_SpecialConsoleOutputHandler = nullptr;
void* g_PTR_006267b4 = nullptr;
void* g_UserExceptionFilter = nullptr;
void* g_ExceptionCleanup = nullptr;
void* g_PTR_00626b70 = (void*)crt_unknown_c_FUN_005ceab0;
void* g_PTR_00626b74 = (void*)crt_unknown_c_FUN_005ceba8;
void* g_PTR_00626b78 = (void*)crt_unknown_c_FUN_005cdfd0;
void* g_PTR_00628bcc = (void*)crt_unknown_c_FUN_005c77bd;
void* g_PTR_00629010 = {};

// void*[2]
void* g_ARRAY_PTR_00626a34[2] = {(void*)crt_unknown_c_FUN_005ca8e0, (void*)crt_unknown_c_FUN_005ca8e0};

// void*[4]
void* g_ARRAY_PTR_00626584[4] = {(void*)crt_unknown_c_FUN_005c4f0f, (void*)crt_unknown_c_FUN_005c4f0f, (void*)crt_unknown_c_FUN_005c4f0f, (void*)crt_unknown_c_FUN_005c4f0f};

// void*[8]
void* g_ARRAY_PTR_00628cdc[8] = {
    (void*)crt_unknown_c_FUN_005cc0d0, (void*)crt_unknown_c_FUN_005cc0db, (void*)crt_unknown_c_FUN_005cc0e8, (void*)crt_unknown_c_FUN_005cc0fb,
    (void*)crt_unknown_c_FUN_005cc110, (void*)crt_unknown_c_FUN_005cc123, (void*)crt_unknown_c_FUN_005cc138, (void*)crt_unknown_c_FUN_005cc14b
};

