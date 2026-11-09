#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5F0000
// =============================================================================

// WatcomDestructorCall
WatcomDestructorCall DAT_005F39F0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_0041d8a0,
    .object_instance = (void *)&CDemonFilter_ARRAY_007bc9ec
};
WatcomDestructorCall g_CConsoleDestructorCall = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_console_cpp_CConsole_dtor_FUN_00436700,
    .object_instance = (void *)&g_CConsoleInstance
};
WatcomDestructorCall DAT_005F4DC0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)support_codec_cpp_CLZWDecompress_dtor_FUN_004354f0,
    .object_instance = (void *)&g_CLZWDecompressInstance
};
WatcomDestructorCall DAT_005F4FA0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_0041d8a0,
    .object_instance = (void *)&CDemonFilter_ARRAY_01510e18
};
WatcomDestructorCall DAT_005F4FAC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CDemonFilter_arrdtor4_FUN_00447e80,
    .object_instance = (void *)&CDemonFilter_ARRAY_01511078
};
WatcomDestructorCall DAT_005F4FB8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CFilterCache_dtor_FUN_004475f0,
    .object_instance = (void *)&g_CFilterCacheInstance
};
WatcomDestructorCall DAT_005F4FC4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CFilterFX_dtor_FUN_00447c10,
    .object_instance = (void *)&g_CFilterFXInstance
};
WatcomDestructorCall DAT_005F50B0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_arrdtor256_FUN_0044fdb0,
    .object_instance = (void *)&g_CKeyFramedModelPool
};
WatcomDestructorCall DAT_005F5CE0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CEditorTools_dtor_FUN_0047b690,
    .object_instance = (void *)&g_CEditorToolsInstance
};
WatcomDestructorCall DAT_005F6460 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CStake_arrdtor256_FUN_0049f100,
    .object_instance = (void *)&g_StakePool
};
WatcomDestructorCall DAT_005F646C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CSpark_arrdtor256_FUN_0049f0e0,
    .object_instance = (void *)&g_SparkPool
};
WatcomDestructorCall DAT_005F6478 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CFirefly_arrdtor64_FUN_0049f0c0,
    .object_instance = (void *)&CFirefly_ARRAY_01c848f8
};
WatcomDestructorCall DAT_005F6484 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CGlassParticle_arrdtor256_FUN_0049f0a0,
    .object_instance = (void *)&g_GlassParticlePool
};
WatcomDestructorCall DAT_005F6490 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CFireball_arrdtor64_FUN_0049f080,
    .object_instance = (void *)&g_FireballPool
};
WatcomDestructorCall DAT_005F649C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CRock_arrdtor64_FUN_0049f060,
    .object_instance = (void *)&g_RockPool
};
WatcomDestructorCall DAT_005F64A8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CLeaf_arrdtor64_FUN_0049f040,
    .object_instance = (void *)&CLeaf_ARRAY_01c950dc
};
WatcomDestructorCall DAT_005F64B4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CToss_arrdtor20_FUN_0049f020,
    .object_instance = (void *)&g_TossPool
};
WatcomDestructorCall DAT_005F64C0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CShell_arrdtor50_FUN_0049f000,
    .object_instance = (void *)&g_ShellPool
};
WatcomDestructorCall DAT_005F64CC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CPopcorn_arrdtor256_FUN_0049efe0,
    .object_instance = (void *)&g_PopcornPool
};
WatcomDestructorCall DAT_005F64D8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CRainDrop_arrdtor256_FUN_0049efc0,
    .object_instance = (void *)&g_RainDropPool
};
WatcomDestructorCall DAT_005F6E00 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkaddr_004a1200_cpp_SNotesSection_arrdtor6_FUN_004a6750,
    .object_instance = (void *)&SNotesSection_ARRAY_01cab9f4
};
WatcomDestructorCall DAT_005F6E0C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkaddr_004a1200_cpp_SNotesMap_arrdtor4_FUN_004a6730,
    .object_instance = (void *)&SNotesMap_ARRAY_01cacb50
};
WatcomDestructorCall DAT_005F6E18 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf114
};
WatcomDestructorCall DAT_005F6E24 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkaddr_004a1200_cpp_CAlphaBitmap_arrdtor6_FUN_004a6710,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01caf128
};
WatcomDestructorCall DAT_005F6E30 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf1a0
};
WatcomDestructorCall DAT_005F6E3C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf1b4
};
WatcomDestructorCall DAT_005F6E48 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf1c8
};
WatcomDestructorCall DAT_005F6E54 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf1dc
};
WatcomDestructorCall DAT_005F6E60 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf1f0
};
WatcomDestructorCall DAT_005F6E6C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf204
};
WatcomDestructorCall DAT_005F6E78 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf218
};
WatcomDestructorCall DAT_005F6E84 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01caf22c
};
WatcomDestructorCall DAT_005F6E90 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fldnotes_cpp_TextView_dtor_FUN_004a27c0,
    .object_instance = (void *)&g_STextViewInstance
};
WatcomDestructorCall DAT_005F6E9C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fldnotes_cpp_CFieldNotes_dtor_FUN_004a4180,
    .object_instance = (void *)&g_CFieldNotesInstance
};
WatcomDestructorCall DAT_005F7520 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dlight_cpp_CDemonLight_dtor_FUN_00449d30,
    .object_instance = (void *)&g_CDemonLightInstance
};
WatcomDestructorCall DAT_005F752C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_game_cpp_CGame_dtor_FUN_004b2ff0,
    .object_instance = (void *)&g_CGameInstance
};
WatcomDestructorCall DAT_005F7538 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CPickList_dtor_FUN_004820b0,
    .object_instance = (void *)&g_CPickList
};
WatcomDestructorCall DAT_005F7544 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CDemonFilter_dtor_FUN_00447840,
    .object_instance = (void *)&CDemonFilter_01cb8080
};
WatcomDestructorCall DAT_005F7B90 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_gore_cpp_CGore_dtor_FUN_004c93e0,
    .object_instance = (void *)&g_CGoreInstance
};
WatcomDestructorCall DAT_005F7B9C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_gore_cpp_CBloodParticle_arrdtor256_FUN_004ca0a0,
    .object_instance = (void *)&g_BloodParticles
};
WatcomDestructorCall DAT_005F7DC0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_ground_cpp_CGround_dtor_FUN_004ca9a0,
    .object_instance = (void *)&g_CGroundInstance
};
WatcomDestructorCall DAT_005F8F40 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01cf01b0
};
WatcomDestructorCall DAT_005F8F4C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01cf01c4
};
WatcomDestructorCall DAT_005F8F58 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01cf01d8
};
WatcomDestructorCall DAT_005F8F64 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01cf01ec
};
WatcomDestructorCall DAT_005F8F70 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02e08
};
WatcomDestructorCall DAT_005F8F7C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02e1c
};
WatcomDestructorCall DAT_005F8F88 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02e30
};
WatcomDestructorCall DAT_005F8F94 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02e44
};
WatcomDestructorCall DAT_005F8FA0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02e58
};
WatcomDestructorCall DAT_005F8FAC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02e6c
};
WatcomDestructorCall DAT_005F8FB8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02e80
};
WatcomDestructorCall DAT_005F8FC4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02e94
};
WatcomDestructorCall DAT_005F8FD0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02ea8
};
WatcomDestructorCall DAT_005F8FDC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02ebc
};
WatcomDestructorCall DAT_005F8FE8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02ed0
};
WatcomDestructorCall DAT_005F8FF4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d02f2c
};
WatcomDestructorCall DAT_005F9450 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0,
    .object_instance = (void *)&g_LoadingMoonModel
};
WatcomDestructorCall DAT_005F9850 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d046ac
};
WatcomDestructorCall DAT_005F985C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d046c0
};
WatcomDestructorCall DAT_005F9868 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d046d4
};
WatcomDestructorCall DAT_005F9874 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d046e8
};
WatcomDestructorCall DAT_005F9DD0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_menu_cpp_CAlphaBitmap_arrdtor8_FUN_004f0230,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomDestructorCall DAT_005F9DDC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_moon_cpp_CMoon_dtor_FUN_00502390,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomDestructorCall DAT_005F9DE8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomDestructorCall DAT_005F9DF4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomDestructorCall DAT_005F9E00 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomDestructorCall DAT_005F9E0C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&g_CalibrationBitmap
};
WatcomDestructorCall DAT_005FA140 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_minecar_cpp_CMini3D_dtor_FUN_004f2290,
    .object_instance = (void *)&g_CMini3DInstance
};
WatcomDestructorCall DAT_005FA580 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d1c7b8
};
WatcomDestructorCall DAT_005FA58C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_moon_cpp_CAlphaBitmap_arrdtor75_FUN_00502720,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01d1c7cc
};
WatcomDestructorCall DAT_005FA598 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .object_instance = (void *)&CAlphaBitmap_01d1cda8
};
WatcomDestructorCall DAT_005FA630 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_netgame_cpp_CNetGame_dtor_FUN_0050b320,
    .object_instance = (void *)&g_CNetGameInstance
};
WatcomDestructorCall DAT_005FA6E0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_ncursfx_cpp_CMouse_dtor_FUN_00510070,
    .object_instance = (void *)&g_CMouseInstance
};
WatcomDestructorCall DAT_005FAA90 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_path_cpp_CPathMap_arrdtor12_FUN_005145d0,
    .object_instance = (void *)&g_PathMapCache
};
WatcomDestructorCall g_CDemonPodDestructorNode = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_podmain_cpp_CDemonPod_dtor_FUN_0051c130,
    .object_instance = (void *)&g_CDemonPodInstance
};
WatcomDestructorCall DAT_005FAFD0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CPickList_dtor_FUN_004820b0,
    .object_instance = (void *)&g_ScriptPickList
};
WatcomDestructorCall DAT_005FAFDC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_script_cpp_CScript_dtor_FUN_00521600,
    .object_instance = (void *)&g_CScriptInstance
};
WatcomDestructorCall DAT_005FB1E0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_set_cpp_CDemonSet_dtor_FUN_0052c060,
    .object_instance = (void *)&g_CDemonSetInstance
};
WatcomDestructorCall DAT_005FB1EC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0043b460,
    .object_instance = (void *)&g_CDemonCameraInstance
};
WatcomDestructorCall DAT_005FB1F8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00472440,
    .object_instance = (void *)&g_CDemonRaytraceInstance
};
WatcomDestructorCall DAT_005FB204 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0,
    .object_instance = (void *)&g_CKeyFramedModelInstance
};
WatcomDestructorCall DAT_005FB330 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_setdir_cpp_CZThumb_arrdtor1500_FUN_0053a7c0,
    .object_instance = (void *)&g_CZThumbPool
};
WatcomDestructorCall DAT_005FB980 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_skeleton_cpp_CDeformableModel_arrdtor64_FUN_00549350,
    .object_instance = (void *)&g_DeformableModelPool
};
WatcomDestructorCall DAT_005FB98C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_skeleton_cpp_CSkeleton_arrdtor40_FUN_00549330,
    .object_instance = (void *)&g_SkeletonPool
};
WatcomDestructorCall DAT_005FBBF0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_00554aa0,
    .object_instance = (void *)&g_SfxSamples
};
WatcomDestructorCall DAT_005FBBFC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_00509cb0,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomDestructorCall DAT_005FBC08 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_00509cb0,
    .object_instance = (void *)&g_CMP3DecoderInstanceOther
};
WatcomDestructorCall DAT_005FBD90 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CStrList_dtor_FUN_00480d40,
    .object_instance = (void *)&g_CStrListInstance
};
WatcomDestructorCall DAT_005FCE00 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_texlist_cpp_CTextureList_dtor_FUN_005734a0,
    .object_instance = (void *)&g_CTextureListInstance
};
WatcomDestructorCall DAT_005FD3A0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)support_trstream_cpp_COutStreamDebug_dtor_FUN_0057e1e0,
    .object_instance = (void *)&g_COutStreamDebugInstance
};
WatcomDestructorCall DAT_005FDC50 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_water_cpp_CWater_dtor_FUN_00585dd0,
    .object_instance = (void *)&g_CWaterInstance
};
WatcomDestructorCall DAT_005FE4B0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkaddr_0059aa80_cpp_CAlphaBitmap_arrdtor4_FUN_0059bfe0,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_026677ec
};
WatcomDestructorCall DAT_005FE4BC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_superopt_cpp_CExamplePuzzle_dtor_FUN_0059bf70,
    .object_instance = (void *)&g_CExamplePuzzleInstance
};
WatcomDestructorCall DAT_005FE4C8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_superopt_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0,
    .object_instance = (void *)&g_CAudioRecPuzzleInstance
};
WatcomDestructorCall DAT_005FE740 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkclass_gamehook_cpp_CGameHook_dtor_FUN_0059c2b0,
    .object_instance = (void *)&g_CGameHookInstance
};

