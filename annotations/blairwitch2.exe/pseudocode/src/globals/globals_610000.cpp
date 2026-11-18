#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x610000
// =============================================================================

// CDemonMission*
CDemonMission* g_CDemonMission_PTR_00618170 = (CDemonMission*)0x01D182F0; // DAT_01d182f0

// CDemonPod*
CDemonPod* g_CDemonPodPtr = (CDemonPod*)&g_CDemonPodInstance;

// CDemonSet*
CDemonSet* g_CDemonSetPtr = (CDemonSet*)&g_CDemonSetInstance;

// CEditorTools*
CEditorTools* g_CEditorToolsPtr = (CEditorTools*)&g_CEditorToolsInstance;

// CEventList*
CEventList* g_CEventListPtr = (CEventList*)&g_CEventList_01c38bc0;

// CFieldNotes*
CFieldNotes* g_CFieldNotesPtr = (CFieldNotes*)&g_CFieldNotesInstance;

// CFireEffect*
CFireEffect* g_CFireEffectPtr = (CFireEffect*)&g_CFireEffect_01c3deb4;

// CGame*
CGame* g_CGamePtr = (CGame*)&g_CGameInstance;

// CGameHook*
CGameHook* g_CGameHookPtr = (CGameHook*)&g_CGameHookInstance;

// CGore*
CGore* g_CGorePtr = (CGore*)&g_CGoreInstance;

// CGround*
CGround* g_CGroundPtr = (CGround*)&g_CGroundInstance;

// CKeys*
CKeys* g_CKeysPtr = (CKeys*)&g_PTR_01d02f84;

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

// CSimpleParticleSystem*
CSimpleParticleSystem* g_CSimpleParticleSystemPtr = (CSimpleParticleSystem*)&g_CSimpleParticleSystemInstance;

// CSound*
CSound* g_CSound_PTR_0061c068 = (CSound*)&g_CSoundInstance;

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

// Heap*
Heap* g_MainHeap = nullptr;
Heap* g_SecondaryHeap = nullptr;

// RuntimeHandlerEntry
RuntimeHandlerEntry g_ExitHandlerTableEnd = {
    .status = 0x00,
    .priority = 0x00,
    .func = (RUNTIME_HANDLER_FUNC *)0x0EE00000
};

// RuntimeHandlerEntry[203]
RuntimeHandlerEntry g_InitHandlers[203] = {
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_actor_cpp_staticInit_FUN_00408270
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammo_cpp_staticInit_FUN_0040dd50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammobox_cpp_staticInit_FUN_0040e4b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_anvil_cpp_staticInit_FUN_0040e9d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_armour_cpp_staticInit_FUN_0040ede0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_backgnd_cpp_staticInit_FUN_0040f2d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_baron_cpp_staticInit_FUN_0040f600
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_barrier_cpp_staticInit_FUN_00410c50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bat_cpp_staticInit_FUN_00410ed0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_batcreat_cpp_staticInit_FUN_00411630
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_batman_cpp_staticInit_FUN_00412ac0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_battery_cpp_staticInit_FUN_004146c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_beast_cpp_staticInit_FUN_004149a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_biggs_cpp_staticInit_FUN_00414cb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bodypart_cpp_staticInit_FUN_004154c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boneguy_cpp_staticInit_FUN_00417d30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boxactor_cpp_staticInit_FUN_0041bc90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bride_cpp_staticInit_FUN_0041d8c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bugs_cpp_staticInit_FUN_0041eef0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_charactr_cpp_staticInit_FUN_004222a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_colonel_cpp_staticInit_FUN_004355b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_console_cpp_staticInit_FUN_00436650
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_construc_cpp_staticInit_FUN_00436aa0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_conveyor_cpp_staticInit_FUN_00438430
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cow_cpp_staticInit_FUN_00439080
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crate_cpp_staticInit_FUN_00439d00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crossbow_cpp_staticInit_FUN_0043a460
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcamera_cpp_staticInit_FUN_0043aee0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcube_cpp_staticInit_FUN_00443d00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dest_cpp_staticInit_FUN_00447030
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dfilter_cpp_staticInit_FUN_00447560
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dlight_cpp_staticInit_FUN_00449c50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dmodel_cpp_staticInit_FUN_0044dbb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_doc_cpp_staticInit_FUN_0044fdd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dog_cpp_staticInit_FUN_0045e210
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_door_cpp_staticInit_FUN_0045ed00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dracbrid_cpp_staticInit_FUN_00462af0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_drender_cpp_staticInit_FUN_00469500
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drip_cpp_staticInit_FUN_0046ce00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drone_cpp_staticInit_FUN_0046d6f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dskybox_cpp_staticInit_FUN_0046e260
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtrace_cpp_staticInit_FUN_004723e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtri_cpp_staticInit_FUN_00477680
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dynamite_cpp_staticInit_FUN_00479f80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_edittool_cpp_staticInit_FUN_0047a430
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_elephant_cpp_staticInit_FUN_00485940
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_emitter_cpp_staticInit_FUN_00486780
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_enemy_cpp_staticInit_FUN_00487d80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_event_cpp_staticInit_FUN_00488b30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_filmreel_cpp_staticInit_FUN_004928a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_fire_cpp_staticInit_FUN_004930e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flame_cpp_staticInit_FUN_0049f120
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamecan_cpp_staticInit_FUN_004a0660
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamegun_cpp_staticInit_FUN_004a0cb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_004a1000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_004a1200
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flattn_cpp_staticInit_FUN_004a6770
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flies_cpp_staticInit_FUN_004a6a30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_frankgen_cpp_staticInit_FUN_004ac140
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gabriela_cpp_staticInit_FUN_004ad0c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_game_cpp_staticInit_FUN_004b28b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gargoyle_cpp_staticInit_FUN_004bfa80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gasmask_cpp_staticInit_FUN_004c12e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ghoul_cpp_staticInit_FUN_004c1550
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_glass_cpp_staticInit_FUN_004c4840
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gore_cpp_staticInit_FUN_004c7360
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_grave_cpp_staticInit_FUN_004ca0c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ground_cpp_staticInit_FUN_004ca6b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gun_cpp_staticInit_FUN_004cbcf0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_haystack_cpp_staticInit_FUN_004cc700
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_health_cpp_staticInit_FUN_004cda10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hero_cpp_staticInit_FUN_004ce000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hiram_cpp_staticInit_FUN_004d0ed0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hostage_cpp_staticInit_FUN_004d1270
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hotdemon_cpp_staticInit_FUN_004d3790
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hpriest_cpp_staticInit_FUN_004d4720
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_icepick_cpp_staticInit_FUN_004d4930
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_imp_cpp_staticInit_FUN_004d6590
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_ini_cpp_staticInit_FUN_004d8170
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_inv_cpp_staticInit_FUN_004d9c00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_keyactor_cpp_staticInit_FUN_004df0e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_keys_cpp_staticInit_FUN_004dfe40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ladder_cpp_staticInit_FUN_004dff00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_larva_cpp_staticInit_FUN_004e0520
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_level_cpp_staticInit_FUN_004e1440
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lever_cpp_staticInit_FUN_004e1bc0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lightgun_cpp_staticInit_FUN_004e29c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_litecone_cpp_staticInit_FUN_004e4130
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_main_c_staticInit_FUN_004e4490
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_manpuz_cpp_staticInit_FUN_004e4eb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_marquee_cpp_staticInit_FUN_004e7c20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_melee_cpp_staticInit_FUN_004ea850
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_menu_cpp_staticInit_FUN_004eae70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mimic_cpp_staticInit_FUN_004f0250
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_minecar_cpp_staticInit_FUN_004f2000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_mini3d_cpp_staticInit_FUN_004f2190
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mirror_cpp_staticInit_FUN_004f9430
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mission_cpp_staticInit_FUN_004fb350
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mobster_cpp_staticInit_FUN_004fd5f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moloch_cpp_staticInit_FUN_005012e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moon_cpp_staticInit_FUN_005022f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_netgame_cpp_staticInit_FUN_0050aed0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_ncursfx_cpp_staticInit_FUN_0050fff0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_npc_cpp_staticInit_FUN_00510400
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_passngr_cpp_staticInit_FUN_005113b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_pendulum_cpp_staticInit_FUN_00514c70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_platfrm_cpp_staticInit_FUN_00518050
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_podmain_cpp_staticInit_FUN_0051bfd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_scat_cpp_staticInit_FUN_0051e8d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_script_cpp_staticInit_FUN_00520f90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sentinel_cpp_staticInit_FUN_0052a6c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_set_cpp_staticInit_FUN_0052bbe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setcolid_cpp_staticInit_FUN_00534da0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setdir_cpp_staticInit_FUN_005382f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shadow_cpp_staticInit_FUN_0053c170
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shotgun_cpp_staticInit_FUN_0053ef70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shovel_cpp_staticInit_FUN_0053fdc0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_simbox_cpp_staticInit_FUN_0053ff50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_skeleton_cpp_staticInit_FUN_00540580
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_slew_cpp_staticInit_FUN_00549370
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_smiley_cpp_staticInit_FUN_00549770
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_0054ae20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_00554ac0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndwav_cpp_staticInit_FUN_00557b40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sound_cpp_staticInit_FUN_00558c40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spike_cpp_staticInit_FUN_005604e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_spotview_cpp_staticInit_FUN_00561930
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stairs_cpp_staticInit_FUN_00561e90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stone_cpp_staticInit_FUN_005623d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stranger_cpp_staticInit_FUN_00562560
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_succubus_cpp_staticInit_FUN_0056f260
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_svetlana_cpp_staticInit_FUN_00570160
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tbplayer_cpp_staticInit_FUN_00571ab0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_teleport_cpp_staticInit_FUN_005721c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tentacle_cpp_staticInit_FUN_00572570
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_texlist_cpp_staticInit_FUN_00573470
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tommygun_cpp_staticInit_FUN_00575700
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trap_cpp_staticInit_FUN_005763f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trash_cpp_staticInit_FUN_005768d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trigger_cpp_staticInit_FUN_00577690
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_trisock_cpp_staticInit_FUN_00578b90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_trstream_cpp_staticInit_FUN_0057b9a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_turret_cpp_staticInit_FUN_0057e390
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tvbat_cpp_staticInit_FUN_00580260
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vampboss_cpp_staticInit_FUN_005814d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vecdir_cpp_staticInit_FUN_005838d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vehicle_cpp_staticInit_FUN_00583990
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vessel_cpp_staticInit_FUN_00584e70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_water_cpp_staticInit_FUN_00585d40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_wateract_cpp_staticInit_FUN_00586920
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_waypoint_cpp_staticInit_FUN_00587c00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weapon_cpp_staticInit_FUN_005899a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weather_cpp_staticInit_FUN_0058a610
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_werewolf_cpp_staticInit_FUN_0058b6f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_zombie_cpp_staticInit_FUN_00595680
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bmppuzzl_cpp_staticInit_FUN_0059aa80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_goggles_cpp_staticInit_FUN_0059c000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_goggles_cpp_staticInit_FUN_0059c270
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hpatrol_cpp_staticInit_FUN_0059c580
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lantern_cpp_staticInit_FUN_0059cb70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_meleeaxe_cpp_staticInit_FUN_0059d1c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_meleeaxe_cpp_staticInit_FUN_0059d350
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_basicene_cpp_staticInit_FUN_0059e380
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_confedrt_cpp_staticInit_FUN_005a07e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_confzomb_cpp_staticInit_FUN_005a1ae0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_fforest_cpp_staticInit_FUN_005a2670
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_schngeis_cpp_staticInit_FUN_005a2f50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_unionzom_cpp_staticInit_FUN_005a3cd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_basicnpc_cpp_staticInit_FUN_005a4750
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_union_cpp_staticInit_FUN_005a4a20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_villain_cpp_staticInit_FUN_005a5ae0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weaver_cpp_staticInit_FUN_005a5e10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cross_cpp_staticInit_FUN_005a6970
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bwgrndma_cpp_staticInit_FUN_005a7ab0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bwgrndma_cpp_staticInit_FUN_005a7eb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bwsearch_cpp_staticInit_FUN_005a8c90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_belling_cpp_staticInit_FUN_005a8f20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ghostchi_cpp_staticInit_FUN_005a91d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hand_cpp_staticInit_FUN_005a9ba0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hellhag_cpp_staticInit_FUN_005aa5a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_helldog_cpp_staticInit_FUN_005ab9e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hpbox_cpp_staticInit_FUN_005ac740
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mine_cpp_staticInit_FUN_005ad360
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_necklace_cpp_staticInit_FUN_005ada50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_chain_cpp_staticInit_FUN_005b46c0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005bc070
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005b77e0
    },
    {
        .status = 0x00,
        .priority = 0x01,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005b7812
    },
    {
        .status = 0x00,
        .priority = 0x02,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005bcca0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c1c50
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005badc6
    },
    {
        .status = 0x00,
        .priority = 0x0B,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005baf0c
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c45b0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c23b4
    },
    {
        .status = 0x00,
        .priority = 0x03,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c3a30
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c51a4
    },
    {
        .status = 0x00,
        .priority = 0x01,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005b7813
    },
    {
        .status = 0x00,
        .priority = 0x28,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005bef1e
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c1cf0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005bd118
    },
    {
        .status = 0x00,
        .priority = 0x1F,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c0b20
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c469c
    },
    {
        .status = 0x00,
        .priority = 0x0A,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_FUN_005c2bcc
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
        .huffman_data_ptr = (char *)0x006197D0
    },
    {
        .table_size = 0x00000011,
        .xlen = 0x00000003,
        .ylen = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x006197E0
    },
    {
        .table_size = 0x00000011,
        .xlen = 0x00000003,
        .ylen = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00619808
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
        .huffman_data_ptr = (char *)0x00619830
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000004,
        .ylen = 0x00000004,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00619870
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x006198B0
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00619940
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x006199D0
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00619A60
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00619B60
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00619C60
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00619D60
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
        .huffman_data_ptr = (char *)0x0061A160
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000001,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0061A560
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
        .huffman_data_ptr = (char *)0x0061A960
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
        .huffman_data_ptr = (char *)0x0061AD60
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000001,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0061ADA0
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

// SMRGLPrimitiveQuad[6]
SMRGLPrimitiveQuad g_BoundingBoxQuadTemplates[6] = {
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0xFFFFFFFF,
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
            .vertex_index = 0x00000004,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000006,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000002,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000001,
                .B = 0x00000000,
                .C = 0x00000000,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000001,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000003,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000007,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000005,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000000,
                .B = 0xFFFFFFFF,
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
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000005,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000004,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000000,
                .B = 0x00000001,
                .C = 0x00000000,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000002,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000006,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000007,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000003,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000000,
                .B = 0x00000000,
                .C = 0xFFFFFFFF,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000000,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000002,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000003,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000001,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000000,
                .B = 0x00000000,
                .C = 0x00000001,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000004,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000005,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000007,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000006,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    }
};

