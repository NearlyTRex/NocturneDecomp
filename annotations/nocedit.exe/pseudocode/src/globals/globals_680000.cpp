#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x680000
// =============================================================================

// BYTE
BYTE g_WindowsMinorVersion = 0x00;
BYTE g_InitHandlerStatusStart = 0x00;
BYTE g_InitHandlerPriorityStart = 0x40;
BYTE g_ExitHandlerTableStart = 0x00;
BYTE g_ExitHandlerPriorityEnd = 0x01;

// CDemonPod*
CDemonPod* g_CDemonPodPtr = (CDemonPod*)&g_CDemonPodInstance;

// CDemonSet*
CDemonSet* g_CDemonSetPtr = (CDemonSet*)&g_CDemonSetInstance;

// CNetGame*
CNetGame* g_CNetGameInstance = (CNetGame*)0x02F7C740; // DAT_02f7c740

// CScript*
CScript* g_CScriptPtr = (CScript*)&g_CScriptInstance;

// CSound*
CSound* g_CSoundPtr = (CSound*)&g_CSoundInstance;

// CSpotView*
CSpotView* g_CSpotViewPtr = (CSpotView*)&g_CSpotViewInstance;

// CTerrain*
CTerrain* g_CTerrainPtr = (CTerrain*)&g_CTerrainInstance;

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

// DWORD
DWORD g_TLSIndex = 0xffffffff;
DWORD g_WinMainCmdShow = 0x0;
DWORD g_StackAllocSize = 0x0;
DWORD g_RuntimeBufferSize = 0xf4;

// EXCEPTION_CLEANUP_FUNC*
EXCEPTION_CLEANUP_FUNC* g_ExceptionCleanup = nullptr;

// EXCEPTION_FILTER_FUNC*
EXCEPTION_FILTER_FUNC* g_UserExceptionFilter = nullptr;

// FILE*
FILE* g_StaticFilePoolStart = nullptr;
FILE* g_StderrLogFile = nullptr;

// GUID
GUID g_IID_IKsPropertySet = {0x31EFAC30, 0x515C, 0x11D0, {0xA9, 0xAA, 0x00, 0xAA, 0x00, 0x61, 0xBE, 0x93}};
GUID g_KSPROPSETID_DirectSound3DListener = {0x62A69BAE, 0xDF9D, 0x11D1, {0x99, 0xA6, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x46}};
GUID DAT_00681df0 = {0x4A4E6FC1, 0xC341, 0x11D1, {0xB7, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00}};
GUID DAT_00686d58 = {0x279AFA84, 0x4981, 0x11CE, {0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60}};
GUID g_IID_IDirectSound3DBuffer = {0x279AFA86, 0x4981, 0x11CE, {0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60}};

// HANDLE
HANDLE g_ConsoleInputHandle = (HANDLE)0xFFFFFFFF;
HANDLE g_ConsoleOutputHandle = (HANDLE)0xFFFFFFFF;

// Heap*
Heap* g_MainHeap = nullptr;
Heap* g_SecondaryHeap = nullptr;

// IS_SPECIAL_DEVICE_FUNC*
IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = nullptr;

// RUNTIME_HANDLER_FUNC*
RUNTIME_HANDLER_FUNC* g_FirstInitHandler = (RUNTIME_HANDLER_FUNC*)core_actor_cpp_staticInit_FUN_00408320;
RUNTIME_HANDLER_FUNC* g_FirstExitHandler = (RUNTIME_HANDLER_FUNC*)crt_stub_c_staticFinal_FUN_005fde93;

// RuntimeHandlerEntry
RuntimeHandlerEntry g_ExitHandlerTableEnd;

// RuntimeHandlerEntry[166]
RuntimeHandlerEntry g_InitHandlers[166] = {
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammo_cpp_staticInit_FUN_00410d50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ammobox_cpp_staticInit_FUN_00411530
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_anvil_cpp_staticInit_FUN_00411c70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_armour_cpp_staticInit_FUN_00412130
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_backgnd_cpp_staticInit_FUN_00412740
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_baron_cpp_staticInit_FUN_00412b20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_barrier_cpp_staticInit_FUN_00414150
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bat_cpp_staticInit_FUN_004146c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_batcreat_cpp_staticInit_FUN_00415080
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_batman_cpp_staticInit_FUN_004163e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_battery_cpp_staticInit_FUN_00417e20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_beast_cpp_staticInit_FUN_004181b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_biggs_cpp_staticInit_FUN_00418550
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bodypart_cpp_staticInit_FUN_00418de0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boneguy_cpp_staticInit_FUN_0041b6d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_boxactor_cpp_staticInit_FUN_00421650
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bride_cpp_staticInit_FUN_00423700
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_bugs_cpp_staticInit_FUN_00424c40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_charactr_cpp_staticInit_FUN_00427d80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_chain_cpp_staticInit_FUN_0042fb10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cloth_cpp_staticInit_FUN_00438b80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_colonel_cpp_staticInit_FUN_0043f770
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_console_cpp_staticInit_FUN_004417e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_conveyor_cpp_staticInit_FUN_00441c30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cow_cpp_staticInit_FUN_004440d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crate_cpp_staticInit_FUN_00448460
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crossbow_cpp_staticInit_FUN_00448c00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_curtain_cpp_staticInit_FUN_00449610
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcamera_cpp_staticInit_FUN_0044bb10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dcube_cpp_staticInit_FUN_00454720
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dest_cpp_staticInit_FUN_0046f890
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dfilter_cpp_staticInit_FUN_0046ff50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dlight_cpp_staticInit_FUN_00472680
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dmodel_cpp_staticInit_FUN_00476c50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dog_cpp_staticInit_FUN_0047efe0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_door_cpp_staticInit_FUN_0047fa60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dracbrid_cpp_staticInit_FUN_00483ef0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_drender_cpp_staticInit_FUN_0048a6b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drip_cpp_staticInit_FUN_0048df80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_drone_cpp_staticInit_FUN_0048eae0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dskybox_cpp_staticInit_FUN_00490040
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtrace_cpp_staticInit_FUN_004941e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dtri_cpp_staticInit_FUN_0049a430
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dynamite_cpp_staticInit_FUN_0049cd40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_edittool_cpp_staticInit_FUN_0049d170
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_elephant_cpp_staticInit_FUN_004a6f70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_emitter_cpp_staticInit_FUN_004a7c30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_enemy_cpp_staticInit_FUN_004a94d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_event_cpp_staticInit_FUN_004aa260
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_filmreel_cpp_staticInit_FUN_004be620
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_fire_cpp_staticInit_FUN_004bef20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flame_cpp_staticInit_FUN_004c9a30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamecan_cpp_staticInit_FUN_004cb0f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamegun_cpp_staticInit_FUN_004cb810
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flashlit_cpp_staticInit_FUN_004cbb50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flamegun_cpp_staticInit_FUN_004cbcb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_flies_cpp_staticInit_FUN_004cbcf0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_frankgen_cpp_staticInit_FUN_004d16b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gabriela_cpp_staticInit_FUN_004d2910
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_game_cpp_staticInit_FUN_004d76d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gargoyle_cpp_staticInit_FUN_004e4470
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gasmask_cpp_staticInit_FUN_004e5c90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ghoul_cpp_staticInit_FUN_004e5f90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_glass_cpp_staticInit_FUN_004e8fd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gore_cpp_staticInit_FUN_004eb8c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_grave_cpp_staticInit_FUN_004ee4a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ground_cpp_staticInit_FUN_004eeb90
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_gun_cpp_staticInit_FUN_004f0280
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_haystack_cpp_staticInit_FUN_004f0ba0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_health_cpp_staticInit_FUN_004f1d60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hero_cpp_staticInit_FUN_004f2120
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hiram_cpp_staticInit_FUN_004f4380
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hostage_cpp_staticInit_FUN_004f47d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hotdemon_cpp_staticInit_FUN_004f6c30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_hpriest_cpp_staticInit_FUN_004f7b00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_icepick_cpp_staticInit_FUN_004f7d80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_imp_cpp_staticInit_FUN_004f9830
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_ini_cpp_staticInit_FUN_004fb240
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_inv_cpp_staticInit_FUN_004fcc30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_keyactor_cpp_staticInit_FUN_00501620
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)engine_keys_cpp_staticInit_FUN_00502410
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_ladder_cpp_staticInit_FUN_005024d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_larva_cpp_staticInit_FUN_00502f20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_level_cpp_staticInit_FUN_00503d80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lever_cpp_staticInit_FUN_00504760
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_lightgun_cpp_staticInit_FUN_00505890
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_litecone_cpp_staticInit_FUN_00506aa0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_main_c_staticInit_FUN_00506e80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_manpuz_cpp_staticInit_FUN_00508890
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_marquee_cpp_staticInit_FUN_0050baf0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_melee_cpp_staticInit_FUN_0050e760
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)shape_memdbg_cpp_staticInit_FUN_0050ee40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_menu_cpp_staticInit_FUN_0050fdb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_meshlod_cpp_staticInit_FUN_00514f70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mimic_cpp_staticInit_FUN_0051f100
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_minecar_cpp_staticInit_FUN_00520e20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mirror_cpp_staticInit_FUN_00520fb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mission_cpp_staticInit_FUN_00522c50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mobster_cpp_staticInit_FUN_00525070
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moloch_cpp_staticInit_FUN_00528ac0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_moon_cpp_staticInit_FUN_005299f0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_msnedit_cpp_staticInit_FUN_00535c30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_netgame_cpp_staticInit_FUN_0053f310
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_newmsg_cpp_staticInit_FUN_00544360
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_npc_cpp_staticInit_FUN_00544770
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_passngr_cpp_staticInit_FUN_00545ac0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_pendulum_cpp_staticInit_FUN_00549320
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_platfrm_cpp_staticInit_FUN_0054c7e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_podmain_cpp_staticInit_FUN_00551990
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_scat_cpp_staticInit_FUN_00556e00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_script_cpp_staticInit_FUN_005591b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sentinel_cpp_staticInit_FUN_00567d40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_set_cpp_staticInit_FUN_00569040
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setcolid_cpp_staticInit_FUN_005715b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setdir_cpp_staticInit_FUN_00574790
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_setedit_cpp_staticInit_FUN_00576930
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shotgun_cpp_staticInit_FUN_00587e70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_shovel_cpp_staticInit_FUN_00588b30
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_simbox_cpp_staticInit_FUN_00588cd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_skeleton_cpp_staticInit_FUN_00599670
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_slew_cpp_staticInit_FUN_005a2050
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_smiley_cpp_staticInit_FUN_005a23c0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndmain_cpp_staticInit_FUN_005a3940
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_snddx_cpp_staticInit_FUN_005ade60
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)sound_sndwav_cpp_staticInit_FUN_005b0670
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_sound_cpp_staticInit_FUN_005b1760
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spike_cpp_staticInit_FUN_005b81b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)shape_spotview_cpp_staticInit_FUN_005b95b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stairs_cpp_staticInit_FUN_005b9b00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stone_cpp_staticInit_FUN_005baca0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_stranger_cpp_staticInit_FUN_005bae80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_succubus_cpp_staticInit_FUN_005c6a10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_svetlana_cpp_staticInit_FUN_005d87e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tbplayer_cpp_staticInit_FUN_005d9fd0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_teleport_cpp_staticInit_FUN_005da6e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tentacle_cpp_staticInit_FUN_005daef0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_texlist_cpp_staticInit_FUN_005dbdb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tommygun_cpp_staticInit_FUN_005dda20
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trap_cpp_staticInit_FUN_005de620
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trash_cpp_staticInit_FUN_005deb00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_trigger_cpp_staticInit_FUN_005df7d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)support_trisock_cpp_staticInit_FUN_005e16b0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_turret_cpp_staticInit_FUN_005e2080
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_tvbat_cpp_staticInit_FUN_005e3e50
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vampboss_cpp_staticInit_FUN_005e5520
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vehicle_cpp_staticInit_FUN_005e7810
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vehicle_cpp_staticInit_FUN_005e78d0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_vessel_cpp_staticInit_FUN_005e8df0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_water_cpp_staticInit_FUN_005e9da0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_wateract_cpp_staticInit_FUN_005ea810
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_waypoint_cpp_staticInit_FUN_005ebd10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weapon_cpp_staticInit_FUN_005ede40
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_weather_cpp_staticInit_FUN_005eeaa0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_werewolf_cpp_staticInit_FUN_005efb70
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_zombie_cpp_staticInit_FUN_005f8c90
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_strtod_c_staticInit_FUN_00603bb0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_fltused_c_staticInit_FUN_005fde60
    },
    {
        .status = 0x00,
        .priority = 0x01,
        .func = (RUNTIME_HANDLER_FUNC *)crt_stub_c_staticInit_FUN_005fde92
    },
    {
        .status = 0x00,
        .priority = 0x02,
        .func = (RUNTIME_HANDLER_FUNC *)crt_fpu_c_staticInit_FUN_006047e0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_stub_c_staticInit_FUN_005ff9f2
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_ioinit_c_staticInit_FUN_00608f20
    },
    {
        .status = 0x00,
        .priority = 0x0B,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticInit_FUN_0060240e
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_environ_c_staticInit_FUN_0060c650
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_startup_c_staticInit_FUN_0060aef4
    },
    {
        .status = 0x00,
        .priority = 0x03,
        .func = (RUNTIME_HANDLER_FUNC *)crt_fpemu_c_staticInit_FUN_0060be80
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_thread_c_staticInit_FUN_0060d214
    }
};

