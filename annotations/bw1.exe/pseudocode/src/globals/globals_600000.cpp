#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x600000
// =============================================================================

// WatcomDestructorCall
WatcomDestructorCall DAT_00600850 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkaddr_004b9ab0_cpp_SNotesSection_arrdtor6_FUN_004bf720,
    .object_instance = (void *)&SNotesSection_ARRAY_01cc4474
};
WatcomDestructorCall DAT_0060085C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkaddr_004b9ab0_cpp_SNotesMap_arrdtor4_FUN_004bf700,
    .object_instance = (void *)&SNotesMap_ARRAY_01cc55d0
};
WatcomDestructorCall DAT_00600868 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7b94
};
WatcomDestructorCall DAT_00600874 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkaddr_004b9ab0_cpp_CAlphaBitmap_arrdtor6_FUN_004bf6e0,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01cc7ba8
};
WatcomDestructorCall DAT_00600880 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7c20
};
WatcomDestructorCall DAT_0060088C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7c34
};
WatcomDestructorCall DAT_00600898 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7c48
};
WatcomDestructorCall DAT_006008A4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7c5c
};
WatcomDestructorCall DAT_006008B0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7c70
};
WatcomDestructorCall DAT_006008BC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7c84
};
WatcomDestructorCall DAT_006008C8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7c98
};
WatcomDestructorCall DAT_006008D4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7cac
};
WatcomDestructorCall DAT_006008E0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01cc7cc0
};
WatcomDestructorCall DAT_006008EC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fldnotes_cpp_TextView_dtor_FUN_004bb1a0,
    .object_instance = (void *)&g_STextViewInstance
};
WatcomDestructorCall DAT_006008F8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fldnotes_cpp_CFieldNotes_dtor_FUN_004bcb70,
    .object_instance = (void *)&g_CFieldNotesInstance
};
WatcomDestructorCall DAT_00600F30 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dlight_cpp_CDemonLight_dtor_FUN_00462530,
    .object_instance = (void *)&g_CDemonLightInstance
};
WatcomDestructorCall DAT_00600F3C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_game_cpp_CGame_dtor_FUN_004cbf00,
    .object_instance = (void *)&g_CGameInstance
};
WatcomDestructorCall DAT_00600F48 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CPickList_dtor_FUN_0049a710,
    .object_instance = (void *)&g_CPickList
};
WatcomDestructorCall DAT_00600F54 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CDemonFilter_dtor_FUN_0045d9a0,
    .object_instance = (void *)&CDemonFilter_01cd0af0
};
WatcomDestructorCall DAT_00600F60 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_game_cpp_CAlphaBitmap_arrdtor8_FUN_004dc1f0,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01cd0b44
};
WatcomDestructorCall DAT_00601690 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_gore_cpp_CGore_dtor_FUN_004e5bf0,
    .object_instance = (void *)&g_CGoreInstance
};
WatcomDestructorCall DAT_0060169C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_gore_cpp_CBloodParticle_arrdtor256_FUN_004e68b0,
    .object_instance = (void *)&g_BloodParticles
};
WatcomDestructorCall DAT_006018B0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_ground_cpp_CGround_dtor_FUN_004e7220,
    .object_instance = (void *)&g_CGroundInstance
};
WatcomDestructorCall DAT_006029B0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d08d78
};
WatcomDestructorCall DAT_006029BC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d08d8c
};
WatcomDestructorCall DAT_006029C8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d08da0
};
WatcomDestructorCall DAT_006029D4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d08db4
};
WatcomDestructorCall DAT_006029E0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1b9d0
};
WatcomDestructorCall DAT_006029EC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1b9e4
};
WatcomDestructorCall DAT_006029F8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1b9f8
};
WatcomDestructorCall DAT_00602A04 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1ba0c
};
WatcomDestructorCall DAT_00602A10 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1ba20
};
WatcomDestructorCall DAT_00602A1C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1ba34
};
WatcomDestructorCall DAT_00602A28 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1ba48
};
WatcomDestructorCall DAT_00602A34 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1ba5c
};
WatcomDestructorCall DAT_00602A40 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1ba70
};
WatcomDestructorCall DAT_00602A4C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1ba84
};
WatcomDestructorCall DAT_00602A58 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1ba98
};
WatcomDestructorCall DAT_00602A64 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1baf4
};
WatcomDestructorCall DAT_00602A70 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dcube_cpp_CVector3f_arrdtor16_FUN_004fc490,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_01d1bb08
};
WatcomDestructorCall DAT_00602EA0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00466880,
    .object_instance = (void *)&g_LoadingMoonModel
};
WatcomDestructorCall DAT_006033D0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1d40c
};
WatcomDestructorCall DAT_006033DC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1d420
};
WatcomDestructorCall DAT_006033E8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1d434
};
WatcomDestructorCall DAT_006033F4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d1d448
};
WatcomDestructorCall DAT_00603910 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_game_cpp_CAlphaBitmap_arrdtor8_FUN_004dc1f0,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomDestructorCall DAT_0060391C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_moon_cpp_CMoon_dtor_FUN_00521c00,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomDestructorCall DAT_00603928 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomDestructorCall DAT_00603934 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomDestructorCall DAT_00603940 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomDestructorCall DAT_0060394C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&g_CalibrationBitmap
};
WatcomDestructorCall DAT_00603C70 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_minecar_cpp_CMini3D_dtor_FUN_00511020,
    .object_instance = (void *)&g_CMini3DInstance
};
WatcomDestructorCall DAT_00604220 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d33ce4
};
WatcomDestructorCall DAT_0060422C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_moon_cpp_CAlphaBitmap_arrdtor30_FUN_005220d0,
    .object_instance = (void *)&g_MoonAnimTextures
};
WatcomDestructorCall DAT_00604238 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .object_instance = (void *)&CAlphaBitmap_01d33f50
};
WatcomDestructorCall DAT_00604330 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_netgame_cpp_CNetGame_dtor_FUN_0052c500,
    .object_instance = (void *)&g_CNetGameInstance
};
WatcomDestructorCall DAT_006043E0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_ncursfx_cpp_CMouse_dtor_FUN_00531280,
    .object_instance = (void *)&g_CMouseInstance
};
WatcomDestructorCall DAT_00604780 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_path_cpp_CPathMap_arrdtor12_FUN_00535920,
    .object_instance = (void *)&g_PathMapCache
};
WatcomDestructorCall g_CDemonPodDestructorNode = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_podmain_cpp_CDemonPod_dtor_FUN_0053d730,
    .object_instance = (void *)&g_CDemonPodInstance
};
WatcomDestructorCall DAT_00604DD0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CPickList_dtor_FUN_0049a710,
    .object_instance = (void *)&g_ScriptPickList
};
WatcomDestructorCall DAT_00604DDC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_script_cpp_CScript_dtor_FUN_00543710,
    .object_instance = (void *)&g_CScriptInstance
};
WatcomDestructorCall DAT_00604FD0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_set_cpp_CDemonSet_dtor_FUN_0054d340,
    .object_instance = (void *)&g_CDemonSetInstance
};
WatcomDestructorCall DAT_00604FDC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00,
    .object_instance = (void *)&g_CDemonCameraInstance
};
WatcomDestructorCall DAT_00604FE8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dtrace_cpp_CDemonRaytrace_dtor_FUN_0048a930,
    .object_instance = (void *)&g_CDemonRaytraceInstance
};
WatcomDestructorCall DAT_00604FF4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00466880,
    .object_instance = (void *)&g_CKeyFramedModelInstance
};
WatcomDestructorCall DAT_00605870 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_skeleton_cpp_CDeformableModel_arrdtor64_FUN_0056b9d0,
    .object_instance = (void *)&g_DeformableModelPool
};
WatcomDestructorCall DAT_0060587C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_skeleton_cpp_CSkeleton_arrdtor40_FUN_0056b9b0,
    .object_instance = (void *)&g_SkeletonPool
};
WatcomDestructorCall DAT_00605AD0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_sndmain_cpp_CSfxSample_arrdtor64_FUN_005774d0,
    .object_instance = (void *)&g_SfxSamples
};
WatcomDestructorCall DAT_00605ADC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_0052ae80,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomDestructorCall DAT_00605AE8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_0052ae80,
    .object_instance = (void *)&g_CMP3DecoderInstanceOther
};
WatcomDestructorCall DAT_00605C70 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CStrList_dtor_FUN_004993a0,
    .object_instance = (void *)&g_CStrListInstance
};
WatcomDestructorCall DAT_00606C50 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_texlist_cpp_CTextureList_dtor_FUN_005960c0,
    .object_instance = (void *)&g_CTextureListInstance
};
WatcomDestructorCall DAT_00607340 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)support_trstream_cpp_COutStreamDebug_dtor_FUN_005a1e30,
    .object_instance = (void *)&g_COutStreamDebugInstance
};
WatcomDestructorCall DAT_00607BA0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_water_cpp_CWater_dtor_FUN_005a9a00,
    .object_instance = (void *)&g_CWaterInstance
};

