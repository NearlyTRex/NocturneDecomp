#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5A0000
// =============================================================================

// WatcomTypeInfo
WatcomTypeInfo g_SPanelTypeInfo_005a0210 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_FUN_004cbf10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_FUN_004cbf20,
    .instance_size = (int)sizeof(SPanel),
    .class_name = (char *)s_SPanel_005badac
};
WatcomTypeInfo g_SGemTypeInfo_005a0230 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SGem_ctor_FUN_004cbed0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_SGem_dtor_FUN_004cbef0,
    .instance_size = (int)sizeof(SGem),
    .class_name = (char *)s_SGem_005bada0
};
WatcomTypeInfo g_SReflectorTypeInfo_005a0250 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_FUN_004cbeb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_FUN_004cbec0,
    .instance_size = (int)sizeof(SReflector),
    .class_name = (char *)s_SReflector_005bad8c
};
WatcomTypeInfo g_CMirrorHackTypeInfo_005a0270 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_FUN_004cbb00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_FUN_004cbdd0,
    .instance_size = 0x000002D0 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMirrorHack_005bad78
};
WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo_005a0290 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_FUN_004c9430,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20,
    .instance_size = 0x0000150C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMansionPuzzleCircle_005bad5c
};
WatcomTypeInfo g_CMarqueeTypeInfo_005a03b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_marquee_cpp_FUN_004cc960,
    .instance_size = 0x000001B4 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMarquee_005badd8
};
WatcomTypeInfo g_CMeleeTypeInfo_005a04f0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_melee_cpp_CMelee_ctor_FUN_004cec60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_melee_cpp_FUN_004cf1a0,
    .instance_size = 0x000006C4 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMelee_005badec
};
WatcomTypeInfo g_CMoonTypeInfo_005a0580 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moon_cpp_CMoon_ctor_FUN_004de800,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moon_cpp_CMoon_dtor_FUN_004de830,
    .instance_size = 0x000003A0 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMoon_005baf3c
};
WatcomTypeInfo g_CMimicTypeInfo_005a0740 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mimic_cpp_CMimic_ctor_FUN_004d4450,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mimic_cpp_FUN_004d4540,
    .instance_size = 0x00047580 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMimic_005baf50
};
WatcomTypeInfo g_CMineCarTypeInfo_005a0860 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_minecar_cpp_FUN_004d60b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_minecar_cpp_FUN_004d60d0,
    .instance_size = 0x00000724 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMineCar_005baf64
};
WatcomTypeInfo g_SClipPlaneTypeInfo_005a08a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mirror_cpp_FUN_004d7d70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mirror_cpp_FUN_004d7d80,
    .instance_size = (int)sizeof(SClipPlane),
    .class_name = (char *)s_SClipPlane_005baf74
};
WatcomTypeInfo g_CDemonMissionTypeInfo_005a08e0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mission_cpp_FUN_004d9e50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mission_cpp_FUN_004d9e60,
    .instance_size = 0x0000279C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CDemonMission_005bb0e4
};
WatcomTypeInfo g_CMobsterTypeInfo_005a0a80 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mobster_cpp_CMobster_ctor_FUN_004da150,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mobster_cpp_CMobster_dtor_FUN_004dcac0,
    .instance_size = 0x0000BDFC /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMobster_005bb12c
};
WatcomTypeInfo g_CMolochTypeInfo_005a0c10 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moloch_cpp_CMoloch_ctor_FUN_004dd930,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0,
    .instance_size = 0x00022A00 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CMoloch_005bb14c
};
WatcomTypeInfo g_CCourseTypeInfo_005a0c80 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_course_cpp_CCourse_ctor_FUN_0043b5d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0,
    .instance_size = (int)sizeof(CCourse),
    .class_name = (char *)s_CCourse_005bb224
};
WatcomTypeInfo g_SBatTypeInfo_005a0ca0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moon_cpp_FUN_004df190,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moon_cpp_FUN_004df1a0,
    .instance_size = 0x00000018 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_SBat_005bb218
};
WatcomTypeInfo g_CMorphModelTypeInfo_005a0ce0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_morph_cpp_CMorphModel_ctor_FUN_004df240,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_morph_cpp_CMorphModel_dtor_FUN_004df270,
    .instance_size = (int)sizeof(CMorphModel),
    .class_name = (char *)s_CMorphModel_005bb233
};
WatcomTypeInfo g_CMotionControllerTypeInfo_005a0d30 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_motion_cpp_CMotionController_ctor_FUN_004e1120,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_motion_cpp_CMotionController_dtor_FUN_004e1150,
    .instance_size = (int)sizeof(CMotionController),
    .class_name = (char *)s_CMotionController_005bb246
};
WatcomTypeInfo g_CNetGameTypeInfo_005a0dc0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_CNetGame_ctor_FUN_004e9860,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_netgame_cpp_CNetGame_dtor_FUN_004e98f0,
    .instance_size = (int)sizeof(CNetGame),
    .class_name = (char *)s_CNetGame_005bdf3c
};
WatcomTypeInfo g_SChatHistoryTypeInfo_005a0de0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_FUN_004ede40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_netgame_cpp_FUN_004ede50,
    .instance_size = (int)sizeof(SChatHistory),
    .class_name = (char *)s_SChatHistory_005bdf28
};
WatcomTypeInfo g_SPlayerTypeInfo_005a0e00 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SPlayer_ctor_FUN_004ede30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .instance_size = (int)sizeof(SPlayer),
    .class_name = (char *)s_GSPlayer_PGameSettingsCh_005bdf00
};
WatcomTypeInfo g_SNetPlayerTypeInfo_005a0e20 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_FUN_004ede60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_netgame_cpp_FUN_004ede70,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .instance_size = (int)sizeof(SNetPlayer),
    .class_name = (char *)s_SNetPlayer_005bdeec
};
WatcomTypeInfo g_CMouseTypeInfo_005a0e70 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_ncursfx_cpp_CMouse_ctor_FUN_004ee500,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ncursfx_cpp_CMouse_dtor_FUN_004ee560,
    .instance_size = (int)sizeof(CMouse),
    .class_name = (char *)s_CMouse_005be068
};
WatcomTypeInfo g_CPassengerTypeInfo_005a11b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_passngr_cpp_FUN_004ef5c0,
    .instance_size = 0x000202B0 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CPassenger_005be080
};
WatcomTypeInfo g_CPathMapTypeInfo_005a1200 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_path_cpp_CPathMap_ctor_FUN_004efd50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_path_cpp_CPathMap_dtor_FUN_004efdd0,
    .instance_size = (int)sizeof(CPathMap),
    .class_name = (char *)s_CPathMap_005be158
};
WatcomTypeInfo g_CPendulumTypeInfo_005a1320 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_pendulum_cpp_CPendulum_ctor_FUN_004f2c30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_pendulum_cpp_FUN_004f3e40,
    .instance_size = 0x0000043C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CPendulum_005be16c
};
WatcomTypeInfo g_CPackedBitmapTypeInfo_005a1340 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_004f3e90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_004f3f00,
    .instance_size = (int)sizeof(CPackedBitmap),
    .class_name = (char *)s_CPackedBitmap_005be188
};
WatcomTypeInfo g_CPodTypeInfo_005a14a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_pod_cpp_CPod_ctor_FUN_004f8810,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_pod_cpp_CPod_dtor_FUN_004f8840,
    .instance_size = (int)sizeof(CPod),
    .class_name = (char *)s_CPod_005be1b4
};
WatcomTypeInfo g_CPodFileTypeInfo_005a14c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_pod_cpp_FUN_004f7a80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0,
    .instance_size = 0x0000021C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CPodFile_005be1a4
};
WatcomTypeInfo g_CDemonPodTypeInfo_005a1510 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_podmain_cpp_CDemonPod_ctor_FUN_004f93c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_podmain_cpp_FUN_004f93e0,
    .instance_size = (int)sizeof(CDemonPod),
    .class_name = (char *)s_CDemonPod_005be1d4
};
WatcomTypeInfo g_CScatTypeInfo_005a16a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_scat_cpp_FUN_004fbc00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_scat_cpp_CScat_dtor_FUN_004fde30,
    .instance_size = 0x0001FA68 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CScat_005be1f0
};
WatcomTypeInfo g_CScriptTypeInfo_005a1700 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_script_cpp_FUN_004fe490,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_script_cpp_FUN_004fe4d0,
    .instance_size = 0x00000478 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CScript_005be304
};
WatcomTypeInfo g_CSentinelTypeInfo_005a18a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_sentinel_cpp_FUN_00505920,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_sentinel_cpp_FUN_00506a80,
    .instance_size = 0x0000BD2C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CSentinel_005be318
};
WatcomTypeInfo g_CDemonSetTypeInfo_005a1910 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_CDemonSet_ctor_FUN_00506bc0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_CDemonSet_dtor_FUN_00506e50,
    .instance_size = 0x00161284 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CDemonSet_005be718
};
WatcomTypeInfo g_CDemonCameraTypeInfo_005a1930 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dcamera_cpp_CDemonCamera_ctor_FUN_0043fee0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dcamera_cpp_FUN_0043ff30,
    .instance_size = (int)sizeof(CDemonCamera),
    .class_name = (char *)s_CDemonCamera_005be704
};
WatcomTypeInfo g_CDemonRaytraceTypeInfo_005a1950 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dtrace_cpp_CDemonRaytrace_ctor_FUN_004671e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00467220,
    .instance_size = (int)sizeof(CDemonRaytrace),
    .class_name = (char *)s_CDemonRaytrace_005be6ec
};
WatcomTypeInfo g_C3DSCameraTypeInfo_005a1970 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setutil_cpp_FUN_005143e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setutil_cpp_FUN_00514410,
    .instance_size = 0x000001A0 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_C3DSCamera_005be6d8
};
WatcomTypeInfo g_C3DSLightTypeInfo_005a1990 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setutil_cpp_FUN_00514a50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_FUN_0050ea80,
    .instance_size = 0x00001898 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_C3DSLight_005be6c4
};
WatcomTypeInfo g_SRoomTypeInfo_005a19b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_FUN_0050ea40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_FUN_0050ea50,
    .instance_size = 0x00000044 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_SRoom_CDemonSet_005be6ac
};
WatcomTypeInfo g_SVDBoxTypeInfo_005a19d0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_FUN_0050ea60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_FUN_0050ea70,
    .instance_size = 0x00000044 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_SVDBox_005be69c
};
WatcomTypeInfo g_SRaytraceStateTypeInfo_005a1a10 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_FUN_00511c60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setcolid_cpp_FUN_00511c70,
    .instance_size = (int)sizeof(SRaytraceState),
    .class_name = (char *)s_SRaytraceState_005be761
};
WatcomTypeInfo g_SCollisionReturnTypeInfo_005a1a30 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_FUN_00511d20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setcolid_cpp_FUN_00511d30,
    .instance_size = (int)sizeof(SCollisionReturnInfo),
    .class_name = (char *)s_SCollisionReturnInfo_005be745
};
WatcomTypeInfo g_SIntersectXZCylinderTypeInfo_005a1a50 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_FUN_00511c80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setcolid_cpp_FUN_00511c90,
    .instance_size = (int)sizeof(SIntersectXZCylinder),
    .class_name = (char *)s_SIntersectXZCylinder_005be729
};
WatcomTypeInfo g_CShotgunTypeInfo_005a1bf0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shotgun_cpp_FUN_00515d20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shotgun_cpp_FUN_00516960,
    .instance_size = 0x0000057C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CShotgun_005be944
};
WatcomTypeInfo g_CShovelTypeInfo_005a1d30 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shovel_cpp_CShovel_ctor_FUN_00516a10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shovel_cpp_FUN_00516af0,
    .instance_size = 0x00000570 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CShovel_005be958
};
WatcomTypeInfo g_CSimBoxTypeInfo_005a1e50 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_simbox_cpp_CSimBox_ctor_FUN_00516ba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_simbox_cpp_FUN_005170d0,
    .instance_size = 0x000005C4 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CSimBox_005be96c
};
WatcomTypeInfo g_SVertTypeInfo_005a1ee0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_SVert_ctor_FUN_0051f840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_SVert_dtor_FUN_0051f860,
    .instance_size = (int)sizeof(SVert),
    .class_name = (char *)s_SVert_CDeformableModel_005be9ed
};
WatcomTypeInfo g_CDeformableModelInstanceTypeInfo_005a1f00 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0,
    .instance_size = (int)sizeof(CDeformableModelInstance),
    .class_name = (char *)s_CDeformableModelInstance_005be9cd
};
WatcomTypeInfo g_CDeformableModelTypeInfo_005a1f20 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModel_ctor_FUN_00517b70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80,
    .instance_size = 0x00002AC0 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CDeformableModel_005be9b5
};
WatcomTypeInfo g_CSkeletonTypeInfo_005a1f40 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_FUN_00517350,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CLodMeshPrecomputeEntry_ctor_FUN_005173a0,
    .instance_size = 0x0002937C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CSkeleton_005be9a4
};
WatcomTypeInfo g_CSmileyTypeInfo_005a2100 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_smiley_cpp_CSmiley_ctor_FUN_0051fcf0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_smiley_cpp_FUN_005210d0,
    .instance_size = 0x0000BD68 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CSmiley_005bea14
};
WatcomTypeInfo g_SSfxSlotTypeInfo_005a2180 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_FUN_00529a20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_FUN_00529a40,
    .instance_size = 0x00000120 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_SfxSlot_005bed04
};
WatcomTypeInfo g_SSfxOptionsTypeInfo_005a21a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_FUN_005299e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_FUN_00529a50,
    .instance_size = 0x0000006C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_SfxOptions_005bece4
};
WatcomTypeInfo g_SSfxSampleTypeInfo_005a21c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_FUN_00523890,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_FUN_005238f0,
    .instance_size = 0x00000168 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_SfxSample_005becc4
};
WatcomTypeInfo g_CMP3DecoderTypeInfo_005a21e0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_004e7dd0,
    .instance_size = (int)sizeof(CMP3Decoder),
    .class_name = (char *)s_CMP3Decoder_005beca4
};
WatcomTypeInfo g_STrainNoiseTypeInfo_005a22f0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_sound_cpp_FUN_0052ee00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_sound_cpp_FUN_0052ee10,
    .instance_size = (int)sizeof(STrainNoise),
    .class_name = (char *)s_STrainNoise_005beff4
};
WatcomTypeInfo g_CSpikeTypeInfo_005a2410 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_spike_cpp_CSpike_ctor_FUN_00533020,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_spike_cpp_FUN_00533c90,
    .instance_size = 0x00000558 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CSpike_005c0f98
};
WatcomTypeInfo g_CSpotViewTypeInfo_005a2470 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_spotview_cpp_CSpotView_ctor_FUN_00534200,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_spotview_cpp_CSpotView_dtor_FUN_00534740,
    .instance_size = (int)sizeof(CSpotView),
    .class_name = (char *)s_CSpotView_005c0fb4
};
WatcomTypeInfo g_CStairsTypeInfo_005a2590 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stairs_cpp_FUN_005347b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stairs_cpp_CFlies_dtor_FUN_00534c10,
    .instance_size = 0x00000A2C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CStairs_005c0fcc
};
WatcomTypeInfo g_CTempleStoneTypeInfo_005a26b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stone_cpp_FUN_00534d00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stone_cpp_FUN_00534dc0,
    .instance_size = 0x00000668 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTempleStone_005c0fe0
};
WatcomTypeInfo g_CStrangerTypeInfo_005a2890 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stranger_cpp_FUN_005350c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stranger_cpp_FUN_00540a90,
    .instance_size = 0x0001FCD8 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CStranger_005c0ff8
};
WatcomTypeInfo g_CSuccubusTypeInfo_005a2a30 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_succubus_cpp_FUN_00540b40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_succubus_cpp_CSuccubus_dtor_FUN_00541860,
    .instance_size = 0x0000EDD0 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CSuccubus_005c1010
};
WatcomTypeInfo g_CSvetlanaTypeInfo_005a2bc0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_svetlana_cpp_FUN_00543050,
    .instance_size = 0x000950C0 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CSvetlana_005c1040
};
WatcomTypeInfo g_CDrummerTypeInfo_005a2e80 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tbplayer_cpp_FUN_005433a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tbplayer_cpp_FUN_00543620,
    .instance_size = 0x0001F578 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CDrummer_005c1070
};
WatcomTypeInfo g_CBassPlayerTypeInfo_005a2ea0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tbplayer_cpp_FUN_00543150,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tbplayer_cpp_FUN_005436f0,
    .instance_size = 0x0001F578 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CBassPlayer_005c105c
};
WatcomTypeInfo g_CTeleportTypeInfo_005a30a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_teleport_cpp_FUN_005438d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_teleport_cpp_FUN_00543a60,
    .instance_size = 0x00000160 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTeleport_005c10a0
};
WatcomTypeInfo g_CTeleportDestTypeInfo_005a30c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_teleport_cpp_FUN_00543840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_teleport_cpp_FUN_00543ab0,
    .instance_size = 0x00000150 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTeleportDest_005c1088
};
WatcomTypeInfo g_CTentacleTypeInfo_005a3250 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tentacle_cpp_FUN_00543b60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tentacle_cpp_FUN_00544850,
    .instance_size = 0x0000BD94 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTentacle_005c10b8
};
WatcomTypeInfo g_CTextureListTypeInfo_005a32a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_texlist_cpp_CTextureList_ctor_FUN_00544930,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_texlist_cpp_CTextureList_dtor_FUN_00544940,
    .instance_size = 0x00006D64 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTextureList_005c10e0
};
WatcomTypeInfo g_CTommyGunTypeInfo_005a33e0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tommygun_cpp_CTommyGun_dtor_FUN_00546770,
    .instance_size = 0x0000057C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTommyGun_005c10f8
};
WatcomTypeInfo g_CTrapTypeInfo_005a3500 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trap_cpp_FUN_00546820,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trap_cpp_FUN_00546be0,
    .instance_size = 0x000002D4 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTrap_005c1110
};
WatcomTypeInfo g_CTrashTypeInfo_005a3620 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trash_cpp_CTrash_ctor_FUN_00546c90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trash_cpp_FUN_00547800,
    .instance_size = 0x00000320 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTrash_005c1124
};
WatcomTypeInfo g_CTriggerTypeInfo_005a3740 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trigger_cpp_CTrigger_ctor_FUN_005478b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trigger_cpp_FUN_00548a50,
    .instance_size = 0x00000368 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTrigger_005c1138
};
WatcomTypeInfo g_CTurretTypeInfo_005a38b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_turret_cpp_CTurret_ctor_FUN_005494a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_turret_cpp_FUN_0054b060,
    .instance_size = 0x000008B4 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTurret_005c1168
};
WatcomTypeInfo g_CTVBatTypeInfo_005a3a40 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tvbat_cpp_CTVBat_ctor_FUN_0054b140,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tvbat_cpp_FUN_0054c190,
    .instance_size = 0x0000BF5C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTVBat_005c117c
};
WatcomTypeInfo g_CVampireBossTypeInfo_005a3be0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vampboss_cpp_CVampireBoss_dtor_FUN_0054e370,
    .instance_size = 0x000BEDC8 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CVampireBoss_005c1190
};
WatcomTypeInfo g_CTireTypeInfo_005a3d20 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vehicle_cpp_CTire_ctor_FUN_0054f870,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vehicle_cpp_CTire_dtor_FUN_0054f890,
    .instance_size = (int)sizeof(CTire),
    .class_name = (char *)s_CTire_005c11b8
};
WatcomTypeInfo g_CVehicleTypeInfo_005a3d40 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vehicle_cpp_CVehicle_ctor_FUN_0054e5a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vehicle_cpp_FUN_0054f7f0,
    .instance_size = 0x00001070 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CVehicle_005c11a8
};
WatcomTypeInfo g_CCryptVesselTypeInfo_005a3e60 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vessel_cpp_CCryptVessel_ctor_FUN_0054f920,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vessel_cpp_FUN_005506c0,
    .instance_size = 0x000007E4 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CCryptVessel_005c11cc
};
WatcomTypeInfo g_CWaterTypeInfo_005a3eb0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_water_cpp_CWater_ctor_FUN_005507a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_water_cpp_CWater_dtor_FUN_005507c0,
    .instance_size = (int)sizeof(CWater),
    .class_name = (char *)s_CWater_005c13c0
};
WatcomTypeInfo g_SWaterVertexTypeInfo_005a3fd0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_wateract_cpp_FUN_00552340,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_wateract_cpp_FUN_00552350,
    .instance_size = (int)sizeof(SWaterVertex),
    .class_name = (char *)s_SWaterVertex_005c1568
};
WatcomTypeInfo g_CWaterActorTypeInfo_005a3ff0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_wateract_cpp_CWaterActor_ctor_FUN_00551220,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_wateract_cpp_FUN_005522d0,
    .instance_size = 0x0002B230 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CWaterActor_005c1554
};
WatcomTypeInfo g_CWayPointTypeInfo_005a4110 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_waypoint_cpp_FUN_005524d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_waypoint_cpp_FUN_00552830,
    .instance_size = 0x00000550 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CWayPoint_005c1580
};
WatcomTypeInfo g_CWeaponTypeInfo_005a4250 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_weapon_cpp_CWeapon_ctor_FUN_00553d90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0,
    .instance_size = 0x00000570 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CWeapon_005c15ac
};
WatcomTypeInfo g_CDemonGlobeTypeInfo_005a4270 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_weapon_cpp_FUN_00554910,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_weapon_cpp_FUN_00554920,
    .instance_size = (int)sizeof(CDemonGlobe),
    .class_name = (char *)s_CDemonGlobe_005c1598
};
WatcomTypeInfo g_CWeatherTypeInfo_005a42b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_weather_cpp_CWeather_ctor_FUN_00554960,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_weather_cpp_CWeather_dtor_FUN_005559d0,
    .instance_size = (int)sizeof(CWeather),
    .class_name = (char *)s_CWeather_005c1608
};
WatcomTypeInfo g_CWerewolfTypeInfo_005a4460 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_werewolf_cpp_CWerewolf_ctor_FUN_00555a90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_werewolf_cpp_FUN_00557e90,
    .instance_size = 0x0000BD6C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CWerewolf_005c1634
};
WatcomTypeInfo g_CZombieTypeInfo_005a46a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_zombie_cpp_CZombie_ctor_FUN_0055eac0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_zombie_cpp_FUN_00562550,
    .instance_size = 0x0000BE14 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CZombie_005c1674
};
WatcomTypeInfo g_ostreamTypeInfo_005a4960 = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)0x0056B4A9,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)0x0056B538,
    .instance_size = 0x00000038 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_ostream_005c179c
};
WatcomTypeInfo g_strstreambaseTypeInfo_005a4980 = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)0x0056B5AD,
    .instance_size = 0x00000078 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_strstreambase_005c17ab
};
WatcomTypeInfo g_iosTypeInfo_005a49a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)0x0056B503,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)0x0056B633,
    .instance_size = 0x0000002C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_ios_005c17c0
};
WatcomTypeInfo g_istreamTypeInfo_005a4a00 = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)0x0056B67D,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)0x0056B6E8,
    .instance_size = 0x0000003C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_istream_005c17cb
};
WatcomTypeInfo g_fstreambaseTypeInfo_005a4a60 = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)0x0056B896,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)0x0056B810,
    .instance_size = 0x00000074 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_fstreambase_005c17da
};
WatcomTypeInfo g_strstreambufTypeInfo_005a4af0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)0x00570248,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)0x005701CF,
    .instance_size = 0x00000040 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_strstreambuf_005c1d3d
};
WatcomTypeInfo g_filebufTypeInfo_005a4b60 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)0x0057042D,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)0x00570449,
    .instance_size = 0x0000003C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_filebuf_005c2060
};