// RuntimeHandlerEntry[6]
RuntimeHandlerEntry g_ExitHandlers[6] = {
    {
        .status = 0x00,
        .priority = 0x28,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_00605b62
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_00608fc0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_00602748
    },
    {
        .status = 0x00,
        .priority = 0x1F,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_00608bb0
    },
    {
        .status = 0x00,
        .priority = 0x20,
        .func = (RUNTIME_HANDLER_FUNC *)crt_environ_c_staticFinal_FUN_0060c73c
    },
    {
        .status = 0x00,
        .priority = 0x0A,
        .func = (RUNTIME_HANDLER_FUNC *)crt_unknown_c_staticFinal_FUN_0060a4cc
    }
};

// SAlphaEntry[256]
SAlphaEntry g_AlphaTable[256] = {
    {
        .red = 0x0000,
        .green = 0x0000,
        .blue = 0x0000,
        .pad = 0x0000
    },
    {
        .red = 0x0001,
        .green = 0x0001,
        .blue = 0x0001,
        .pad = 0x0000
    },
    {
        .red = 0x0002,
        .green = 0x0002,
        .blue = 0x0002,
        .pad = 0x0000
    },
    {
        .red = 0x0003,
        .green = 0x0003,
        .blue = 0x0003,
        .pad = 0x0000
    },
    {
        .red = 0x0004,
        .green = 0x0004,
        .blue = 0x0004,
        .pad = 0x0000
    },
    {
        .red = 0x0005,
        .green = 0x0005,
        .blue = 0x0005,
        .pad = 0x0000
    },
    {
        .red = 0x0006,
        .green = 0x0006,
        .blue = 0x0006,
        .pad = 0x0000
    },
    {
        .red = 0x0007,
        .green = 0x0007,
        .blue = 0x0007,
        .pad = 0x0000
    },
    {
        .red = 0x0008,
        .green = 0x0008,
        .blue = 0x0008,
        .pad = 0x0000
    },
    {
        .red = 0x0009,
        .green = 0x0009,
        .blue = 0x0009,
        .pad = 0x0000
    },
    {
        .red = 0x000A,
        .green = 0x000A,
        .blue = 0x000A,
        .pad = 0x0000
    },
    {
        .red = 0x000B,
        .green = 0x000B,
        .blue = 0x000B,
        .pad = 0x0000
    },
    {
        .red = 0x000C,
        .green = 0x000C,
        .blue = 0x000C,
        .pad = 0x0000
    },
    {
        .red = 0x000D,
        .green = 0x000D,
        .blue = 0x000D,
        .pad = 0x0000
    },
    {
        .red = 0x000E,
        .green = 0x000E,
        .blue = 0x000E,
        .pad = 0x0000
    },
    {
        .red = 0x000F,
        .green = 0x000F,
        .blue = 0x000F,
        .pad = 0x0000
    },
    {
        .red = 0x0010,
        .green = 0x0010,
        .blue = 0x0010,
        .pad = 0x0000
    },
    {
        .red = 0x0011,
        .green = 0x0011,
        .blue = 0x0011,
        .pad = 0x0000
    },
    {
        .red = 0x0012,
        .green = 0x0012,
        .blue = 0x0012,
        .pad = 0x0000
    },
    {
        .red = 0x0013,
        .green = 0x0013,
        .blue = 0x0013,
        .pad = 0x0000
    },
    {
        .red = 0x0014,
        .green = 0x0014,
        .blue = 0x0014,
        .pad = 0x0000
    },
    {
        .red = 0x0015,
        .green = 0x0015,
        .blue = 0x0015,
        .pad = 0x0000
    },
    {
        .red = 0x0016,
        .green = 0x0016,
        .blue = 0x0016,
        .pad = 0x0000
    },
    {
        .red = 0x0017,
        .green = 0x0017,
        .blue = 0x0017,
        .pad = 0x0000
    },
    {
        .red = 0x0018,
        .green = 0x0018,
        .blue = 0x0018,
        .pad = 0x0000
    },
    {
        .red = 0x0019,
        .green = 0x0019,
        .blue = 0x0019,
        .pad = 0x0000
    },
    {
        .red = 0x001A,
        .green = 0x001A,
        .blue = 0x001A,
        .pad = 0x0000
    },
    {
        .red = 0x001B,
        .green = 0x001B,
        .blue = 0x001B,
        .pad = 0x0000
    },
    {
        .red = 0x001C,
        .green = 0x001C,
        .blue = 0x001C,
        .pad = 0x0000
    },
    {
        .red = 0x001D,
        .green = 0x001D,
        .blue = 0x001D,
        .pad = 0x0000
    },
    {
        .red = 0x001E,
        .green = 0x001E,
        .blue = 0x001E,
        .pad = 0x0000
    },
    {
        .red = 0x001F,
        .green = 0x001F,
        .blue = 0x001F,
        .pad = 0x0000
    },
    {
        .red = 0x0020,
        .green = 0x0020,
        .blue = 0x0020,
        .pad = 0x0000
    },
    {
        .red = 0x0021,
        .green = 0x0021,
        .blue = 0x0021,
        .pad = 0x0000
    },
    {
        .red = 0x0022,
        .green = 0x0022,
        .blue = 0x0022,
        .pad = 0x0000
    },
    {
        .red = 0x0023,
        .green = 0x0023,
        .blue = 0x0023,
        .pad = 0x0000
    },
    {
        .red = 0x0024,
        .green = 0x0024,
        .blue = 0x0024,
        .pad = 0x0000
    },
    {
        .red = 0x0025,
        .green = 0x0025,
        .blue = 0x0025,
        .pad = 0x0000
    },
    {
        .red = 0x0026,
        .green = 0x0026,
        .blue = 0x0026,
        .pad = 0x0000
    },
    {
        .red = 0x0027,
        .green = 0x0027,
        .blue = 0x0027,
        .pad = 0x0000
    },
    {
        .red = 0x0028,
        .green = 0x0028,
        .blue = 0x0028,
        .pad = 0x0000
    },
    {
        .red = 0x0029,
        .green = 0x0029,
        .blue = 0x0029,
        .pad = 0x0000
    },
    {
        .red = 0x002A,
        .green = 0x002A,
        .blue = 0x002A,
        .pad = 0x0000
    },
    {
        .red = 0x002B,
        .green = 0x002B,
        .blue = 0x002B,
        .pad = 0x0000
    },
    {
        .red = 0x002C,
        .green = 0x002C,
        .blue = 0x002C,
        .pad = 0x0000
    },
    {
        .red = 0x002D,
        .green = 0x002D,
        .blue = 0x002D,
        .pad = 0x0000
    },
    {
        .red = 0x002E,
        .green = 0x002E,
        .blue = 0x002E,
        .pad = 0x0000
    },
    {
        .red = 0x002F,
        .green = 0x002F,
        .blue = 0x002F,
        .pad = 0x0000
    },
    {
        .red = 0x0030,
        .green = 0x0030,
        .blue = 0x0030,
        .pad = 0x0000
    },
    {
        .red = 0x0031,
        .green = 0x0031,
        .blue = 0x0031,
        .pad = 0x0000
    },
    {
        .red = 0x0032,
        .green = 0x0032,
        .blue = 0x0032,
        .pad = 0x0000
    },
    {
        .red = 0x0033,
        .green = 0x0033,
        .blue = 0x0033,
        .pad = 0x0000
    },
    {
        .red = 0x0034,
        .green = 0x0034,
        .blue = 0x0034,
        .pad = 0x0000
    },
    {
        .red = 0x0035,
        .green = 0x0035,
        .blue = 0x0035,
        .pad = 0x0000
    },
    {
        .red = 0x0036,
        .green = 0x0036,
        .blue = 0x0036,
        .pad = 0x0000
    },
    {
        .red = 0x0037,
        .green = 0x0037,
        .blue = 0x0037,
        .pad = 0x0000
    },
    {
        .red = 0x0038,
        .green = 0x0038,
        .blue = 0x0038,
        .pad = 0x0000
    },
    {
        .red = 0x0039,
        .green = 0x0039,
        .blue = 0x0039,
        .pad = 0x0000
    },
    {
        .red = 0x003A,
        .green = 0x003A,
        .blue = 0x003A,
        .pad = 0x0000
    },
    {
        .red = 0x003B,
        .green = 0x003B,
        .blue = 0x003B,
        .pad = 0x0000
    },
    {
        .red = 0x003C,
        .green = 0x003C,
        .blue = 0x003C,
        .pad = 0x0000
    },
    {
        .red = 0x003D,
        .green = 0x003D,
        .blue = 0x003D,
        .pad = 0x0000
    },
    {
        .red = 0x003E,
        .green = 0x003E,
        .blue = 0x003E,
        .pad = 0x0000
    },
    {
        .red = 0x003F,
        .green = 0x003F,
        .blue = 0x003F,
        .pad = 0x0000
    },
    {
        .red = 0x0040,
        .green = 0x0040,
        .blue = 0x0040,
        .pad = 0x0000
    },
    {
        .red = 0x0041,
        .green = 0x0041,
        .blue = 0x0041,
        .pad = 0x0000
    },
    {
        .red = 0x0042,
        .green = 0x0042,
        .blue = 0x0042,
        .pad = 0x0000
    },
    {
        .red = 0x0043,
        .green = 0x0043,
        .blue = 0x0043,
        .pad = 0x0000
    },
    {
        .red = 0x0044,
        .green = 0x0044,
        .blue = 0x0044,
        .pad = 0x0000
    },
    {
        .red = 0x0045,
        .green = 0x0045,
        .blue = 0x0045,
        .pad = 0x0000
    },
    {
        .red = 0x0046,
        .green = 0x0046,
        .blue = 0x0046,
        .pad = 0x0000
    },
    {
        .red = 0x0047,
        .green = 0x0047,
        .blue = 0x0047,
        .pad = 0x0000
    },
    {
        .red = 0x0048,
        .green = 0x0048,
        .blue = 0x0048,
        .pad = 0x0000
    },
    {
        .red = 0x0049,
        .green = 0x0049,
        .blue = 0x0049,
        .pad = 0x0000
    },
    {
        .red = 0x004A,
        .green = 0x004A,
        .blue = 0x004A,
        .pad = 0x0000
    },
    {
        .red = 0x004B,
        .green = 0x004B,
        .blue = 0x004B,
        .pad = 0x0000
    },
    {
        .red = 0x004C,
        .green = 0x004C,
        .blue = 0x004C,
        .pad = 0x0000
    },
    {
        .red = 0x004D,
        .green = 0x004D,
        .blue = 0x004D,
        .pad = 0x0000
    },
    {
        .red = 0x004E,
        .green = 0x004E,
        .blue = 0x004E,
        .pad = 0x0000
    },
    {
        .red = 0x004F,
        .green = 0x004F,
        .blue = 0x004F,
        .pad = 0x0000
    },
    {
        .red = 0x0050,
        .green = 0x0050,
        .blue = 0x0050,
        .pad = 0x0000
    },
    {
        .red = 0x0051,
        .green = 0x0051,
        .blue = 0x0051,
        .pad = 0x0000
    },
    {
        .red = 0x0052,
        .green = 0x0052,
        .blue = 0x0052,
        .pad = 0x0000
    },
    {
        .red = 0x0053,
        .green = 0x0053,
        .blue = 0x0053,
        .pad = 0x0000
    },
    {
        .red = 0x0054,
        .green = 0x0054,
        .blue = 0x0054,
        .pad = 0x0000
    },
    {
        .red = 0x0055,
        .green = 0x0055,
        .blue = 0x0055,
        .pad = 0x0000
    },
    {
        .red = 0x0056,
        .green = 0x0056,
        .blue = 0x0056,
        .pad = 0x0000
    },
    {
        .red = 0x0057,
        .green = 0x0057,
        .blue = 0x0057,
        .pad = 0x0000
    },
    {
        .red = 0x0058,
        .green = 0x0058,
        .blue = 0x0058,
        .pad = 0x0000
    },
    {
        .red = 0x0059,
        .green = 0x0059,
        .blue = 0x0059,
        .pad = 0x0000
    },
    {
        .red = 0x005A,
        .green = 0x005A,
        .blue = 0x005A,
        .pad = 0x0000
    },
    {
        .red = 0x005B,
        .green = 0x005B,
        .blue = 0x005B,
        .pad = 0x0000
    },
    {
        .red = 0x005C,
        .green = 0x005C,
        .blue = 0x005C,
        .pad = 0x0000
    },
    {
        .red = 0x005D,
        .green = 0x005D,
        .blue = 0x005D,
        .pad = 0x0000
    },
    {
        .red = 0x005E,
        .green = 0x005E,
        .blue = 0x005E,
        .pad = 0x0000
    },
    {
        .red = 0x005F,
        .green = 0x005F,
        .blue = 0x005F,
        .pad = 0x0000
    },
    {
        .red = 0x0060,
        .green = 0x0060,
        .blue = 0x0060,
        .pad = 0x0000
    },
    {
        .red = 0x0061,
        .green = 0x0061,
        .blue = 0x0061,
        .pad = 0x0000
    },
    {
        .red = 0x0062,
        .green = 0x0062,
        .blue = 0x0062,
        .pad = 0x0000
    },
    {
        .red = 0x0063,
        .green = 0x0063,
        .blue = 0x0063,
        .pad = 0x0000
    },
    {
        .red = 0x0064,
        .green = 0x0064,
        .blue = 0x0064,
        .pad = 0x0000
    },
    {
        .red = 0x0065,
        .green = 0x0065,
        .blue = 0x0065,
        .pad = 0x0000
    },
    {
        .red = 0x0066,
        .green = 0x0066,
        .blue = 0x0066,
        .pad = 0x0000
    },
    {
        .red = 0x0067,
        .green = 0x0067,
        .blue = 0x0067,
        .pad = 0x0000
    },
    {
        .red = 0x0068,
        .green = 0x0068,
        .blue = 0x0068,
        .pad = 0x0000
    },
    {
        .red = 0x0069,
        .green = 0x0069,
        .blue = 0x0069,
        .pad = 0x0000
    },
    {
        .red = 0x006A,
        .green = 0x006A,
        .blue = 0x006A,
        .pad = 0x0000
    },
    {
        .red = 0x006B,
        .green = 0x006B,
        .blue = 0x006B,
        .pad = 0x0000
    },
    {
        .red = 0x006C,
        .green = 0x006C,
        .blue = 0x006C,
        .pad = 0x0000
    },
    {
        .red = 0x006D,
        .green = 0x006D,
        .blue = 0x006D,
        .pad = 0x0000
    },
    {
        .red = 0x006E,
        .green = 0x006E,
        .blue = 0x006E,
        .pad = 0x0000
    },
    {
        .red = 0x006F,
        .green = 0x006F,
        .blue = 0x006F,
        .pad = 0x0000
    },
    {
        .red = 0x0070,
        .green = 0x0070,
        .blue = 0x0070,
        .pad = 0x0000
    },
    {
        .red = 0x0071,
        .green = 0x0071,
        .blue = 0x0071,
        .pad = 0x0000
    },
    {
        .red = 0x0072,
        .green = 0x0072,
        .blue = 0x0072,
        .pad = 0x0000
    },
    {
        .red = 0x0073,
        .green = 0x0073,
        .blue = 0x0073,
        .pad = 0x0000
    },
    {
        .red = 0x0074,
        .green = 0x0074,
        .blue = 0x0074,
        .pad = 0x0000
    },
    {
        .red = 0x0075,
        .green = 0x0075,
        .blue = 0x0075,
        .pad = 0x0000
    },
    {
        .red = 0x0076,
        .green = 0x0076,
        .blue = 0x0076,
        .pad = 0x0000
    },
    {
        .red = 0x0077,
        .green = 0x0077,
        .blue = 0x0077,
        .pad = 0x0000
    },
    {
        .red = 0x0078,
        .green = 0x0078,
        .blue = 0x0078,
        .pad = 0x0000
    },
    {
        .red = 0x0079,
        .green = 0x0079,
        .blue = 0x0079,
        .pad = 0x0000
    },
    {
        .red = 0x007A,
        .green = 0x007A,
        .blue = 0x007A,
        .pad = 0x0000
    },
    {
        .red = 0x007B,
        .green = 0x007B,
        .blue = 0x007B,
        .pad = 0x0000
    },
    {
        .red = 0x007C,
        .green = 0x007C,
        .blue = 0x007C,
        .pad = 0x0000
    },
    {
        .red = 0x007D,
        .green = 0x007D,
        .blue = 0x007D,
        .pad = 0x0000
    },
    {
        .red = 0x007E,
        .green = 0x007E,
        .blue = 0x007E,
        .pad = 0x0000
    },
    {
        .red = 0x007F,
        .green = 0x007F,
        .blue = 0x007F,
        .pad = 0x0000
    },
    {
        .red = 0x0080,
        .green = 0x0080,
        .blue = 0x0080,
        .pad = 0x0000
    },
    {
        .red = 0x0081,
        .green = 0x0081,
        .blue = 0x0081,
        .pad = 0x0000
    },
    {
        .red = 0x0082,
        .green = 0x0082,
        .blue = 0x0082,
        .pad = 0x0000
    },
    {
        .red = 0x0083,
        .green = 0x0083,
        .blue = 0x0083,
        .pad = 0x0000
    },
    {
        .red = 0x0084,
        .green = 0x0084,
        .blue = 0x0084,
        .pad = 0x0000
    },
    {
        .red = 0x0085,
        .green = 0x0085,
        .blue = 0x0085,
        .pad = 0x0000
    },
    {
        .red = 0x0086,
        .green = 0x0086,
        .blue = 0x0086,
        .pad = 0x0000
    },
    {
        .red = 0x0087,
        .green = 0x0087,
        .blue = 0x0087,
        .pad = 0x0000
    },
    {
        .red = 0x0088,
        .green = 0x0088,
        .blue = 0x0088,
        .pad = 0x0000
    },
    {
        .red = 0x0089,
        .green = 0x0089,
        .blue = 0x0089,
        .pad = 0x0000
    },
    {
        .red = 0x008A,
        .green = 0x008A,
        .blue = 0x008A,
        .pad = 0x0000
    },
    {
        .red = 0x008B,
        .green = 0x008B,
        .blue = 0x008B,
        .pad = 0x0000
    },
    {
        .red = 0x008C,
        .green = 0x008C,
        .blue = 0x008C,
        .pad = 0x0000
    },
    {
        .red = 0x008D,
        .green = 0x008D,
        .blue = 0x008D,
        .pad = 0x0000
    },
    {
        .red = 0x008E,
        .green = 0x008E,
        .blue = 0x008E,
        .pad = 0x0000
    },
    {
        .red = 0x008F,
        .green = 0x008F,
        .blue = 0x008F,
        .pad = 0x0000
    },
    {
        .red = 0x0090,
        .green = 0x0090,
        .blue = 0x0090,
        .pad = 0x0000
    },
    {
        .red = 0x0091,
        .green = 0x0091,
        .blue = 0x0091,
        .pad = 0x0000
    },
    {
        .red = 0x0092,
        .green = 0x0092,
        .blue = 0x0092,
        .pad = 0x0000
    },
    {
        .red = 0x0093,
        .green = 0x0093,
        .blue = 0x0093,
        .pad = 0x0000
    },
    {
        .red = 0x0094,
        .green = 0x0094,
        .blue = 0x0094,
        .pad = 0x0000
    },
    {
        .red = 0x0095,
        .green = 0x0095,
        .blue = 0x0095,
        .pad = 0x0000
    },
    {
        .red = 0x0096,
        .green = 0x0096,
        .blue = 0x0096,
        .pad = 0x0000
    },
    {
        .red = 0x0097,
        .green = 0x0097,
        .blue = 0x0097,
        .pad = 0x0000
    },
    {
        .red = 0x0098,
        .green = 0x0098,
        .blue = 0x0098,
        .pad = 0x0000
    },
    {
        .red = 0x0099,
        .green = 0x0099,
        .blue = 0x0099,
        .pad = 0x0000
    },
    {
        .red = 0x009A,
        .green = 0x009A,
        .blue = 0x009A,
        .pad = 0x0000
    },
    {
        .red = 0x009B,
        .green = 0x009B,
        .blue = 0x009B,
        .pad = 0x0000
    },
    {
        .red = 0x009C,
        .green = 0x009C,
        .blue = 0x009C,
        .pad = 0x0000
    },
    {
        .red = 0x009D,
        .green = 0x009D,
        .blue = 0x009D,
        .pad = 0x0000
    },
    {
        .red = 0x009E,
        .green = 0x009E,
        .blue = 0x009E,
        .pad = 0x0000
    },
    {
        .red = 0x009F,
        .green = 0x009F,
        .blue = 0x009F,
        .pad = 0x0000
    },
    {
        .red = 0x00A0,
        .green = 0x00A0,
        .blue = 0x00A0,
        .pad = 0x0000
    },
    {
        .red = 0x00A1,
        .green = 0x00A1,
        .blue = 0x00A1,
        .pad = 0x0000
    },
    {
        .red = 0x00A2,
        .green = 0x00A2,
        .blue = 0x00A2,
        .pad = 0x0000
    },
    {
        .red = 0x00A3,
        .green = 0x00A3,
        .blue = 0x00A3,
        .pad = 0x0000
    },
    {
        .red = 0x00A4,
        .green = 0x00A4,
        .blue = 0x00A4,
        .pad = 0x0000
    },
    {
        .red = 0x00A5,
        .green = 0x00A5,
        .blue = 0x00A5,
        .pad = 0x0000
    },
    {
        .red = 0x00A6,
        .green = 0x00A6,
        .blue = 0x00A6,
        .pad = 0x0000
    },
    {
        .red = 0x00A7,
        .green = 0x00A7,
        .blue = 0x00A7,
        .pad = 0x0000
    },
    {
        .red = 0x00A8,
        .green = 0x00A8,
        .blue = 0x00A8,
        .pad = 0x0000
    },
    {
        .red = 0x00A9,
        .green = 0x00A9,
        .blue = 0x00A9,
        .pad = 0x0000
    },
    {
        .red = 0x00AA,
        .green = 0x00AA,
        .blue = 0x00AA,
        .pad = 0x0000
    },
    {
        .red = 0x00AB,
        .green = 0x00AB,
        .blue = 0x00AB,
        .pad = 0x0000
    },
    {
        .red = 0x00AC,
        .green = 0x00AC,
        .blue = 0x00AC,
        .pad = 0x0000
    },
    {
        .red = 0x00AD,
        .green = 0x00AD,
        .blue = 0x00AD,
        .pad = 0x0000
    },
    {
        .red = 0x00AE,
        .green = 0x00AE,
        .blue = 0x00AE,
        .pad = 0x0000
    },
    {
        .red = 0x00AF,
        .green = 0x00AF,
        .blue = 0x00AF,
        .pad = 0x0000
    },
    {
        .red = 0x00B0,
        .green = 0x00B0,
        .blue = 0x00B0,
        .pad = 0x0000
    },
    {
        .red = 0x00B1,
        .green = 0x00B1,
        .blue = 0x00B1,
        .pad = 0x0000
    },
    {
        .red = 0x00B2,
        .green = 0x00B2,
        .blue = 0x00B2,
        .pad = 0x0000
    },
    {
        .red = 0x00B3,
        .green = 0x00B3,
        .blue = 0x00B3,
        .pad = 0x0000
    },
    {
        .red = 0x00B4,
        .green = 0x00B4,
        .blue = 0x00B4,
        .pad = 0x0000
    },
    {
        .red = 0x00B5,
        .green = 0x00B5,
        .blue = 0x00B5,
        .pad = 0x0000
    },
    {
        .red = 0x00B6,
        .green = 0x00B6,
        .blue = 0x00B6,
        .pad = 0x0000
    },
    {
        .red = 0x00B7,
        .green = 0x00B7,
        .blue = 0x00B7,
        .pad = 0x0000
    },
    {
        .red = 0x00B8,
        .green = 0x00B8,
        .blue = 0x00B8,
        .pad = 0x0000
    },
    {
        .red = 0x00B9,
        .green = 0x00B9,
        .blue = 0x00B9,
        .pad = 0x0000
    },
    {
        .red = 0x00BA,
        .green = 0x00BA,
        .blue = 0x00BA,
        .pad = 0x0000
    },
    {
        .red = 0x00BB,
        .green = 0x00BB,
        .blue = 0x00BB,
        .pad = 0x0000
    },
    {
        .red = 0x00BC,
        .green = 0x00BC,
        .blue = 0x00BC,
        .pad = 0x0000
    },
    {
        .red = 0x00BD,
        .green = 0x00BD,
        .blue = 0x00BD,
        .pad = 0x0000
    },
    {
        .red = 0x00BE,
        .green = 0x00BE,
        .blue = 0x00BE,
        .pad = 0x0000
    },
    {
        .red = 0x00BF,
        .green = 0x00BF,
        .blue = 0x00BF,
        .pad = 0x0000
    },
    {
        .red = 0x00C0,
        .green = 0x00C0,
        .blue = 0x00C0,
        .pad = 0x0000
    },
    {
        .red = 0x00C1,
        .green = 0x00C1,
        .blue = 0x00C1,
        .pad = 0x0000
    },
    {
        .red = 0x00C2,
        .green = 0x00C2,
        .blue = 0x00C2,
        .pad = 0x0000
    },
    {
        .red = 0x00C3,
        .green = 0x00C3,
        .blue = 0x00C3,
        .pad = 0x0000
    },
    {
        .red = 0x00C4,
        .green = 0x00C4,
        .blue = 0x00C4,
        .pad = 0x0000
    },
    {
        .red = 0x00C5,
        .green = 0x00C5,
        .blue = 0x00C5,
        .pad = 0x0000
    },
    {
        .red = 0x00C6,
        .green = 0x00C6,
        .blue = 0x00C6,
        .pad = 0x0000
    },
    {
        .red = 0x00C7,
        .green = 0x00C7,
        .blue = 0x00C7,
        .pad = 0x0000
    },
    {
        .red = 0x00C8,
        .green = 0x00C8,
        .blue = 0x00C8,
        .pad = 0x0000
    },
    {
        .red = 0x00C9,
        .green = 0x00C9,
        .blue = 0x00C9,
        .pad = 0x0000
    },
    {
        .red = 0x00CA,
        .green = 0x00CA,
        .blue = 0x00CA,
        .pad = 0x0000
    },
    {
        .red = 0x00CB,
        .green = 0x00CB,
        .blue = 0x00CB,
        .pad = 0x0000
    },
    {
        .red = 0x00CC,
        .green = 0x00CC,
        .blue = 0x00CC,
        .pad = 0x0000
    },
    {
        .red = 0x00CD,
        .green = 0x00CD,
        .blue = 0x00CD,
        .pad = 0x0000
    },
    {
        .red = 0x00CE,
        .green = 0x00CE,
        .blue = 0x00CE,
        .pad = 0x0000
    },
    {
        .red = 0x00CF,
        .green = 0x00CF,
        .blue = 0x00CF,
        .pad = 0x0000
    },
    {
        .red = 0x00D0,
        .green = 0x00D0,
        .blue = 0x00D0,
        .pad = 0x0000
    },
    {
        .red = 0x00D1,
        .green = 0x00D1,
        .blue = 0x00D1,
        .pad = 0x0000
    },
    {
        .red = 0x00D2,
        .green = 0x00D2,
        .blue = 0x00D2,
        .pad = 0x0000
    },
    {
        .red = 0x00D3,
        .green = 0x00D3,
        .blue = 0x00D3,
        .pad = 0x0000
    },
    {
        .red = 0x00D4,
        .green = 0x00D4,
        .blue = 0x00D4,
        .pad = 0x0000
    },
    {
        .red = 0x00D5,
        .green = 0x00D5,
        .blue = 0x00D5,
        .pad = 0x0000
    },
    {
        .red = 0x00D6,
        .green = 0x00D6,
        .blue = 0x00D6,
        .pad = 0x0000
    },
    {
        .red = 0x00D7,
        .green = 0x00D7,
        .blue = 0x00D7,
        .pad = 0x0000
    },
    {
        .red = 0x00D8,
        .green = 0x00D8,
        .blue = 0x00D8,
        .pad = 0x0000
    },
    {
        .red = 0x00D9,
        .green = 0x00D9,
        .blue = 0x00D9,
        .pad = 0x0000
    },
    {
        .red = 0x00DA,
        .green = 0x00DA,
        .blue = 0x00DA,
        .pad = 0x0000
    },
    {
        .red = 0x00DB,
        .green = 0x00DB,
        .blue = 0x00DB,
        .pad = 0x0000
    },
    {
        .red = 0x00DC,
        .green = 0x00DC,
        .blue = 0x00DC,
        .pad = 0x0000
    },
    {
        .red = 0x00DD,
        .green = 0x00DD,
        .blue = 0x00DD,
        .pad = 0x0000
    },
    {
        .red = 0x00DE,
        .green = 0x00DE,
        .blue = 0x00DE,
        .pad = 0x0000
    },
    {
        .red = 0x00DF,
        .green = 0x00DF,
        .blue = 0x00DF,
        .pad = 0x0000
    },
    {
        .red = 0x00E0,
        .green = 0x00E0,
        .blue = 0x00E0,
        .pad = 0x0000
    },
    {
        .red = 0x00E1,
        .green = 0x00E1,
        .blue = 0x00E1,
        .pad = 0x0000
    },
    {
        .red = 0x00E2,
        .green = 0x00E2,
        .blue = 0x00E2,
        .pad = 0x0000
    },
    {
        .red = 0x00E3,
        .green = 0x00E3,
        .blue = 0x00E3,
        .pad = 0x0000
    },
    {
        .red = 0x00E4,
        .green = 0x00E4,
        .blue = 0x00E4,
        .pad = 0x0000
    },
    {
        .red = 0x00E5,
        .green = 0x00E5,
        .blue = 0x00E5,
        .pad = 0x0000
    },
    {
        .red = 0x00E6,
        .green = 0x00E6,
        .blue = 0x00E6,
        .pad = 0x0000
    },
    {
        .red = 0x00E7,
        .green = 0x00E7,
        .blue = 0x00E7,
        .pad = 0x0000
    },
    {
        .red = 0x00E8,
        .green = 0x00E8,
        .blue = 0x00E8,
        .pad = 0x0000
    },
    {
        .red = 0x00E9,
        .green = 0x00E9,
        .blue = 0x00E9,
        .pad = 0x0000
    },
    {
        .red = 0x00EA,
        .green = 0x00EA,
        .blue = 0x00EA,
        .pad = 0x0000
    },
    {
        .red = 0x00EB,
        .green = 0x00EB,
        .blue = 0x00EB,
        .pad = 0x0000
    },
    {
        .red = 0x00EC,
        .green = 0x00EC,
        .blue = 0x00EC,
        .pad = 0x0000
    },
    {
        .red = 0x00ED,
        .green = 0x00ED,
        .blue = 0x00ED,
        .pad = 0x0000
    },
    {
        .red = 0x00EE,
        .green = 0x00EE,
        .blue = 0x00EE,
        .pad = 0x0000
    },
    {
        .red = 0x00EF,
        .green = 0x00EF,
        .blue = 0x00EF,
        .pad = 0x0000
    },
    {
        .red = 0x00F0,
        .green = 0x00F0,
        .blue = 0x00F0,
        .pad = 0x0000
    },
    {
        .red = 0x00F1,
        .green = 0x00F1,
        .blue = 0x00F1,
        .pad = 0x0000
    },
    {
        .red = 0x00F2,
        .green = 0x00F2,
        .blue = 0x00F2,
        .pad = 0x0000
    },
    {
        .red = 0x00F3,
        .green = 0x00F3,
        .blue = 0x00F3,
        .pad = 0x0000
    },
    {
        .red = 0x00F4,
        .green = 0x00F4,
        .blue = 0x00F4,
        .pad = 0x0000
    },
    {
        .red = 0x00F5,
        .green = 0x00F5,
        .blue = 0x00F5,
        .pad = 0x0000
    },
    {
        .red = 0x00F6,
        .green = 0x00F6,
        .blue = 0x00F6,
        .pad = 0x0000
    },
    {
        .red = 0x00F7,
        .green = 0x00F7,
        .blue = 0x00F7,
        .pad = 0x0000
    },
    {
        .red = 0x00F8,
        .green = 0x00F8,
        .blue = 0x00F8,
        .pad = 0x0000
    },
    {
        .red = 0x00F9,
        .green = 0x00F9,
        .blue = 0x00F9,
        .pad = 0x0000
    },
    {
        .red = 0x00FA,
        .green = 0x00FA,
        .blue = 0x00FA,
        .pad = 0x0000
    },
    {
        .red = 0x00FB,
        .green = 0x00FB,
        .blue = 0x00FB,
        .pad = 0x0000
    },
    {
        .red = 0x00FC,
        .green = 0x00FC,
        .blue = 0x00FC,
        .pad = 0x0000
    },
    {
        .red = 0x00FD,
        .green = 0x00FD,
        .blue = 0x00FD,
        .pad = 0x0000
    },
    {
        .red = 0x00FE,
        .green = 0x00FE,
        .blue = 0x00FE,
        .pad = 0x0000
    },
    {
        .red = 0x00FF,
        .green = 0x00FF,
        .blue = 0x00FF,
        .pad = 0x0000
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
        .unk1 = 0x00000000,
        .unk2 = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000007,
        .unk1 = 0x00000002,
        .unk2 = 0x00000002,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EB60
    },
    {
        .table_size = 0x00000011,
        .unk1 = 0x00000003,
        .unk2 = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EB70
    },
    {
        .table_size = 0x00000011,
        .unk1 = 0x00000003,
        .unk2 = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EB98
    },
    {
        .table_size = 0x00000000,
        .unk1 = 0x00000000,
        .unk2 = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x0000001F,
        .unk1 = 0x00000004,
        .unk2 = 0x00000004,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EBC0
    },
    {
        .table_size = 0x0000001F,
        .unk1 = 0x00000004,
        .unk2 = 0x00000004,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EC00
    },
    {
        .table_size = 0x00000047,
        .unk1 = 0x00000006,
        .unk2 = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EC40
    },
    {
        .table_size = 0x00000047,
        .unk1 = 0x00000006,
        .unk2 = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067ECD0
    },
    {
        .table_size = 0x00000047,
        .unk1 = 0x00000006,
        .unk2 = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067ED60
    },
    {
        .table_size = 0x0000007F,
        .unk1 = 0x00000008,
        .unk2 = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EDF0
    },
    {
        .table_size = 0x0000007F,
        .unk1 = 0x00000008,
        .unk2 = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EEF0
    },
    {
        .table_size = 0x0000007F,
        .unk1 = 0x00000008,
        .unk2 = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067EFF0
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067F0F0
    },
    {
        .table_size = 0x00000000,
        .unk1 = 0x00000000,
        .unk2 = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067F4F0
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000001,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067F8F0
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000002,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000003,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000004,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000006,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000008,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x0000000A,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x0000000D,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000004,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x0067FCF0
    },
    {
        .table_size = 0x00000200,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000005,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000006,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000007,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000008,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x00000009,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x0000000B,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .unk1 = 0x00000010,
        .unk2 = 0x00000010,
        .bits = 0x0000000D,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x0000001F,
        .unk1 = 0x00000001,
        .unk2 = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x006800F0
    },
    {
        .table_size = 0x0000001F,
        .unk1 = 0x00000001,
        .unk2 = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x00680130
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

// SMRGLPrimitiveQuad*
SMRGLPrimitiveQuad* g_BoundingBoxQuadTemplateEnd = nullptr;

// SMRGLPrimitiveQuad[6]
SMRGLPrimitiveQuad g_BoundingBoxQuadTemplates[6] = {
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = -1,
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
                .B = -1,
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
                .C = -1,
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
SMRGLTextureBasic DAT_00680bb0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic DAT_006813e4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BACKGND.RAW"
};
SMRGLTextureBasic DAT_006816c0 = {
    .base = {.type = 0x00000000, .count = 0x00000000},
    .texture_name = "bbwhite.raw"
};
SMRGLTextureBasic SMRGLTextureBasic_006817fc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic DAT_006819e4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "MENUCLD2.RAW"
};
SMRGLTextureBasic DAT_00684178 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "headlite.raw"
};
SMRGLTextureBasic DAT_0068423C = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BACKGND.RAW"
};
SMRGLTextureBasic DAT_0068434c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "headlite.raw"
};
SMRGLTextureBasic DAT_006843FC = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "DIRT.RAW"
};
SMRGLTextureBasic DAT_006846f0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER0.RAW"
};
SMRGLTextureBasic DAT_00684708 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER1.RAW"
};
SMRGLTextureBasic DAT_00684720 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER2.RAW"
};
SMRGLTextureBasic DAT_00684738 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER3.RAW"
};
SMRGLTextureBasic DAT_00684750 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER4.RAW"
};
SMRGLTextureBasic DAT_00684768 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER5.RAW"
};
SMRGLTextureBasic DAT_00684780 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER6.RAW"
};
SMRGLTextureBasic DAT_00684798 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER7.RAW"
};
SMRGLTextureBasic DAT_006847B0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER8.RAW"
};
SMRGLTextureBasic DAT_006847C8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER9.RAW"
};
SMRGLTextureBasic DAT_006847E0 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER10.RAW"
};
SMRGLTextureBasic DAT_006847F8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER11.RAW"
};
SMRGLTextureBasic DAT_00684810 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER12.RAW"
};
SMRGLTextureBasic DAT_00684828 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER13.RAW"
};
SMRGLTextureBasic DAT_00684840 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER14.RAW"
};
SMRGLTextureBasic DAT_00684858 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "WATER15.RAW"
};
SMRGLTextureBasic DAT_00684900 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINDRP1.RAW"
};
SMRGLTextureBasic DAT_00684918 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINSPLT.RAW"
};
SMRGLTextureBasic DAT_00684930 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SNOWFLKE.RAW"
};
SMRGLTextureBasic DAT_0068495c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};