// WatcomTypeInfo
WatcomTypeInfo g_CSmokeParticleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CSmokeParticle_ctor_FUN_004b7840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CSmokeParticle_dtor_FUN_004b7850,
    .instance_size = (int)sizeof(CSmokeParticle),
    .class_name = (char *)s_CSmokeParticle_0061cd94
};
WatcomTypeInfo g_CBulletHoleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CBulletHole_ctor_FUN_004b7820,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CBulletHole_dtor_FUN_004b7830,
    .instance_size = (int)sizeof(CBulletHole),
    .class_name = (char *)s_CBulletHole_0061cd74
};
WatcomTypeInfo g_CStakeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CStake_ctor_FUN_004b77e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CStake_dtor_FUN_004b7800,
    .instance_size = (int)sizeof(CStake),
    .class_name = (char *)s_CStake_0061cd64
};
WatcomTypeInfo g_CSparkTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CSpark_ctor_FUN_004b77b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CSpark_dtor_FUN_004b77d0,
    .instance_size = (int)sizeof(CSpark),
    .class_name = (char *)s_CSpark_0061cd54
};
WatcomTypeInfo g_CFireflyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CFirefly_ctor_FUN_004b7780,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CFirefly_dtor_FUN_004b77a0,
    .instance_size = (int)sizeof(CFirefly),
    .class_name = (char *)s_CFirefly_0061cd44
};
WatcomTypeInfo g_CMuzzleFlashTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CMuzzleFlash_ctor_FUN_004b76d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CMuzzleFlash_dtor_FUN_004b76e0,
    .instance_size = (int)sizeof(CMuzzleFlash),
    .class_name = (char *)s_CMuzzleFlash_0061cd24
};
WatcomTypeInfo g_CGlassParticleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CGlassParticle_ctor_FUN_004b7690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CGlassParticle_dtor_FUN_004b76c0,
    .instance_size = (int)sizeof(CGlassParticle),
    .class_name = (char *)s_CGlassParticle_0061cd04
};
WatcomTypeInfo g_CBulletTrailTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CBulletTrail_ctor_FUN_004b7670,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CBulletTrail_dtor_FUN_004b7680,
    .instance_size = (int)sizeof(CBulletTrail),
    .class_name = (char *)s_CBulletTrail_0061cce4
};
WatcomTypeInfo g_CFireballTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CFireball_ctor_FUN_004b7750,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CFireball_dtor_FUN_004b7770,
    .instance_size = (int)sizeof(CFireball),
    .class_name = (char *)s_CFireball_0061ccc4
};
WatcomTypeInfo g_CRockTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CRock_ctor_FUN_004b7720,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CRock_dtor_FUN_004b7740,
    .instance_size = (int)sizeof(CRock),
    .class_name = (char *)s_CRock_0061ccb4
};
WatcomTypeInfo g_CLeafTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLeaf_ctor_FUN_004b76f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLeaf_dtor_FUN_004b7710,
    .instance_size = (int)sizeof(CLeaf),
    .class_name = (char *)s_CLeaf_0061cca4
};
WatcomTypeInfo g_CLaserBeamTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLaserBeam_ctor_FUN_004b7650,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLaserBeam_dtor_FUN_004b7660,
    .instance_size = (int)sizeof(CLaserBeam),
    .class_name = (char *)s_CLaserBeam_0061cc84
};
WatcomTypeInfo g_CExplosionTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CExplosion_ctor_FUN_004b1620,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CExplosion_dtor_FUN_004b7640,
    .instance_size = (int)sizeof(CExplosion),
    .class_name = (char *)s_CExplosion_0061cc64
};
WatcomTypeInfo g_CTossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CToss_ctor_FUN_004b1c10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CToss_dtor_FUN_004b7620,
    .instance_size = (int)sizeof(CToss),
    .class_name = (char *)s_CToss_0061cc54
};
WatcomTypeInfo g_CCraterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CCrater_ctor_FUN_004b75f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CCrater_dtor_FUN_004b7610,
    .instance_size = (int)sizeof(CCrater),
    .class_name = (char *)s_CCrater_0061cc44
};
WatcomTypeInfo g_CGunFlameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CGunFlame_ctor_FUN_004b75d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CGunFlame_dtor_FUN_004b75e0,
    .instance_size = (int)sizeof(CGunFlame),
    .class_name = (char *)s_CGunFlame_0061cc24
};
WatcomTypeInfo g_CLightningBoltTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLightningBolt_ctor_FUN_004b75b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLightningBolt_dtor_FUN_004b75c0,
    .instance_size = (int)sizeof(CLightningBolt),
    .class_name = (char *)s_CLightningBolt_0061cc04
};
WatcomTypeInfo g_CTrailTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CTrail_ctor_FUN_004b7590,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CTrail_dtor_FUN_004b75a0,
    .instance_size = (int)sizeof(CTrail),
    .class_name = (char *)s_CTrail_0061cbf4
};
WatcomTypeInfo g_CShellTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CShell_ctor_FUN_004b7560,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CShell_dtor_FUN_004b7580,
    .instance_size = (int)sizeof(CShell),
    .class_name = (char *)s_CShell_0061cbe4
};
WatcomTypeInfo g_CPopcornTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CPopcorn_ctor_FUN_004b7530,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CPopcorn_dtor_FUN_004b7550,
    .instance_size = (int)sizeof(CPopcorn),
    .class_name = (char *)s_CPopcorn_0061cbd4
};
WatcomTypeInfo g_CRainDropTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CRainDrop_ctor_FUN_004b7500,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CRainDrop_dtor_FUN_004b7520,
    .instance_size = (int)sizeof(CRainDrop),
    .class_name = (char *)s_CRainDrop_0061cbb4
};
WatcomTypeInfo g_CFlameCanTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flamecan_cpp_CFlameCan_ctor_FUN_004b8f70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flamecan_cpp_CFlameCan_dtor_FUN_004b94f0,
    .instance_size = (int)sizeof(CFlameCan),
    .class_name = (char *)s_CFlameCan_0061d18c
};
WatcomTypeInfo g_CFlameThrowerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flamegun_cpp_CFlameThrower_ctor_FUN_004b95c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flamegun_cpp_CFlameThrower_dtor_FUN_004b9860,
    .instance_size = (int)sizeof(CFlameThrower),
    .class_name = (char *)s_CFlameThrower_0061d1a4
};
WatcomTypeInfo g_CDeformableModelInstanceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0,
    .instance_size = (int)sizeof(CDeformableModelInstance),
    .class_name = (char *)s_CDeformableModelInstance_0061d1d4
};
WatcomTypeInfo g_CFlashlightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flashlit_cpp_CFlashlight_ctor_FUN_004b9910,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flashlit_cpp_CFlashlight_dtor_FUN_004b9a60,
    .instance_size = (int)sizeof(CFlashlight),
    .class_name = (char *)s_CFlashlight_0061d1c0
};
WatcomTypeInfo g_NotesSectionTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_NotesSection_ctor_FUN_004bbf10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_NotesSection_dtor_FUN_004bbf40,
    .instance_size = 0x000002E4 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_NotesSection_0061d814
};
WatcomTypeInfo g_NotesMapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_NotesMap_ctor_FUN_004bc1b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_NotesMap_dtor_FUN_004bc210,
    .instance_size = 0x00000970 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_NotesMap_0061d804
};
WatcomTypeInfo g_TextViewTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_TextView_ctor_FUN_004bb190,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_TextView_dtor_FUN_004bb1a0,
    .instance_size = 0x00000248 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_TextView_0061d7f4
};
WatcomTypeInfo g_PageResource_TextTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_Text_dtor_FUN_004ba8d0,
    .instance_size = 0x00000120 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_Text_0061d7d4
};
WatcomTypeInfo g_PageResource_BitmapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004baa10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_Bitmap_dtor_FUN_004baad0,
    .instance_size = 0x0000002C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_Bitmap_0061d7b4
};
WatcomTypeInfo g_PageResource_TwanaCharacterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_TwanaCharacter_dtor_FUN_004babf0,
    .instance_size = 0x0000004C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_TwanaCharac_0061d784
};
WatcomTypeInfo g_PageResource_TwanaEntryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_TwanaEntry_ctor_FUN_004bac90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_PageResource_TwanaEntry_dtor_FUN_004bad40,
    .instance_size = 0x00000118 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_TwanaEntry_0061d764
};
WatcomTypeInfo g_CFieldNotesTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fldnotes_cpp_CFieldNotes_ctor_FUN_004bcb60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fldnotes_cpp_CFieldNotes_dtor_FUN_004bcb70,
    .instance_size = (int)sizeof(CFieldNotes),
    .class_name = (char *)s_CFieldNotes_0061d744
};
WatcomTypeInfo g_PageResource_MapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_fldnotes_cpp_PageResource_Map_dtor_FUN_004bf670,
    .instance_size = 0x0000001C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_PageResource_Map_0061d724
};
WatcomTypeInfo g_SFlyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flies_cpp_SFly_ctor_FUN_004c0a10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SFly),
    .class_name = (char *)s_SFly_CFlies_0061d854
};
WatcomTypeInfo g_CFliesTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flies_cpp_CFlies_ctor_FUN_004bfa60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flies_cpp_CFlies_dtor_FUN_004c09c0,
    .instance_size = (int)sizeof(CFlies),
    .class_name = (char *)s_CFlies_0061d844
};
WatcomTypeInfo g_CFrankenstienMachineTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004c5150,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004c6000,
    .instance_size = (int)sizeof(CFrankenstienMachine),
    .class_name = (char *)s_CFrankenstienMachine_0061d86c
};
WatcomTypeInfo g_CGabriellaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gabriela_cpp_CGabriella_ctor_FUN_004c6270,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gabriela_cpp_CGabriella_dtor_FUN_004cb760,
    .instance_size = (int)sizeof(CGabriella),
    .class_name = (char *)s_CGabriella_0061d88c
};
WatcomTypeInfo g_CGameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_game_cpp_CGame_ctor_FUN_004cbc80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_game_cpp_CGame_dtor_FUN_004cbf00,
    .instance_size = (int)sizeof(CGame),
    .class_name = (char *)s_CGame_0061dbf4
};
WatcomTypeInfo g_CIniFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ini_cpp_CIniFile_dtor_FUN_004f4b30,
    .instance_size = (int)sizeof(CIniFile),
    .class_name = (char *)s_CIniFile_0061dbe4
};
WatcomTypeInfo g_CGargoyleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gargoyle_cpp_CGargoyle_ctor_FUN_004dc270,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gargoyle_cpp_CGargoyle_dtor_FUN_004dd9d0,
    .instance_size = (int)sizeof(CGargoyle),
    .class_name = (char *)s_CGargoyle_0061dc08
};
WatcomTypeInfo g_CGasMaskTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gasmask_cpp_CGasMask_ctor_FUN_004ddac0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gasmask_cpp_CGasMask_dtor_FUN_004ddc80,
    .instance_size = (int)sizeof(CGasMask),
    .class_name = (char *)s_CGasMask_0061dc20
};
WatcomTypeInfo g_CGhoulTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ghoul_cpp_CGhoul_ctor_FUN_004ddd60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ghoul_cpp_CGhoul_dtor_FUN_004e0f20,
    .instance_size = (int)sizeof(CGhoul),
    .class_name = (char *)s_CGhoul_0061dc38
};
WatcomTypeInfo g_CGlassTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_glass_cpp_CGlass_ctor_FUN_004e1010,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_glass_cpp_CGlass_dtor_FUN_004e3a60,
    .instance_size = (int)sizeof(CGlass),
    .class_name = (char *)s_CGlass_0061dc64
};
WatcomTypeInfo g_CGogglesTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_goggles_cpp_CGoggles_ctor_FUN_004e3b30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_goggles_cpp_CGoggles_dtor_FUN_004e3cf0,
    .instance_size = (int)sizeof(CGoggles),
    .class_name = (char *)s_CGoggles_0061dc78
};
WatcomTypeInfo g_CGoreTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CGore_ctor_FUN_004e5bd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CGore_dtor_FUN_004e5bf0,
    .instance_size = (int)sizeof(CGore),
    .class_name = (char *)s_CGore_0061ee9c
};
WatcomTypeInfo g_CBloodParticleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CBloodParticle_ctor_FUN_004e6880,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CBloodParticle_dtor_FUN_004e68a0,
    .instance_size = (int)sizeof(CBloodParticle),
    .class_name = (char *)s_CBloodParticle_0061ee84
};
WatcomTypeInfo g_CBloodSplatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CBloodSplat_ctor_FUN_004e6860,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CBloodSplat_dtor_FUN_004e6870,
    .instance_size = (int)sizeof(CBloodSplat),
    .class_name = (char *)s_CBloodSplat_0061ee70
};
WatcomTypeInfo g_CBloodPoolTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CBloodPool_ctor_FUN_004e6840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CBloodPool_dtor_FUN_004e6850,
    .instance_size = (int)sizeof(CBloodPool),
    .class_name = (char *)s_CBloodPool_0061ee5c
};
WatcomTypeInfo g_CFootstepTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CFootstep_ctor_FUN_004e6810,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CFootstep_dtor_FUN_004e6830,
    .instance_size = (int)sizeof(CFootstep),
    .class_name = (char *)s_CFootstep_0061ee48
};
WatcomTypeInfo g_CGraveTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_grave_cpp_CGrave_ctor_FUN_004e6930,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_grave_cpp_CGrave_dtor_FUN_004e6e70,
    .instance_size = (int)sizeof(CGrave),
    .class_name = (char *)s_CGrave_0061eeb0
};
WatcomTypeInfo g_CGroundTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ground_cpp_CGround_dtor_FUN_004e7220,
    .instance_size = (int)sizeof(CGround),
    .class_name = (char *)s_CGround_0061eed4
};
WatcomTypeInfo g_CGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gun_cpp_CGun_ctor_FUN_004e85d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gun_cpp_CGun_dtor_FUN_004e8f70,
    .instance_size = (int)sizeof(CGun),
    .class_name = (char *)s_CGun_0061eee8
};
WatcomTypeInfo g_CHaystackTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_haystack_cpp_CHaystack_ctor_FUN_004e9020,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_haystack_cpp_CHaystack_dtor_FUN_004ea280,
    .instance_size = (int)sizeof(CHaystack),
    .class_name = (char *)s_CHaystack_0061eef8
};
WatcomTypeInfo g_CHealthItemTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_health_cpp_CHealthItem_ctor_FUN_004ea330,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_health_cpp_CHealthItem_dtor_FUN_004ea5a0,
    .instance_size = (int)sizeof(CHealthItem),
    .class_name = (char *)s_CHealthItem_0061ef10
};
WatcomTypeInfo g_CHeroPlaceholderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hero_cpp_CHeroPlaceholder_ctor_FUN_004ecba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hero_cpp_CHeroPlaceholder_dtor_FUN_004ecc00,
    .instance_size = (int)sizeof(CHeroPlaceholder),
    .class_name = (char *)s_CHeroPlaceholder_0061ef58
};
WatcomTypeInfo g_CHiramTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hiram_cpp_CHiram_ctor_FUN_004ed190,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hiram_cpp_CHiram_dtor_FUN_004ed1f0,
    .instance_size = (int)sizeof(CHiram),
    .class_name = (char *)s_CHiram_0061ef80
};
WatcomTypeInfo g_CNPCTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_npc_cpp_CNPC_ctor_FUN_00531670,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hiram_cpp_CNPC_dtor_FUN_004ed400,
    .instance_size = (int)sizeof(CNPC),
    .class_name = (char *)s_CNPC_0061ef74
};
WatcomTypeInfo g_CHostageTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hostage_cpp_CHostage_ctor_FUN_004ed500,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hostage_cpp_CHostage_dtor_FUN_004ef910,
    .instance_size = (int)sizeof(CHostage),
    .class_name = (char *)s_CHostage_0061ef94
};
WatcomTypeInfo g_CHotDemonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hotdemon_cpp_CHotDemon_ctor_FUN_004efa10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hotdemon_cpp_CHotDemon_dtor_FUN_004f08a0,
    .instance_size = (int)sizeof(CHotDemon),
    .class_name = (char *)s_CHotDemon_0061efa8
};
WatcomTypeInfo g_CHighPriestOfGardathTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f0990,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004f0a90,
    .instance_size = (int)sizeof(CHighPriestOfGardath),
    .class_name = (char *)s_CHighPriestOfGardath_0061efc0
};
WatcomTypeInfo g_CIcePickTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_icepick_cpp_CIcePick_ctor_FUN_004f0b90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_icepick_cpp_CIcePick_dtor_FUN_004f2740,
    .instance_size = (int)sizeof(CIcePick),
    .class_name = (char *)s_CIcePick_0061efe0
};
WatcomTypeInfo g_CImpTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_imp_cpp_CImp_ctor_FUN_004f27f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_imp_cpp_CImp_dtor_FUN_004f42d0,
    .instance_size = (int)sizeof(CImp),
    .class_name = (char *)s_CImp_0061eff4
};
WatcomTypeInfo g_CIniTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_ini_cpp_CIni_ctor_FUN_004f4f30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ini_cpp_CIni_dtor_FUN_004f4f40,
    .instance_size = (int)sizeof(CIni),
    .class_name = (char *)s_cIni_0061f000
};
WatcomTypeInfo g_CKeyActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_keyactor_cpp_CKeyActor_ctor_FUN_004fc510,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_keyactor_cpp_CKeyActor_dtor_FUN_004fc7b0,
    .instance_size = (int)sizeof(CKeyActor),
    .class_name = (char *)s_CKeyActor_0061f294
};
WatcomTypeInfo g_CLadderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ladder_cpp_CLadder_ctor_FUN_004fd330,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ladder_cpp_CLadder_dtor_FUN_004fd8a0,
    .instance_size = (int)sizeof(CLadder),
    .class_name = (char *)s_CLadder_0061f2b0
};
WatcomTypeInfo g_CLarvaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_larva_cpp_CLarva_ctor_FUN_004fd950,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_larva_cpp_CLarva_dtor_FUN_004fe770,
    .instance_size = (int)sizeof(CLarva),
    .class_name = (char *)s_CLarva_0061f2c4
};
WatcomTypeInfo g_CLeverTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lever_cpp_CLever_ctor_FUN_004ff040,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lever_cpp_CLever_dtor_FUN_004ff9f0,
    .instance_size = (int)sizeof(CLever),
    .class_name = (char *)s_CLever_0061f304
};
WatcomTypeInfo g_CLightGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lightgun_cpp_CLightGun_ctor_FUN_004ffeb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lightgun_cpp_CLightGun_dtor_FUN_00501560,
    .instance_size = (int)sizeof(CLightGun),
    .class_name = (char *)s_CLightGun_0061f328
};
WatcomTypeInfo g_CLightPisTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lightpis_cpp_CLightPis_ctor_FUN_00501610,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lightpis_cpp_CLightPis_dtor_FUN_00502cc0,
    .instance_size = (int)sizeof(CLightPis),
    .class_name = (char *)s_CLightPis_0061f340
};
WatcomTypeInfo g_CLightConeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_litecone_cpp_CLightCone_ctor_FUN_00502d70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_litecone_cpp_CLightCone_dtor_FUN_00503020,
    .instance_size = (int)sizeof(CLightCone),
    .class_name = (char *)s_CLightCone_0061f358
};
WatcomTypeInfo g_SPanelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SPanel_ctor_FUN_005067e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SPanel),
    .class_name = (char *)s_SPanel_0061f404
};
WatcomTypeInfo g_SGemTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SGem_ctor_FUN_005067c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SGem),
    .class_name = (char *)s_SGem_0061f3f8
};
WatcomTypeInfo g_SReflectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SReflector_ctor_FUN_005067b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SReflector),
    .class_name = (char *)s_SReflector_0061f3e4
};
WatcomTypeInfo g_CMirrorHackTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_CMirrorHack_ctor_FUN_00506450,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_CMirrorHack_dtor_FUN_00506710,
    .instance_size = (int)sizeof(CMirrorHack),
    .class_name = (char *)s_CMirrorHack_0061f3d0
};
WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00503b40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_00506760,
    .instance_size = (int)sizeof(CMansionPuzzleCircle),
    .class_name = (char *)s_CMansionPuzzleCircle_0061f3b4
};
WatcomTypeInfo g_CMarqueeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_marquee_cpp_CMarquee_ctor_FUN_00506920,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_marquee_cpp_CMarquee_dtor_FUN_00507250,
    .instance_size = (int)sizeof(CMarquee),
    .class_name = (char *)s_CMarquee_0061f430
};
WatcomTypeInfo g_CMeleeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_melee_cpp_CMelee_ctor_FUN_00509550,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_melee_cpp_CMelee_dtor_FUN_00509a90,
    .instance_size = (int)sizeof(CMelee),
    .class_name = (char *)s_CMelee_0061f444
};
WatcomTypeInfo g_CMoonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moon_cpp_CMoon_ctor_FUN_00521bc0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moon_cpp_CMoon_dtor_FUN_00521c00,
    .instance_size = (int)sizeof(CMoon),
    .class_name = (char *)s_CMoon_0061f594
};
WatcomTypeInfo g_CMimicTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mimic_cpp_CMimic_ctor_FUN_0050f0c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mimic_cpp_CMimic_dtor_FUN_0050f1b0,
    .instance_size = (int)sizeof(CMimic),
    .class_name = (char *)s_CMimic_0061f5a8
};
WatcomTypeInfo g_CMineCarTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_minecar_cpp_CMineCar_ctor_FUN_00510e90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_minecar_cpp_CMineCar_dtor_FUN_00510eb0,
    .instance_size = (int)sizeof(CMineCar),
    .class_name = (char *)s_CMineCar_0061f5bc
};
WatcomTypeInfo g_CMini3DTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_minecar_cpp_CMini3D_ctor_FUN_00510f60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_minecar_cpp_CMini3D_dtor_FUN_00511020,
    .instance_size = (int)sizeof(CMini3D),
    .class_name = (char *)s_CMini3D_0061f630
};
WatcomTypeInfo g_SDynamicLightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_mini3d_cpp_SDynamicLight_ctor_FUN_00518360,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_mini3d_cpp_SDynamicLight_dtor_FUN_00518370,
    .instance_size = (int)sizeof(SDynamicLight),
    .class_name = (char *)s_SDynamicLight_0061f618
};
WatcomTypeInfo g_SClipPlaneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mirror_cpp_SClipPlane_ctor_FUN_0051a290,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SClipPlane),
    .class_name = (char *)s_SClipPlane_0061f63f
};
WatcomTypeInfo g_CMobsterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mobster_cpp_CMobster_ctor_FUN_0051c7d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mobster_cpp_CMobster_dtor_FUN_0051f4b0,
    .instance_size = (int)sizeof(CMobster),
    .class_name = (char *)s_CMobster_0061f7cc
};
WatcomTypeInfo g_CMolochTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moloch_cpp_CMoloch_ctor_FUN_005202f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moloch_cpp_CMoloch_dtor_FUN_005203b0,
    .instance_size = (int)sizeof(CMoloch),
    .class_name = (char *)s_CMoloch_0061f7e0
};
WatcomTypeInfo g_CMooCowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moocow_cpp_CMooCow_ctor_FUN_00521300,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moocow_cpp_CMooCow_dtor_FUN_00521ad0,
    .instance_size = (int)sizeof(CMooCow),
    .class_name = (char *)s_CMooCow_0061f7f4
};
WatcomTypeInfo g_CMorphModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_morph_cpp_CMorphModel_ctor_FUN_00522120,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_morph_cpp_CMorphModel_dtor_FUN_00522150,
    .instance_size = (int)sizeof(CMorphModel),
    .class_name = (char *)s_CMorphModel_0061f8d2
};
WatcomTypeInfo g_CBoundingBox3DTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_box_cpp_CBoundingBox3D_ctor_FUN_00523860,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_box_cpp_CBoundingBox3D_dtor_FUN_00523870,
    .instance_size = (int)sizeof(CBoundingBox3D),
    .class_name = (char *)s_CBoundingBox3D_0061f8bc
};
WatcomTypeInfo g_CMotionControllerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_motion_cpp_CMotionController_ctor_FUN_005241d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_motion_cpp_CMotionController_dtor_FUN_00524200,
    .instance_size = (int)sizeof(CMotionController),
    .class_name = (char *)s_CMotionController_0061f8e5
};
WatcomTypeInfo g_CNetGameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_CNetGame_ctor_FUN_0052c470,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_netgame_cpp_CNetGame_dtor_FUN_0052c500,
    .instance_size = (int)sizeof(CNetGame),
    .class_name = (char *)s_CNetGame_006225dc
};
WatcomTypeInfo g_SChatHistoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SChatHistory_ctor_FUN_00530a60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_netgame_cpp_SChatHistory_dtor_FUN_00530a70,
    .instance_size = (int)sizeof(SChatHistory),
    .class_name = (char *)s_SChatHistory_006225c8
};
WatcomTypeInfo g_SPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SPlayer_ctor_FUN_00530a50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SPlayer),
    .class_name = (char *)s_GSPlayer_PGameSettingsCh_006225a0
};
WatcomTypeInfo g_SNetPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SNetPlayer_ctor_FUN_00530a80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_netgame_cpp_SNetPlayer_copy_FUN_00530a90,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SNetPlayer),
    .class_name = (char *)s_SNetPlayer_0062258c
};
WatcomTypeInfo g_CMouseTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_ncursfx_cpp_CMouse_ctor_FUN_00531220,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ncursfx_cpp_CMouse_dtor_FUN_00531280,
    .instance_size = (int)sizeof(CMouse),
    .class_name = (char *)s_CMouse_00622708
};
WatcomTypeInfo g_CPassengerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_passngr_cpp_CPassenger_ctor_FUN_00532770,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_passngr_cpp_CPassenger_dtor_FUN_00532850,
    .instance_size = (int)sizeof(CPassenger),
    .class_name = (char *)s_CPassenger_00622720
};
WatcomTypeInfo g_CPathMapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_path_cpp_CPathMap_ctor_FUN_00532fe0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_path_cpp_CPathMap_dtor_FUN_00533060,
    .instance_size = (int)sizeof(CPathMap),
    .class_name = (char *)s_CPathMap_006227f8
};
WatcomTypeInfo g_CPendulumTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_pendulum_cpp_CPendulum_ctor_FUN_00536020,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_pendulum_cpp_CPendulum_dtor_FUN_00537440,
    .instance_size = (int)sizeof(CPendulum),
    .class_name = (char *)s_CPendulum_0062280c
};
WatcomTypeInfo g_CPackedBitmapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_00537490,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_00537500,
    .instance_size = (int)sizeof(CPackedBitmap),
    .class_name = (char *)s_CPackedBitmap_00622828
};
WatcomTypeInfo g_CPodTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_pod_cpp_CPod_ctor_FUN_0053c5c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_pod_cpp_CPod_dtor_FUN_0053c5f0,
    .instance_size = (int)sizeof(CPod),
    .class_name = (char *)s_CPod_00622a54
};
WatcomTypeInfo g_CPodFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_pod_cpp_CPodFile_dtor_FUN_0053b210,
    .instance_size = (int)sizeof(CPodFile),
    .class_name = (char *)s_CPodFile_00622a44
};
WatcomTypeInfo g_CDemonPodTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_podmain_cpp_CDemonPod_ctor_FUN_0053d710,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_podmain_cpp_CDemonPod_dtor_FUN_0053d730,
    .instance_size = (int)sizeof(CDemonPod),
    .class_name = (char *)s_CDemonPod_00622a74
};
WatcomTypeInfo g_CRifleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_rifle_cpp_CRifle_ctor_FUN_0053ff20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_rifle_cpp_CRifle_dtor_FUN_005409c0,
    .instance_size = (int)sizeof(CRifle),
    .class_name = (char *)s_CRifle_00622a90
};
WatcomTypeInfo g_CScatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_scat_cpp_CScat_ctor_FUN_00540ad0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_scat_cpp_CScat_dtor_FUN_00543070,
    .instance_size = (int)sizeof(CScat),
    .class_name = (char *)s_CScat_00622aa4
};
WatcomTypeInfo g_CScriptTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_script_cpp_CScript_ctor_FUN_005436d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_script_cpp_CScript_dtor_FUN_00543710,
    .instance_size = (int)sizeof(CScript),
    .class_name = (char *)s_CScript_00622bb4
};
WatcomTypeInfo g_CSentinelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_sentinel_cpp_CSentinel_ctor_FUN_0054ba10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_sentinel_cpp_CSentinel_dtor_FUN_0054ce30,
    .instance_size = (int)sizeof(CSentinel),
    .class_name = (char *)s_CSentinel_00622bc8
};
WatcomTypeInfo g_CDemonSetTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_CDemonSet_ctor_FUN_0054d000,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_CDemonSet_dtor_FUN_0054d340,
    .instance_size = (int)sizeof(CDemonSet),
    .class_name = (char *)s_CDemonSet_00622fb8
};
WatcomTypeInfo g_CDemonRaytraceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dtrace_cpp_CDemonRaytrace_ctor_FUN_0048a8f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dtrace_cpp_CDemonRaytrace_dtor_FUN_0048a930,
    .instance_size = (int)sizeof(CDemonRaytrace),
    .class_name = (char *)s_CDemonRaytrace_00622fa0
};
WatcomTypeInfo g_C3DSCameraTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setutil_cpp_C3DSCamera_ctor_FUN_0055c0b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setutil_cpp_C3DSCamera_dtor_FUN_0055c0e0,
    .instance_size = (int)sizeof(C3DSCamera),
    .class_name = (char *)s_C3DSCamera_00622f8c
};
WatcomTypeInfo g_C3DSLightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setutil_cpp_C3DSLight_ctor_FUN_0055c7e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(C3DSLight),
    .class_name = (char *)s_C3DSLight_00622f78
};
WatcomTypeInfo g_SRoomTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_SRoom_ctor_FUN_00556130,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SRoom),
    .class_name = (char *)s_SRoom_CDemonSet_00622f60
};
WatcomTypeInfo g_SVDBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_SVDBox_ctor_FUN_00556140,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SVDBox),
    .class_name = (char *)s_SVDBox_00622f50
};
WatcomTypeInfo g_SRaytraceStateTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SRaytraceState_ctor_FUN_005596f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setcolid_cpp_SRaytraceState_dtor_FUN_00559700,
    .instance_size = (int)sizeof(SRaytraceState),
    .class_name = (char *)s_SRaytraceState_00622fc9
};
WatcomTypeInfo g_CShadowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shadow_cpp_CShadow_ctor_FUN_0055dad0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shadow_cpp_CShadow_dtor_FUN_005603b0,
    .instance_size = (int)sizeof(CShadow),
    .class_name = (char *)s_CShadow_006231c4
};
WatcomTypeInfo g_CShadowscTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shadowsc_cpp_CShadowsc_ctor_FUN_005604a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shadowsc_cpp_CShadowsc_dtor_FUN_005614d0,
    .instance_size = (int)sizeof(CShadowsc),
    .class_name = (char *)s_CShadowsc_006231d8
};
WatcomTypeInfo g_CShotgunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shotgun_cpp_CShotgun_ctor_FUN_005615c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shotgun_cpp_CShotgun_dtor_FUN_00562360,
    .instance_size = (int)sizeof(CShotgun),
    .class_name = (char *)s_CShotgun_006231f0
};
WatcomTypeInfo g_CShovelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shovel_cpp_CShovel_ctor_FUN_00562410,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shovel_cpp_CShovel_dtor_FUN_005624f0,
    .instance_size = (int)sizeof(CShovel),
    .class_name = (char *)s_CShovel_00623204
};
WatcomTypeInfo g_CSimBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_simbox_cpp_CSimBox_ctor_FUN_005625a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_simbox_cpp_CSimBox_dtor_FUN_00562b00,
    .instance_size = (int)sizeof(CSimBox),
    .class_name = (char *)s_CSimBox_00623218
};
WatcomTypeInfo g_SVertTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_SVert_ctor_FUN_0056b990,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SVert),
    .class_name = (char *)s_SVert_CDeformableModel_00623279
};
WatcomTypeInfo g_CDeformableModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModel_ctor_FUN_00563690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModel_dtor_FUN_005637b0,
    .instance_size = (int)sizeof(CDeformableModel),
    .class_name = (char *)s_CDeformableModel_00623261
};
WatcomTypeInfo g_CSkeletonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CSkeleton_ctor_FUN_00562dd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CSkeleton_dtor_FUN_00562e30,
    .instance_size = (int)sizeof(CSkeleton),
    .class_name = (char *)s_CSkeleton_00623250
};
WatcomTypeInfo g_CSmileyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_smiley_cpp_CSmiley_ctor_FUN_0056be50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_smiley_cpp_CSmiley_dtor_FUN_0056d400,
    .instance_size = (int)sizeof(CSmiley),
    .class_name = (char *)s_CSmiley_006232a0
};
WatcomTypeInfo g_SfxSlotTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSlot_ctor_FUN_00577490,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSlot_dtor_FUN_005774b0,
    .instance_size = (int)sizeof(CSfxSlot),
    .class_name = (char *)s_SfxSlot_00623594
};
WatcomTypeInfo g_SfxOptionsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxOptions_ctor_FUN_00577460,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxOptions_dtor_FUN_005774c0,
    .instance_size = (int)sizeof(CSfxOptions),
    .class_name = (char *)s_SfxOptions_00623574
};
WatcomTypeInfo g_SfxSampleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSample_ctor_FUN_0056fe10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSample_dtor_FUN_0056fe80,
    .instance_size = (int)sizeof(CSfxSample),
    .class_name = (char *)s_SfxSample_00623554
};
WatcomTypeInfo g_CMP3DecoderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_0052ae80,
    .instance_size = (int)sizeof(CMP3Decoder),
    .class_name = (char *)s_CMP3Decoder_00623534
};
WatcomTypeInfo g_STrainNoiseTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_sound_cpp_STrainNoise_ctor_FUN_0057dc20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_sound_cpp_STrainNoise_dtor_FUN_0057dc30,
    .instance_size = (int)sizeof(STrainNoise),
    .class_name = (char *)s_STrainNoise_00623944
};
WatcomTypeInfo g_CSpikeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_spike_cpp_CSpike_ctor_FUN_00582f90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_spike_cpp_CSpike_dtor_FUN_00583d10,
    .instance_size = (int)sizeof(CSpike),
    .class_name = (char *)s_CSpike_006258ec
};
WatcomTypeInfo g_CStairsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stairs_cpp_CStairs_ctor_FUN_00584940,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stairs_cpp_CStairs_dtor_FUN_00584e00,
    .instance_size = (int)sizeof(CStairs),
    .class_name = (char *)s_CStairs_0062590c
};
WatcomTypeInfo g_CTempleStoneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stone_cpp_CTempleStone_ctor_FUN_00584eb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stone_cpp_CTempleStone_dtor_FUN_00584f70,
    .instance_size = (int)sizeof(CTempleStone),
    .class_name = (char *)s_CTempleStone_00625920
};
WatcomTypeInfo g_CStrangerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stranger_cpp_CStranger_ctor_FUN_00585270,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stranger_cpp_CStranger_dtor_FUN_00591e60,
    .instance_size = (int)sizeof(CStranger),
    .class_name = (char *)s_CStranger_00625938
};
WatcomTypeInfo g_CSuccubusTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_succubus_cpp_CSuccubus_ctor_FUN_00591f10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_succubus_cpp_CSuccubus_dtor_FUN_00592ce0,
    .instance_size = (int)sizeof(CSuccubus),
    .class_name = (char *)s_CSuccubus_00625950
};
WatcomTypeInfo g_CSvetlanaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_svetlana_cpp_CSvetlana_ctor_FUN_00592e00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_svetlana_cpp_CSvetlana_dtor_FUN_00594680,
    .instance_size = (int)sizeof(CSvetlana),
    .class_name = (char *)s_CSvetlana_00625980
};
WatcomTypeInfo g_CDrummerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tbplayer_cpp_CDrummer_ctor_FUN_00594a00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tbplayer_cpp_CDrummer_dtor_FUN_00594cb0,
    .instance_size = (int)sizeof(CDrummer),
    .class_name = (char *)s_CDrummer_006259b0
};
WatcomTypeInfo g_CBassPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tbplayer_cpp_CBassPlayer_ctor_FUN_00594780,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tbplayer_cpp_CBassPlayer_dtor_FUN_00594d50,
    .instance_size = (int)sizeof(CBassPlayer),
    .class_name = (char *)s_CBassPlayer_0062599c
};
WatcomTypeInfo g_CTeleportTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_teleport_cpp_CTeleport_ctor_FUN_00594f20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_teleport_cpp_CTeleport_dtor_FUN_00595100,
    .instance_size = (int)sizeof(CTeleport),
    .class_name = (char *)s_CTeleport_006259e0
};
WatcomTypeInfo g_CTeleportDestTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_teleport_cpp_CTeleportDest_ctor_FUN_00594e70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_teleport_cpp_CTeleportDest_dtor_FUN_00595150,
    .instance_size = (int)sizeof(CTeleportDest),
    .class_name = (char *)s_CTeleportDest_006259c8
};
WatcomTypeInfo g_CTentacleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tentacle_cpp_CTentacle_ctor_FUN_00595200,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tentacle_cpp_CTentacle_dtor_FUN_00596000,
    .instance_size = (int)sizeof(CTentacle),
    .class_name = (char *)s_CTentacle_006259f8
};
WatcomTypeInfo g_CTextureListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_texlist_cpp_CTextureList_ctor_FUN_005960b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_texlist_cpp_CTextureList_dtor_FUN_005960c0,
    .instance_size = (int)sizeof(CTextureList),
    .class_name = (char *)s_CTextureList_00625a20
};
WatcomTypeInfo g_CTommyGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tommygun_cpp_CTommyGun_ctor_FUN_00598380,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tommygun_cpp_CTommyGun_dtor_FUN_00598fc0,
    .instance_size = (int)sizeof(CTommyGun),
    .class_name = (char *)s_CTommyGun_00625a38
};
WatcomTypeInfo g_CTheHandTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_thehand_cpp_CTheHand_ctor_FUN_00599070,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_thehand_cpp_CTheHand_dtor_FUN_00599c20,
    .instance_size = (int)sizeof(CTheHand),
    .class_name = (char *)s_CTheHand_00625a50
};
WatcomTypeInfo g_CTrapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trap_cpp_CTrap_ctor_FUN_00599d10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trap_cpp_CTrap_dtor_FUN_0059a140,
    .instance_size = (int)sizeof(CTrap),
    .class_name = (char *)s_CTrap_00625a64
};
WatcomTypeInfo g_CTrashTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trash_cpp_CTrash_ctor_FUN_0059a1f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trash_cpp_CTrash_dtor_FUN_0059af00,
    .instance_size = (int)sizeof(CTrash),
    .class_name = (char *)s_CTrash_00625a78
};
WatcomTypeInfo g_CTriggerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trigger_cpp_CTrigger_ctor_FUN_0059afb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trigger_cpp_CTrigger_dtor_FUN_0059c420,
    .instance_size = (int)sizeof(CTrigger),
    .class_name = (char *)s_CTrigger_00625a8c
};
WatcomTypeInfo g_SocketTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trisock_cpp_CSocket_ctor_FUN_0059c8e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trisock_cpp_Socket_copy_FUN_0059c8b0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trisock_cpp_CSocket_dtor_FUN_0059c8f0,
    .instance_size = 0x00000004 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_Socket_00625bb4
};
WatcomTypeInfo g_IpAddrTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_trisock_cpp_IpAddr_ctor_FUN_0059f300,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_netgame_cpp_IpAddr_copy_FUN_00530bd0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = 0x00000004 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_IpAddr_00625ba4
};
WatcomTypeInfo g_COutStreamDebugTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamDebug_ctor_FUN_005a1e10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_COutStreamDebug_dtor_FUN_005a1e30,
    .instance_size = (int)sizeof(COutStreamDebug),
    .class_name = (char *)s_COutStreamDebug_00625bf0
};
WatcomTypeInfo g_CTurretTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_turret_cpp_CTurret_ctor_FUN_005a2040,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_turret_cpp_CTurret_dtor_FUN_005a3e60,
    .instance_size = (int)sizeof(CTurret),
    .class_name = (char *)s_CTurret_00625c0c
};
WatcomTypeInfo g_CTVBatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tvbat_cpp_CTVBat_ctor_FUN_005a3f40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tvbat_cpp_CTVBat_dtor_FUN_005a5080,
    .instance_size = (int)sizeof(CTVBat),
    .class_name = (char *)s_CTVBat_00625c20
};
WatcomTypeInfo g_CVampireBossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vampboss_cpp_CVampireBoss_ctor_FUN_005a5170,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vampboss_cpp_CVampireBoss_dtor_FUN_005a7420,
    .instance_size = (int)sizeof(CVampireBoss),
    .class_name = (char *)s_CVampireBoss_00625c34
};
WatcomTypeInfo g_CTireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vehicle_cpp_CTire_ctor_FUN_005a8a80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(CTire),
    .class_name = (char *)s_CTire_00625c5c
};
WatcomTypeInfo g_CVehicleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vehicle_cpp_CVehicle_ctor_FUN_005a7620,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vehicle_cpp_CVehicle_dtor_FUN_005a8a10,
    .instance_size = (int)sizeof(CVehicle),
    .class_name = (char *)s_CVehicle_00625c4c
};
WatcomTypeInfo g_CCryptVesselTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vessel_cpp_CCryptVessel_ctor_FUN_005a8b00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vessel_cpp_CCryptVessel_dtor_FUN_005a9900,
    .instance_size = (int)sizeof(CCryptVessel),
    .class_name = (char *)s_CCryptVessel_00625c70
};
WatcomTypeInfo g_CWaterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_water_cpp_CWater_ctor_FUN_005a99e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_water_cpp_CWater_dtor_FUN_005a9a00,
    .instance_size = (int)sizeof(CWater),
    .class_name = (char *)s_CWater_00625e68
};
WatcomTypeInfo g_SWaterVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_wateract_cpp_SWaterVertex_ctor_FUN_005ab840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SWaterVertex),
    .class_name = (char *)s_SWaterVertex_00626010
};
WatcomTypeInfo g_CWaterActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_wateract_cpp_CWaterActor_ctor_FUN_005aa5d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_wateract_cpp_CWaterActor_dtor_FUN_005ab7f0,
    .instance_size = (int)sizeof(CWaterActor),
    .class_name = (char *)s_CWaterActor_00625ffc
};
WatcomTypeInfo g_CWayPointTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_waypoint_cpp_CWayPoint_ctor_FUN_005ab9c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_waypoint_cpp_CWayPoint_dtor_FUN_005abd30,
    .instance_size = (int)sizeof(CWayPoint),
    .class_name = (char *)s_CWayPoint_00626028
};
WatcomTypeInfo g_CWeaponTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0,
    .instance_size = (int)sizeof(CWeapon),
    .class_name = (char *)s_CWeapon_00626040
};
WatcomTypeInfo g_CWerewolfTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_werewolf_cpp_CWerewolf_ctor_FUN_005af2d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_werewolf_cpp_CWerewolf_dtor_FUN_005b1a40,
    .instance_size = (int)sizeof(CWerewolf),
    .class_name = (char *)s_CWerewolf_006260b8
};
WatcomTypeInfo g_CWinFontTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_winfont_cpp_CWinFont_dtor_FUN_005b1b90,
    .instance_size = (int)sizeof(CWinFont),
    .class_name = (char *)s_CWinFont_006260c9
};
WatcomTypeInfo g_CYowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_xform_cpp_CYow_ctor_FUN_005b8160,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_xform_cpp_CYow_dtor_FUN_005b95a0,
    .instance_size = (int)sizeof(CYow),
    .class_name = (char *)s_CYow_006260f8
};
WatcomTypeInfo g_CZombieTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_zombie_cpp_CZombie_ctor_FUN_005bab10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_zombie_cpp_CZombie_dtor_FUN_005bedf0,
    .instance_size = (int)sizeof(CZombie),
    .class_name = (char *)s_CZombie_00626108
};