// WatcomTypeInfo
WatcomTypeInfo g_CInStreamFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)unkclass_instream_cpp_CInStreamFile_copy_FUN_0057ce90,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0,
    .instance_size = (int)sizeof(CInStreamFile),
    .class_name = (char *)s_CInStreamFile_006093a4
};
WatcomTypeInfo g_COutStreamFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_ctor_FUN_0057db80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_copy_FUN_0057dbe0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10,
    .instance_size = (int)sizeof(COutStreamFile),
    .class_name = (char *)s_COutStreamFile_00609384
};
WatcomTypeInfo g_CSimpleParticleSystemTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkclass_simppart_cpp_CSimpleParticleSystem_ctor_FUN_005a7ef0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkclass_simppart_cpp_CSimpleParticleSystem_dtor_FUN_005a8000,
    .instance_size = (int)sizeof(CSimpleParticleSystem),
    .class_name = (char *)s_CSimpleParticleSystem_00609764
};
WatcomTypeInfo g_CDemonActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_CDemonActor_ctor_FUN_00408790,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_CDemonActor_dtor_FUN_00408930,
    .instance_size = (int)sizeof(CDemonActor),
    .class_name = (char *)s_CDemonActor_00609744
};
WatcomTypeInfo g_CVectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_CVector3f_ctor_FUN_0040d340,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_CVector3f_dtor_FUN_0040d3f0,
    .instance_size = (int)sizeof(CVector3f),
    .class_name = (char *)s_CVector_00609734
};
WatcomTypeInfo g_CAmmoTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammo_cpp_CAmmo_ctor_FUN_0040ddb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammo_cpp_CAmmo_dtor_FUN_0040de50,
    .instance_size = (int)sizeof(CAmmo),
    .class_name = (char *)s_CAmmo_00609788
};
WatcomTypeInfo g_CAmmoBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e510,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammobox_cpp_CAmmoBox_dtor_FUN_0040e980,
    .instance_size = (int)sizeof(CAmmoBox),
    .class_name = (char *)s_CAmmoBox_0060979c
};
WatcomTypeInfo g_CAnvilTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_anvil_cpp_CAnvil_ctor_FUN_0040ea30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_anvil_cpp_CAnvil_dtor_FUN_0040ed90,
    .instance_size = (int)sizeof(CAnvil),
    .class_name = (char *)s_CAnvil_006097b0
};
WatcomTypeInfo g_CArmourTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_armour_cpp_CArmour_ctor_FUN_0040ee40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CArmour_dtor_FUN_0040f120,
    .instance_size = (int)sizeof(CArmour),
    .class_name = (char *)s_CArmour_006097e4
};
WatcomTypeInfo g_CEnemyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CEnemy_dtor_FUN_0040f1c0,
    .instance_size = (int)sizeof(CEnemy),
    .class_name = (char *)s_CEnemy_006097d4
};
WatcomTypeInfo g_CFlameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flame_cpp_CFlame_ctor_FUN_0049f180,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CFlame_dtor_FUN_0040f260,
    .instance_size = (int)sizeof(CFlame),
    .class_name = (char *)s_CFlame_006097c4
};
WatcomTypeInfo g_CBackgroundActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040f330,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_backgnd_cpp_CBackgroundActor_dtor_FUN_0040f5b0,
    .instance_size = (int)sizeof(CBackgroundActor),
    .class_name = (char *)s_CBackgroundActor_006097f8
};
WatcomTypeInfo g_CBaronWeaponTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_baron_cpp_CBaronWeapon_ctor_FUN_004108e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_baron_cpp_CBaronWeapon_dtor_FUN_00410bb0,
    .instance_size = (int)sizeof(CBaronWeapon),
    .class_name = (char *)s_CBaronWeapon_00609840
};
WatcomTypeInfo g_CBaronTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_baron_cpp_CBaron_ctor_FUN_0040f690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_baron_cpp_CBaron_dtor_FUN_00410c00,
    .instance_size = (int)sizeof(CBaron),
    .class_name = (char *)s_CBaron_00609830
};
WatcomTypeInfo g_CBarrierTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_barrier_cpp_CBarrier_ctor_FUN_00410cb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_barrier_cpp_CBarrier_dtor_FUN_00410e80,
    .instance_size = (int)sizeof(CBarrier),
    .class_name = (char *)s_CBarrier_00609858
};
WatcomTypeInfo g_CBatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bat_cpp_CBat_ctor_FUN_00410fd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bat_cpp_CBat_dtor_FUN_004115c0,
    .instance_size = (int)sizeof(CBat),
    .class_name = (char *)s_CBat_0060986c
};
WatcomTypeInfo g_CBatCreatureTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_batcreat_cpp_CBatCreature_ctor_FUN_00411690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_batcreat_cpp_CBatCreature_dtor_FUN_00412a20,
    .instance_size = (int)sizeof(CBatCreature),
    .class_name = (char *)s_CBatCreature_0060987c
};
WatcomTypeInfo g_CBatmanTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_batman_cpp_CBatman_ctor_FUN_00412b20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_batman_cpp_CBatman_dtor_FUN_00414620,
    .instance_size = (int)sizeof(CBatman),
    .class_name = (char *)s_CBatman_00609894
};
WatcomTypeInfo g_CBatteryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_battery_cpp_CBattery_ctor_FUN_00414720,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_battery_cpp_CBattery_dtor_FUN_00414950,
    .instance_size = (int)sizeof(CBattery),
    .class_name = (char *)s_CBattery_006098a8
};
WatcomTypeInfo g_CBeastTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_beast_cpp_CBeast_ctor_FUN_00414a00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_beast_cpp_CBeast_dtor_FUN_00414c10,
    .instance_size = (int)sizeof(CBeast),
    .class_name = (char *)s_CBeast_006098bc
};
WatcomTypeInfo g_CBiggsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_biggs_cpp_CBiggs_ctor_FUN_00414d10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_biggs_cpp_CBiggs_dtor_FUN_00415410,
    .instance_size = (int)sizeof(CBiggs),
    .class_name = (char *)s_CBiggs_006098d0
};
WatcomTypeInfo g_SBodyPartModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartModel_ctor_FUN_00417cf0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SBodyPartModel),
    .class_name = (char *)s_SBodyPartModel_00609910
};
WatcomTypeInfo g_SBodyPartFireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartFire_ctor_FUN_00417cb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartFire_dtor_FUN_00417cd0,
    .instance_size = (int)sizeof(SBodyPartFire),
    .class_name = (char *)s_SBodyPartFire_006098f8
};
WatcomTypeInfo g_CBodyPartTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_CBodyPart_dtor_FUN_00415800,
    .instance_size = (int)sizeof(CBodyPart),
    .class_name = (char *)s_CBodyPart_006098e4
};
WatcomTypeInfo g_SBoneGuyBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_SBoneGuyBox_ctor_FUN_0041a470,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SBoneGuyBox),
    .class_name = (char *)s_SBoneGuyBox_0060993c
};
WatcomTypeInfo g_CBoneGuyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_CBoneGuy_ctor_FUN_004182d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a3d0,
    .instance_size = (int)sizeof(CBoneGuy),
    .class_name = (char *)s_CBoneGuy_0060992c
};
WatcomTypeInfo g_CDemonFilterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CDemonFilter_ctor_FUN_004477f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CDemonFilter_dtor_FUN_00447840,
    .instance_size = (int)sizeof(CDemonFilter),
    .class_name = (char *)s_CDemonFilter_00609990
};
WatcomTypeInfo g_CLightActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boxactor_cpp_CLightActor_ctor_FUN_0041cf60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boxactor_cpp_CLightActor_dtor_FUN_0041d7b0,
    .instance_size = (int)sizeof(CLightActor),
    .class_name = (char *)s_CLightActor_0060997c
};
WatcomTypeInfo g_CBoxActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boxactor_cpp_CBoxActor_dtor_FUN_0041d830,
    .instance_size = (int)sizeof(CBoxActor),
    .class_name = (char *)s_CBoxActor_00609968
};
WatcomTypeInfo g_CBrideTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bride_cpp_CBride_ctor_FUN_0041d950,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bride_cpp_CBride_dtor_FUN_0041ee50,
    .instance_size = (int)sizeof(CBride),
    .class_name = (char *)s_CBride_006099a8
};
WatcomTypeInfo g_SBugTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bugs_cpp_SBug_ctor_FUN_004221f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SBug),
    .class_name = (char *)s_SBug_006099ec
};
WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CKeyFramedModelInstance_dtor_FUN_0049ef90,
    .instance_size = (int)sizeof(CKeyFramedModelInstance),
    .class_name = (char *)s_CKeyFramedModelInstance_006099cc
};
WatcomTypeInfo g_CBugsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bugs_cpp_CBugs_ctor_FUN_0041ef50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bugs_cpp_CBugs_dtor_FUN_00422150,
    .instance_size = (int)sizeof(CBugs),
    .class_name = (char *)s_CBugs_006099bc
};
WatcomTypeInfo g_CCameraViewTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_camview_cpp_CCameraView_ctor_FUN_00422200,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_camview_cpp_CCameraView_dtor_FUN_00422220,
    .instance_size = (int)sizeof(CCameraView),
    .class_name = (char *)s_CCameraView_006099f8
};
WatcomTypeInfo g_SFireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_SFire_ctor_FUN_0042c0a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SFire),
    .class_name = (char *)s_SFire_00609b24
};
WatcomTypeInfo g_CCharacterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_CCharacter_ctor_FUN_00422340,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_charactr_cpp_CCharacter_dtor_FUN_0042c000,
    .instance_size = (int)sizeof(CCharacter),
    .class_name = (char *)s_CCharacter_00609b04
};
WatcomTypeInfo g_CCodecTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CCodec_ctor_FUN_00433e80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CCodec_dtor_FUN_00433e90,
    .instance_size = (int)sizeof(CCodec),
    .class_name = (char *)s_CCodec_00609e94
};
WatcomTypeInfo g_COutStreamMemoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_ctor_FUN_0057de40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_copy_FUN_0057dee0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10,
    .instance_size = (int)sizeof(COutStreamMemory),
    .class_name = (char *)s_COutStreamMemory_00609e74
};
WatcomTypeInfo g_CInStreamMemoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_ctor_FUN_0057d4f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_copy_FUN_0057d570,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_dtor_FUN_0057d5a0,
    .instance_size = (int)sizeof(CInStreamMemory),
    .class_name = (char *)s_CInStreamMemory_00609e54
};
WatcomTypeInfo g_CInStreamPipeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CInStreamPipe_ctor_FUN_00434e70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CInStreamPipe_dtor_FUN_00434f40,
    .instance_size = (int)sizeof(CInStreamPipe),
    .class_name = (char *)s_CInStreamPipe_00609e34
};
WatcomTypeInfo g_CCheesyCipherTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CCheesyCipher_dtor_FUN_00435400,
    .instance_size = (int)sizeof(CCheesyCipher),
    .class_name = (char *)s_CCheesyCipher_00609e14
};
WatcomTypeInfo g_CAsciiUnarmorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CAsciiUnarmor_ctor_FUN_00434c70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CAsciiUnarmor_dtor_FUN_00435450,
    .instance_size = (int)sizeof(CAsciiUnarmor),
    .class_name = (char *)s_CAsciiUnarmor_00609df4
};
WatcomTypeInfo g_CAsciiArmorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CAsciiArmor_ctor_FUN_00434b70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CAsciiArmor_dtor_FUN_004354a0,
    .instance_size = (int)sizeof(CAsciiArmor),
    .class_name = (char *)s_CAsciiArmor_00609dd4
};
WatcomTypeInfo g_CLZWDecompressTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CLZWDecompress_dtor_FUN_004354f0,
    .instance_size = (int)sizeof(CLZWDecompress),
    .class_name = (char *)s_CLZWDecompress_00609db4
};
WatcomTypeInfo g_CLZWCompressTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CLZWCompress_dtor_FUN_00435550,
    .instance_size = (int)sizeof(CLZWCompress),
    .class_name = (char *)s_CLZWCompress_00609d94
};
WatcomTypeInfo g_CColonelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_colonel_cpp_CColonel_ctor_FUN_00435610,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_colonel_cpp_CColonel_dtor_FUN_00436600,
    .instance_size = (int)sizeof(CColonel),
    .class_name = (char *)s_CColonel_00609ea8
};
WatcomTypeInfo g_CConsoleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_console_cpp_CConsole_dtor_FUN_00436700,
    .instance_size = (int)sizeof(CConsole),
    .class_name = (char *)s_CConsole_00609ef4
};
WatcomTypeInfo g_CConstructTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_conveyor_cpp_CConstruct_ctor_FUN_00436b00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_construc_cpp_CConstruct_dtor_FUN_00438390,
    .instance_size = (int)sizeof(CConstruct),
    .class_name = (char *)s_CConstruct_00609f08
};
WatcomTypeInfo g_CConveyorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_conveyor_cpp_CConveyor_ctor_FUN_00438490,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_conveyor_cpp_CConveyor_dtor_FUN_004388b0,
    .instance_size = (int)sizeof(CConveyor),
    .class_name = (char *)s_CConveyor_00609f34
};
WatcomTypeInfo g_CPlatformTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_platfrm_cpp_CPlatform_ctor_FUN_005180b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_conveyor_cpp_CPlatform_dtor_FUN_00438920,
    .instance_size = (int)sizeof(CPlatform),
    .class_name = (char *)s_CPlatform_00609f20
};
WatcomTypeInfo g_CZombieCowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cow_cpp_CZombieCow_ctor_FUN_004390e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_cow_cpp_CZombieCow_dtor_FUN_00439c60,
    .instance_size = (int)sizeof(CZombieCow),
    .class_name = (char *)s_CZombieCow_00609f4c
};
WatcomTypeInfo g_CCrateTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_crate_cpp_CCrate_ctor_FUN_00439d60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_crate_cpp_CCrate_dtor_FUN_0043a410,
    .instance_size = (int)sizeof(CCrate),
    .class_name = (char *)s_CCrate_00609f64
};
WatcomTypeInfo g_CCrossbowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_crossbow_cpp_CCrossbow_ctor_FUN_0043a4c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_crossbow_cpp_CCrossbow_dtor_FUN_0043ae70,
    .instance_size = (int)sizeof(CCrossbow),
    .class_name = (char *)s_CCrossbow_00609f78
};
WatcomTypeInfo g_CDemonCameraTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dcamera_cpp_CDemonCamera_ctor_FUN_0043b400,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0043b460,
    .instance_size = (int)sizeof(CDemonCamera),
    .class_name = (char *)s_CDemonCamera_0060a014
};
WatcomTypeInfo g_CActorDestinationTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dest_cpp_CActorDestination_ctor_FUN_00447090,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dest_cpp_CActorDestination_dtor_FUN_00447510,
    .instance_size = (int)sizeof(CActorDestination),
    .class_name = (char *)s_CActorDestination_0060a02c
};
WatcomTypeInfo g_CFilterCacheTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CFilterCache_ctor_FUN_004475e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CFilterCache_dtor_FUN_004475f0,
    .instance_size = (int)sizeof(CFilterCache),
    .class_name = (char *)s_CFilterCache_0060a0d4
};
WatcomTypeInfo g_CFilterFXTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CFilterFX_ctor_FUN_00447bf0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CFilterFX_dtor_FUN_00447c10,
    .instance_size = (int)sizeof(CFilterFX),
    .class_name = (char *)s_CFilterFX_0060a0c0
};
WatcomTypeInfo g_CDemonLightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dlight_cpp_CDemonLight_dtor_FUN_00449d30,
    .instance_size = (int)sizeof(CDemonLight),
    .class_name = (char *)s_CDemonLight_0060b1b4
};
WatcomTypeInfo g_CKeyFramedModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0,
    .instance_size = (int)sizeof(CKeyFramedModel),
    .class_name = (char *)s_CKeyFramedModel_0060b1d7
};
WatcomTypeInfo g_CDocTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_doc_cpp_CDoc_ctor_FUN_004500d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_doc_cpp_CDoc_dtor_FUN_00450580,
    .instance_size = (int)sizeof(CDoc),
    .class_name = (char *)s_CDoc_0060b1f4
};
WatcomTypeInfo g_CZombieDogTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dog_cpp_CZombieDog_ctor_FUN_0045e270,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dog_cpp_CZombieDog_dtor_FUN_0045ec60,
    .instance_size = (int)sizeof(CZombieDog),
    .class_name = (char *)s_CZombieDog_0060b204
};
WatcomTypeInfo g_CDoorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_door_cpp_CDoor_ctor_FUN_0045ed60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_door_cpp_CDoor_dtor_FUN_00460860,
    .instance_size = (int)sizeof(CDoor),
    .class_name = (char *)s_CDoor_0060b21c
};
WatcomTypeInfo g_CFileFinderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30,
    .instance_size = (int)sizeof(CFileFinder),
    .class_name = (char *)s_CFileFinder_0060b230
};
WatcomTypeInfo g_SFreakyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dracbrid_cpp_SFreaky_ctor_FUN_00465c30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dracbrid_cpp_SFreaky_dtor_FUN_00465c50,
    .instance_size = (int)sizeof(SFreaky),
    .class_name = (char *)s_SFreaky_0060b264
};
WatcomTypeInfo g_CDraculaBrideTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dracbrid_cpp_CDraculaBride_ctor_FUN_00462ba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dracbrid_cpp_CDraculaBride_dtor_FUN_00465c60,
    .instance_size = (int)sizeof(CDraculaBride),
    .class_name = (char *)s_CDraculaBride_0060b24c
};
WatcomTypeInfo g_CDripTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_drip_cpp_CDrip_ctor_FUN_0046ce70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_drip_cpp_CDrip_dtor_FUN_0046d6a0,
    .instance_size = (int)sizeof(CDrip),
    .class_name = (char *)s_CDrip_0060d1d0
};
WatcomTypeInfo g_CDroneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_drone_cpp_CDrone_ctor_FUN_0046d750,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_drone_cpp_CDrone_dtor_FUN_0046e1c0,
    .instance_size = (int)sizeof(CDrone),
    .class_name = (char *)s_CDrone_0060d1e4
};
WatcomTypeInfo g_CDemonCubeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dcube_cpp_CDemonCube_ctor_FUN_004464b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dcube_cpp_CDemonCube_dtor_FUN_004464f0,
    .instance_size = (int)sizeof(CDemonCube),
    .class_name = (char *)s_CDemonCube_00613894
};
WatcomTypeInfo g_CDemonTriangleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dtri_cpp_CDemonTriangle_ctor_FUN_00479f60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dtri_cpp_CDemonTriangle_dtor_FUN_00479f70,
    .instance_size = (int)sizeof(CDemonTriangle),
    .class_name = (char *)s_CDemonTriangle_006138a6
};
WatcomTypeInfo g_CDynamiteTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dynamite_cpp_CDynamite_ctor_FUN_00479ff0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dynamite_cpp_CDynamite_dtor_FUN_0047a3e0,
    .instance_size = (int)sizeof(CDynamite),
    .class_name = (char *)s_CDynamite_006138c0
};
WatcomTypeInfo g_CEditorToolsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEditorTools_ctor_FUN_0047b660,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CEditorTools_dtor_FUN_0047b690,
    .instance_size = (int)sizeof(CEditorTools),
    .class_name = (char *)s_CEditorTools_00614164
};
WatcomTypeInfo g_CEdButtonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEdButton_ctor_FUN_00484e20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CEdButton_dtor_FUN_00484e50,
    .instance_size = (int)sizeof(CEdButton),
    .class_name = (char *)s_CEdButton_00614144
};
WatcomTypeInfo g_CStrListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_ctor_FUN_00480d20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_copy_FUN_00480d90,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_dtor_FUN_00480d40,
    .instance_size = (int)sizeof(CStrList),
    .class_name = (char *)s_CStrList_00614134
};
WatcomTypeInfo g_CPickListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CPickList_ctor_FUN_00481fc0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CPickList_dtor_FUN_004820b0,
    .instance_size = (int)sizeof(CPickList),
    .class_name = (char *)s_CPickList_00614114
};
WatcomTypeInfo g_CElephantGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_elephant_cpp_CElephantGun_ctor_FUN_004859a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_elephant_cpp_CElephantGun_dtor_FUN_00486730,
    .instance_size = (int)sizeof(CElephantGun),
    .class_name = (char *)s_CElephantGun_0061417c
};
WatcomTypeInfo g_CEmitterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_emitter_cpp_CEmitter_ctor_FUN_004867e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_emitter_cpp_CEmitter_dtor_FUN_00487d30,
    .instance_size = (int)sizeof(CEmitter),
    .class_name = (char *)s_CEmitter_00614194
};
WatcomTypeInfo g_CFilmReelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_filmreel_cpp_CFilmReel_ctor_FUN_00492920,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_filmreel_cpp_CFilmReel_dtor_FUN_00493040,
    .instance_size = (int)sizeof(CFilmReel),
    .class_name = (char *)s_CFilmReel_00614c6c
};
WatcomTypeInfo g_CFilmProjectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_filmreel_cpp_CFilmProjector_ctor_FUN_00492c10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_filmreel_cpp_CFilmProjector_dtor_FUN_00493090,
    .instance_size = (int)sizeof(CFilmProjector),
    .class_name = (char *)s_CFilmProjector_00614c54
};
WatcomTypeInfo g_CSmokeParticleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CSmokeParticle_ctor_FUN_0049ef70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CSmokeParticle_dtor_FUN_0049ef80,
    .instance_size = (int)sizeof(CSmokeParticle),
    .class_name = (char *)s_CSmokeParticle_00615ad4
};
WatcomTypeInfo g_CBulletHoleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CBulletHole_ctor_FUN_0049ef50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CBulletHole_dtor_FUN_0049ef60,
    .instance_size = (int)sizeof(CBulletHole),
    .class_name = (char *)s_CBulletHole_00615ab4
};
WatcomTypeInfo g_CStakeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CStake_ctor_FUN_0049ef10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CStake_dtor_FUN_0049ef30,
    .instance_size = (int)sizeof(CStake),
    .class_name = (char *)s_CStake_00615aa4
};
WatcomTypeInfo g_CSparkTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CSpark_ctor_FUN_0049eee0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CSpark_dtor_FUN_0049ef00,
    .instance_size = (int)sizeof(CSpark),
    .class_name = (char *)s_CSpark_00615a94
};
WatcomTypeInfo g_CFireflyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CFirefly_ctor_FUN_0049eeb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CFirefly_dtor_FUN_0049eed0,
    .instance_size = (int)sizeof(CFirefly),
    .class_name = (char *)s_CFirefly_00615a84
};
WatcomTypeInfo g_CMuzzleFlashTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CMuzzleFlash_ctor_FUN_0049ee00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CMuzzleFlash_dtor_FUN_0049ee10,
    .instance_size = (int)sizeof(CMuzzleFlash),
    .class_name = (char *)s_CMuzzleFlash_00615a64
};
WatcomTypeInfo g_CMuzzleEffectTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CMuzzleEffect_ctor_FUN_0049efa0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CMuzzleEffect_dtor_FUN_0049efb0,
    .instance_size = (int)sizeof(CMuzzleEffect),
    .class_name = (char *)s_CMuzzleEffect_00615a44
};
WatcomTypeInfo g_CGlassParticleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CGlassParticle_ctor_FUN_0049edc0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CGlassParticle_dtor_FUN_0049edf0,
    .instance_size = (int)sizeof(CGlassParticle),
    .class_name = (char *)s_CGlassParticle_00615a24
};
WatcomTypeInfo g_CBulletTrailTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CBulletTrail_ctor_FUN_0049eda0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CBulletTrail_dtor_FUN_0049edb0,
    .instance_size = (int)sizeof(CBulletTrail),
    .class_name = (char *)s_CBulletTrail_00615a04
};
WatcomTypeInfo g_CFireballTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CFireball_ctor_FUN_0049ee80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CFireball_dtor_FUN_0049eea0,
    .instance_size = (int)sizeof(CFireball),
    .class_name = (char *)s_CFireball_006159e4
};
WatcomTypeInfo g_CRockTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CRock_ctor_FUN_0049ee50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CRock_dtor_FUN_0049ee70,
    .instance_size = (int)sizeof(CRock),
    .class_name = (char *)s_CRock_006159d4
};
WatcomTypeInfo g_CLeafTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLeaf_ctor_FUN_0049ee20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLeaf_dtor_FUN_0049ee40,
    .instance_size = (int)sizeof(CLeaf),
    .class_name = (char *)s_CLeaf_006159c4
};
WatcomTypeInfo g_CLaserBeamTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLaserBeam_ctor_FUN_0049ed80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLaserBeam_dtor_FUN_0049ed90,
    .instance_size = (int)sizeof(CLaserBeam),
    .class_name = (char *)s_CLaserBeam_006159a4
};
WatcomTypeInfo g_CExplosionTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CExplosion_ctor_FUN_00498c80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CExplosion_dtor_FUN_0049ed70,
    .instance_size = (int)sizeof(CExplosion),
    .class_name = (char *)s_CExplosion_00615984
};
WatcomTypeInfo g_CTossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CToss_ctor_FUN_00499270,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CToss_dtor_FUN_0049ed50,
    .instance_size = (int)sizeof(CToss),
    .class_name = (char *)s_CToss_00615974
};
WatcomTypeInfo g_CCraterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CCrater_ctor_FUN_0049ed20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CCrater_dtor_FUN_0049ed40,
    .instance_size = (int)sizeof(CCrater),
    .class_name = (char *)s_CCrater_00615964
};
WatcomTypeInfo g_CGunFlameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CGunFlame_ctor_FUN_0049ed00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CGunFlame_dtor_FUN_0049ed10,
    .instance_size = (int)sizeof(CGunFlame),
    .class_name = (char *)s_CGunFlame_00615944
};
WatcomTypeInfo g_CLightningBoltTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLightningBolt_ctor_FUN_0049ece0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLightningBolt_dtor_FUN_0049ecf0,
    .instance_size = (int)sizeof(CLightningBolt),
    .class_name = (char *)s_CLightningBolt_00615924
};
WatcomTypeInfo g_CTrailTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CTrail_ctor_FUN_0049ecc0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CTrail_dtor_FUN_0049ecd0,
    .instance_size = (int)sizeof(CTrail),
    .class_name = (char *)s_CTrail_00615914
};
WatcomTypeInfo g_CShellTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CShell_ctor_FUN_0049ec90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CShell_dtor_FUN_0049ecb0,
    .instance_size = (int)sizeof(CShell),
    .class_name = (char *)s_CShell_00615904
};
WatcomTypeInfo g_CPopcornTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CPopcorn_ctor_FUN_0049ec60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CPopcorn_dtor_FUN_0049ec80,
    .instance_size = (int)sizeof(CPopcorn),
    .class_name = (char *)s_CPopcorn_006158f4
};
WatcomTypeInfo g_CRainDropTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CRainDrop_ctor_FUN_0049ec30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CRainDrop_dtor_FUN_0049ec50,
    .instance_size = (int)sizeof(CRainDrop),
    .class_name = (char *)s_CRainDrop_006158d4
};
WatcomTypeInfo g_CFlameCanTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flamecan_cpp_CFlameCan_ctor_FUN_004a06c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flamecan_cpp_CFlameCan_dtor_FUN_004a0c40,
    .instance_size = (int)sizeof(CFlameCan),
    .class_name = (char *)s_CFlameCan_00615ecc
};
WatcomTypeInfo g_CFlameThrowerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flamegun_cpp_CFlameThrower_ctor_FUN_004a0d10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flamegun_cpp_CFlameThrower_dtor_FUN_004a0fb0,
    .instance_size = (int)sizeof(CFlameThrower),
    .class_name = (char *)s_CFlameThrower_00615ee4
};
WatcomTypeInfo g_CDeformableModelInstanceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50,
    .instance_size = (int)sizeof(CDeformableModelInstance),
    .class_name = (char *)s_CDeformableModelInstance_00615f14
};
WatcomTypeInfo g_CFlashlightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flashlit_cpp_CFlashlight_ctor_FUN_004a1060,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flashlit_cpp_CFlashlight_dtor_FUN_004a11b0,
    .instance_size = (int)sizeof(CFlashlight),
    .class_name = (char *)s_CFlashlight_00615f00
};
WatcomTypeInfo g_NotesSectionTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_NotesSection_ctor_FUN_004a3520,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_NotesSection_dtor_FUN_004a3550,
    .instance_size = 0x000002E4 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_NotesSection_00616364
};
WatcomTypeInfo g_NotesMapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_NotesMap_ctor_FUN_004a37c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_NotesMap_dtor_FUN_004a3820,
    .instance_size = 0x00000970 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_NotesMap_00616354
};
WatcomTypeInfo g_CAlphaBitmapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440,
    .instance_size = (int)sizeof(CAlphaBitmap),
    .class_name = (char *)s_CAlphaBitmap_00616334
};
WatcomTypeInfo g_TextViewTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_TextView_ctor_FUN_004a27b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_TextView_dtor_FUN_004a27c0,
    .instance_size = 0x00000248 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_TextView_00616324
};
WatcomTypeInfo g_PageResource_TextTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_Text_dtor_FUN_004a2000,
    .instance_size = 0x00000120 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_Text_00616304
};
WatcomTypeInfo g_PageResource_BitmapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004a2140,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_Bitmap_dtor_FUN_004a2200,
    .instance_size = 0x0000002C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_Bitmap_006162e4
};
WatcomTypeInfo g_PageResource_TwanaCharacterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_TwanaCharacter_dtor_FUN_004a2320,
    .instance_size = 0x0000004C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_TwanaCharac_006162b4
};
WatcomTypeInfo g_PageResource_TwanaEntryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_TwanaEntry_ctor_FUN_004a23c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_TwanaEntry_dtor_FUN_004a2470,
    .instance_size = 0x00000114 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_TwanaEntry_00616294
};
WatcomTypeInfo g_CFieldNotesTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_CFieldNotes_ctor_FUN_004a4170,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_CFieldNotes_dtor_FUN_004a4180,
    .instance_size = (int)sizeof(CFieldNotes),
    .class_name = (char *)s_CFieldNotes_00616274
};
WatcomTypeInfo g_PageResource_MapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_fldnotes_cpp_PageResource_Map_dtor_FUN_004a66a0,
    .instance_size = 0x0000001C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_Map_00616254
};
WatcomTypeInfo g_SFlyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flies_cpp_SFly_ctor_FUN_004a7a40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SFly),
    .class_name = (char *)s_SFly_CFlies_006163a4
};
WatcomTypeInfo g_CFliesTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flies_cpp_CFlies_ctor_FUN_004a6a90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flies_cpp_CFlies_dtor_FUN_004a79f0,
    .instance_size = (int)sizeof(CFlies),
    .class_name = (char *)s_CFlies_00616394
};
WatcomTypeInfo g_CFrankenstienMachineTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004ac1a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004ad050,
    .instance_size = (int)sizeof(CFrankenstienMachine),
    .class_name = (char *)s_CFrankenstienMachine_006163bc
};
WatcomTypeInfo g_CGabriellaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gabriela_cpp_CGabriella_dtor_FUN_004b2840,
    .instance_size = (int)sizeof(CGabriella),
    .class_name = (char *)s_CGabriella_006163dc
};
WatcomTypeInfo g_CGameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_game_cpp_CGame_ctor_FUN_004b2d80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_game_cpp_CGame_dtor_FUN_004b2ff0,
    .instance_size = (int)sizeof(CGame),
    .class_name = (char *)s_CGame_00616744
};
WatcomTypeInfo g_CIniFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ini_cpp_CIniFile_dtor_FUN_004d8940,
    .instance_size = (int)sizeof(CIniFile),
    .class_name = (char *)s_CIniFile_00616734
};
WatcomTypeInfo g_CGargoyleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gargoyle_cpp_CGargoyle_ctor_FUN_004bfae0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gargoyle_cpp_CGargoyle_dtor_FUN_004c1240,
    .instance_size = (int)sizeof(CGargoyle),
    .class_name = (char *)s_CGargoyle_00616758
};
WatcomTypeInfo g_CGasMaskTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gasmask_cpp_CGasMask_ctor_FUN_004c1340,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gasmask_cpp_CGasMask_dtor_FUN_004c1500,
    .instance_size = (int)sizeof(CGasMask),
    .class_name = (char *)s_CGasMask_00616770
};
WatcomTypeInfo g_CGhoulTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ghoul_cpp_CGhoul_ctor_FUN_004c15e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ghoul_cpp_CGhoul_dtor_FUN_004c47a0,
    .instance_size = (int)sizeof(CGhoul),
    .class_name = (char *)s_CGhoul_00616788
};
WatcomTypeInfo g_CGlassTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_glass_cpp_CGlass_ctor_FUN_004c48a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_glass_cpp_CGlass_dtor_FUN_004c72f0,
    .instance_size = (int)sizeof(CGlass),
    .class_name = (char *)s_CGlass_006167b4
};
WatcomTypeInfo g_CGoreTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CGore_ctor_FUN_004c93c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CGore_dtor_FUN_004c93e0,
    .instance_size = (int)sizeof(CGore),
    .class_name = (char *)s_CGore_006179d8
};
WatcomTypeInfo g_CBloodParticleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CBloodParticle_ctor_FUN_004ca070,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CBloodParticle_dtor_FUN_004ca090,
    .instance_size = (int)sizeof(CBloodParticle),
    .class_name = (char *)s_CBloodParticle_006179c0
};
WatcomTypeInfo g_CBloodSplatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CBloodSplat_ctor_FUN_004ca050,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CBloodSplat_dtor_FUN_004ca060,
    .instance_size = (int)sizeof(CBloodSplat),
    .class_name = (char *)s_CBloodSplat_006179ac
};
WatcomTypeInfo g_CBloodPoolTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CBloodPool_ctor_FUN_004ca030,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CBloodPool_dtor_FUN_004ca040,
    .instance_size = (int)sizeof(CBloodPool),
    .class_name = (char *)s_CBloodPool_00617998
};
WatcomTypeInfo g_CFootstepTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CFootstep_ctor_FUN_004ca000,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CFootstep_dtor_FUN_004ca020,
    .instance_size = (int)sizeof(CFootstep),
    .class_name = (char *)s_CFootstep_00617984
};
WatcomTypeInfo g_CGraveTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_grave_cpp_CGrave_ctor_FUN_004ca120,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_grave_cpp_CGrave_dtor_FUN_004ca660,
    .instance_size = (int)sizeof(CGrave),
    .class_name = (char *)s_CGrave_006179ec
};
WatcomTypeInfo g_CGroundTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ground_cpp_CGround_dtor_FUN_004ca9a0,
    .instance_size = (int)sizeof(CGround),
    .class_name = (char *)s_CGround_00617a10
};
WatcomTypeInfo g_CGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gun_cpp_CGun_ctor_FUN_004cbd50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gun_cpp_CGun_dtor_FUN_004cc6b0,
    .instance_size = (int)sizeof(CGun),
    .class_name = (char *)s_CGun_00617a24
};
WatcomTypeInfo g_CHaystackTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_haystack_cpp_CHaystack_ctor_FUN_004cc760,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_haystack_cpp_CHaystack_dtor_FUN_004cd9c0,
    .instance_size = (int)sizeof(CHaystack),
    .class_name = (char *)s_CHaystack_00617a34
};
WatcomTypeInfo g_CHealthItemTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_health_cpp_CHealthItem_ctor_FUN_004cda70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_health_cpp_CHealthItem_dtor_FUN_004cdb00,
    .instance_size = (int)sizeof(CHealthItem),
    .class_name = (char *)s_CHealthItem_00617a4c
};
WatcomTypeInfo g_CHeroPlaceholderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d0940,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hero_cpp_CHeroPlaceholder_dtor_FUN_004d09a0,
    .instance_size = (int)sizeof(CHeroPlaceholder),
    .class_name = (char *)s_CHeroPlaceholder_00617a94
};
WatcomTypeInfo g_CHiramTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hiram_cpp_CHiram_ctor_FUN_004d0f30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hiram_cpp_CHiram_dtor_FUN_004d0f90,
    .instance_size = (int)sizeof(CHiram),
    .class_name = (char *)s_CHiram_00617abc
};
WatcomTypeInfo g_CNPCTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_npc_cpp_CNPC_ctor_FUN_00510460,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hiram_cpp_CNPC_dtor_FUN_004d11c0,
    .instance_size = (int)sizeof(CNPC),
    .class_name = (char *)s_CNPC_00617ab0
};
WatcomTypeInfo g_CHostageTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hostage_cpp_CHostage_ctor_FUN_004d12d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hostage_cpp_CHostage_dtor_FUN_004d36e0,
    .instance_size = (int)sizeof(CHostage),
    .class_name = (char *)s_CHostage_00617ad0
};
WatcomTypeInfo g_CHotDemonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hotdemon_cpp_CHotDemon_dtor_FUN_004d4680,
    .instance_size = (int)sizeof(CHotDemon),
    .class_name = (char *)s_CHotDemon_00617ae4
};
WatcomTypeInfo g_CHighPriestOfGardathTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004d4780,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004d4880,
    .instance_size = (int)sizeof(CHighPriestOfGardath),
    .class_name = (char *)s_CHighPriestOfGardath_00617afc
};
WatcomTypeInfo g_CIcePickTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_icepick_cpp_CIcePick_ctor_FUN_004d4990,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_icepick_cpp_CIcePick_dtor_FUN_004d6540,
    .instance_size = (int)sizeof(CIcePick),
    .class_name = (char *)s_CIcePick_00617b1c
};
WatcomTypeInfo g_CImpTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_imp_cpp_CImp_ctor_FUN_004d65f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_imp_cpp_CImp_dtor_FUN_004d80d0,
    .instance_size = (int)sizeof(CImp),
    .class_name = (char *)s_CImp_00617b30
};
WatcomTypeInfo g_CIniTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_ini_cpp_CIni_ctor_FUN_004d8d40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ini_cpp_CIni_dtor_FUN_004d8d50,
    .instance_size = (int)sizeof(CIni),
    .class_name = (char *)s_cIni_00617b3c
};
WatcomTypeInfo g_CKeyActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_keyactor_cpp_CKeyActor_ctor_FUN_004df140,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_keyactor_cpp_CKeyActor_dtor_FUN_004df3e0,
    .instance_size = (int)sizeof(CKeyActor),
    .class_name = (char *)s_CKeyActor_00617dc4
};
WatcomTypeInfo g_CLadderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ladder_cpp_CLadder_ctor_FUN_004dff60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ladder_cpp_CLadder_dtor_FUN_004e04d0,
    .instance_size = (int)sizeof(CLadder),
    .class_name = (char *)s_CLadder_00617de0
};
WatcomTypeInfo g_CLarvaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_larva_cpp_CLarva_ctor_FUN_004e0580,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_larva_cpp_CLarva_dtor_FUN_004e13a0,
    .instance_size = (int)sizeof(CLarva),
    .class_name = (char *)s_CLarva_00617df4
};
WatcomTypeInfo g_CLeverTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lever_cpp_CLever_ctor_FUN_004e1c20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lever_cpp_CLever_dtor_FUN_004e2560,
    .instance_size = (int)sizeof(CLever),
    .class_name = (char *)s_CLever_00617e34
};
WatcomTypeInfo g_CLightGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lightgun_cpp_CLightGun_ctor_FUN_004e2a20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lightgun_cpp_CLightGun_dtor_FUN_004e40e0,
    .instance_size = (int)sizeof(CLightGun),
    .class_name = (char *)s_CLightGun_00617e58
};
WatcomTypeInfo g_CLightConeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_litecone_cpp_CLightCone_ctor_FUN_004e4190,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_litecone_cpp_CLightCone_dtor_FUN_004e4440,
    .instance_size = (int)sizeof(CLightCone),
    .class_name = (char *)s_CLightCone_00617e70
};
WatcomTypeInfo g_SPanelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SPanel_ctor_FUN_004e7b40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SPanel),
    .class_name = (char *)s_SPanel_00617f1c
};
WatcomTypeInfo g_SGemTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SGem_ctor_FUN_004e7b20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SGem),
    .class_name = (char *)s_SGem_00617f10
};
WatcomTypeInfo g_SReflectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SReflector_ctor_FUN_004e7b10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SReflector),
    .class_name = (char *)s_SReflector_00617efc
};
WatcomTypeInfo g_CMirrorHackTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_CMirrorHack_ctor_FUN_004e77b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_CMirrorHack_dtor_FUN_004e7a70,
    .instance_size = (int)sizeof(CMirrorHack),
    .class_name = (char *)s_CMirrorHack_00617ee8
};
WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004e7ac0,
    .instance_size = (int)sizeof(CMansionPuzzleCircle),
    .class_name = (char *)s_CMansionPuzzleCircle_00617ecc
};
WatcomTypeInfo g_CMarqueeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_marquee_cpp_CMarquee_ctor_FUN_004e7c80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_marquee_cpp_CMarquee_dtor_FUN_004e85b0,
    .instance_size = (int)sizeof(CMarquee),
    .class_name = (char *)s_CMarquee_00617f48
};
WatcomTypeInfo g_CMeleeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_melee_cpp_CMelee_ctor_FUN_004ea8b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_melee_cpp_CMelee_dtor_FUN_004ead30,
    .instance_size = (int)sizeof(CMelee),
    .class_name = (char *)s_CMelee_00617f5c
};
WatcomTypeInfo g_CMoonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moon_cpp_CMoon_ctor_FUN_00502350,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moon_cpp_CMoon_dtor_FUN_00502390,
    .instance_size = (int)sizeof(CMoon),
    .class_name = (char *)s_CMoon_006180ac
};
WatcomTypeInfo g_CMimicTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mimic_cpp_CMimic_ctor_FUN_004f0310,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mimic_cpp_CMimic_dtor_FUN_004f0400,
    .instance_size = (int)sizeof(CMimic),
    .class_name = (char *)s_CMimic_006180c0
};
WatcomTypeInfo g_CMineCarTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_minecar_cpp_CMineCar_ctor_FUN_004f2100,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_minecar_cpp_CMineCar_dtor_FUN_004f2120,
    .instance_size = (int)sizeof(CMineCar),
    .class_name = (char *)s_CMineCar_006180d4
};
WatcomTypeInfo g_CMini3DTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_minecar_cpp_CMini3D_ctor_FUN_004f21d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_minecar_cpp_CMini3D_dtor_FUN_004f2290,
    .instance_size = (int)sizeof(CMini3D),
    .class_name = (char *)s_CMini3D_00618148
};
WatcomTypeInfo g_SDynamicLightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_mini3d_cpp_SDynamicLight_ctor_FUN_004f9410,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_mini3d_cpp_SDynamicLight_dtor_FUN_004f9420,
    .instance_size = (int)sizeof(SDynamicLight),
    .class_name = (char *)s_SDynamicLight_00618130
};
WatcomTypeInfo g_SClipPlaneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mirror_cpp_SClipPlane_ctor_FUN_004fb340,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SClipPlane),
    .class_name = (char *)s_SClipPlane_00618157
};
WatcomTypeInfo g_CMobsterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mobster_cpp_CMobster_ctor_FUN_004fd810,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mobster_cpp_CMobster_dtor_FUN_005004f0,
    .instance_size = (int)sizeof(CMobster),
    .class_name = (char *)s_CMobster_006182ec
};
WatcomTypeInfo g_CMolochTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moloch_cpp_CMoloch_ctor_FUN_00501340,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moloch_cpp_CMoloch_dtor_FUN_00501400,
    .instance_size = (int)sizeof(CMoloch),
    .class_name = (char *)s_CMoloch_00618300
};
WatcomTypeInfo g_CMotionControllerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_motion_cpp_CMotionController_ctor_FUN_00503020,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_motion_cpp_CMotionController_dtor_FUN_00503050,
    .instance_size = (int)sizeof(CMotionController),
    .class_name = (char *)s_CMotionController_0061847c
};
WatcomTypeInfo g_CNetGameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_CNetGame_ctor_FUN_0050b290,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_netgame_cpp_CNetGame_dtor_FUN_0050b320,
    .instance_size = (int)sizeof(CNetGame),
    .class_name = (char *)s_CNetGame_0061b17c
};
WatcomTypeInfo g_SChatHistoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SChatHistory_ctor_FUN_0050f840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_netgame_cpp_SChatHistory_dtor_FUN_0050f850,
    .instance_size = (int)sizeof(SChatHistory),
    .class_name = (char *)s_SChatHistory_0061b168
};
WatcomTypeInfo g_SPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SPlayer_ctor_FUN_0050f830,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SPlayer),
    .class_name = (char *)s_GSPlayer_PGameSettingsCh_0061b140
};
WatcomTypeInfo g_SNetPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SNetPlayer_ctor_FUN_0050f860,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_netgame_cpp_SNetPlayer_copy_FUN_0050f870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SNetPlayer),
    .class_name = (char *)s_SNetPlayer_0061b12c
};
WatcomTypeInfo g_CMouseTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_ncursfx_cpp_CMouse_ctor_FUN_00510010,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ncursfx_cpp_CMouse_dtor_FUN_00510070,
    .instance_size = (int)sizeof(CMouse),
    .class_name = (char *)s_CMouse_0061b2a8
};
WatcomTypeInfo g_CPassengerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_passngr_cpp_CPassenger_ctor_FUN_00511410,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_passngr_cpp_CPassenger_dtor_FUN_005114f0,
    .instance_size = (int)sizeof(CPassenger),
    .class_name = (char *)s_CPassenger_0061b2c0
};
WatcomTypeInfo g_CPathMapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_path_cpp_CPathMap_ctor_FUN_00511c90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_path_cpp_CPathMap_dtor_FUN_00511d10,
    .instance_size = (int)sizeof(CPathMap),
    .class_name = (char *)s_CPathMap_0061b398
};
WatcomTypeInfo g_CPendulumTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_pendulum_cpp_CPendulum_ctor_FUN_00514cd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_pendulum_cpp_CPendulum_dtor_FUN_005160f0,
    .instance_size = (int)sizeof(CPendulum),
    .class_name = (char *)s_CPendulum_0061b3ac
};
WatcomTypeInfo g_CPackedBitmapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_00516140,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_005161b0,
    .instance_size = (int)sizeof(CPackedBitmap),
    .class_name = (char *)s_CPackedBitmap_0061b3c8
};
WatcomTypeInfo g_CPodTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_pod_cpp_CPod_ctor_FUN_0051b080,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_pod_cpp_CPod_dtor_FUN_0051b0b0,
    .instance_size = (int)sizeof(CPod),
    .class_name = (char *)s_CPod_0061b3f4
};
WatcomTypeInfo g_CPodFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_pod_cpp_CPodFile_ctor_FUN_00519e50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_pod_cpp_CPodFile_dtor_FUN_00519ec0,
    .instance_size = (int)sizeof(CPodFile),
    .class_name = (char *)s_CPodFile_0061b3e4
};
WatcomTypeInfo g_CDemonPodTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_podmain_cpp_CDemonPod_ctor_FUN_0051c110,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_podmain_cpp_CDemonPod_dtor_FUN_0051c130,
    .instance_size = (int)sizeof(CDemonPod),
    .class_name = (char *)s_CDemonPod_0061b414
};
WatcomTypeInfo g_CScatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_scat_cpp_CScat_ctor_FUN_0051e9a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_scat_cpp_CScat_dtor_FUN_00520f40,
    .instance_size = (int)sizeof(CScat),
    .class_name = (char *)s_CScat_0061b430
};
WatcomTypeInfo g_CScriptTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_script_cpp_CScript_ctor_FUN_005215c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_script_cpp_CScript_dtor_FUN_00521600,
    .instance_size = (int)sizeof(CScript),
    .class_name = (char *)s_CScript_0061b544
};
WatcomTypeInfo g_CSentinelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_sentinel_cpp_CSentinel_ctor_FUN_0052a720,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_sentinel_cpp_CSentinel_dtor_FUN_0052bb40,
    .instance_size = (int)sizeof(CSentinel),
    .class_name = (char *)s_CSentinel_0061b558
};
WatcomTypeInfo g_CDemonSetTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_CDemonSet_ctor_FUN_0052bd20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_CDemonSet_dtor_FUN_0052c060,
    .instance_size = (int)sizeof(CDemonSet),
    .class_name = (char *)s_CDemonSet_0061b948
};
WatcomTypeInfo g_CDemonRaytraceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00472400,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00472440,
    .instance_size = (int)sizeof(CDemonRaytrace),
    .class_name = (char *)s_CDemonRaytrace_0061b930
};
WatcomTypeInfo g_C3DSCameraTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setutil_cpp_C3DSCamera_ctor_FUN_0053a7e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setutil_cpp_C3DSCamera_dtor_FUN_0053a810,
    .instance_size = (int)sizeof(C3DSCamera),
    .class_name = (char *)s_C3DSCamera_0061b91c
};
WatcomTypeInfo g_C3DSLightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setutil_cpp_C3DSLight_ctor_FUN_0053af10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(C3DSLight),
    .class_name = (char *)s_C3DSLight_0061b908
};
WatcomTypeInfo g_SRoomTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_SRoom_ctor_FUN_00534d00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SRoom),
    .class_name = (char *)s_SRoom_CDemonSet_0061b8f0
};
WatcomTypeInfo g_SVDBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_SVDBox_ctor_FUN_00534d10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SVDBox),
    .class_name = (char *)s_SVDBox_0061b8e0
};
WatcomTypeInfo g_SRaytraceStateTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SRaytraceState_ctor_FUN_005382d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setcolid_cpp_SRaytraceState_dtor_FUN_005382e0,
    .instance_size = (int)sizeof(SRaytraceState),
    .class_name = (char *)s_SRaytraceState_0061b959
};
WatcomTypeInfo g_CZThumbTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setdir_cpp_CZThumb_ctor_FUN_00538430,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setdir_cpp_CZThumb_dtor_FUN_00538450,
    .instance_size = (int)sizeof(CZThumb),
    .class_name = (char *)s_CZThumb_0061bb48
};
WatcomTypeInfo g_CBoundingBox3DTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_box_cpp_CBoundingBox3D_ctor_FUN_00534d20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setdir_cpp_CBoundingBox3D_dtor_FUN_0053a7b0,
    .instance_size = (int)sizeof(CBoundingBox3D),
    .class_name = (char *)s_CBoundingBox3D_0061bb30
};
WatcomTypeInfo g_CShadowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shadow_cpp_CShadow_ctor_FUN_0053c200,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shadow_cpp_CShadow_dtor_FUN_0053eed0,
    .instance_size = (int)sizeof(CShadow),
    .class_name = (char *)s_CShadow_0061bb8c
};
WatcomTypeInfo g_CShotgunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shotgun_cpp_CShotgun_ctor_FUN_0053efd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shotgun_cpp_CShotgun_dtor_FUN_0053fd70,
    .instance_size = (int)sizeof(CShotgun),
    .class_name = (char *)s_CShotgun_0061bba0
};
WatcomTypeInfo g_CShovelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shovel_cpp_CShovel_ctor_FUN_0053fe20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shovel_cpp_CShovel_dtor_FUN_0053ff00,
    .instance_size = (int)sizeof(CShovel),
    .class_name = (char *)s_CShovel_0061bbb4
};
WatcomTypeInfo g_CSimBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_simbox_cpp_CSimBox_ctor_FUN_0053ffb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_simbox_cpp_CSimBox_dtor_FUN_00540510,
    .instance_size = (int)sizeof(CSimBox),
    .class_name = (char *)s_CSimBox_0061bbc8
};
WatcomTypeInfo g_SVertTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_SVert_ctor_FUN_00549310,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SVert),
    .class_name = (char *)s_SVert_CDeformableModel_0061bc29
};
WatcomTypeInfo g_CDeformableModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModel_ctor_FUN_00541020,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModel_dtor_FUN_00541140,
    .instance_size = (int)sizeof(CDeformableModel),
    .class_name = (char *)s_CDeformableModel_0061bc11
};
WatcomTypeInfo g_CSkeletonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CSkeleton_ctor_FUN_005407e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CSkeleton_dtor_FUN_00540840,
    .instance_size = (int)sizeof(CSkeleton),
    .class_name = (char *)s_CSkeleton_0061bc00
};
WatcomTypeInfo g_CSmileyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_smiley_cpp_CSmiley_ctor_FUN_005497d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_smiley_cpp_CSmiley_dtor_FUN_0054ad80,
    .instance_size = (int)sizeof(CSmiley),
    .class_name = (char *)s_CSmiley_0061bc50
};
WatcomTypeInfo g_SfxSlotTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSlot_ctor_FUN_00554a60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSlot_dtor_FUN_00554a80,
    .instance_size = (int)sizeof(CSfxSlot),
    .class_name = (char *)s_SfxSlot_0061bf44
};
WatcomTypeInfo g_SfxOptionsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxOptions_ctor_FUN_00554a30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxOptions_dtor_FUN_00554a90,
    .instance_size = (int)sizeof(CSfxOptions),
    .class_name = (char *)s_SfxOptions_0061bf24
};
WatcomTypeInfo g_SfxSampleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSample_ctor_FUN_0054d7a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSample_dtor_FUN_0054d810,
    .instance_size = (int)sizeof(CSfxSample),
    .class_name = (char *)s_SfxSample_0061bf04
};
WatcomTypeInfo g_CMP3DecoderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_mp3_cpp_CMP3Decoder_ctor_FUN_00509c70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_00509cb0,
    .instance_size = (int)sizeof(CMP3Decoder),
    .class_name = (char *)s_CMP3Decoder_0061bee4
};
WatcomTypeInfo g_STrainNoiseTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_sound_cpp_STrainNoise_ctor_FUN_0055b1d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_sound_cpp_STrainNoise_dtor_FUN_0055b1e0,
    .instance_size = (int)sizeof(STrainNoise),
    .class_name = (char *)s_STrainNoise_0061c2f4
};
WatcomTypeInfo g_CSpikeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_spike_cpp_CSpike_ctor_FUN_00560540,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_spike_cpp_CSpike_dtor_FUN_005612c0,
    .instance_size = (int)sizeof(CSpike),
    .class_name = (char *)s_CSpike_0061e29c
};
WatcomTypeInfo g_CStairsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stairs_cpp_CStairs_ctor_FUN_00561ef0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stairs_cpp_CStairs_dtor_FUN_00562380,
    .instance_size = (int)sizeof(CStairs),
    .class_name = (char *)s_CStairs_0061e2bc
};
WatcomTypeInfo g_CTempleStoneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stone_cpp_CTempleStone_ctor_FUN_00562430,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stone_cpp_CTempleStone_dtor_FUN_005624f0,
    .instance_size = (int)sizeof(CTempleStone),
    .class_name = (char *)s_CTempleStone_0061e2d0
};
WatcomTypeInfo g_CStrangerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stranger_cpp_CStranger_ctor_FUN_005627f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stranger_cpp_CStranger_dtor_FUN_0056f210,
    .instance_size = (int)sizeof(CStranger),
    .class_name = (char *)s_CStranger_0061e2e8
};
WatcomTypeInfo g_CSuccubusTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_succubus_cpp_CSuccubus_ctor_FUN_0056f2c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_succubus_cpp_CSuccubus_dtor_FUN_00570090,
    .instance_size = (int)sizeof(CSuccubus),
    .class_name = (char *)s_CSuccubus_0061e300
};
WatcomTypeInfo g_CSvetlanaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_svetlana_cpp_CSvetlana_ctor_FUN_005701c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_svetlana_cpp_CSvetlana_dtor_FUN_00571a30,
    .instance_size = (int)sizeof(CSvetlana),
    .class_name = (char *)s_CSvetlana_0061e330
};
WatcomTypeInfo g_CDrummerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tbplayer_cpp_CDrummer_ctor_FUN_00571db0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tbplayer_cpp_CDrummer_dtor_FUN_00572060,
    .instance_size = (int)sizeof(CDrummer),
    .class_name = (char *)s_CDrummer_0061e360
};
WatcomTypeInfo g_CBassPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tbplayer_cpp_CBassPlayer_ctor_FUN_00571b30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tbplayer_cpp_CBassPlayer_dtor_FUN_00572110,
    .instance_size = (int)sizeof(CBassPlayer),
    .class_name = (char *)s_CBassPlayer_0061e34c
};
WatcomTypeInfo g_CTeleportTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_teleport_cpp_CTeleport_ctor_FUN_005722f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_teleport_cpp_CTeleport_dtor_FUN_005724d0,
    .instance_size = (int)sizeof(CTeleport),
    .class_name = (char *)s_CTeleport_0061e390
};
WatcomTypeInfo g_CTeleportDestTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_teleport_cpp_CTeleportDest_ctor_FUN_00572240,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_teleport_cpp_CTeleportDest_dtor_FUN_00572520,
    .instance_size = (int)sizeof(CTeleportDest),
    .class_name = (char *)s_CTeleportDest_0061e378
};
WatcomTypeInfo g_CTentacleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tentacle_cpp_CTentacle_ctor_FUN_005725d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tentacle_cpp_CTentacle_dtor_FUN_005733d0,
    .instance_size = (int)sizeof(CTentacle),
    .class_name = (char *)s_CTentacle_0061e3a8
};
WatcomTypeInfo g_CTextureListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_texlist_cpp_CTextureList_ctor_FUN_00573490,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_texlist_cpp_CTextureList_dtor_FUN_005734a0,
    .instance_size = (int)sizeof(CTextureList),
    .class_name = (char *)s_CTextureList_0061e3d0
};
WatcomTypeInfo g_CTommyGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tommygun_cpp_CTommyGun_ctor_FUN_00575760,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tommygun_cpp_CTommyGun_dtor_FUN_005763a0,
    .instance_size = (int)sizeof(CTommyGun),
    .class_name = (char *)s_CTommyGun_0061e3e8
};
WatcomTypeInfo g_CTrapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trap_cpp_CTrap_ctor_FUN_00576450,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trap_cpp_CTrap_dtor_FUN_00576880,
    .instance_size = (int)sizeof(CTrap),
    .class_name = (char *)s_CTrap_0061e400
};
WatcomTypeInfo g_CTrashTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trash_cpp_CTrash_ctor_FUN_00576930,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trash_cpp_CTrash_dtor_FUN_00577640,
    .instance_size = (int)sizeof(CTrash),
    .class_name = (char *)s_CTrash_0061e414
};
WatcomTypeInfo g_CTriggerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trigger_cpp_CTrigger_ctor_FUN_005776f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trigger_cpp_CTrigger_dtor_FUN_00577840,
    .instance_size = (int)sizeof(CTrigger),
    .class_name = (char *)s_CTrigger_0061e428
};
WatcomTypeInfo g_SocketTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trisock_cpp_CSocket_ctor_FUN_00579000,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trisock_cpp_Socket_copy_FUN_00578fd0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trisock_cpp_CSocket_dtor_FUN_00579010,
    .instance_size = 0x00000004 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_Socket_0061e446
};
WatcomTypeInfo g_IpAddrTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_trisock_cpp_IpAddr_ctor_FUN_0057b780,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_netgame_cpp_IpAddr_copy_FUN_0050f9c0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = 0x00000004 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_IpAddr_0061e438
};
WatcomTypeInfo g_COutStreamDebugTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamDebug_ctor_FUN_0057e1c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_COutStreamDebug_dtor_FUN_0057e1e0,
    .instance_size = (int)sizeof(COutStreamDebug),
    .class_name = (char *)s_COutStreamDebug_0061e480
};
WatcomTypeInfo g_CTurretTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_turret_cpp_CTurret_ctor_FUN_0057e3f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_turret_cpp_CTurret_dtor_FUN_00580210,
    .instance_size = (int)sizeof(CTurret),
    .class_name = (char *)s_CTurret_0061e49c
};
WatcomTypeInfo g_CTVBatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tvbat_cpp_CTVBat_ctor_FUN_005802f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tvbat_cpp_CTVBat_dtor_FUN_00581430,
    .instance_size = (int)sizeof(CTVBat),
    .class_name = (char *)s_CTVBat_0061e4b0
};
WatcomTypeInfo g_CVampireBossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vampboss_cpp_CVampireBoss_ctor_FUN_00581530,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vampboss_cpp_CVampireBoss_dtor_FUN_005837e0,
    .instance_size = (int)sizeof(CVampireBoss),
    .class_name = (char *)s_CVampireBoss_0061e4c4
};
WatcomTypeInfo g_CTireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vehicle_cpp_CTire_ctor_FUN_00584e50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(CTire),
    .class_name = (char *)s_CTire_0061e4ec
};
WatcomTypeInfo g_CVehicleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vehicle_cpp_CVehicle_ctor_FUN_005839f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vehicle_cpp_CVehicle_dtor_FUN_00584de0,
    .instance_size = (int)sizeof(CVehicle),
    .class_name = (char *)s_CVehicle_0061e4dc
};
WatcomTypeInfo g_CCryptVesselTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vessel_cpp_CCryptVessel_ctor_FUN_00584ed0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vessel_cpp_CCryptVessel_dtor_FUN_00585cd0,
    .instance_size = (int)sizeof(CCryptVessel),
    .class_name = (char *)s_CCryptVessel_0061e500
};
WatcomTypeInfo g_CWaterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_water_cpp_CWater_ctor_FUN_00585db0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_water_cpp_CWater_dtor_FUN_00585dd0,
    .instance_size = (int)sizeof(CWater),
    .class_name = (char *)s_CWater_0061e6f8
};
WatcomTypeInfo g_SCollisionInfoTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_wateract_cpp_SCollisionInfo_dtor_FUN_00587bf0,
    .instance_size = (int)sizeof(SCollisionInfo),
    .class_name = (char *)s_SCollisionInfo_0061e8b4
};
WatcomTypeInfo g_SWaterVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_wateract_cpp_SWaterVertex_ctor_FUN_00587be0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SWaterVertex),
    .class_name = (char *)s_SWaterVertex_0061e8a0
};
WatcomTypeInfo g_CWaterActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_wateract_cpp_CWaterActor_ctor_FUN_005869a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_wateract_cpp_CWaterActor_dtor_FUN_00587b90,
    .instance_size = (int)sizeof(CWaterActor),
    .class_name = (char *)s_CWaterActor_0061e88c
};
WatcomTypeInfo g_CWayPointTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_waypoint_cpp_CWayPoint_dtor_FUN_00588480,
    .instance_size = (int)sizeof(CWayPoint),
    .class_name = (char *)s_CWayPoint_0061e8d0
};
WatcomTypeInfo g_CWeaponTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_weapon_cpp_CWeapon_ctor_FUN_005899d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0,
    .instance_size = (int)sizeof(CWeapon),
    .class_name = (char *)s_CWeapon_0061e8e8
};
WatcomTypeInfo g_CWerewolfTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_werewolf_cpp_CWerewolf_ctor_FUN_0058b780,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_werewolf_cpp_CWerewolf_dtor_FUN_0058def0,
    .instance_size = (int)sizeof(CWerewolf),
    .class_name = (char *)s_CWerewolf_0061e960
};
WatcomTypeInfo g_CWinFontTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_winfont_cpp_CWinFont_dtor_FUN_0058e050,
    .instance_size = (int)sizeof(CWinFont),
    .class_name = (char *)s_CWinFont_0061e971
};
WatcomTypeInfo g_CZombieTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_zombie_cpp_CZombie_ctor_FUN_00595a90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_zombie_cpp_CZombie_dtor_FUN_00599d70,
    .instance_size = (int)sizeof(CZombie),
    .class_name = (char *)s_CZombie_0061e9a0
};
WatcomTypeInfo g_CExamplePuzzleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_superopt_cpp_CExamplePuzzle_ctor_FUN_0059bf50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_superopt_cpp_CExamplePuzzle_dtor_FUN_0059bf70,
    .instance_size = (int)sizeof(CExamplePuzzle),
    .class_name = (char *)s_CExamplePuzzle_0061ea23
};
WatcomTypeInfo g_CAudioRecPuzzleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_superopt_cpp_CAudioRecPuzzle_ctor_FUN_0059be60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_superopt_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0,
    .instance_size = (int)sizeof(CAudioRecPuzzle),
    .class_name = (char *)s_CAudioRecPuzzle_0061ea0c
};
WatcomTypeInfo g_1hlg6hbuttonStructTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_superopt_cpp___1hlg6hbuttonStruct_ctor_FUN_0059bf30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_superopt_cpp___1hlg6hbuttonStruct_dtor_FUN_0059bf40,
    .instance_size = 0x0000002C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_s_1hlg6hbuttonStruct_CAu_0061e9df
};
WatcomTypeInfo g_CGogglesTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_goggles_cpp_CGoggles_ctor_FUN_0059c060,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_goggles_cpp_CGoggles_dtor_FUN_0059c220,
    .instance_size = (int)sizeof(CGoggles),
    .class_name = (char *)s_CGoggles_0061ea40
};
WatcomTypeInfo g_CGameHookTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkclass_gamehook_cpp_CGameHook_ctor_FUN_0059c290,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkclass_gamehook_cpp_CGameHook_dtor_FUN_0059c2b0,
    .instance_size = (int)sizeof(CGameHook),
    .class_name = (char *)s_CGameHook_0061ea64
};
WatcomTypeInfo g_CPatrolPointTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_patrpoin_cpp_CPatrolPoint_ctor_FUN_0059c5e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_patrpoin_cpp_CPatrolPoint_dtor_FUN_0059c610,
    .instance_size = (int)sizeof(CPatrolPoint),
    .class_name = (char *)s_CPatrolPoint_0061ea7c
};
WatcomTypeInfo g_CLanternTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lantern_cpp_CLantern_ctor_FUN_0059cbd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lantern_cpp_CLantern_dtor_FUN_0059d170,
    .instance_size = (int)sizeof(CLantern),
    .class_name = (char *)s_CLantern_0061ea94
};
WatcomTypeInfo g_CMeleeAxeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_meleeaxe_cpp_CMeleeAxe_ctor_FUN_0059d220,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_meleeaxe_cpp_CMeleeAxe_dtor_FUN_0059d300,
    .instance_size = (int)sizeof(CMeleeAxe),
    .class_name = (char *)s_CMeleeAxe_0061eaa8
};
WatcomTypeInfo g_SFollowSlotStructTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_special_cpp_SFollowSlotStruct_ctor_FUN_0059e370,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .instance_size = (int)sizeof(SFollowSlotStruct),
    .class_name = (char *)s_SFollowSlotStruct_0061eab9
};
WatcomTypeInfo g_CConfederateTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_confedrt_cpp_CConfederate_ctor_FUN_005a0840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_confedrt_cpp_CConfederate_dtor_FUN_005a09c0,
    .instance_size = (int)sizeof(CConfederate),
    .class_name = (char *)s_CConfederate_0061eadc
};
WatcomTypeInfo g_CConfederateZombieTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_confzomb_cpp_CConfederateZombie_dtor_FUN_005a1cc0,
    .instance_size = (int)sizeof(CConfederateZombie),
    .class_name = (char *)s_CConfederateZombie_0061eaf4
};
WatcomTypeInfo g_CTwigZombieTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_twigzomb_cpp_CTwigZombie_ctor_FUN_005a26d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_twigzomb_cpp_CTwigZombie_dtor_FUN_005a2eb0,
    .instance_size = (int)sizeof(CTwigZombie),
    .class_name = (char *)s_CTwigZombie_0061eb14
};
WatcomTypeInfo g_CSchnellGeistTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_schngeis_cpp_CSchnellGeist_dtor_FUN_005a3c30,
    .instance_size = (int)sizeof(CSchnellGeist),
    .class_name = (char *)s_CSchnellGeist_0061eb2c
};
WatcomTypeInfo g_CUnionZombieTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_unionzom_cpp_CUnionZombie_dtor_FUN_005a3e70,
    .instance_size = (int)sizeof(CUnionZombie),
    .class_name = (char *)s_CUnionZombie_0061eb48
};
WatcomTypeInfo g_CBasicNPCTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_basicnpc_cpp_CBasicNPC_dtor_FUN_005a4980,
    .instance_size = (int)sizeof(CBasicNPC),
    .class_name = (char *)s_CBasicNPC_0061eb60
};
WatcomTypeInfo g_CUnionTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_union_cpp_CUnion_ctor_FUN_005a4a80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_union_cpp_CUnion_dtor_FUN_005a5a40,
    .instance_size = (int)sizeof(CUnion),
    .class_name = (char *)s_CUnion_0061eb78
};
WatcomTypeInfo g_CSteubenTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_steuben_cpp_CSteuben_ctor_FUN_005a5b40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_steuben_cpp_CSteuben_dtor_FUN_005a5d70,
    .instance_size = (int)sizeof(CSteuben),
    .class_name = (char *)s_CSteuben_0061eb8c
};
WatcomTypeInfo g_CRobinTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_robin_cpp_CRobin_ctor_FUN_005a5e70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005b7740,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_robin_cpp_CRobin_dtor_FUN_005a5f50,
    .instance_size = (int)sizeof(CRobin),
    .class_name = (char *)s_CRobin_0061eba0
};