// SMRGLTextureBasic*
SMRGLTextureBasic* g_WaterTexturesEnd = nullptr;

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

// SPECIAL_CONSOLE_INPUT_HANDLER_FUNC*
SPECIAL_CONSOLE_INPUT_HANDLER_FUNC* g_SpecialConsoleInputHandler = nullptr;

// SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC*
SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC* g_SpecialConsoleOutputHandler = nullptr;

// SPECIAL_DEVICE_CLEANUP_FUNC*
SPECIAL_DEVICE_CLEANUP_FUNC* g_SpecialDeviceCleanupFunc = nullptr;

// SPECIAL_DEVICE_CLOSE_FUNC*
SPECIAL_DEVICE_CLOSE_FUNC* g_SpecialDeviceCloseFunc = nullptr;

// SPECIAL_DEVICE_READ_FUNC*
SPECIAL_DEVICE_READ_FUNC* g_SpecialDeviceReadFuncPtr = nullptr;

// SPECIAL_DEVICE_WRITE_FUNC*
SPECIAL_DEVICE_WRITE_FUNC* g_SpecialDeviceWriteFuncPtr = nullptr;

// SRenderVertex[16]
SRenderVertex g_RenderVertexBuffer[16] = {};

// SSoundModeEntry[27]
SSoundModeEntry g_SoundModeTable[27] = {
    {
        .name = (char *)s_OFF_00652855,
        .listener_orient = {
            .x = 0.0f,
            .y = 0.0f,
            .z = 0.0f
        }
    },
    {
        .name = (char *)s_GENERIC_00652859,
        .listener_orient = {
            .x = 0.5f,
            .y = 1.493f,
            .z = 0.5f
        }
    },
    {
        .name = (char *)s_PADDEDCELL_00652861,
        .listener_orient = {
            .x = 0.25f,
            .y = 0.1f,
            .z = 0.0f
        }
    },
    {
        .name = (char *)s_ROOM_0065286c,
        .listener_orient = {
            .x = 0.417f,
            .y = 0.40000001f,
            .z = 0.66600001f
        }
    },
    {
        .name = (char *)s_BATHROOM_00652871,
        .listener_orient = {
            .x = 0.653f,
            .y = 1.499f,
            .z = 0.16599999f
        }
    },
    {
        .name = (char *)s_LIVINGROOM_0065287a,
        .listener_orient = {
            .x = 0.208f,
            .y = 0.47799999f,
            .z = 0.0f
        }
    },
    {
        .name = (char *)s_STONEROOM_00652885,
        .listener_orient = {
            .x = 0.5f,
            .y = 2.309f,
            .z = 0.88800001f
        }
    },
    {
        .name = (char *)s_AUDITORIUM_0065288f,
        .listener_orient = {
            .x = 0.403f,
            .y = 4.2789998f,
            .z = 0.5f
        }
    },
    {
        .name = (char *)s_CONCERTHALL_0065289a,
        .listener_orient = {
            .x = 0.5f,
            .y = 3.961f,
            .z = 0.5f
        }
    },
    {
        .name = (char *)s_CAVE_006528a6,
        .listener_orient = {
            .x = 0.5f,
            .y = 2.8859999f,
            .z = 1.304f
        }
    },
    {
        .name = (char *)s_ARENA_006528ab,
        .listener_orient = {
            .x = 0.361f,
            .y = 7.2839999f,
            .z = 0.33199999f
        }
    },
    {
        .name = (char *)s_HANGAR_006528b1,
        .listener_orient = {
            .x = 0.5f,
            .y = 10.0f,
            .z = 0.30000001f
        }
    },
    {
        .name = (char *)s_CARPETEDHALLWAY_006528b8,
        .listener_orient = {
            .x = 0.153f,
            .y = 0.259f,
            .z = 2.0f
        }
    },
    {
        .name = (char *)s_HALLWAY_006528c8,
        .listener_orient = {
            .x = 0.361f,
            .y = 1.493f,
            .z = 0.0f
        }
    },
    {
        .name = (char *)s_STONECORRIDOR_006528d0,
        .listener_orient = {
            .x = 0.44400001f,
            .y = 2.697f,
            .z = 0.63800001f
        }
    },
    {
        .name = (char *)s_ALLEY_006528de,
        .listener_orient = {
            .x = 0.25f,
            .y = 1.752f,
            .z = 0.77600002f
        }
    },
    {
        .name = (char *)s_FOREST_006528e4,
        .listener_orient = {
            .x = 0.111f,
            .y = 3.145f,
            .z = 0.472f
        }
    },
    {
        .name = (char *)s_CITY_006528eb,
        .listener_orient = {
            .x = 0.111f,
            .y = 2.767f,
            .z = 0.22400001f
        }
    },
    {
        .name = (char *)s_MOUNTAINS_006528f0,
        .listener_orient = {
            .x = 0.19400001f,
            .y = 7.8410001f,
            .z = 0.472f
        }
    },
    {
        .name = (char *)s_QUARRY_006528fa,
        .listener_orient = {
            .x = 1.0f,
            .y = 1.499f,
            .z = 0.5f
        }
    },
    {
        .name = (char *)s_PLAIN_00652901,
        .listener_orient = {
            .x = 0.097000003f,
            .y = 2.767f,
            .z = 0.22400001f
        }
    },
    {
        .name = (char *)s_PARKINGLOT_00652907,
        .listener_orient = {
            .x = 0.208f,
            .y = 1.652f,
            .z = 1.5f
        }
    },
    {
        .name = (char *)s_SEWERPIPE_00652912,
        .listener_orient = {
            .x = 0.65200001f,
            .y = 2.8859999f,
            .z = 0.25f
        }
    },
    {
        .name = (char *)s_UNDERWATER_0065291c,
        .listener_orient = {
            .x = 1.0f,
            .y = 1.499f,
            .z = 0.0f
        }
    },
    {
        .name = (char *)s_DRUGGED_00652927,
        .listener_orient = {
            .x = 0.875f,
            .y = 8.3920002f,
            .z = 1.388f
        }
    },
    {
        .name = (char *)s_DIZZY_0065292f,
        .listener_orient = {
            .x = 0.139f,
            .y = 17.233999f,
            .z = 0.66600001f
        }
    },
    {
        .name = (char *)s_PSYCHOTIC_00652935,
        .listener_orient = {
            .x = 0.486f,
            .y = 7.5630002f,
            .z = 0.80599999f
        }
    }
};