// undefined1*
undefined1* g_CShellVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CGlassParticleVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CLeafVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CRockVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CFireballVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CFireflyVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CSparkVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CGabriellaVTable = (undefined1*)core_gabriela_cpp_FUN_004c6390;
undefined1* g_CGargoyleVTable = (undefined1*)core_gargoyle_cpp_FUN_004dc370;
undefined1* g_CGhoulVTable = (undefined1*)core_ghoul_cpp_FUN_004dde90;
undefined1* g_CBloodParticleVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CHaystackVTable = (undefined1*)core_haystack_cpp_FUN_004e9090;
undefined1* g_CHiramVTable = (undefined1*)core_hiram_cpp_FUN_004ed290;
undefined1* g_CHostageVTable = (undefined1*)core_hostage_cpp_FUN_004ed630;
undefined1* g_CHotDemonVTable = (undefined1*)core_hotdemon_cpp_FUN_004efa70;
undefined1* g_CHighPriestOfGardathVTable = (undefined1*)core_npc_cpp_FUN_00531720;
undefined1* g_CIcePickVTable = (undefined1*)core_icepick_cpp_FUN_004f0c20;
undefined1* g_CImpVTable = (undefined1*)core_imp_cpp_FUN_004f2860;
undefined1* g_CLarvaVTable = (undefined1*)core_larva_cpp_FUN_004fd9e0;
undefined1* g_CMimicVTable = (undefined1*)core_mimic_cpp_FUN_0050f290;
undefined1* g_CMobsterVTable = (undefined1*)core_mobster_cpp_FUN_0051c910;
undefined1* g_CMolochVTable = (undefined1*)core_moloch_cpp_FUN_00520430;
undefined1* g_CMooCowVTable = (undefined1*)core_moocow_cpp_FUN_00521370;
undefined1* g_CNPCVTable = (undefined1*)core_npc_cpp_FUN_00531720;
undefined1* g_CPassengerVTable = (undefined1*)core_passngr_cpp_FUN_00532930;
undefined1* g_CDemonPodVTable = (undefined1*)core_podmain_cpp_CDemonPod_dtor_FUN_0053d730;
undefined1* g_CScatVTable = (undefined1*)core_scat_cpp_FUN_00540b90;
undefined1* g_CSentinelVTable = (undefined1*)core_sentinel_cpp_FUN_0054ba80;
undefined1* g_CShadowVTable = (undefined1*)core_shadow_cpp_FUN_0055dbf0;
undefined1* g_CShadowscVTable = (undefined1*)core_shadowsc_cpp_FUN_00560510;
undefined1* g_CSmileyVTable = (undefined1*)core_smiley_cpp_FUN_0056bef0;
undefined1* g_CStrangerVTable = (undefined1*)core_stranger_cpp_FUN_00585670;
undefined1* g_CSuccubusVTable = (undefined1*)core_succubus_cpp_FUN_00591ff0;
undefined1* g_CSvetlanaVTable = (undefined1*)core_svetlana_cpp_FUN_00592e90;
undefined1* g_CBassPlayerVTable = (undefined1*)core_tbplayer_cpp_FUN_005947b0;
undefined1* g_CDrummerVTable = (undefined1*)core_tbplayer_cpp_FUN_00594a30;
undefined1* g_CTentacleVTable = (undefined1*)core_tentacle_cpp_CTentacle_setup_FUN_00595260;
undefined1* g_CTheHandVTable = (undefined1*)core_thehand_cpp_FUN_005990d0;
undefined1* g_CInStreamFileVTable = (undefined1*)unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50;
undefined1* g_CInStreamMemoryVTable = (undefined1*)support_trstream_cpp_CInStreamMemory_dtor_FUN_005a11e0;
undefined1* g_COutStreamFileVTable = (undefined1*)support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860;
undefined1* g_COutStreamMemoryVTable = (undefined1*)support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60;
undefined1* g_COutStreamDebugVTable = (undefined1*)support_trstream_cpp_COutStreamDebug_dtor_FUN_005a1e30;
undefined1* g_CTVBatVTable = (undefined1*)core_tvbat_cpp_FUN_005a40a0;
undefined1* g_CVampireBossVTable = (undefined1*)core_vampboss_cpp_FUN_005a52a0;
undefined1* g_CWerewolfVTable = (undefined1*)core_werewolf_cpp_FUN_005af380;
undefined1* g_CYowVTable = (undefined1*)core_xform_cpp_FUN_005b81d0;
undefined1* g_CZombieVTable = (undefined1*)core_zombie_cpp_FUN_005bac80;

// undefined4
undefined4 DAT_00608560 = 0x00000000;

// void*
void* g_PageResource_BitmapVTable = (void*)core_fldnotes_cpp_PageResource_Bitmap_dtor_FUN_004baad0;
void* g_PageResource_TwanaEntryVTable = (void*)core_fldnotes_cpp_PageResource_TwanaEntry_dtor_FUN_004bad40;
void* g_CFliesVTable = (void*)core_flies_cpp_CFlies_setup_FUN_004bfb20;
void* g_CGasMaskVTable = (void*)core_gasmask_cpp_CGasMask_setup_FUN_004ddb10;
void* g_CGogglesVTable = (void*)core_goggles_cpp_FUN_004e3b80;
void* g_CHeroPlaceholderVTable = (void*)core_actor_cpp_FUN_00408850;
void* g_CDeformableModelInstanceVTable = (void*)core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0;
void* g_CTommyGunVTable = (void*)core_weapon_cpp_CWeapon_setup_FUN_005ad640;
void* g_CWeaponVTable = (void*)core_weapon_cpp_CWeapon_setup_FUN_005ad640;