// SMRGLTextureBasic
SMRGLTextureBasic g_FireEffectBlackHoleTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BHOLE.RAW"
};
SMRGLTextureBasic g_FireEffectSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SPARK.RAW"
};
SMRGLTextureBasic g_FireEffectBlueSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLUSPARK.RAW"
};
SMRGLTextureBasic g_FireEffectGreenSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "GRNSPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_0061516c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "FIREFLY.RAW"
};
SMRGLTextureBasic g_FireEffectRedSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};
SMRGLTextureBasic g_FireEffectLaserTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "LASER.RAW"
};
SMRGLTextureBasic g_FireEffectBeamFuzzTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BEAMFUZZ.RAW"
};
SMRGLTextureBasic g_FireEffectReticle = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RETICLE.RAW"
};
SMRGLTextureBasic g_FireEffectHeadliteTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_FireEffectBlastTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLAST1.RAW"
};
SMRGLTextureBasic g_FireEffectPopcornTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "POPCORN.RAW"
};
SMRGLTextureBasic g_FireEffectRainDropTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINDRP1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_00615ae8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "GLOW1.RAW"
};
SMRGLTextureBasic g_FliesTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BBWHITE.RAW"
};
SMRGLTextureBasic g_BloodParticleTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BGLOB.RAW"
};
SMRGLTextureBasic g_FootstepTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "FOOTSTEP.RAW"
};
SMRGLTextureBasic g_Inventory3DTextureAtlas = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "INV3D.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_00617e14 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "MOONGLOW.RAW"
};
SMRGLTextureBasic g_MarqueeSparkTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SPARK.RAW"
};
SMRGLTextureBasic g_PathMapTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_EnvMapTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BACKGND.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_0061bb54 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_0061bb70 = {
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

// SMRGLTextureBasic[116]
SMRGLTextureBasic g_BloodPoolAnimTextures[116] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-29.RAW"
    }
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

// SMRGLTextureBasic[40]
SMRGLTextureBasic g_FireEffectSmokeParticleTextures[40] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0050.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0051.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0052.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0053.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0054.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0055.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0056.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0057.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0058.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0059.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0060.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0061.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0062.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0063.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0064.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0065.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0066.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0067.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0068.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0069.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0070.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0071.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0072.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0073.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0074.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0075.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0076.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0077.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0078.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0079.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0080.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0081.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0082.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0083.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0084.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0085.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0086.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0087.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0088.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0089.RAW"
    }
};
SMRGLTextureBasic g_FlameFrameTextures[40] = {
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
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "CAN1500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BF1500.RAW"
    }
};

// SMRGLTextureBasic[4]
SMRGLTextureBasic g_BloodSplatTextures[4] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP4.RAW"
    }
};

// SMRGLTextureBasic[54]
SMRGLTextureBasic g_FireEffectExplosionTextures[54] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01101.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01102.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01103.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01104.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01105.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01106.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01107.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01108.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01109.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01110.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01111.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01112.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01113.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01114.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01115.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01116.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01117.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01118.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01119.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01120.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01121.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01122.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01123.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01124.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01125.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01126.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01127.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01128.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01129.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01130.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01131.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01132.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01133.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01134.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01135.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01140.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01141.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01142.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01143.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01144.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01145.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01146.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01147.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01148.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01149.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01150.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01151.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01152.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01153.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01154.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01155.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01156.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01157.RAW"
    }
};

// SMRGLTextureBasic[64]
SMRGLTextureBasic g_BloodSplatAnimTextures[64] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-16.RAW"
    }
};

// SMRGLTextureBasic[6]
SMRGLTextureBasic g_FireEffectLightningBoltTextures[6] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT4.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT5.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT6.RAW"
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