// undefined1
undefined1 DAT_005f211c = 0x00;

// undefined1*
undefined1* g_CAsciiArmorVTable = (undefined1*)support_codec_cpp_CAsciiArmor_dtor_FUN_004354a0;
undefined1* g_CAsciiUnarmorVTable = (undefined1*)support_codec_cpp_CAsciiUnarmor_dtor_FUN_00435450;
undefined1* g_CInStreamPipeVTable = (undefined1*)support_codec_cpp_CInStreamPipe_dtor_FUN_00434f40;
undefined1* g_CDemonCameraVTable = (undefined1*)core_dcamera_cpp_CDemonCamera_dtor_FUN_0043b460;
undefined1* g_CStrListVTable = (undefined1*)shape_edittool_cpp_CStrList_dtor_FUN_00480d40;
undefined1* g_CPickListVTable = (undefined1*)shape_edittool_cpp_CPickList_dtor_FUN_004820b0;
undefined1* g_CRainDropVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CPopcornVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CShellVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CGlassParticleVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CLeafVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CRockVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CFireballVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CFireflyVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CSparkVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CBloodParticleVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00510e00;
undefined1* g_CDemonPodVTable = (undefined1*)core_podmain_cpp_CDemonPod_dtor_FUN_0051c130;
undefined1* g_CInStreamFileVTable = (undefined1*)unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0;
undefined1* g_CInStreamMemoryVTable = (undefined1*)support_trstream_cpp_CInStreamMemory_dtor_FUN_0057d5a0;
undefined1* g_COutStreamFileVTable = (undefined1*)support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10;
undefined1* g_COutStreamMemoryVTable = (undefined1*)support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10;
undefined1* g_COutStreamDebugVTable = (undefined1*)support_trstream_cpp_COutStreamDebug_dtor_FUN_0057e1e0;
undefined1* g_CAudioRecPuzzleVTable = (undefined1*)unkafter_superopt_cpp_CAudioRecPuzzle_dtor_FUN_0059bec0;

// void*
void* g_CBrideVTable = (void*)core_actor_cpp_FUN_0040ced0;
void* g_CBugsVTable = (void*)core_actor_cpp_FUN_0040ced0;
void* g_CCharacterVTable = (void*)core_actor_cpp_FUN_0040ced0;
void* g_CCodecVTable = (void*)support_codec_cpp_CCodec_dtor_FUN_00433e90;
void* g_CColonelVTable = (void*)core_actor_cpp_FUN_0040ced0;
void* g_CConstructVTable = (void*)core_actor_cpp_FUN_0040ced0;
void* g_CConveyorVTable = (void*)core_actor_cpp_FUN_0040ced0;
void* g_PageResource_BitmapVTable = (void*)core_fldnotes_cpp_PageResource_Bitmap_dtor_FUN_004a2200;
void* g_PageResource_TwanaEntryVTable = (void*)core_fldnotes_cpp_PageResource_TwanaEntry_dtor_FUN_004a2470;
void* g_CDeformableModelInstanceVTable = (void*)core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50;