// float
float FLOAT_005a2158 = 0.0f;
float FLOAT_005a2160 = 0.0f;

// int
int g_INT_005acc88 = 0x7;
int g_INT_005acea0 = 0x1;
int g_INT_005aceb4 = 0x4;
int g_INT_005acec8 = 0x1;
int g_INT_005acedc = 0x1;
int g_INT_005acf20 = 0x2;
int g_INT_005acf3c = 0x2;
int g_INT_005acf58 = 0x1;
int g_INT_005acf80 = 0x2;
int g_INT_005acf94 = 0x4;
int g_INT_005acfa4 = 0x1;
int g_INT_005acfbc = 0x3;
int g_INT_005acfd0 = 0x1;
int g_INT_005acfe4 = 0x1;
int g_INT_005acff8 = 0x1;
int g_INT_005ad00c = 0x5;
int g_INT_005ad054 = 0x5;
int g_INT_005ad09c = 0xF;
int INT_005ad0a0 = 0x2;
int g_INT_005ad0e0 = 0x4;
int g_INT_005ad0f4 = 0x1;
int g_INT_005ad1e8 = 0x6;
int g_INT_005ad250 = 0x4;
int g_INT_005ad32c = 0x1;
int g_INT_005ad380 = 0x2;
int g_INT_005ad3ac = 0x2;
int g_INT_005ad3c4 = 0x2;
int g_INT_005ad3d8 = 0x1;
int INT_005ad3f0 = 0x6;
int g_INT_005ad4bc = 0x4;
int g_INT_005ae678 = 0x2;
int g_INT_005ae690 = 0xB;
int g_INT_005ae6c8 = 0x9;