// SReverbPreset[27]
SReverbPreset g_ReverbPresetTable[27] = {
    {
        .name = (char *)s_OFF_005ea961,
        .reverb = {
            .volume = 0.0f,
            .decay_time = 0.0f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_GENERIC_005ea965,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 1.493f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_PADDEDCELL_005ea96d,
        .reverb = {
            .volume = 0.25f,
            .decay_time = 0.1f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)0x005EA978,
        .reverb = {
            .volume = 0.417f,
            .decay_time = 0.40000001f,
            .damping = 0.66600001f
        }
    },
    {
        .name = (char *)s_BATHROOM_005ea97d,
        .reverb = {
            .volume = 0.653f,
            .decay_time = 1.499f,
            .damping = 0.16599999f
        }
    },
    {
        .name = (char *)s_LIVINGROOM_005ea986,
        .reverb = {
            .volume = 0.208f,
            .decay_time = 0.47799999f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_STONEROOM_005ea991,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 2.309f,
            .damping = 0.88800001f
        }
    },
    {
        .name = (char *)s_AUDITORIUM_005ea99b,
        .reverb = {
            .volume = 0.403f,
            .decay_time = 4.2789998f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_CONCERTHALL_005ea9a6,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 3.961f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)0x005EA9B2,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 2.8859999f,
            .damping = 1.304f
        }
    },
    {
        .name = (char *)s_ARENA_005ea9b7,
        .reverb = {
            .volume = 0.361f,
            .decay_time = 7.2839999f,
            .damping = 0.33199999f
        }
    },
    {
        .name = (char *)s_HANGAR_005ea9bd,
        .reverb = {
            .volume = 0.5f,
            .decay_time = 10.0f,
            .damping = 0.30000001f
        }
    },
    {
        .name = (char *)s_CARPETEDHALLWAY_005ea9c4,
        .reverb = {
            .volume = 0.153f,
            .decay_time = 0.259f,
            .damping = 2.0f
        }
    },
    {
        .name = (char *)s_HALLWAY_005ea9d4,
        .reverb = {
            .volume = 0.361f,
            .decay_time = 1.493f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_STONECORRIDOR_005ea9dc,
        .reverb = {
            .volume = 0.44400001f,
            .decay_time = 2.697f,
            .damping = 0.63800001f
        }
    },
    {
        .name = (char *)s_ALLEY_005ea9ea,
        .reverb = {
            .volume = 0.25f,
            .decay_time = 1.752f,
            .damping = 0.77600002f
        }
    },
    {
        .name = (char *)s_FOREST_005ea9f0,
        .reverb = {
            .volume = 0.111f,
            .decay_time = 3.145f,
            .damping = 0.472f
        }
    },
    {
        .name = (char *)0x005EA9F7,
        .reverb = {
            .volume = 0.111f,
            .decay_time = 2.767f,
            .damping = 0.22400001f
        }
    },
    {
        .name = (char *)s_MOUNTAINS_005ea9fc,
        .reverb = {
            .volume = 0.19400001f,
            .decay_time = 7.8410001f,
            .damping = 0.472f
        }
    },
    {
        .name = (char *)s_QUARRY_005eaa06,
        .reverb = {
            .volume = 1.0f,
            .decay_time = 1.499f,
            .damping = 0.5f
        }
    },
    {
        .name = (char *)s_PLAIN_005eaa0d,
        .reverb = {
            .volume = 0.097000003f,
            .decay_time = 2.767f,
            .damping = 0.22400001f
        }
    },
    {
        .name = (char *)s_PARKINGLOT_005eaa13,
        .reverb = {
            .volume = 0.208f,
            .decay_time = 1.652f,
            .damping = 1.5f
        }
    },
    {
        .name = (char *)s_SEWERPIPE_005eaa1e,
        .reverb = {
            .volume = 0.65200001f,
            .decay_time = 2.8859999f,
            .damping = 0.25f
        }
    },
    {
        .name = (char *)s_UNDERWATER_005eaa28,
        .reverb = {
            .volume = 1.0f,
            .decay_time = 1.499f,
            .damping = 0.0f
        }
    },
    {
        .name = (char *)s_DRUGGED_005eaa33,
        .reverb = {
            .volume = 0.875f,
            .decay_time = 8.3920002f,
            .damping = 1.388f
        }
    },
    {
        .name = (char *)0x005EAA3B,
        .reverb = {
            .volume = 0.139f,
            .decay_time = 17.233999f,
            .damping = 0.66600001f
        }
    },
    {
        .name = (char *)s_PSYCHOTIC_005eaa41,
        .reverb = {
            .volume = 0.486f,
            .decay_time = 7.5630002f,
            .damping = 0.80599999f
        }
    }
};

// TerminatedCString
TerminatedCString s_EST_0061f52c = "EST";
TerminatedCString s_EDT_0061f5ad = "EDT";

// WCHAR*
WCHAR* g_CommandLineArgsW = nullptr;
WCHAR* g_ExeFileNameW = nullptr;
WCHAR* g_DllFileNameW = nullptr;

// WatcomStaticDestructorNode
WatcomStaticDestructorNode g_CEditorToolsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F5CE0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CEditorToolsInstance
};
WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6460,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_StakePool
};
WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F646C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SparkPool
};
WatcomStaticDestructorNode DAT_00614CA0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6478,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CFirefly_ARRAY_01c848f8
};
WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6484,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_GlassParticlePool
};
WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6490,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_FireballPool
};
WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F649C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RockPool
};
WatcomStaticDestructorNode DAT_00614CE0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F64A8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CLeaf_ARRAY_01c950dc
};
WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F64B4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TossPool
};
WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F64C0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ShellPool
};
WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F64CC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PopcornPool
};
WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F64D8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RainDropPool
};
WatcomStaticDestructorNode DAT_00615F30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E00,
    .registration_type = 0x00000001,
    .object_instance = (void *)&SNotesSection_ARRAY_01cab9f4
};
WatcomStaticDestructorNode DAT_00615F40 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E0C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&SNotesMap_ARRAY_01cacb50
};
WatcomStaticDestructorNode DAT_00615F50 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E18,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf114
};
WatcomStaticDestructorNode DAT_00615F60 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E24,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01caf128
};
WatcomStaticDestructorNode DAT_00615F70 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E30,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf1a0
};
WatcomStaticDestructorNode DAT_00615F80 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E3C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf1b4
};
WatcomStaticDestructorNode DAT_00615F90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E48,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf1c8
};
WatcomStaticDestructorNode DAT_00615FA0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E54,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf1dc
};
WatcomStaticDestructorNode DAT_00615FB0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E60,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf1f0
};
WatcomStaticDestructorNode DAT_00615FC0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E6C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf204
};
WatcomStaticDestructorNode DAT_00615FD0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E78,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf218
};
WatcomStaticDestructorNode DAT_00615FE0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E84,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01caf22c
};
WatcomStaticDestructorNode DAT_00615FF0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_STextViewInstance
};
WatcomStaticDestructorNode DAT_00616000 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F6E9C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFieldNotesInstance
};
WatcomStaticDestructorNode g_CDemonLightDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F7520,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonLightInstance
};
WatcomStaticDestructorNode g_CGameDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F752C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGameInstance
};
WatcomStaticDestructorNode g_CPickListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F7538,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList
};
WatcomStaticDestructorNode DAT_00616420 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F7544,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_01cb8080
};
WatcomStaticDestructorNode g_CGoreDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F7B90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGoreInstance
};
WatcomStaticDestructorNode DAT_006167D0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F7B9C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BloodParticles
};
WatcomStaticDestructorNode g_CGroundDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F7DC0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGroundInstance
};
WatcomStaticDestructorNode DAT_00617BD0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8F40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_InvBackgroundBitmap
};
WatcomStaticDestructorNode DAT_00617BE0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8F4C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cf01c4
};
WatcomStaticDestructorNode DAT_00617BF0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8F58,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_WeapBackgroundBitmap
};
WatcomStaticDestructorNode DAT_00617C00 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8F64,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01cf01ec
};
WatcomStaticDestructorNode DAT_00617C10 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8F70,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BatteryIconBitmap
};
WatcomStaticDestructorNode DAT_00617C20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8F7C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02e1c
};
WatcomStaticDestructorNode DAT_00617C30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8F88,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02e30
};
WatcomStaticDestructorNode DAT_00617C40 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8F94,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02e44
};
WatcomStaticDestructorNode DAT_00617C50 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8FA0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02e58
};
WatcomStaticDestructorNode DAT_00617C60 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8FAC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02e6c
};
WatcomStaticDestructorNode DAT_00617C70 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8FB8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02e80
};
WatcomStaticDestructorNode DAT_00617C80 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8FC4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02e94
};
WatcomStaticDestructorNode DAT_00617C90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8FD0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02ea8
};
WatcomStaticDestructorNode DAT_00617CA0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8FDC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02ebc
};
WatcomStaticDestructorNode DAT_00617CB0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8FE8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02ed0
};
WatcomStaticDestructorNode DAT_00617CC0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F8FF4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d02f2c
};
WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9450,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingMoonModel
};
WatcomStaticDestructorNode DAT_00617E7E = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9850,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d046ac
};
WatcomStaticDestructorNode DAT_00617E8E = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F985C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d046c0
};
WatcomStaticDestructorNode DAT_00617E9E = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9868,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d046d4
};
WatcomStaticDestructorNode DAT_00617EAE = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9874,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d046e8
};
WatcomStaticDestructorNode DAT_00617F68 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9DD0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomStaticDestructorNode DAT_00617F78 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9DDC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomStaticDestructorNode DAT_00617F88 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9DE8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomStaticDestructorNode DAT_00617F98 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9DF4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomStaticDestructorNode DAT_00617FA8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9E00,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomStaticDestructorNode DAT_00617FB8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005F9E0C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CalibrationBitmap
};
WatcomStaticDestructorNode DAT_006180E0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FA140,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMini3DInstance
};
WatcomStaticDestructorNode DAT_0061830C = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FA580,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1c7b8
};
WatcomStaticDestructorNode DAT_0061831C = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FA58C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01d1c7cc
};
WatcomStaticDestructorNode DAT_0061832C = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FA598,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_01d1cda8
};
WatcomStaticDestructorNode g_CNetGameInstanceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FA630,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CNetGameInstance
};
WatcomStaticDestructorNode g_CMouseDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FA6E0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMouseInstance
};
WatcomStaticDestructorNode g_PathMapCacheDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FAA90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PathMapCache
};
WatcomStaticDestructorNode g_CDemonPodMainDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_CDemonPodDestructorNode,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonPodInstance
};
WatcomStaticDestructorNode DAT_0061B440 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FAFD0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ScriptPickList
};
WatcomStaticDestructorNode DAT_0061B450 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FAFDC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CScriptInstance
};
WatcomStaticDestructorNode g_CDemonSetDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FB1E0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonSetInstance
};
WatcomStaticDestructorNode g_CDemonCameraDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FB1EC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonCameraInstance
};
WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FB1F8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonRaytraceInstance
};
WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FB204,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModelInstance
};
WatcomStaticDestructorNode g_CZThumbPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FB330,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CZThumbPool
};
WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FB980,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_DeformableModelPool
};
WatcomStaticDestructorNode g_SkeletonPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FB98C,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SkeletonPool
};
WatcomStaticDestructorNode g_SfxSamplesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FBBF0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SfxSamples
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode1 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FBBFC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FBC08,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstanceOther
};
WatcomStaticDestructorNode DAT_0061C050 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FBD90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CStrListInstance
};
WatcomStaticDestructorNode g_CTextureListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FCE00,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CTextureListInstance
};
WatcomStaticDestructorNode DAT_0061E46C = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FD3A0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_COutStreamDebugInstance
};
WatcomStaticDestructorNode g_CWaterDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FDC50,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CWaterInstance
};
WatcomStaticDestructorNode DAT_0061E9AB = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE4B0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_026677ec
};
WatcomStaticDestructorNode DAT_0061E9BB = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE4BC,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CExamplePuzzleInstance
};
WatcomStaticDestructorNode DAT_0061E9CB = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE4C8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAudioRecPuzzleInstance
};
WatcomStaticDestructorNode DAT_0061EA4C = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x005FE740,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGameHookInstance
};
WatcomStaticDestructorNode DAT_0061EBEC = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)0x006002B0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CSimpleParticleSystemInstance
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
_FILE g_FILE_0061ef88 = {
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
_MMX_INTEGER g_FilterBlendConstant = {};
_MMX_INTEGER g_LightmapBlendBias5 = {};
_MMX_INTEGER g_LightmapBlendBias6 = {0x0040004000400040ULL};
_MMX_INTEGER g_LightmapBlendBias3 = {0x0020002000200020ULL};
_MMX_INTEGER g_LightmapBlendBias4 = {0x0060006000600060ULL};
_MMX_INTEGER g_VertexGreenStart = {};
_MMX_INTEGER g_VertexBlueStart = {};
_MMX_INTEGER g_VertexGreenDelta = {};
_MMX_INTEGER g_VertexBlueDelta = {};
_MMX_INTEGER g_RedMask16 = {0x000000000000F800ULL};
_MMX_INTEGER g_GreenMask16 = {0x00000000000007E0ULL};
_MMX_INTEGER g_BlueMask16 = {0x000000000000001FULL};

// byte
byte g_CPUIDSupported = 0;
byte g_BYTE_0061ee9c = 0;
byte g_BYTE_0061ee9d = 0;
byte g_WindowsMinorVersion = 0;
byte g_BYTE_0061f288 = 0;
byte g_UseSoftwareMath = 0;
byte g_TimezoneInitFlags = 0x1;
byte g_DebuggerIsAttached = 0;
byte g_ConsoleHandlerRegistered = 0;

// char*
char* g_ExeFileNameA = nullptr;
char* g_DllFileNameA = nullptr;
char* g_EnvironmentStrings = nullptr;

// char[100]
char g_EventCommandBuffer[100] = "";
char g_IpAddress[100] = "10.0.0.105";
char g_DefaultInventoryValue[100] = "";

// char[104]
char g_DefaultInventoryKey[104] = "";
char g_DefaultMissionActorClass[104] = "";
char g_DefaultMissionActorName[104] = "";
char g_SoundResultBufferTemplate[104] = "";

// char[108]
char g_TrainSoundFilenameTemplate[108] = "";

// char[112]
char g_DefaultCommandArg[112] = "";

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
char g_DefaultSfxHandleName[200] = "";
char g_ActorRefDefaultBuffer[200] = "";

// char[256]
char g_DefaultSoundDeviceName[256] = "";
char g_DefaultDeviceName[256] = "";
char g_RendererDllPath[256] = "trid3d.dll";

// char[260]
char g_FilePathBuffer[260] = "";
char g_TempDirectoryBuffer[260] = "";

// char[512]
char g_Field1ParseBuffer[512] = "";
char g_Field2ParseBuffer[512] = "";

// char[60]
char g_DefaultRicochetSound[60] = "";

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
float g_FLOAT_0061bcb4 = 1.0f;
float g_FLOAT_0061bcb8 = 1.0f;
float g_MaxSoftwareLatency = 0.5f;
float g_FLOAT_0061e524 = 0.25f;

// int
int g_INT_00613880 = 0x4;
int g_CDynamiteClassVersion = 0x1;
int g_CursorSizeHorizontal = 0x9;
int g_CursorSizeVertical = 0x9;
int g_CElephantGunClassVersion = 0x1;
int g_CEmitterClassVersion = 0xE;
int g_CEnemyClassVersion = 0xA;
int g_INT_006141b8 = 0x140;
int g_INT_006141bc = 0xC8;
int g_INT_006141c0 = 0x8;
int g_TextureFilteringEnabled = 0x1;
int g_CurrentTextureDimension = 0x100;
int g_InputKeyMask = 0x7F;
int g_JoystickNumButtons = 0x4;
int g_CurrentAlphaValue = 0xFF;
int g_ProjectionScale = 0x10000;
int g_INT_00614284 = 0x2;
int g_INT_00614c44 = 0x4927B4;
int g_CFilmReelClassVersion = 0x2;
int g_CFilmProjectorClassVersion = 0x2;
int g_CFlameClassVersion = 0x7;
int g_CFlameCanClassVersion = 0x1;
int g_CFlameThrowerClassVersion = 0x1;
int g_CFlashlightClassVersion = 0x1;
int g_INT_00616010 = 0x1;
int g_INT_00616014 = 0x1;
int g_INT_00616018 = 0x4A;
int g_INT_0061601c = 0x1AE;
int g_INT_00616020 = 0x1F4;
int g_INT_00616024 = 0x1AE;
int g_INT_00616028 = 0x262;
int g_INT_0061602c = 0x1C0;
int g_INT_00616040 = -1;
int g_CFliesClassVersion = 0x3;
int g_CFrankenstienMachineClassVersion = 0x1;
int g_CGabriellaClassVersion = 0x3;
int g_MovieRecordingWidth = 0x40;
int g_MovieRecordingHeight = 0x40;
int g_CGargoyleClassVersion = 0x2;
int g_CGasMaskClassVersion = 0x1;
int g_CGhoulClassVersion = 0x7;
int g_CGlassClassVersion = 0x6;
int g_CGraveClassVersion = 0x4;
int g_CGunClassVersion = 0x1;
int g_CHaystackClassVersion = 0x1;
int g_CHealthItemClassVersion = 0x3;
int g_CHeroClassVersion = 0x11;
int g_INT_00617a60 = 0x2;
int g_CHiramClassVersion = 0x1;
int g_CHostageClassVersion = 0xC;
int g_CHotDemonClassVersion = 0x1;
int g_CHighPriestOfGardathClassVersion = 0x1;
int g_CIcePickClassVersion = 0x1;
int g_CImpClassVersion = 0x1;
int g_InventoryWidth = 0xD0;
int g_InventoryHeight = 0x60;
int g_CKeyActorClassVersion = 0x3;
int g_CLadderClassVersion = 0x2;
int g_CLarvaClassVersion = 0x2;
int g_CLeverClassVersion = 0x8;
int g_AmbientLightLevel = 0x8000;
int g_SpecularEnabled = 0x1;
int g_DiffuseLightMultiplier = 0x10000;
int g_SpecularLightMultiplier = 0x10000;
int g_CLightGunClassVersion = 0x1;
int g_CLightConeClassVersion = 0x2;
int g_CMansionPuzzleCircleClassVersion = 0x3;
int g_INT_00617ec4 = 0x1;
int g_CMarqueeClassVersion = 0x1;
int g_CMeleeClassVersion = 0x7;
int g_CMimicClassVersion = 0x3;
int g_CMineCarClassVersion = 0x1;
int g_CPUInfoBasicInfo2 = 0;
int g_CPUInfoBaseInfo3 = 0;
int g_CMobsterClassVersion = 0x7;
int g_CMolochClassVersion = 0x1;
int g_INT_0061846c = 0x1;
int g_INT_00618470 = 0x1;
int g_INT_00618474 = 0x1;
int g_MpegSynthesisTableInitialized = 0x1;
int g_Mp3AntiAliasInitialized = 0x1;
int g_Mp3SynthesisTablesInitialized = 0x1;
int g_NetLobbyStateChanged = 0x1;
int g_CNPCClassVersion = 0x6;
int g_CPassengerClassVersion = 0x6;
int g_CPendulumClassVersion = 0x8;
int g_CPlatformClassVersion = 0xB;
int g_MaxViewportScanline = 0x4B0;
int g_CScatClassVersion = 0x1;
int g_CSentinelClassVersion = 0x2;
int g_RenderMirrorsFlag = 0x1;
int g_CShadowClassVersion = 0x1;
int g_CShotgunClassVersion = 0x1;
int g_CShovelClassVersion = 0x1;
int g_CSimBoxClassVersion = 0x3;
int g_INT_0061bbd4 = 0x3;
int g_INT_0061bbd8 = 0x7;
int g_CSmileyClassVersion = 0x1;
int g_SfxPlaybackStateCounter = 0x1;
int g_MaxSoundChannels = 0x20;
int g_AudioBitsPerSample = 0x10;
int g_AudioChannelCount = 0x2;
int g_AudioSampleRate = 0x5622;
int g_SoundDeviceCount = -1;
int g_CurrentSoundDevice = -1;
int g_INT_0061bcb0 = 0x2;
int g_MinimumSoundMemoryBudget = 0x200000;
int g_MaximumSoundMemoryBudget = 0x400000;
int g_RecordingDeviceCount = -1;
int g_INT_0061bccc = -1;
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
int g_INT_0061c7a4 = 0;
int g_INT_0061c7a8 = 0;
int g_INT_0061c7ac = 0;
int g_INT_0061c7b0 = 0;
int g_INT_0061c7d8 = 0;
int g_INT_0061c7dc = 0;
int g_INT_0061c7e0 = 0;
int g_INT_0061c7e8 = 0;
int g_INT_0061c7ec = 0;
int g_INT_0061c7f0 = 0;
int g_VertexAlphaStart = 0;
int g_VertexAlphaDelta = 0;
int g_INT_0061c850 = 0;
int g_INT_0061c858 = 0;
int g_SpecialColor = 0xFFFFFF;
int g_SystemInitialized = 0x1;
int g_FullScreenQuadDepth = 0x3C000;
int g_CSpikeClassVersion = 0x1;
int g_CStairsClassVersion = 0x2;
int g_CTempleStoneClassVersion = 0x1;
int g_CStrangerClassVersion = 0x9;
int g_CSuccubusClassVersion = 0x1;
int g_CSvetlanaClassVersion = 0x1;
int g_CBassPlayerClassVersion = 0x1;
int g_INT_0061e344 = 0x1;
int g_CTeleportDestClassVersion = 0x1;
int g_INT_0061e370 = 0x1;
int g_CTentacleClassVersion = 0x2;
int g_CTommyGunClassVersion = 0x1;
int g_CTrapClassVersion = 0x1;
int g_CTrashClassVersion = 0x1;
int g_CTriggerClassVersion = 0xC;
int g_CTurretClassVersion = 0x2;
int g_CTVBatClassVersion = 0x5;
int g_CVampireBossClassVersion = 0x4;
int g_CVehicleClassVersion = 0x3;
int g_CCryptVesselClassVersion = 0x4;
int g_INT_0061e528 = 0x2000;
int g_CWaterActorClassVersion = 0x6;
int g_CWayPointClassVersion = 0x2;
int g_CWeaponClassVersion = 0x7;
int g_CWerewolfClassVersion = 0x6;
int g_BrightnessDirection = 0x8;
int g_WindowActive = -1;
int g_ForceMessagePump = 0x1;
int g_INT_0061e994 = -1;
int g_CZombieClassVersion = 0xB;
int g_CGogglesClassVersion = 0x1;
int g_CPatrolPointClassVersion = 0x1;
int g_CLanternClassVersion = 0x1;
int g_CMeleeAxeClassVersion = 0x1;
int g_CBasicEnemyClassVersion = 0xA;
int g_CConfederateClassVersion = 0x1;
int g_CConfederateZombieClassVersion = 0x1;
int g_CTwigZombieClassVersion = 0x1;
int g_CSchnellGeistClassVersion = 0x2;
int g_CUnionZombieClassVersion = 0x1;
int g_CBasicNPCClassVersion = 0x1;
int g_CUnionClassVersion = 0x1;
int g_CSteubenClassVersion = 0x1;
int g_CRobinClassVersion = 0x1;
int g_CCrossClassVersion = 0x1;
int g_INT_0061ebb0 = 0x1;
int g_CGrandmaClassVersion = 0x1;
int g_INT_0061ec60 = 0xFFFF;
int g_CSearchPartyClassVersion = 0x1;
int g_CBellingClassVersion = 0x1;
int g_CGhostChildClassVersion = 0x1;
int g_CHandClassVersion = 0x2;
int g_CHagClassVersion = 0x1;
int g_CDogClassVersion = 0x2;
int g_CParticleBoxClassVersion = 0x1;
int g_CSpiritMineClassVersion = 0x1;
int g_CNecklaceClassVersion = 0x1;
int g_CChainClassVersion = 0x4;
int g_INT_0061eea8 = 0;
int g_INT_0061f160 = 0x100;
int g_INT_0061f240 = 0;
int g_WinMainCmdShow = 0;
int g_StackAllocSize = 0;
int g_ConsoleInitializationFlag = 0;
int g_INT_0061f2a0 = -1;
int g_INT_0061f410 = 0;
int g_INT_0061f4dc = 0;
int g_INT_0061f4e0 = -2147483648;
int g_DstTransitionSecond = 0;
int g_DstTransitionMinute = 0;
int g_DstTransitionHour = 0x1;
int g_TimezoneOffset = 0x4650;
int g_DaylightSavingActive = 0x1;
int g_DaylightSavingOffset = 0xE10;
int g_ConsoleInputState = 0;
int g_INT_0061f6ec = 0x1;
int g_HeapFlags = 0x10000;
int g_INT_0061f6f4 = 0;
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
qword g_LightmapBlendBias1 = 0;
qword g_LightmapBlendBias2 = 0x8000800080008;
qword g_AmbientLightMMX1 = 0x4000400040004;
qword g_AmbientLightMMX2 = 0xC000C000C000C;
qword g_VertexRedStart = 0;
qword g_VertexRedDelta = 0;
qword g_QWORD_0061c860 = 0;
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
qword g_QWORD_ARRAY_0061d180[512] = {
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

// uchar
uchar g_CPUInfoFamily = '\0';
uchar g_CPUInfoModel = '\0';
uchar g_CPUInfoStepping = '\0';
uchar g_CPUInfoIntelCPU = '\0';
uchar g_CPUInfoMMXSupported = '\0';

// uint
uint g_CPUFamily = 0x5;
uint g_VertexProcessingEnabled = 0x1;
uint g_CPUFeatureFlags = 0;
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

// ulonglong[256]
ulonglong g_ByteFillTable[256] = {
    0x0000000000000000, 0x0101010101010101, 0x0202020202020202, 0x0303030303030303, 0x0404040404040404, 0x0505050505050505, 0x0606060606060606, 0x0707070707070707,
    0x0808080808080808, 0x0909090909090909, 0x0A0A0A0A0A0A0A0A, 0x0B0B0B0B0B0B0B0B, 0x0C0C0C0C0C0C0C0C, 0x0D0D0D0D0D0D0D0D, 0x0E0E0E0E0E0E0E0E, 0x0F0F0F0F0F0F0F0F,
    0x1010101010101010, 0x1111111111111111, 0x1212121212121212, 0x1313131313131313, 0x1414141414141414, 0x1515151515151515, 0x1616161616161616, 0x1717171717171717,
    0x1818181818181818, 0x1919191919191919, 0x1A1A1A1A1A1A1A1A, 0x1B1B1B1B1B1B1B1B, 0x1C1C1C1C1C1C1C1C, 0x1D1D1D1D1D1D1D1D, 0x1E1E1E1E1E1E1E1E, 0x1F1F1F1F1F1F1F1F,
    0x2020202020202020, 0x2121212121212121, 0x2222222222222222, 0x2323232323232323, 0x2424242424242424, 0x2525252525252525, 0x2626262626262626, 0x2727272727272727,
    0x2828282828282828, 0x2929292929292929, 0x2A2A2A2A2A2A2A2A, 0x2B2B2B2B2B2B2B2B, 0x2C2C2C2C2C2C2C2C, 0x2D2D2D2D2D2D2D2D, 0x2E2E2E2E2E2E2E2E, 0x2F2F2F2F2F2F2F2F,
    0x3030303030303030, 0x3131313131313131, 0x3232323232323232, 0x3333333333333333, 0x3434343434343434, 0x3535353535353535, 0x3636363636363636, 0x3737373737373737,
    0x3838383838383838, 0x3939393939393939, 0x3A3A3A3A3A3A3A3A, 0x3B3B3B3B3B3B3B3B, 0x3C3C3C3C3C3C3C3C, 0x3D3D3D3D3D3D3D3D, 0x3E3E3E3E3E3E3E3E, 0x3F3F3F3F3F3F3F3F,
    0x4040404040404040, 0x4141414141414141, 0x4242424242424242, 0x4343434343434343, 0x4444444444444444, 0x4545454545454545, 0x4646464646464646, 0x4747474747474747,
    0x4848484848484848, 0x4949494949494949, 0x4A4A4A4A4A4A4A4A, 0x4B4B4B4B4B4B4B4B, 0x4C4C4C4C4C4C4C4C, 0x4D4D4D4D4D4D4D4D, 0x4E4E4E4E4E4E4E4E, 0x4F4F4F4F4F4F4F4F,
    0x5050505050505050, 0x5151515151515151, 0x5252525252525252, 0x5353535353535353, 0x5454545454545454, 0x5555555555555555, 0x5656565656565656, 0x5757575757575757,
    0x5858585858585858, 0x5959595959595959, 0x5A5A5A5A5A5A5A5A, 0x5B5B5B5B5B5B5B5B, 0x5C5C5C5C5C5C5C5C, 0x5D5D5D5D5D5D5D5D, 0x5E5E5E5E5E5E5E5E, 0x5F5F5F5F5F5F5F5F,
    0x6060606060606060, 0x6161616161616161, 0x6262626262626262, 0x6363636363636363, 0x6464646464646464, 0x6565656565656565, 0x6666666666666666, 0x6767676767676767,
    0x6868686868686868, 0x6969696969696969, 0x6A6A6A6A6A6A6A6A, 0x6B6B6B6B6B6B6B6B, 0x6C6C6C6C6C6C6C6C, 0x6D6D6D6D6D6D6D6D, 0x6E6E6E6E6E6E6E6E, 0x6F6F6F6F6F6F6F6F,
    0x7070707070707070, 0x7171717171717171, 0x7272727272727272, 0x7373737373737373, 0x7474747474747474, 0x7575757575757575, 0x7676767676767676, 0x7777777777777777,
    0x7878787878787878, 0x7979797979797979, 0x7A7A7A7A7A7A7A7A, 0x7B7B7B7B7B7B7B7B, 0x7C7C7C7C7C7C7C7C, 0x7D7D7D7D7D7D7D7D, 0x7E7E7E7E7E7E7E7E, 0x7F7F7F7F7F7F7F7F,
    0x8080808080808080, 0x8181818181818181, 0x8282828282828282, 0x8383838383838383, 0x8484848484848484, 0x8585858585858585, 0x8686868686868686, 0x8787878787878787,
    0x8888888888888888, 0x8989898989898989, 0x8A8A8A8A8A8A8A8A, 0x8B8B8B8B8B8B8B8B, 0x8C8C8C8C8C8C8C8C, 0x8D8D8D8D8D8D8D8D, 0x8E8E8E8E8E8E8E8E, 0x8F8F8F8F8F8F8F8F,
    0x9090909090909090, 0x9191919191919191, 0x9292929292929292, 0x9393939393939393, 0x9494949494949494, 0x9595959595959595, 0x9696969696969696, 0x9797979797979797,
    0x9898989898989898, 0x9999999999999999, 0x9A9A9A9A9A9A9A9A, 0x9B9B9B9B9B9B9B9B, 0x9C9C9C9C9C9C9C9C, 0x9D9D9D9D9D9D9D9D, 0x9E9E9E9E9E9E9E9E, 0x9F9F9F9F9F9F9F9F,
    0xA0A0A0A0A0A0A0A0, 0xA1A1A1A1A1A1A1A1, 0xA2A2A2A2A2A2A2A2, 0xA3A3A3A3A3A3A3A3, 0xA4A4A4A4A4A4A4A4, 0xA5A5A5A5A5A5A5A5, 0xA6A6A6A6A6A6A6A6, 0xA7A7A7A7A7A7A7A7,
    0xA8A8A8A8A8A8A8A8, 0xA9A9A9A9A9A9A9A9, 0xAAAAAAAAAAAAAAAA, 0xABABABABABABABAB, 0xACACACACACACACAC, 0xADADADADADADADAD, 0xAEAEAEAEAEAEAEAE, 0xAFAFAFAFAFAFAFAF,
    0xB0B0B0B0B0B0B0B0, 0xB1B1B1B1B1B1B1B1, 0xB2B2B2B2B2B2B2B2, 0xB3B3B3B3B3B3B3B3, 0xB4B4B4B4B4B4B4B4, 0xB5B5B5B5B5B5B5B5, 0xB6B6B6B6B6B6B6B6, 0xB7B7B7B7B7B7B7B7,
    0xB8B8B8B8B8B8B8B8, 0xB9B9B9B9B9B9B9B9, 0xBABABABABABABABA, 0xBBBBBBBBBBBBBBBB, 0xBCBCBCBCBCBCBCBC, 0xBDBDBDBDBDBDBDBD, 0xBEBEBEBEBEBEBEBE, 0xBFBFBFBFBFBFBFBF,
    0xC0C0C0C0C0C0C0C0, 0xC1C1C1C1C1C1C1C1, 0xC2C2C2C2C2C2C2C2, 0xC3C3C3C3C3C3C3C3, 0xC4C4C4C4C4C4C4C4, 0xC5C5C5C5C5C5C5C5, 0xC6C6C6C6C6C6C6C6, 0xC7C7C7C7C7C7C7C7,
    0xC8C8C8C8C8C8C8C8, 0xC9C9C9C9C9C9C9C9, 0xCACACACACACACACA, 0xCBCBCBCBCBCBCBCB, 0xCCCCCCCCCCCCCCCC, 0xCDCDCDCDCDCDCDCD, 0xCECECECECECECECE, 0xCFCFCFCFCFCFCFCF,
    0xD0D0D0D0D0D0D0D0, 0xD1D1D1D1D1D1D1D1, 0xD2D2D2D2D2D2D2D2, 0xD3D3D3D3D3D3D3D3, 0xD4D4D4D4D4D4D4D4, 0xD5D5D5D5D5D5D5D5, 0xD6D6D6D6D6D6D6D6, 0xD7D7D7D7D7D7D7D7,
    0xD8D8D8D8D8D8D8D8, 0xD9D9D9D9D9D9D9D9, 0xDADADADADADADADA, 0xDBDBDBDBDBDBDBDB, 0xDCDCDCDCDCDCDCDC, 0xDDDDDDDDDDDDDDDD, 0xDEDEDEDEDEDEDEDE, 0xDFDFDFDFDFDFDFDF,
    0xE0E0E0E0E0E0E0E0, 0xE1E1E1E1E1E1E1E1, 0xE2E2E2E2E2E2E2E2, 0xE3E3E3E3E3E3E3E3, 0xE4E4E4E4E4E4E4E4, 0xE5E5E5E5E5E5E5E5, 0xE6E6E6E6E6E6E6E6, 0xE7E7E7E7E7E7E7E7,
    0xE8E8E8E8E8E8E8E8, 0xE9E9E9E9E9E9E9E9, 0xEAEAEAEAEAEAEAEA, 0xEBEBEBEBEBEBEBEB, 0xECECECECECECECEC, 0xEDEDEDEDEDEDEDED, 0xEEEEEEEEEEEEEEEE, 0xEFEFEFEFEFEFEFEF,
    0xF0F0F0F0F0F0F0F0, 0xF1F1F1F1F1F1F1F1, 0xF2F2F2F2F2F2F2F2, 0xF3F3F3F3F3F3F3F3, 0xF4F4F4F4F4F4F4F4, 0xF5F5F5F5F5F5F5F5, 0xF6F6F6F6F6F6F6F6, 0xF7F7F7F7F7F7F7F7,
    0xF8F8F8F8F8F8F8F8, 0xF9F9F9F9F9F9F9F9, 0xFAFAFAFAFAFAFAFA, 0xFBFBFBFBFBFBFBFB, 0xFCFCFCFCFCFCFCFC, 0xFDFDFDFDFDFDFDFD, 0xFEFEFEFEFEFEFEFE, 0xFFFFFFFFFFFFFFFF
};

// undefined1
undefined1 DAT_0061f30b = 0x00;

// undefined4
undefined4 DAT_006141f4 = 0x00000000;
undefined4 DAT_00614234 = 0x00000000;
undefined4 DAT_00614238 = 0x00000000;
undefined4 DAT_0061423c = 0x00000000;
undefined4 DAT_00616048 = 0x00000000;
undefined4 DAT_0061604c = 0x00000000;
undefined4 DAT_0061f1a0 = 0x00000000;
undefined4 DAT_0061f504 = 0x00000000;
undefined4 DAT_0061f520 = 0x00000000;
undefined4 DAT_0061f524 = 0x00000000;
undefined4 DAT_0061f528 = 0x00000000;

// ushort
ushort g_USHORT_006180f0 = 0;

// ushort[2048]
ushort g_LightmapData[2048] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0040, 0x0040, 0x0040, 0x0040,
    0x0080, 0x0080, 0x0080, 0x0080, 0x00C0, 0x00C0, 0x00C0, 0x00C0,
    0x0100, 0x0100, 0x0100, 0x0100, 0x0140, 0x0140, 0x0140, 0x0140,
    0x0180, 0x0180, 0x0180, 0x0180, 0x01C0, 0x01C0, 0x01C0, 0x01C0,
    0x0200, 0x0200, 0x0200, 0x0200, 0x0240, 0x0240, 0x0240, 0x0240,
    0x0280, 0x0280, 0x0280, 0x0280, 0x02C0, 0x02C0, 0x02C0, 0x02C0,
    0x0300, 0x0300, 0x0300, 0x0300, 0x0340, 0x0340, 0x0340, 0x0340,
    0x0380, 0x0380, 0x0380, 0x0380, 0x03C0, 0x03C0, 0x03C0, 0x03C0,
    0x0400, 0x0400, 0x0400, 0x0400, 0x0440, 0x0440, 0x0440, 0x0440,
    0x0480, 0x0480, 0x0480, 0x0480, 0x04C0, 0x04C0, 0x04C0, 0x04C0,
    0x0500, 0x0500, 0x0500, 0x0500, 0x0540, 0x0540, 0x0540, 0x0540,
    0x0580, 0x0580, 0x0580, 0x0580, 0x05C0, 0x05C0, 0x05C0, 0x05C0,
    0x0600, 0x0600, 0x0600, 0x0600, 0x0640, 0x0640, 0x0640, 0x0640,
    0x0680, 0x0680, 0x0680, 0x0680, 0x06C0, 0x06C0, 0x06C0, 0x06C0,
    0x0700, 0x0700, 0x0700, 0x0700, 0x0740, 0x0740, 0x0740, 0x0740,
    0x0780, 0x0780, 0x0780, 0x0780, 0x07C0, 0x07C0, 0x07C0, 0x07C0,
    0x0800, 0x0800, 0x0800, 0x0800, 0x0840, 0x0840, 0x0840, 0x0840,
    0x0880, 0x0880, 0x0880, 0x0880, 0x08C0, 0x08C0, 0x08C0, 0x08C0,
    0x0900, 0x0900, 0x0900, 0x0900, 0x0940, 0x0940, 0x0940, 0x0940,
    0x0980, 0x0980, 0x0980, 0x0980, 0x09C0, 0x09C0, 0x09C0, 0x09C0,
    0x0A00, 0x0A00, 0x0A00, 0x0A00, 0x0A40, 0x0A40, 0x0A40, 0x0A40,
    0x0A80, 0x0A80, 0x0A80, 0x0A80, 0x0AC0, 0x0AC0, 0x0AC0, 0x0AC0,
    0x0B00, 0x0B00, 0x0B00, 0x0B00, 0x0B40, 0x0B40, 0x0B40, 0x0B40,
    0x0B80, 0x0B80, 0x0B80, 0x0B80, 0x0BC0, 0x0BC0, 0x0BC0, 0x0BC0,
    0x0C00, 0x0C00, 0x0C00, 0x0C00, 0x0C40, 0x0C40, 0x0C40, 0x0C40,
    0x0C80, 0x0C80, 0x0C80, 0x0C80, 0x0CC0, 0x0CC0, 0x0CC0, 0x0CC0,
    0x0D00, 0x0D00, 0x0D00, 0x0D00, 0x0D40, 0x0D40, 0x0D40, 0x0D40,
    0x0D80, 0x0D80, 0x0D80, 0x0D80, 0x0DC0, 0x0DC0, 0x0DC0, 0x0DC0,
    0x0E00, 0x0E00, 0x0E00, 0x0E00, 0x0E40, 0x0E40, 0x0E40, 0x0E40,
    0x0E80, 0x0E80, 0x0E80, 0x0E80, 0x0EC0, 0x0EC0, 0x0EC0, 0x0EC0,
    0x0F00, 0x0F00, 0x0F00, 0x0F00, 0x0F40, 0x0F40, 0x0F40, 0x0F40,
    0x0F80, 0x0F80, 0x0F80, 0x0F80, 0x0FC0, 0x0FC0, 0x0FC0, 0x0FC0,
    0x1000, 0x1000, 0x1000, 0x1000, 0x1040, 0x1040, 0x1040, 0x1040,
    0x1080, 0x1080, 0x1080, 0x1080, 0x10C0, 0x10C0, 0x10C0, 0x10C0,
    0x1100, 0x1100, 0x1100, 0x1100, 0x1140, 0x1140, 0x1140, 0x1140,
    0x1180, 0x1180, 0x1180, 0x1180, 0x11C0, 0x11C0, 0x11C0, 0x11C0,
    0x1200, 0x1200, 0x1200, 0x1200, 0x1240, 0x1240, 0x1240, 0x1240,
    0x1280, 0x1280, 0x1280, 0x1280, 0x12C0, 0x12C0, 0x12C0, 0x12C0,
    0x1300, 0x1300, 0x1300, 0x1300, 0x1340, 0x1340, 0x1340, 0x1340,
    0x1380, 0x1380, 0x1380, 0x1380, 0x13C0, 0x13C0, 0x13C0, 0x13C0,
    0x1400, 0x1400, 0x1400, 0x1400, 0x1440, 0x1440, 0x1440, 0x1440,
    0x1480, 0x1480, 0x1480, 0x1480, 0x14C0, 0x14C0, 0x14C0, 0x14C0,
    0x1500, 0x1500, 0x1500, 0x1500, 0x1540, 0x1540, 0x1540, 0x1540,
    0x1580, 0x1580, 0x1580, 0x1580, 0x15C0, 0x15C0, 0x15C0, 0x15C0,
    0x1600, 0x1600, 0x1600, 0x1600, 0x1640, 0x1640, 0x1640, 0x1640,
    0x1680, 0x1680, 0x1680, 0x1680, 0x16C0, 0x16C0, 0x16C0, 0x16C0,
    0x1700, 0x1700, 0x1700, 0x1700, 0x1740, 0x1740, 0x1740, 0x1740,
    0x1780, 0x1780, 0x1780, 0x1780, 0x17C0, 0x17C0, 0x17C0, 0x17C0,
    0x1800, 0x1800, 0x1800, 0x1800, 0x1840, 0x1840, 0x1840, 0x1840,
    0x1880, 0x1880, 0x1880, 0x1880, 0x18C0, 0x18C0, 0x18C0, 0x18C0,
    0x1900, 0x1900, 0x1900, 0x1900, 0x1940, 0x1940, 0x1940, 0x1940,
    0x1980, 0x1980, 0x1980, 0x1980, 0x19C0, 0x19C0, 0x19C0, 0x19C0,
    0x1A00, 0x1A00, 0x1A00, 0x1A00, 0x1A40, 0x1A40, 0x1A40, 0x1A40,
    0x1A80, 0x1A80, 0x1A80, 0x1A80, 0x1AC0, 0x1AC0, 0x1AC0, 0x1AC0,
    0x1B00, 0x1B00, 0x1B00, 0x1B00, 0x1B40, 0x1B40, 0x1B40, 0x1B40,
    0x1B80, 0x1B80, 0x1B80, 0x1B80, 0x1BC0, 0x1BC0, 0x1BC0, 0x1BC0,
    0x1C00, 0x1C00, 0x1C00, 0x1C00, 0x1C40, 0x1C40, 0x1C40, 0x1C40,
    0x1C80, 0x1C80, 0x1C80, 0x1C80, 0x1CC0, 0x1CC0, 0x1CC0, 0x1CC0,
    0x1D00, 0x1D00, 0x1D00, 0x1D00, 0x1D40, 0x1D40, 0x1D40, 0x1D40,
    0x1D80, 0x1D80, 0x1D80, 0x1D80, 0x1DC0, 0x1DC0, 0x1DC0, 0x1DC0,
    0x1E00, 0x1E00, 0x1E00, 0x1E00, 0x1E40, 0x1E40, 0x1E40, 0x1E40,
    0x1E80, 0x1E80, 0x1E80, 0x1E80, 0x1EC0, 0x1EC0, 0x1EC0, 0x1EC0,
    0x1F00, 0x1F00, 0x1F00, 0x1F00, 0x1F40, 0x1F40, 0x1F40, 0x1F40,
    0x1F80, 0x1F80, 0x1F80, 0x1F80, 0x1FC0, 0x1FC0, 0x1FC0, 0x1FC0,
    0x2000, 0x2000, 0x2000, 0x2000, 0x2040, 0x2040, 0x2040, 0x2040,
    0x2080, 0x2080, 0x2080, 0x2080, 0x20C0, 0x20C0, 0x20C0, 0x20C0,
    0x2100, 0x2100, 0x2100, 0x2100, 0x2140, 0x2140, 0x2140, 0x2140,
    0x2180, 0x2180, 0x2180, 0x2180, 0x21C0, 0x21C0, 0x21C0, 0x21C0,
    0x2200, 0x2200, 0x2200, 0x2200, 0x2240, 0x2240, 0x2240, 0x2240,
    0x2280, 0x2280, 0x2280, 0x2280, 0x22C0, 0x22C0, 0x22C0, 0x22C0,
    0x2300, 0x2300, 0x2300, 0x2300, 0x2340, 0x2340, 0x2340, 0x2340,
    0x2380, 0x2380, 0x2380, 0x2380, 0x23C0, 0x23C0, 0x23C0, 0x23C0,
    0x2400, 0x2400, 0x2400, 0x2400, 0x2440, 0x2440, 0x2440, 0x2440,
    0x2480, 0x2480, 0x2480, 0x2480, 0x24C0, 0x24C0, 0x24C0, 0x24C0,
    0x2500, 0x2500, 0x2500, 0x2500, 0x2540, 0x2540, 0x2540, 0x2540,
    0x2580, 0x2580, 0x2580, 0x2580, 0x25C0, 0x25C0, 0x25C0, 0x25C0,
    0x2600, 0x2600, 0x2600, 0x2600, 0x2640, 0x2640, 0x2640, 0x2640,
    0x2680, 0x2680, 0x2680, 0x2680, 0x26C0, 0x26C0, 0x26C0, 0x26C0,
    0x2700, 0x2700, 0x2700, 0x2700, 0x2740, 0x2740, 0x2740, 0x2740,
    0x2780, 0x2780, 0x2780, 0x2780, 0x27C0, 0x27C0, 0x27C0, 0x27C0,
    0x2800, 0x2800, 0x2800, 0x2800, 0x2840, 0x2840, 0x2840, 0x2840,
    0x2880, 0x2880, 0x2880, 0x2880, 0x28C0, 0x28C0, 0x28C0, 0x28C0,
    0x2900, 0x2900, 0x2900, 0x2900, 0x2940, 0x2940, 0x2940, 0x2940,
    0x2980, 0x2980, 0x2980, 0x2980, 0x29C0, 0x29C0, 0x29C0, 0x29C0,
    0x2A00, 0x2A00, 0x2A00, 0x2A00, 0x2A40, 0x2A40, 0x2A40, 0x2A40,
    0x2A80, 0x2A80, 0x2A80, 0x2A80, 0x2AC0, 0x2AC0, 0x2AC0, 0x2AC0,
    0x2B00, 0x2B00, 0x2B00, 0x2B00, 0x2B40, 0x2B40, 0x2B40, 0x2B40,
    0x2B80, 0x2B80, 0x2B80, 0x2B80, 0x2BC0, 0x2BC0, 0x2BC0, 0x2BC0,
    0x2C00, 0x2C00, 0x2C00, 0x2C00, 0x2C40, 0x2C40, 0x2C40, 0x2C40,
    0x2C80, 0x2C80, 0x2C80, 0x2C80, 0x2CC0, 0x2CC0, 0x2CC0, 0x2CC0,
    0x2D00, 0x2D00, 0x2D00, 0x2D00, 0x2D40, 0x2D40, 0x2D40, 0x2D40,
    0x2D80, 0x2D80, 0x2D80, 0x2D80, 0x2DC0, 0x2DC0, 0x2DC0, 0x2DC0,
    0x2E00, 0x2E00, 0x2E00, 0x2E00, 0x2E40, 0x2E40, 0x2E40, 0x2E40,
    0x2E80, 0x2E80, 0x2E80, 0x2E80, 0x2EC0, 0x2EC0, 0x2EC0, 0x2EC0,
    0x2F00, 0x2F00, 0x2F00, 0x2F00, 0x2F40, 0x2F40, 0x2F40, 0x2F40,
    0x2F80, 0x2F80, 0x2F80, 0x2F80, 0x2FC0, 0x2FC0, 0x2FC0, 0x2FC0,
    0x3000, 0x3000, 0x3000, 0x3000, 0x3040, 0x3040, 0x3040, 0x3040,
    0x3080, 0x3080, 0x3080, 0x3080, 0x30C0, 0x30C0, 0x30C0, 0x30C0,
    0x3100, 0x3100, 0x3100, 0x3100, 0x3140, 0x3140, 0x3140, 0x3140,
    0x3180, 0x3180, 0x3180, 0x3180, 0x31C0, 0x31C0, 0x31C0, 0x31C0,
    0x3200, 0x3200, 0x3200, 0x3200, 0x3240, 0x3240, 0x3240, 0x3240,
    0x3280, 0x3280, 0x3280, 0x3280, 0x32C0, 0x32C0, 0x32C0, 0x32C0,
    0x3300, 0x3300, 0x3300, 0x3300, 0x3340, 0x3340, 0x3340, 0x3340,
    0x3380, 0x3380, 0x3380, 0x3380, 0x33C0, 0x33C0, 0x33C0, 0x33C0,
    0x3400, 0x3400, 0x3400, 0x3400, 0x3440, 0x3440, 0x3440, 0x3440,
    0x3480, 0x3480, 0x3480, 0x3480, 0x34C0, 0x34C0, 0x34C0, 0x34C0,
    0x3500, 0x3500, 0x3500, 0x3500, 0x3540, 0x3540, 0x3540, 0x3540,
    0x3580, 0x3580, 0x3580, 0x3580, 0x35C0, 0x35C0, 0x35C0, 0x35C0,
    0x3600, 0x3600, 0x3600, 0x3600, 0x3640, 0x3640, 0x3640, 0x3640,
    0x3680, 0x3680, 0x3680, 0x3680, 0x36C0, 0x36C0, 0x36C0, 0x36C0,
    0x3700, 0x3700, 0x3700, 0x3700, 0x3740, 0x3740, 0x3740, 0x3740,
    0x3780, 0x3780, 0x3780, 0x3780, 0x37C0, 0x37C0, 0x37C0, 0x37C0,
    0x3800, 0x3800, 0x3800, 0x3800, 0x3840, 0x3840, 0x3840, 0x3840,
    0x3880, 0x3880, 0x3880, 0x3880, 0x38C0, 0x38C0, 0x38C0, 0x38C0,
    0x3900, 0x3900, 0x3900, 0x3900, 0x3940, 0x3940, 0x3940, 0x3940,
    0x3980, 0x3980, 0x3980, 0x3980, 0x39C0, 0x39C0, 0x39C0, 0x39C0,
    0x3A00, 0x3A00, 0x3A00, 0x3A00, 0x3A40, 0x3A40, 0x3A40, 0x3A40,
    0x3A80, 0x3A80, 0x3A80, 0x3A80, 0x3AC0, 0x3AC0, 0x3AC0, 0x3AC0,
    0x3B00, 0x3B00, 0x3B00, 0x3B00, 0x3B40, 0x3B40, 0x3B40, 0x3B40,
    0x3B80, 0x3B80, 0x3B80, 0x3B80, 0x3BC0, 0x3BC0, 0x3BC0, 0x3BC0,
    0x3C00, 0x3C00, 0x3C00, 0x3C00, 0x3C40, 0x3C40, 0x3C40, 0x3C40,
    0x3C80, 0x3C80, 0x3C80, 0x3C80, 0x3CC0, 0x3CC0, 0x3CC0, 0x3CC0,
    0x3D00, 0x3D00, 0x3D00, 0x3D00, 0x3D40, 0x3D40, 0x3D40, 0x3D40,
    0x3D80, 0x3D80, 0x3D80, 0x3D80, 0x3DC0, 0x3DC0, 0x3DC0, 0x3DC0,
    0x3E00, 0x3E00, 0x3E00, 0x3E00, 0x3E40, 0x3E40, 0x3E40, 0x3E40,
    0x3E80, 0x3E80, 0x3E80, 0x3E80, 0x3EC0, 0x3EC0, 0x3EC0, 0x3EC0,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F40, 0x3F40, 0x3F40, 0x3F40,
    0x3F80, 0x3F80, 0x3F80, 0x3F80, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0
};

// void*
void* switchdataD_00614bc0 = (void*)0x004926AC; // caseD_0
void* switchdataD_00614c04 = (void*)0x0049273B; // caseD_0
void* g_PTR_0061e290 = (void*)0x0264BBB4; // DAT_0264bbb4
void* g_CrtStackBuffer = nullptr;
void* g_PTR_0061f29b = (void*)crt_unknown_c_FUN_005bcce4;
void* g_SpecialExitHandler = nullptr;
void* g_IsSpecialDeviceFuncPtr = nullptr;
void* g_SpecialDeviceCleanupFunc = nullptr;
void* g_PTR_0061f41c = nullptr;
void* g_SpecialDeviceCloseFunc = nullptr;
void* g_PTR_0061f43c = nullptr;
void* g_SpecialDeviceWriteFuncPtr = nullptr;
void* g_SpecialConsoleInputHandler = nullptr;
void* g_SpecialConsoleOutputHandler = nullptr;
void* g_PTR_0061f454 = nullptr;
void* g_UserExceptionFilter = nullptr;
void* g_ExceptionCleanup = nullptr;
void* g_PTR_0061f7f0 = (void*)crt_unknown_c_FUN_005c67b0;
void* g_PTR_0061f7f4 = (void*)crt_unknown_c_FUN_005c68a8;
void* g_PTR_0061f7f8 = (void*)crt_unknown_c_FUN_005c5cd0;

// void*[2]
void* g_ARRAY_PTR_0061f6b4[2] = {(void*)crt_unknown_c_FUN_005c25e0, (void*)crt_unknown_c_FUN_005c25e0};

// void*[4]
void* g_ARRAY_PTR_0061f22c[4] = {(void*)crt_unknown_c_FUN_005bcc3f, (void*)crt_unknown_c_FUN_005bcc3f, (void*)crt_unknown_c_FUN_005bcc3f, (void*)crt_unknown_c_FUN_005bcc3f};