// TerminatedCString
TerminatedCString g_RendererDllName = "trid3d.dll";

// UINT
UINT g_WaveOutDeviceID = 0xffffffff;
UINT g_WaveInDeviceID = 0xffffffff;

// WCHAR*
WCHAR* g_CommandLineArgsW = nullptr;
WCHAR* g_ExeFileNameW = nullptr;
WCHAR* g_DllFileNameW = nullptr;

// WORD
WORD g_WindowsPlatformVersion = 0x0;

// WatcomStaticDestructorNode
WatcomStaticDestructorNode g_CEdCheckDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661c10,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CEdCheckInstance
};
WatcomStaticDestructorNode DAT_0068064c = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661c1c,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x02F797E4
};
WatcomStaticDestructorNode DAT_006809f0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661c70,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x02F7C740
};
WatcomStaticDestructorNode g_CMouseDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00661d20,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMouseInstance
};
WatcomStaticDestructorNode DAT_00680bc8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006620e0,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x02FD9060
};
WatcomStaticDestructorNode g_CDemonPodMainDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_CDemonPodDestructorNode,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonPodInstance
};
WatcomStaticDestructorNode DAT_00680d10 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006625f0,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x0310F4B0
};
WatcomStaticDestructorNode DAT_00680d20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006625fc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CScriptInstance
};
WatcomStaticDestructorNode DAT_00680d30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662608,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x0310FCD8
};
WatcomStaticDestructorNode DAT_00680d40 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662614,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x0310FD0C
};
WatcomStaticDestructorNode g_CDemonSetDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662820,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonSetInstance
};
WatcomStaticDestructorNode g_CDemonCameraDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0066282c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonCameraInstance
};
WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662838,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonRaytraceInstance
};
WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662844,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModelInstance
};
WatcomStaticDestructorNode g_CZThumbPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006629b0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CZThumbPool
};
WatcomStaticDestructorNode DAT_006816a0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662a10,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CPickList_03653fc0
};
WatcomStaticDestructorNode DAT_006816b0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662a1c,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x03364CE0
};
WatcomStaticDestructorNode DAT_00681850 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662e30,
    .registration_type = 0x00000001,
    .object_instance = (void *)0x03665F74
};
WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662e80,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_DeformableModelPool
};
WatcomStaticDestructorNode g_SkeletonPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00662e8c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SkeletonPool
};
WatcomStaticDestructorNode g_SfxSamplesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00663110,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SfxSamples
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode1 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0066311c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00663128,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomStaticDestructorNode DAT_00681ed0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006632e0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SoundFileList
};
WatcomStaticDestructorNode g_MissingSoundsListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006632ec,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MissingSoundsList
};
WatcomStaticDestructorNode g_CTextureListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_00664600,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CTextureListInstance
};
WatcomStaticDestructorNode g_CWaterDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_006652c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CWaterInstance
};