// undefined1
undefined1 DAT_005acc8f = 0x00;
undefined1 DAT_005acc90 = 0x00;
undefined1 DAT_005acc91 = 0x00;

// undefined4
undefined4 DAT_005a4b78 = 0x00000000;
undefined4 DAT_005acaa4 = 0x00000001;
undefined4 DAT_005acaa8 = 0x000000F8;
undefined4 DAT_005acab4 = 0x00FFFFFF;
undefined4 DAT_005accf8 = 0x00000000;
undefined4 DAT_005accfc = 0x00000000;
undefined4 DAT_005ad280 = 0x00000001;
undefined4 DAT_005ad284 = 0x7FFFFFFF;
undefined4 DAT_005ad444 = 0x00010000;
undefined4 DAT_005ad448 = 0x00C80000;
undefined4 DAT_005ad44c = 0x00000003;
undefined4 DAT_005ad450 = 0x00000040;
undefined4 DAT_005ad454 = 0x00000040;
undefined4 DAT_005ad458 = 0x00000040;
undefined4 DAT_005ad45c = 0x00000000;
undefined4 DAT_005ad594 = 0x00000000;
undefined4 DAT_005ad59c = 0x00000000;
undefined4 DAT_005ad898 = 0x00000000;
undefined4 DAT_005ad89c = 0x00000000;
undefined4 DAT_005ad8bc = 0x00000000;
undefined4 DAT_005ad8c0 = 0x00000000;
undefined4 DAT_005ae6f4 = 0x00000001;
undefined4 DAT_005ae6f8 = 0x3DCCCCCD;
undefined4 DAT_005ae704 = 0x01B4D738;
undefined4 DAT_005ae708 = 0x00000001;

