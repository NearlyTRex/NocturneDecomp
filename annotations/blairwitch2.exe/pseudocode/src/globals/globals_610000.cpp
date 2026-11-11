#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x610000
// =============================================================================

// CDemonPod*
CDemonPod* g_CDemonPodPtr = (CDemonPod*)&g_CDemonPodInstance;

// CDemonSet*
CDemonSet* g_CDemonSetPtr = (CDemonSet*)&g_CDemonSetInstance;

// CEditorTools*
CEditorTools* g_CEditorToolsPtr = (CEditorTools*)&g_CEditorToolsInstance;

// CFieldNotes*
CFieldNotes* g_CFieldNotesPtr = (CFieldNotes*)&g_CFieldNotesInstance;

// CGame*
CGame* g_CGamePtr = (CGame*)&g_CGameInstance;

// CGameHook*
CGameHook* g_CGameHookPtr = (CGameHook*)&g_CGameHookInstance;

// CGore*
CGore* g_CGorePtr = (CGore*)&g_CGoreInstance;

// CGround*
CGround* g_CGroundPtr = (CGround*)&g_CGroundInstance;

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

// CTextureList*
CTextureList* g_CTextureListPtr = (CTextureList*)&g_CTextureListInstance;

// CWater*
CWater* g_CWaterPtr = (CWater*)&g_CWaterInstance;

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
        .func = (RUNTIME_HANDLER_FUNC *)core_conveyor_cpp_staticInit_FUN_00436aa0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cow_cpp_staticInit_FUN_00438430
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crate_cpp_staticInit_FUN_00439080
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_crossbow_cpp_staticInit_FUN_00439d00
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_curtain_cpp_staticInit_FUN_0043a460
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
        .func = (RUNTIME_HANDLER_FUNC *)unkaddr_004a1200_cpp_FUN_004a1200
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
        .func = (RUNTIME_HANDLER_FUNC *)core_script_cpp_staticInit_FUN_004e4490
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
        .func = (RUNTIME_HANDLER_FUNC *)shape_meshlod_cpp_staticInit_FUN_004f0250
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_mimic_cpp_staticInit_FUN_004f2000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_minecar_cpp_staticInit_FUN_004f2190
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
        .func = (RUNTIME_HANDLER_FUNC *)core_setedit_cpp_staticInit_FUN_0053c170
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
        .func = (RUNTIME_HANDLER_FUNC *)unkaddr_00554ac0_cpp_FUN_00554ac0
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
        .func = (RUNTIME_HANDLER_FUNC *)unkaddr_0057b9a0_cpp_FUN_0057b9a0
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
        .func = (RUNTIME_HANDLER_FUNC *)unkaddr_0059aa80_cpp_FUN_0059aa80
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_goggles_cpp_staticInit_FUN_0059c000
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)unkaddr_0059c270_cpp_FUN_0059c270
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_patrpoin_cpp_staticInit_FUN_0059c580
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
        .func = (RUNTIME_HANDLER_FUNC *)unkaddr_0059d350_cpp_FUN_0059d350
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
        .func = (RUNTIME_HANDLER_FUNC *)core_twigzomb_cpp_staticInit_FUN_005a2670
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
        .func = (RUNTIME_HANDLER_FUNC *)core_steuben_cpp_staticInit_FUN_005a5ae0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_robin_cpp_staticInit_FUN_005a5e10
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_cross_cpp_staticInit_FUN_005a6970
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_grandma_cpp_staticInit_FUN_005a7ab0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)unkaddr_005a7eb0_cpp_FUN_005a7eb0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_searpart_cpp_staticInit_FUN_005a8c90
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
        .func = (RUNTIME_HANDLER_FUNC *)core_hag_cpp_staticInit_FUN_005aa5a0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_dog1_cpp_staticInit_FUN_005ab9e0
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_partibox_cpp_staticInit_FUN_005ac740
    },
    {
        .status = 0x00,
        .priority = 0x40,
        .func = (RUNTIME_HANDLER_FUNC *)core_spirmine_cpp_staticInit_FUN_005ad360
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

// TerminatedCString
TerminatedCString s_d3d_dll_0061e183 = "d3d.dll";

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
    .object_instance = (void *)&CAlphaBitmap_01cf01b0
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
    .object_instance = (void *)&CAlphaBitmap_01cf01d8
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
    .object_instance = (void *)&CAlphaBitmap_01d02e08
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

// int
int g_CDynamiteClassVersion = 0x1;
int g_CElephantGunClassVersion = 0x1;
int g_CEmitterClassVersion = 0xE;
int g_CEnemyClassVersion = 0xA;
int g_CFilmReelClassVersion = 0x2;
int g_CFlameClassVersion = 0x7;
int g_CFlameCanClassVersion = 0x1;
int g_CFlameThrowerClassVersion = 0x1;
int g_CFlashlightClassVersion = 0x1;
int g_CFliesClassVersion = 0x3;
int g_CFrankenstienMachineClassVersion = 0x1;
int g_CGabriellaClassVersion = 0x3;
int g_CGargoyleClassVersion = 0x2;
int g_CGasMaskClassVersion = 0x1;
int g_CGhoulClassVersion = 0x7;
int g_CGlassClassVersion = 0x6;
int g_CGraveClassVersion = 0x4;
int g_CGunClassVersion = 0x1;
int g_CHaystackClassVersion = 0x1;
int g_CHealthItemClassVersion = 0x3;
int g_CHeroClassVersion = 0x11;
int g_CHiramClassVersion = 0x1;
int g_CHostageClassVersion = 0xC;
int g_CHotDemonClassVersion = 0x1;
int g_CHighPriestOfGardathClassVersion = 0x1;
int g_CIcePickClassVersion = 0x1;
int g_CImpClassVersion = 0x1;
int g_CKeyActorClassVersion = 0x3;
int g_CLadderClassVersion = 0x2;
int g_CLarvaClassVersion = 0x2;
int g_CLeverClassVersion = 0x8;
int g_CLightGunClassVersion = 0x1;
int g_CLightConeClassVersion = 0x2;
int g_CMansionPuzzleCircleClassVersion = 0x3;
int g_CMarqueeClassVersion = 0x1;
int g_CMeleeClassVersion = 0x7;
int g_CMimicClassVersion = 0x3;
int g_CMineCarClassVersion = 0x1;
int g_CMobsterClassVersion = 0x7;
int g_CMolochClassVersion = 0x1;
int g_CNPCClassVersion = 0x6;
int g_CPassengerClassVersion = 0x6;
int g_CPendulumClassVersion = 0x8;
int g_CPlatformClassVersion = 0xB;
int g_CScatClassVersion = 0x1;
int g_CSentinelClassVersion = 0x2;
int g_CShadowClassVersion = 0x1;
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
int g_CTrapClassVersion = 0x1;
int g_CTrashClassVersion = 0x1;
int g_CTriggerClassVersion = 0xC;
int g_CTurretClassVersion = 0x2;
int g_CTVBatClassVersion = 0x5;
int g_CVampireBossClassVersion = 0x4;
int g_CVehicleClassVersion = 0x3;
int g_CCryptVesselClassVersion = 0x4;
int g_CWaterActorClassVersion = 0x6;
int g_CWayPointClassVersion = 0x2;
int g_CWeaponClassVersion = 0x7;
int g_CWerewolfClassVersion = 0x6;
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
int g_CGrandmaClassVersion = 0x1;
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

// undefined1
undefined1 DAT_006182d8 = 0x00;
undefined1 DAT_006182dc = 0x00;
undefined1 DAT_006182e1 = 0x00;
undefined1 DAT_0061c868 = 0x10;
undefined1 DAT_0061c888 = 0x08;
undefined1 DAT_0061e180 = 0x74;
undefined1 DAT_0061e181 = 0x72;
undefined1 DAT_0061e182 = 0x69;
undefined1 DAT_0061f287 = 0x00;
undefined1 DAT_0061f30b = 0x00;
undefined1 DAT_0061f30c = 0x00;
undefined1 DAT_0061f30d = 0x00;
undefined1 DAT_0061f30e = 0x00;
undefined1 DAT_0061f30f = 0x00;
undefined1 DAT_0061f5ad = 0x45;
undefined1 DAT_0061f644 = 0x01;
undefined1 DAT_0061f650 = 0x00;
undefined1 DAT_0061f7cc = 0x00;
undefined1 DAT_0061fe4c = 0x00;
undefined1 DAT_0061fe4d = 0x00;

// undefined2
undefined2 DAT_00615894 = 0x0000;
undefined2 DAT_0061f289 = 0x0000;
undefined2 DAT_0061f648 = 0x0000;

// undefined4
undefined4 DAT_00612880 = 0x00000000;
undefined4 DAT_006138e4 = 0x00000009;
undefined4 DAT_006138e8 = 0x00000009;
undefined4 DAT_00613c08 = 0x00000000;
undefined4 DAT_00613c0c = 0x00000000;
undefined4 DAT_00613e08 = 0x00000000;
undefined4 DAT_00613e0c = 0x00000000;
undefined4 DAT_00614008 = 0x00000000;
undefined4 DAT_0061400c = 0x00000000;
undefined4 DAT_006141b8 = 0x00000140;
undefined4 DAT_006141bc = 0x000000C8;
undefined4 DAT_006141c0 = 0x00000008;
undefined4 DAT_006141c8 = 0x00000100;
undefined4 DAT_006141cc = 0x0000007F;
undefined4 DAT_006141d8 = 0x000000FF;
undefined4 DAT_006141e0 = 0x00000001;
undefined4 DAT_006141e4 = 0x00010000;
undefined4 DAT_006141f4 = 0x00000000;
undefined4 DAT_00614234 = 0x00000000;
undefined4 DAT_00614238 = 0x00000000;
undefined4 DAT_0061423c = 0x00000000;
undefined4 DAT_00614288 = 0x00000000;
undefined4 DAT_0061428c = 0x00000000;
undefined4 DAT_00614350 = 0x00000000;
undefined4 DAT_00614354 = 0x00000000;
undefined4 DAT_00615890 = 0x00000000;
undefined4 DAT_00616010 = 0x00000001;
undefined4 DAT_00616014 = 0x00000001;
undefined4 DAT_00616040 = 0xFFFFFFFF;
undefined4 DAT_00616048 = 0x00000000;
undefined4 DAT_0061604c = 0x00000000;
undefined4 DAT_00617cd8 = 0x00000000;
undefined4 DAT_00617cdc = 0x00000000;
undefined4 DAT_00617d40 = 0x00000000;
undefined4 DAT_00617d44 = 0x00000000;
undefined4 DAT_00617e40 = 0x00008000;
undefined4 DAT_00617e44 = 0x00000001;
undefined4 DAT_00617e48 = 0x00010000;
undefined4 DAT_00617e4c = 0x00010000;
undefined4 DAT_006181e0 = 0x00000000;
undefined4 DAT_006181e4 = 0x00000000;
undefined4 DAT_00618248 = 0x00000000;
undefined4 DAT_0061824c = 0x00000000;
undefined4 DAT_006182dd = 0x00000000;
undefined4 DAT_0061846c = 0x00000001;
undefined4 DAT_00618470 = 0x00000001;
undefined4 DAT_00618474 = 0x00000001;
undefined4 DAT_00618de0 = 0x00000001;
undefined4 DAT_00618df4 = 0x00000000;
undefined4 DAT_00618e3c = 0x00000001;
undefined4 DAT_00618e80 = 0x00000001;
undefined4 DAT_0061b124 = 0x00000001;
undefined4 DAT_0061b2f8 = 0xFFFFFFFF;
undefined4 DAT_0061b2fc = 0x00000000;
undefined4 DAT_0061b424 = 0x000004B0;
undefined4 DAT_0061b470 = 0x00000000;
undefined4 DAT_0061b474 = 0x00000000;
undefined4 DAT_0061b5b8 = 0x00000001;
undefined4 DAT_0061b73c = 0x00000000;
undefined4 DAT_0061b740 = 0x00000000;
undefined4 DAT_0061b988 = 0x00000000;
undefined4 DAT_0061b98c = 0x00000000;
undefined4 DAT_0061b990 = 0x00000000;
undefined4 DAT_0061b994 = 0x00000000;
undefined4 DAT_0061b9d0 = 0x00000000;
undefined4 DAT_0061b9d4 = 0x00000000;
undefined4 DAT_0061b9d8 = 0x00000000;
undefined4 DAT_0061bc80 = 0x00000001;
undefined4 DAT_0061bc94 = 0x00000020;
undefined4 DAT_0061bc98 = 0x00000010;
undefined4 DAT_0061bc9c = 0x00000002;
undefined4 DAT_0061bca0 = 0x00005622;
undefined4 DAT_0061bca8 = 0xFFFFFFFF;
undefined4 DAT_0061bcac = 0xFFFFFFFF;
undefined4 DAT_0061bcb0 = 0x00000002;
undefined4 DAT_0061bcb4 = 0x3F800000;
undefined4 DAT_0061bcc0 = 0x00400000;
undefined4 DAT_0061bcc4 = 0x3F000000;
undefined4 DAT_0061bcc8 = 0xFFFFFFFF;
undefined4 DAT_0061bccc = 0xFFFFFFFF;
undefined4 DAT_0061bce0 = 0x00000000;
undefined4 DAT_0061bce4 = 0x00000000;
undefined4 DAT_0061bde0 = 0x00000000;
undefined4 DAT_0061bde4 = 0x00000000;
undefined4 DAT_0061bf80 = 0xFFFFFFFF;
undefined4 DAT_0061bf84 = 0xFFFFFFFF;
undefined4 DAT_0061bf88 = 0xFFFFFFFF;
undefined4 DAT_0061c220 = 0x00000000;
undefined4 DAT_0061c224 = 0x00000000;
undefined4 DAT_0061c288 = 0x00000000;
undefined4 DAT_0061c28c = 0x00000000;
undefined4 DAT_0061c314 = 0x00000000;
undefined4 DAT_0061c350 = 0x00000000;
undefined4 DAT_0061c354 = 0x00000000;
undefined4 DAT_0061c35c = 0x00000000;
undefined4 DAT_0061c378 = 0x00000000;
undefined4 DAT_0061c37c = 0x00000000;
undefined4 DAT_0061c788 = 0x00000000;
undefined4 DAT_0061c7d8 = 0x00000000;
undefined4 DAT_0061c7dc = 0x00000000;
undefined4 DAT_0061c7e0 = 0x00000000;
undefined4 DAT_0061c7e8 = 0x00000000;
undefined4 DAT_0061c7ec = 0x00000000;
undefined4 DAT_0061c7f0 = 0x00000000;
undefined4 DAT_0061c840 = 0x00000000;
undefined4 DAT_0061c850 = 0x00000000;
undefined4 DAT_0061c8d0 = 0x0000F800;
undefined4 DAT_0061c8d8 = 0x000007E0;
undefined4 DAT_0061c8e0 = 0x0000001F;
undefined4 DAT_0061e528 = 0x00002000;
undefined4 DAT_0061e6d4 = 0x01000000;
undefined4 DAT_0061e6e4 = 0x01000000;
undefined4 DAT_0061e98c = 0xFFFFFFFF;
undefined4 DAT_0061e990 = 0x00000001;
undefined4 DAT_0061e994 = 0xFFFFFFFF;
undefined4 DAT_0061ec60 = 0x0000FFFF;
undefined4 DAT_0061eea0 = 0x00000000;
undefined4 DAT_0061eea4 = 0x00000000;
undefined4 DAT_0061eea8 = 0x00000000;
undefined4 DAT_0061f1a0 = 0x00000000;
undefined4 DAT_0061f240 = 0x00000000;
undefined4 DAT_0061f244 = 0x00000000;
undefined4 DAT_0061f268 = 0x00000000;
undefined4 DAT_0061f270 = 0x00000000;
undefined4 DAT_0061f28f = 0x00000000;
undefined4 DAT_0061f293 = 0x00000000;
undefined4 DAT_0061f2a0 = 0xFFFFFFFF;
undefined4 DAT_0061f2ec = 0x00000000;
undefined4 DAT_0061f410 = 0x00000000;
undefined4 DAT_0061f414 = 0x00000000;
undefined4 DAT_0061f418 = 0x00000000;
undefined4 DAT_0061f41c = 0x00000000;
undefined4 DAT_0061f420 = 0x00000000;
undefined4 DAT_0061f43c = 0x00000000;
undefined4 DAT_0061f440 = 0x00000000;
undefined4 DAT_0061f448 = 0x00000000;
undefined4 DAT_0061f450 = 0x00000000;
undefined4 DAT_0061f454 = 0x00000000;
undefined4 DAT_0061f4d8 = 0x00000000;
undefined4 DAT_0061f4dc = 0x00000000;
undefined4 DAT_0061f4e0 = 0x80000000;
undefined4 DAT_0061f4fc = 0x00000000;
undefined4 DAT_0061f500 = 0x00000000;
undefined4 DAT_0061f504 = 0x00000000;
undefined4 DAT_0061f508 = 0x00000000;
undefined4 DAT_0061f50c = 0x00000000;
undefined4 DAT_0061f510 = 0x00000001;
undefined4 DAT_0061f520 = 0x00000000;
undefined4 DAT_0061f524 = 0x00000000;
undefined4 DAT_0061f528 = 0x00000000;
undefined4 DAT_0061f638 = 0x00004650;
undefined4 DAT_0061f640 = 0x00000E10;
undefined4 DAT_0061f64c = 0x00000000;
undefined4 DAT_0061f6cc = 0x00000000;
undefined4 DAT_0061f6d0 = 0x00000000;
undefined4 DAT_0061f6e8 = 0x00000000;
undefined4 DAT_0061f6f4 = 0x00000000;
undefined4 DAT_0061f758 = 0x00000001;
undefined4 DAT_0061f75c = 0xFFFFFFFF;
undefined4 DAT_0061f760 = 0xFFFFFFFF;

// undefined8
undefined8 DAT_006112c8 = 0x0000000000000000;
undefined8 DAT_00611308 = 0x0000000000000000;
undefined8 DAT_00611328 = 0x0000000000000000;
undefined8 DAT_0061c78c = 0x0000000000000000;
undefined8 DAT_0061c800 = 0x0000000000000000;
undefined8 DAT_0061c820 = 0x0000000000000000;
undefined8 DAT_0061c858 = 0x0000000000000000;
undefined8 DAT_0061c860 = 0x0000000000000000;
undefined8 DAT_0061d180 = 0x0000000000000000;

// void*
void* switchdataD_00614bc0 = (void*)0x004926AC; // caseD_0
void* switchdataD_00614c04 = (void*)0x0049273B; // caseD_0