// WatcomStaticDestructorNode*
WatcomStaticDestructorNode* g_AtexitListHead = nullptr;

// byte
byte g_WindowsMajorVersion = 0x0;
byte g_TimezoneInitFlags = 0x1;

// byte[16]
byte g_IEEE754ExponentClassTable[16] = {0x00, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x0D, 0x00, 0x00};

// char
char g_DebuggerIsAttached = '\0';
char g_ConsoleHandlerRegistered = '\0';

// char*
char* g_CurrentTrainMode = (char*)s_int_00652706;
char* g_PreviousTrainMode = (char*)s_x_0065270a;
char* g_ApplicationTitle = (char*)s_Nocturne_Editor_006581a7;
char* g_ApplicationTimerTitle = (char*)s_Nocturne_Editor_006581b7;
char* g_ExeFileNameA = nullptr;
char* g_DllFileNameA = nullptr;
char* g_EnvironmentStrings = nullptr;

// char**
char** g_TempEnvVarNames = (char**)0x006590A4; // DAT_006590a4

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

// int
int g_ConfirmNewActorNames = 0x1;
int g_CNPCClassVersion = 0x4;
int g_CPassengerClassVersion = 0x6;
int g_CPendulumClassVersion = 0x8;
int g_CPlatformClassVersion = 0xb;
int g_MaxViewportScanline = 0x4b0;
int g_CScatClassVersion = 0x1;
int g_CSentinelClassVersion = 0x2;
int g_RenderMirrorsFlag = 0x1;
int g_CShotgunClassVersion = 0x1;
int g_CShovelClassVersion = 0x1;
int g_CSimBoxClassVersion = 0x3;
int g_CSmileyClassVersion = 0x1;
int g_SfxPlaybackStateCounter = 0x1;
int g_MaxSoundChannels = 0x20;
int g_AudioBitsPerSample = 0x10;
int g_AudioChannelCount = 0x2;
int g_AudioSampleRate = 0x5622;
int g_SoundDeviceCount = 0x2D;
int g_CurrentSoundDevice = 0x2D;
int g_HardwareMixingEnabled = 0x1;
int g_MinimumSoundMemoryBudget = 0x200000;
int g_MaximumSoundMemoryBudget = 0x400000;
int g_RecordingDeviceCount = 0x2D;
int g_CurrentRecordingDevice = 0x2D;
int g_RecordingBitsPerSample = 0x8;
int g_RecordingChannelCount = 0x1;
int g_RecordingSampleRate = 0x2b11;
int g_DirectSoundDeviceCount = 0x2D;
int g_ScanlinePixelCount = 0x0;
int g_StartTextureU = 0x0;
int g_StartTextureV = 0x0;
int g_StartDepthW = 0x0;
int g_DeltaTextureU = 0x0;
int g_DeltaTextureV = 0x0;
int g_DeltaDepthW = 0x0;
int g_SavedRegisterEAX = 0x0;
int g_SavedRegisterEBX = 0x0;
int g_SavedRegisterECX = 0x0;
int g_SavedRegisterEDX = 0x0;
int g_TempX = 0x0;
int g_TempY = 0x0;
int g_TempZ = 0x0;
int g_TempTransformedX = 0x0;
int g_TempTransformedY = 0x0;
int g_TempTransformedZ = 0x0;
int g_VertexRedStart = 0x0;
int g_VertexGreenStart = 0x0;
int g_VertexBlueStart = 0x0;
int g_VertexRedDelta = 0x0;
int g_VertexGreenDelta = 0x0;
int g_VertexBlueDelta = 0x0;
int g_VertexAlphaStart = 0x0;
int g_VertexAlphaDelta = 0x0;
int g_SpecialColor = 0xffffff;
int g_SystemInitialized = 0x1;
int g_VideoMemorySize = 0x1;
int g_MaxTextureSize = 0x40;
int g_SystemMemorySize = 0x3c000;
int g_CSpikeClassVersion = 0x1;
int g_CStairsClassVersion = 0x2;
int g_CTempleStoneClassVersion = 0x1;
int g_CStrangerClassVersion = 0x9;
int g_CSuccubusClassVersion = 0x1;
int g_CSvetlanaClassVersion = 0x1;
int g_CBassPlayerClassVersion = 0x1;
int g_CDrummerClassVersion = 0x1;
int g_CTeleportDestClassVersion = 0x1;
int g_CTeleportClassVersion = 0x1;
int g_CTentacleClassVersion = 0x2;
int g_TexturePreviewEnabled = 0x1;
int g_CTommyGunClassVersion = 0x1;
int g_CTrapClassVersion = 0x1;
int g_CTrashClassVersion = 0x1;
int g_CTriggerClassVersion = 0xb;
int g_CTurretClassVersion = 0x2;
int g_CTVBatClassVersion = 0x5;
int g_CVampireBossVersion = 0x4;
int g_CVehicleClassVersion = 0x3;
int g_CCryptVesselClassVersion = 0x4;
int g_CWaterActorVersion = 0x6;
int g_CWayPointClassVersion = 0x2;
int g_CWeaponClassVersion = 0x7;
int g_CWerewolfClassVersion = 0x6;
int g_BrightnessDirection = 0x8;
int g_WindowActive = 0x2D;
int g_ForceMessagePump = 0x1;
int g_PreviousActiveState = 0x2D;
int g_CZombieClassVersion = 0xb;
int g_MaxErrnoValue = 0x28;
int g_ConsoleInitializationFlag = 0x0;
int g_UseSoftwareMath = 0x0;
int g_DstTransitionSecond = 0x0;
int g_DstTransitionMinute = 0x0;
int g_DstTransitionHour = 0x1;
int g_TimezoneOffset = 0x4650;
int g_DaylightSavingActive = 0x1;
int g_DaylightSavingOffset = 0xe10;
int g_CurrentHandleCount = 0x0;
int g_FakeHandleCounter = 0x2D;
int g_ProcessSpawnEnabled = 0x1;
int g_ConsoleInputState = 0x0;
int g_HeapFlags = 0x10000;

// int*
int* g_CurrentScreenPtr = nullptr;
int* g_CurrentZBufferPtr = nullptr;

// int[9]
int g_PathfindingDeltaX[9] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000001, -1, 0x00000001, -1, 0x00000001,
    -1
};
int g_PathfindingDeltaZ[9] = {
    0x00000000, 0x00000001, -1, 0x00000000, 0x00000000, 0x00000001, 0x00000001, -1,
    -1
};

// short
short g_PureVirtualCallFlag = 0x0;

// uint
uint g_RedMask16 = 0xf800;
uint g_GreenMask16 = 0x7e0;
uint g_BlueMask16 = 0x1f;
uint g_WindowsPlatformVersionExt = 0x0;
uint g_WindowsVersionLow = 0x0;
uint g_WindowsVersionMid = 0x0;
uint g_WindowsVersionCombined = 0x0;
uint g_MaxHandleCount = 0x14;
uint g_CodePage = 0x1;

// ulonglong
ulonglong g_TextureShift1 = 0x10;
ulonglong g_TextureShift2 = 0x8;
ulonglong g_TextureMask1 = 0xff;
ulonglong g_TextureMask2 = 0xff00;
ulonglong g_RedMask32 = 0xf80000;
ulonglong g_GreenMask32 = 0xfc00;
ulonglong g_BlueMask32 = 0xf8;
ulonglong g_TotalColorBits = 0x8;
ulonglong g_GreenBlueBits = 0x5;
ulonglong g_BlueBitShift = 0x3;

// undefined4
undefined4 g_DynamicRenderMode = 0x00000001;
undefined4 g_CSkeletonVersion = 0x00000003;
undefined4 g_SpecialExitHandler = 0;

// void*
void* g_CrtStackBuffer = nullptr;

