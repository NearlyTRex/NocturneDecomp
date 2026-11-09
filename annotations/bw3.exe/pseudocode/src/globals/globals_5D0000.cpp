#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5D0000
// =============================================================================

// WatcomDestructorCall
WatcomDestructorCall DAT_005DBE00 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_arrdtor4_FUN_00414500,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_007dffc0
};
WatcomDestructorCall DAT_005DBE0C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_arrdtor5_FUN_004144e0,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_007e0010
};
WatcomDestructorCall DAT_005DBE18 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_alphabit_cpp_CAudioRecPuzzle_dtor_FUN_00411bb0,
    .object_instance = (void *)&g_CAudioRecPuzzleInstance
};
WatcomDestructorCall DAT_005DBE24 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00413240,
    .object_instance = (void *)&g_CChemPuzzleInstance
};
WatcomDestructorCall DAT_005DC960 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_00420e20,
    .object_instance = (void *)&CDemonFilter_ARRAY_007e17b8
};
WatcomDestructorCall g_CConsoleDestructorCall = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_console_cpp_CConsole_dtor_FUN_00441fe0,
    .object_instance = (void *)&g_CConsoleInstance
};
WatcomDestructorCall DAT_005DDFB0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)support_codec_cpp_CLZWDecompress_dtor_FUN_00441e70,
    .object_instance = (void *)&g_CLZWDecompressInstance
};
WatcomDestructorCall DAT_005DE300 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_00420e20,
    .object_instance = (void *)&CDemonFilter_ARRAY_01548c00
};
WatcomDestructorCall DAT_005DE30C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CDemonFilter_arrdtor4_FUN_00459f30,
    .object_instance = (void *)&CDemonFilter_ARRAY_01548e60
};
WatcomDestructorCall DAT_005DE318 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CFilterCache_dtor_FUN_004596a0,
    .object_instance = (void *)&g_CFilterCacheInstance
};
WatcomDestructorCall DAT_005DE324 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CFilterFX_dtor_FUN_00459cc0,
    .object_instance = (void *)&g_CFilterFXInstance
};
WatcomDestructorCall DAT_005DE550 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_arrdtor256_FUN_00462630,
    .object_instance = (void *)&g_CKeyFramedModelPool
};
WatcomDestructorCall DAT_005DEFF0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CEditorTools_dtor_FUN_0047c770,
    .object_instance = (void *)&g_CEditorToolsInstance
};
WatcomDestructorCall DAT_005DF860 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CStake_arrdtor256_FUN_004a4a50,
    .object_instance = (void *)&g_StakePool
};
WatcomDestructorCall DAT_005DF86C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CSpark_arrdtor256_FUN_004a4a30,
    .object_instance = (void *)&g_SparkPool
};
WatcomDestructorCall DAT_005DF878 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CFirefly_arrdtor64_FUN_004a4a10,
    .object_instance = (void *)&CFirefly_ARRAY_01cba2b8
};
WatcomDestructorCall DAT_005DF884 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CGlassParticle_arrdtor1000_FUN_004a49f0,
    .object_instance = (void *)&CGlassParticle_ARRAY_01cbc0f0
};
WatcomDestructorCall DAT_005DF890 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CFireball_arrdtor64_FUN_004a49d0,
    .object_instance = (void *)&g_FireballPool
};
WatcomDestructorCall DAT_005DF89C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CRock_arrdtor64_FUN_004a49b0,
    .object_instance = (void *)&g_RockPool
};
WatcomDestructorCall DAT_005DF8A8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CLeaf_arrdtor64_FUN_004a4990,
    .object_instance = (void *)&CLeaf_ARRAY_01cf3b88
};
WatcomDestructorCall DAT_005DF8B4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CToss_arrdtor20_FUN_004a4970,
    .object_instance = (void *)&g_TossPool
};
WatcomDestructorCall DAT_005DF8C0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CShell_arrdtor50_FUN_004a4950,
    .object_instance = (void *)&g_ShellPool
};
WatcomDestructorCall DAT_005DF8CC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CPopcorn_arrdtor256_FUN_004a4930,
    .object_instance = (void *)&g_PopcornPool
};
WatcomDestructorCall DAT_005DF8D8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CRainDrop_arrdtor256_FUN_004a4910,
    .object_instance = (void *)&g_RainDropPool
};

// WatcomTypeInfo
WatcomTypeInfo g_CInStreamFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)unkafter_turret_cpp_CInStreamFile_copy_FUN_00573a10,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40,
    .instance_size = (int)sizeof(CInStreamFile),
    .class_name = (char *)s_CInStreamFile_005f07a4
};
WatcomTypeInfo g_COutStreamFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_ctor_FUN_005747c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_copy_FUN_00574820,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_dtor_FUN_00574850,
    .instance_size = (int)sizeof(COutStreamFile),
    .class_name = (char *)s_COutStreamFile_005f0784
};
WatcomTypeInfo g_CDemonActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_CDemonActor_ctor_FUN_00408600,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_CDemonActor_dtor_FUN_00408770,
    .instance_size = (int)sizeof(CDemonActor),
    .class_name = (char *)s_CDemonActor_005f0b44
};
WatcomTypeInfo g_CVectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_CVector3f_ctor_FUN_0040d220,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_CVector3f_dtor_FUN_0040d2d0,
    .instance_size = (int)sizeof(CVector3f),
    .class_name = (char *)s_CVector_005f0b34
};
WatcomTypeInfo g_CAmmo_BulletTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammo_cpp_CAmmoBullet_ctor_FUN_0040e3d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammo_cpp_CAmmoBullet_dtor_FUN_0040e420,
    .instance_size = (int)sizeof(CAmmoBullet),
    .class_name = (char *)s_CAmmo_Bullet_005f0ba4
};
WatcomTypeInfo g_CAmmo_ManaLargeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammo_cpp_CAmmoManaLarge_ctor_FUN_0040e260,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammo_cpp_CAmmoManaLarge_dtor_FUN_0040e470,
    .instance_size = (int)sizeof(CAmmoManaLarge),
    .class_name = (char *)s_CAmmo_ManaLarge_005f0b8c
};
WatcomTypeInfo g_CAmmo_ManaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammo_cpp_CAmmoMana_ctor_FUN_0040e0f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammo_cpp_CAmmoMana_dtor_FUN_0040e4c0,
    .instance_size = (int)sizeof(CAmmoMana),
    .class_name = (char *)s_CAmmo_Mana_005f0b78
};
WatcomTypeInfo g_CAmmoTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammo_cpp_CAmmo_ctor_FUN_0040de60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammo_cpp_CAmmo_dtor_FUN_0040e510,
    .instance_size = (int)sizeof(CAmmo),
    .class_name = (char *)s_CAmmo_005f0b68
};
WatcomTypeInfo g_CAmmoBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e5c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammobox_cpp_CAmmoBox_dtor_FUN_0040ea10,
    .instance_size = (int)sizeof(CAmmoBox),
    .class_name = (char *)s_CAmmoBox_005f0bbc
};
WatcomTypeInfo g_CBarrierTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_barrier_cpp_CBarrier_ctor_FUN_0040eac0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_barrier_cpp_CBarrier_dtor_FUN_0040ec90,
    .instance_size = (int)sizeof(CBarrier),
    .class_name = (char *)s_CBarrier_005f0bd0
};
WatcomTypeInfo g_CBatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bat_cpp_CBat_ctor_FUN_0040ede0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bat_cpp_CBat_dtor_FUN_0040f3d0,
    .instance_size = (int)sizeof(CBat),
    .class_name = (char *)s_CBat_005f0be4
};
WatcomTypeInfo g_CBatteryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_battery_cpp_CBattery_ctor_FUN_0040f4a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_battery_cpp_CBattery_dtor_FUN_0040f6d0,
    .instance_size = (int)sizeof(CBattery),
    .class_name = (char *)s_CBattery_005f0bf4
};
WatcomTypeInfo g_CBindEvilTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bindevil_cpp_CBindEvil_ctor_FUN_0040f780,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bindevil_cpp_CBindEvil_dtor_FUN_0040f940,
    .instance_size = (int)sizeof(CBindEvil),
    .class_name = (char *)s_CBindEvil_005f0c08
};
WatcomTypeInfo g_CBirdTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_bird_cpp_CBird_ctor_FUN_0040f9f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_bird_cpp_CBird_dtor_FUN_004101f0,
    .instance_size = (int)sizeof(CBird),
    .class_name = (char *)s_CBird_005f0c44
};
WatcomTypeInfo g_CCharacterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_CCharacter_ctor_FUN_0042ac20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_charactr_cpp_CCharacter_dtor_FUN_00410290,
    .instance_size = (int)sizeof(CCharacter),
    .class_name = (char *)s_CCharacter_005f0c30
};
WatcomTypeInfo g_CFlameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flame_cpp_CFlame_ctor_FUN_004a59b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CFlame_dtor_FUN_00410320,
    .instance_size = (int)sizeof(CFlame),
    .class_name = (char *)s_CFlame_005f0c20
};
WatcomTypeInfo g_CBlunderbusTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_blundrbs_cpp_CBlunderbus_ctor_FUN_004103f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_blundrbs_cpp_CBlunderbus_dtor_FUN_00411890,
    .instance_size = (int)sizeof(CBlunderbus),
    .class_name = (char *)s_CBlunderbus_005f0c58
};
WatcomTypeInfo g_CAlphaBitmapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300,
    .instance_size = (int)sizeof(CAlphaBitmap),
    .class_name = (char *)s_CAlphaBitmap_005f0d1b
};
WatcomTypeInfo g_CAudioRecPuzzleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_alphabit_cpp_CAudioRecPuzzle_ctor_FUN_00411b50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_alphabit_cpp_CAudioRecPuzzle_dtor_FUN_00411bb0,
    .instance_size = (int)sizeof(CAudioRecPuzzle),
    .class_name = (char *)s_CAudioRecPuzzle_005f0d04
};
WatcomTypeInfo g_buttonStructTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_superopt_cpp_buttonStruct_ctor_FUN_00414480,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_superopt_cpp_buttonStruct_dtor_FUN_00414490,
    .instance_size = 0x0000002C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_buttonStruct_CAudioRecPu_005f0cdf
};
WatcomTypeInfo g_CChemPuzzleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_superopt_cpp_CChemPuzzle_ctor_FUN_00413200,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00413240,
    .instance_size = (int)sizeof(CChemPuzzle),
    .class_name = (char *)s_CChemPuzzle_005f0ccc
};
WatcomTypeInfo g_SBodyPartModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartModel_ctor_FUN_00416da0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SBodyPartModel),
    .class_name = (char *)s_SBodyPartModel_005f0d60
};
WatcomTypeInfo g_SBodyPartFireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartFire_ctor_FUN_00416d60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartFire_dtor_FUN_00416d80,
    .instance_size = (int)sizeof(SBodyPartFire),
    .class_name = (char *)s_SBodyPartFire_005f0d48
};
WatcomTypeInfo g_CBodyPartTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_CBodyPart_ctor_FUN_00414750,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_CBodyPart_dtor_FUN_00414880,
    .instance_size = (int)sizeof(CBodyPart),
    .class_name = (char *)s_CBodyPart_005f0d34
};
WatcomTypeInfo g_SBoneGuyBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_SBoneGuyBox_ctor_FUN_0041ab90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SBoneGuyBox),
    .class_name = (char *)s_SBoneGuyBox_005f0e08
};
WatcomTypeInfo g_CBaalSkelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_boneguy_cpp_CBaalSkel_ctor_FUN_00419ac0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_boneguy_cpp_CBaalSkel_dtor_FUN_0041a8c0,
    .instance_size = (int)sizeof(CBaalSkel),
    .class_name = (char *)s_CBaalSkel_005f0df4
};
WatcomTypeInfo g_CSkeleton_DemonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boneguy_cpp_CSkeletonDemon_dtor_FUN_0041a950,
    .instance_size = (int)sizeof(CSkeletonDemon),
    .class_name = (char *)s_CSkeleton_Demon_005f0ddc
};
WatcomTypeInfo g_CSkeleton_IndianTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_CSkeletonIndian_ctor_FUN_00419980,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boneguy_cpp_CSkeletonIndian_dtor_FUN_0041a9e0,
    .instance_size = (int)sizeof(CSkeletonIndian),
    .class_name = (char *)s_CSkeleton_Indian_005f0dc4
};
WatcomTypeInfo g_CSkeleton_ForestTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_CSkeletonForest_ctor_FUN_004198e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boneguy_cpp_CSkeletonForest_dtor_FUN_0041aa70,
    .instance_size = (int)sizeof(CSkeletonForest),
    .class_name = (char *)s_CSkeleton_Forest_005f0dac
};
WatcomTypeInfo g_CBoneGuyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boneguy_cpp_CBoneGuy_dtor_FUN_0041ab00,
    .instance_size = (int)sizeof(CBoneGuy),
    .class_name = (char *)s_CBoneGuy_005f0d9c
};
WatcomTypeInfo g_CEnemyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_enemy_cpp_CEnemy_dtor_FUN_0041aba0,
    .instance_size = (int)sizeof(CEnemy),
    .class_name = (char *)s_CEnemy_005f0d8c
};
WatcomTypeInfo g_SScrapeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_box_cpp_SScrape_ctor_FUN_0041d830,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SScrape),
    .class_name = (char *)s_SScrape_005f0e1b
};
WatcomTypeInfo g_CDemonFilterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CDemonFilter_ctor_FUN_004598a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CDemonFilter_dtor_FUN_004598f0,
    .instance_size = (int)sizeof(CDemonFilter),
    .class_name = (char *)s_CDemonFilter_005f0e6c
};
WatcomTypeInfo g_CLightActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boxactor_cpp_CLightActor_ctor_FUN_00420360,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boxactor_cpp_CLightActor_dtor_FUN_00420d30,
    .instance_size = (int)sizeof(CLightActor),
    .class_name = (char *)s_CLightActor_005f0e58
};
WatcomTypeInfo g_CBoxActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boxactor_cpp_CBoxActor_dtor_FUN_00420db0,
    .instance_size = (int)sizeof(CBoxActor),
    .class_name = (char *)s_CBoxActor_005f0e44
};
WatcomTypeInfo g_SBugTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bugs_cpp_SBug_ctor_FUN_004243c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SBug),
    .class_name = (char *)s_SBug_005f0eb4
};
WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CKeyFramedModelInstance_dtor_FUN_004a4900,
    .instance_size = (int)sizeof(CKeyFramedModelInstance),
    .class_name = (char *)s_CKeyFramedModelInstance_005f0e94
};
WatcomTypeInfo g_CBugsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bugs_cpp_CBugs_ctor_FUN_00420ea0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bugs_cpp_CBugs_dtor_FUN_00424330,
    .instance_size = (int)sizeof(CBugs),
    .class_name = (char *)s_CBugs_005f0e84
};
WatcomTypeInfo g_CBurncrossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_burncrss_cpp_CBurncross_ctor_FUN_00424430,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_burncrss_cpp_CBurncross_dtor_FUN_00425420,
    .instance_size = (int)sizeof(CBurncross),
    .class_name = (char *)s_CBurncross_005f0ec4
};
WatcomTypeInfo g_CCameraViewTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_camview_cpp_CCameraView_ctor_FUN_004254b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_camview_cpp_CCameraView_dtor_FUN_004254d0,
    .instance_size = (int)sizeof(CCameraView),
    .class_name = (char *)s_CCameraView_005f0ed6
};
WatcomTypeInfo g_CCarvedTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_carved_cpp_CCarved_ctor_FUN_00425960,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_carved_cpp_CCarved_dtor_FUN_004291f0,
    .instance_size = (int)sizeof(CCarved),
    .class_name = (char *)s_CCarved_005f0ef0
};
WatcomTypeInfo g_SChainVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_chain_cpp_SChainVertex_ctor_FUN_0042ab70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SChainVertex),
    .class_name = (char *)s_SChainVertex_005f0f14
};
WatcomTypeInfo g_CChainTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_chain_cpp_CChain_ctor_FUN_004292e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_chain_cpp_CChain_dtor_FUN_0042ab20,
    .instance_size = (int)sizeof(CChain),
    .class_name = (char *)s_CChain_005f0f04
};
WatcomTypeInfo g_SFireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_SFire_ctor_FUN_00434b10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SFire),
    .class_name = (char *)s_SFire_005f12e4
};
WatcomTypeInfo g_SClothVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cloth_cpp_SClothVertex_ctor_FUN_004400b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SClothVertex),
    .class_name = (char *)s_SClothVertex_005f130e
};
WatcomTypeInfo g_SClothBoneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cloth_cpp_SClothBone_ctor_FUN_004400a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SClothBone),
    .class_name = (char *)s_SClothBone_005f12fc
};
WatcomTypeInfo g_CCodecTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CCodec_ctor_FUN_00440800,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CCodec_dtor_FUN_00440810,
    .instance_size = (int)sizeof(CCodec),
    .class_name = (char *)s_CCodec_005f1674
};
WatcomTypeInfo g_COutStreamMemoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_ctor_FUN_00574a80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_copy_FUN_00574b20,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50,
    .instance_size = (int)sizeof(COutStreamMemory),
    .class_name = (char *)s_COutStreamMemory_005f1654
};
WatcomTypeInfo g_CInStreamMemoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_ctor_FUN_00574120,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_copy_FUN_005741a0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_dtor_FUN_005741d0,
    .instance_size = (int)sizeof(CInStreamMemory),
    .class_name = (char *)s_CInStreamMemory_005f1634
};
WatcomTypeInfo g_CInStreamPipeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CInStreamPipe_ctor_FUN_004417f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CInStreamPipe_dtor_FUN_004418c0,
    .instance_size = (int)sizeof(CInStreamPipe),
    .class_name = (char *)s_CInStreamPipe_005f1614
};
WatcomTypeInfo g_CCheesyCipherTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CCheesyCipher_dtor_FUN_00441d80,
    .instance_size = (int)sizeof(CCheesyCipher),
    .class_name = (char *)s_CCheesyCipher_005f15f4
};
WatcomTypeInfo g_CAsciiUnarmorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CAsciiUnarmor_ctor_FUN_004415f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CAsciiUnarmor_dtor_FUN_00441dd0,
    .instance_size = (int)sizeof(CAsciiUnarmor),
    .class_name = (char *)s_CAsciiUnarmor_005f15d4
};
WatcomTypeInfo g_CAsciiArmorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CAsciiArmor_ctor_FUN_004414f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CAsciiArmor_dtor_FUN_00441e20,
    .instance_size = (int)sizeof(CAsciiArmor),
    .class_name = (char *)s_CAsciiArmor_005f15b4
};
WatcomTypeInfo g_CLZWDecompressTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CLZWDecompress_dtor_FUN_00441e70,
    .instance_size = (int)sizeof(CLZWDecompress),
    .class_name = (char *)s_CLZWDecompress_005f1594
};
WatcomTypeInfo g_CLZWCompressTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CLZWCompress_dtor_FUN_00441ed0,
    .instance_size = (int)sizeof(CLZWCompress),
    .class_name = (char *)s_CLZWCompress_005f1574
};
WatcomTypeInfo g_CConsoleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_console_cpp_CConsole_dtor_FUN_00441fe0,
    .instance_size = (int)sizeof(CConsole),
    .class_name = (char *)s_CConsole_005f16b4
};
WatcomTypeInfo g_CConstruct_RedTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_construc_cpp_CConstructRed_ctor_FUN_00444600,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_construc_cpp_CConstructRed_dtor_FUN_00444660,
    .instance_size = (int)sizeof(CConstructRed),
    .class_name = (char *)s_CConstruct_Red_005f1744
};
WatcomTypeInfo g_CConstruct_BoneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_construc_cpp_CConstructBone_ctor_FUN_00444550,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_construc_cpp_CConstructBone_dtor_FUN_004446f0,
    .instance_size = (int)sizeof(CConstructBone),
    .class_name = (char *)s_CConstruct_Bone_005f172c
};
WatcomTypeInfo g_CConstructTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_constrct_cpp_CConstruct_ctor_FUN_00442420,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_construc_cpp_CConstruct_dtor_FUN_00444780,
    .instance_size = (int)sizeof(CConstruct),
    .class_name = (char *)s_CConstruct_005f1718
};
WatcomTypeInfo g_CZombieCowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cow_cpp_CZombieCow_ctor_FUN_00444f60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_cow_cpp_CZombieCow_dtor_FUN_00445ae0,
    .instance_size = (int)sizeof(CZombieCow),
    .class_name = (char *)s_CZombieCow_005f1760
};
WatcomTypeInfo g_CCrateTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_crate_cpp_CCrate_ctor_FUN_00445bd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_crate_cpp_CCrate_dtor_FUN_00446280,
    .instance_size = (int)sizeof(CCrate),
    .class_name = (char *)s_CCrate_005f1778
};
WatcomTypeInfo g_SCollisionInfoTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_curtain_cpp_SCollisionInfo_dtor_FUN_004486b0,
    .instance_size = (int)sizeof(SCollisionInfo),
    .class_name = (char *)s_SCollisionInfo_005f17b4
};
WatcomTypeInfo g_SCurtainVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_curtain_cpp_SCurtainVertex_ctor_FUN_004486a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .instance_size = (int)sizeof(SCurtainVertex),
    .class_name = (char *)s_SCurtainVertex_005f179c
};
WatcomTypeInfo g_CCurtainTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_curtain_cpp_CCurtain_ctor_FUN_00446350,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_curtain_cpp_CCurtain_dtor_FUN_00448650,
    .instance_size = (int)sizeof(CCurtain),
    .class_name = (char *)s_CCurtain_005f178c
};
WatcomTypeInfo g_CDemonCameraTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dcamera_cpp_CDemonCamera_ctor_FUN_00448be0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dcamera_cpp_CDemonCamera_dtor_FUN_00448c40,
    .instance_size = (int)sizeof(CDemonCamera),
    .class_name = (char *)s_CDemonCamera_005f1854
};
WatcomTypeInfo g_CDemnfolkTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_demnfolk_cpp_CDemnfolk_ctor_FUN_00454b60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_demnfolk_cpp_CDemnfolk_dtor_FUN_00459030,
    .instance_size = (int)sizeof(CDemnfolk),
    .class_name = (char *)s_CDemnfolk_005f186c
};
WatcomTypeInfo g_CActorDestinationTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dest_cpp_CActorDestination_ctor_FUN_00459140,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dest_cpp_CActorDestination_dtor_FUN_004595c0,
    .instance_size = (int)sizeof(CActorDestination),
    .class_name = (char *)s_CActorDestination_005f1884
};
WatcomTypeInfo g_CFilterCacheTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CFilterCache_ctor_FUN_00459690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CFilterCache_dtor_FUN_004596a0,
    .instance_size = (int)sizeof(CFilterCache),
    .class_name = (char *)s_CFilterCache_005f192c
};
WatcomTypeInfo g_CFilterFXTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CFilterFX_ctor_FUN_00459ca0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CFilterFX_dtor_FUN_00459cc0,
    .instance_size = (int)sizeof(CFilterFX),
    .class_name = (char *)s_CFilterFX_005f1918
};
WatcomTypeInfo g_CDiseaseTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_disease_cpp_CDisease_ctor_FUN_0045bf80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_disease_cpp_CDisease_dtor_FUN_0045c110,
    .instance_size = (int)sizeof(CDisease),
    .class_name = (char *)s_CDisease_005f2814
};
WatcomTypeInfo g_CDemonLightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dlight_cpp_CDemonLight_dtor_FUN_0045c240,
    .instance_size = (int)sizeof(CDemonLight),
    .class_name = (char *)s_CDemonLight_005f2a24
};
WatcomTypeInfo g_CKeyFramedModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00460530,
    .instance_size = (int)sizeof(CKeyFramedModel),
    .class_name = (char *)s_CKeyFramedModel_005f2a47
};
WatcomTypeInfo g_CEtherealDogTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dog_cpp_CEtherealDog_ctor_FUN_004637b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dog_cpp_CEtherealDog_dtor_FUN_00463810,
    .instance_size = (int)sizeof(CEtherealDog),
    .class_name = (char *)s_CEtherealDog_005f2aac
};
WatcomTypeInfo g_CDemonDogTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dog_cpp_CDemonDog_ctor_FUN_00463710,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dog_cpp_CDemonDog_dtor_FUN_004638a0,
    .instance_size = (int)sizeof(CDemonDog),
    .class_name = (char *)s_CDemonDog_005f2a98
};
WatcomTypeInfo g_CDog_ForestTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dog_cpp_CDogForest_ctor_FUN_00463680,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dog_cpp_CDogForest_dtor_FUN_00463930,
    .instance_size = (int)sizeof(CDogForest),
    .class_name = (char *)s_CDog_Forest_005f2a84
};
WatcomTypeInfo g_CZombieDogTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dog_cpp_CZombieDog_ctor_FUN_00462710,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dog_cpp_CZombieDog_dtor_FUN_004639c0,
    .instance_size = (int)sizeof(CZombieDog),
    .class_name = (char *)s_CZombieDog_005f2a70
};
WatcomTypeInfo g_CDoorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_door_cpp_CDoor_ctor_FUN_00463ab0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_door_cpp_CDoor_dtor_FUN_004655b0,
    .instance_size = (int)sizeof(CDoor),
    .class_name = (char *)s_CDoor_005f2ac4
};
WatcomTypeInfo g_CFileFinderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_dosio_cpp_CFileFinder_ctor_FUN_00465b60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_dosio_cpp_CFileFinder_dtor_FUN_00465b80,
    .instance_size = (int)sizeof(CFileFinder),
    .class_name = (char *)s_CFileFinder_005f2ad8
};
WatcomTypeInfo g_CDripTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_drip_cpp_CDrip_ctor_FUN_0046ea50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_drip_cpp_CDrip_dtor_FUN_0046f280,
    .instance_size = (int)sizeof(CDrip),
    .class_name = (char *)s_CDrip_005f4a4c
};
WatcomTypeInfo g_CDemonCubeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dcube_cpp_CDemonCube_ctor_FUN_00453cb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dcube_cpp_CDemonCube_dtor_FUN_00453cf0,
    .instance_size = (int)sizeof(CDemonCube),
    .class_name = (char *)s_CDemonCube_005fb0f4
};
WatcomTypeInfo g_CDemonTriangleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dtri_cpp_CDemonTriangle_ctor_FUN_0047aff0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dtri_cpp_CDemonTriangle_dtor_FUN_0047b000,
    .instance_size = (int)sizeof(CDemonTriangle),
    .class_name = (char *)s_CDemonTriangle_005fb106
};
WatcomTypeInfo g_CDynamiteTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dynamite_cpp_CDynamite_ctor_FUN_0047b080,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dynamite_cpp_CDynamite_dtor_FUN_0047b470,
    .instance_size = (int)sizeof(CDynamite),
    .class_name = (char *)s_CDynamite_005fb120
};
WatcomTypeInfo g_CEditorToolsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEditorTools_ctor_FUN_0047c740,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CEditorTools_dtor_FUN_0047c770,
    .instance_size = (int)sizeof(CEditorTools),
    .class_name = (char *)s_CEditorTools_005fb9c4
};
WatcomTypeInfo g_CEdButtonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEdButton_ctor_FUN_00486020,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CEdButton_dtor_FUN_00486050,
    .instance_size = (int)sizeof(CEdButton),
    .class_name = (char *)s_CEdButton_005fb9a4
};
WatcomTypeInfo g_CStrListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_ctor_FUN_00481f20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_copy_FUN_00481f90,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_dtor_FUN_00481f40,
    .instance_size = (int)sizeof(CStrList),
    .class_name = (char *)s_CStrList_005fb994
};
WatcomTypeInfo g_CPickListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CPickList_ctor_FUN_004831c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CPickList_dtor_FUN_004832b0,
    .instance_size = (int)sizeof(CPickList),
    .class_name = (char *)s_CPickList_005fb974
};
WatcomTypeInfo g_CElephantGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_elephant_cpp_CElephantGun_ctor_FUN_00486ba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_elephant_cpp_CElephantGun_dtor_FUN_00487930,
    .instance_size = (int)sizeof(CElephantGun),
    .class_name = (char *)s_CElephantGun_005fb9dc
};
WatcomTypeInfo g_CEmitterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_emitter_cpp_CEmitter_ctor_FUN_004879e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_emitter_cpp_CEmitter_dtor_FUN_00488f50,
    .instance_size = (int)sizeof(CEmitter),
    .class_name = (char *)s_CEmitter_005fb9f4
};
WatcomTypeInfo g_CExorcismTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_exorcism_cpp_CExorcism_ctor_FUN_0048a310,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_exorcism_cpp_CExorcism_dtor_FUN_0048b730,
    .instance_size = (int)sizeof(CExorcism),
    .class_name = (char *)s_CExorcism_005fba50
};
WatcomTypeInfo g_CFilmReelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_filmreel_cpp_CFilmReel_ctor_FUN_00496170,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_filmreel_cpp_CFilmReel_dtor_FUN_00496890,
    .instance_size = (int)sizeof(CFilmReel),
    .class_name = (char *)s_CFilmReel_005fc4dc
};
WatcomTypeInfo g_CFilmProjectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_filmreel_cpp_CFilmProjector_ctor_FUN_00496460,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_filmreel_cpp_CFilmProjector_dtor_FUN_004968e0,
    .instance_size = (int)sizeof(CFilmProjector),
    .class_name = (char *)s_CFilmProjector_005fc4c4
};
WatcomTypeInfo g_CSmokeParticleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CSmokeParticle_ctor_FUN_004a48e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CSmokeParticle_dtor_FUN_004a48f0,
    .instance_size = (int)sizeof(CSmokeParticle),
    .class_name = (char *)s_CSmokeParticle_005fde44
};
WatcomTypeInfo g_CBulletHoleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CBulletHole_ctor_FUN_004a48c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CBulletHole_dtor_FUN_004a48d0,
    .instance_size = (int)sizeof(CBulletHole),
    .class_name = (char *)s_CBulletHole_005fde24
};
WatcomTypeInfo g_CStakeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CStake_ctor_FUN_004a4880,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CStake_dtor_FUN_004a48a0,
    .instance_size = (int)sizeof(CStake),
    .class_name = (char *)s_CStake_005fde14
};
WatcomTypeInfo g_CSparkTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CSpark_ctor_FUN_004a4850,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CSpark_dtor_FUN_004a4870,
    .instance_size = (int)sizeof(CSpark),
    .class_name = (char *)s_CSpark_005fde04
};
WatcomTypeInfo g_CFireflyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CFirefly_ctor_FUN_004a4820,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CFirefly_dtor_FUN_004a4840,
    .instance_size = (int)sizeof(CFirefly),
    .class_name = (char *)s_CFirefly_005fddf4
};
WatcomTypeInfo g_CMuzzleFlashTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CMuzzleFlash_ctor_FUN_004a4770,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CMuzzleFlash_dtor_FUN_004a4780,
    .instance_size = (int)sizeof(CMuzzleFlash),
    .class_name = (char *)s_CMuzzleFlash_005fddd4
};
WatcomTypeInfo g_CGlassParticleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CGlassParticle_ctor_FUN_004a4730,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CGlassParticle_dtor_FUN_004a4760,
    .instance_size = (int)sizeof(CGlassParticle),
    .class_name = (char *)s_CGlassParticle_005fddb4
};
WatcomTypeInfo g_CBulletTrailTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CBulletTrail_ctor_FUN_004a4710,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CBulletTrail_dtor_FUN_004a4720,
    .instance_size = (int)sizeof(CBulletTrail),
    .class_name = (char *)s_CBulletTrail_005fdd94
};
WatcomTypeInfo g_CFireballTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CFireball_ctor_FUN_004a47f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CFireball_dtor_FUN_004a4810,
    .instance_size = (int)sizeof(CFireball),
    .class_name = (char *)s_CFireball_005fdd74
};
WatcomTypeInfo g_CRockTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CRock_ctor_FUN_004a47c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CRock_dtor_FUN_004a47e0,
    .instance_size = (int)sizeof(CRock),
    .class_name = (char *)s_CRock_005fdd64
};
WatcomTypeInfo g_CLeafTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLeaf_ctor_FUN_004a4790,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLeaf_dtor_FUN_004a47b0,
    .instance_size = (int)sizeof(CLeaf),
    .class_name = (char *)s_CLeaf_005fdd54
};
WatcomTypeInfo g_CLaserBeamTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLaserBeam_ctor_FUN_004a46f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLaserBeam_dtor_FUN_004a4700,
    .instance_size = (int)sizeof(CLaserBeam),
    .class_name = (char *)s_CLaserBeam_005fdd34
};
WatcomTypeInfo g_CExplosionTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CExplosion_ctor_FUN_0049c670,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CExplosion_dtor_FUN_004a46e0,
    .instance_size = (int)sizeof(CExplosion),
    .class_name = (char *)s_CExplosion_005fdd14
};
WatcomTypeInfo g_CTossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CToss_ctor_FUN_0049ce90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CToss_dtor_FUN_004a46c0,
    .instance_size = (int)sizeof(CToss),
    .class_name = (char *)s_CToss_005fdd04
};
WatcomTypeInfo g_CCraterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CCrater_ctor_FUN_004a4690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CCrater_dtor_FUN_004a46b0,
    .instance_size = (int)sizeof(CCrater),
    .class_name = (char *)s_CCrater_005fdcf4
};
WatcomTypeInfo g_CGunFlameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CGunFlame_ctor_FUN_004a4670,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CGunFlame_dtor_FUN_004a4680,
    .instance_size = (int)sizeof(CGunFlame),
    .class_name = (char *)s_CGunFlame_005fdcd4
};
WatcomTypeInfo g_CLightningBoltTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CLightningBolt_ctor_FUN_004a4650,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CLightningBolt_dtor_FUN_004a4660,
    .instance_size = (int)sizeof(CLightningBolt),
    .class_name = (char *)s_CLightningBolt_005fdcb4
};
WatcomTypeInfo g_CTrailTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CTrail_ctor_FUN_004a45e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CTrail_dtor_FUN_004a45f0,
    .instance_size = (int)sizeof(CTrail),
    .class_name = (char *)s_CTrail_005fdca4
};
WatcomTypeInfo g_CShellTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CShell_ctor_FUN_004a45b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CShell_dtor_FUN_004a45d0,
    .instance_size = (int)sizeof(CShell),
    .class_name = (char *)s_CShell_005fdc94
};
WatcomTypeInfo g_CPopcornTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CPopcorn_ctor_FUN_004a4580,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CPopcorn_dtor_FUN_004a45a0,
    .instance_size = (int)sizeof(CPopcorn),
    .class_name = (char *)s_CPopcorn_005fdc84
};
WatcomTypeInfo g_CRainDropTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CRainDrop_ctor_FUN_004a4550,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CRainDrop_dtor_FUN_004a4570,
    .instance_size = (int)sizeof(CRainDrop),
    .class_name = (char *)s_CRainDrop_005fdc64
};
WatcomTypeInfo g_CRingTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CRing_ctor_FUN_004a4600,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CRing_dtor_FUN_004a4640,
    .instance_size = (int)sizeof(CRing),
    .class_name = (char *)s_CRing_005fdc54
};
WatcomTypeInfo g_CDeformableModelInstanceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80,
    .instance_size = (int)sizeof(CDeformableModelInstance),
    .class_name = (char *)s_CDeformableModelInstance_005fdc34
};
WatcomTypeInfo g_CFirestaffTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_firestff_cpp_CFirestaff_ctor_FUN_004a4ad0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005a2870,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_firestff_cpp_CFirestaff_dtor_FUN_004a58c0,
    .instance_size = (int)sizeof(CFirestaff),
    .class_name = (char *)s_CFirestaff_005fde60
};

// undefined1
undefined1 DAT_005daf80 = 0x00;

// undefined1*
undefined1* g_CBirdVTable = (undefined1*)unkafter_bird_cpp_FUN_0040fac0;
undefined1* g_CAudioRecPuzzleVTable = (undefined1*)unkafter_alphabit_cpp_CAudioRecPuzzle_dtor_FUN_00411bb0;
undefined1* g_CChemPuzzleVTable = (undefined1*)unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00413240;
undefined1* g_CBoneGuyVTable = (undefined1*)core_boneguy_cpp_FUN_00417630;
undefined1* g_CSkeleton_ForestVTable = (undefined1*)core_boneguy_cpp_FUN_00417630;
undefined1* g_CSkeleton_IndianVTable = (undefined1*)core_boneguy_cpp_FUN_00417630;
undefined1* g_CSkeleton_DemonVTable = (undefined1*)core_boneguy_cpp_FUN_00417630;
undefined1* g_CBaalSkelVTable = (undefined1*)core_boneguy_cpp_FUN_00417630;
undefined1* g_CBugsVTable = (undefined1*)core_bugs_cpp_FUN_00421060;
undefined1* g_CCarvedVTable = (undefined1*)core_carved_cpp_FUN_00425ab0;
undefined1* g_CAsciiArmorVTable = (undefined1*)support_codec_cpp_CAsciiArmor_dtor_FUN_00441e20;
undefined1* g_CAsciiUnarmorVTable = (undefined1*)support_codec_cpp_CAsciiUnarmor_dtor_FUN_00441dd0;
undefined1* g_CInStreamPipeVTable = (undefined1*)support_codec_cpp_CInStreamPipe_dtor_FUN_004418c0;
undefined1* g_CConstructVTable = (undefined1*)core_constrct_cpp_FUN_004425f0;
undefined1* g_CConstruct_BoneVTable = (undefined1*)core_constrct_cpp_FUN_004425f0;
undefined1* g_CConstruct_RedVTable = (undefined1*)core_constrct_cpp_FUN_004425f0;
undefined1* g_CZombieCowVTable = (undefined1*)core_cow_cpp_FUN_00444fd0;
undefined1* g_CDemonCameraVTable = (undefined1*)core_dcamera_cpp_CDemonCamera_dtor_FUN_00448c40;
undefined1* g_CDemnfolkVTable = (undefined1*)core_demnfolk_cpp_FUN_00454d20;
undefined1* g_CZombieDogVTable = (undefined1*)core_dog_cpp_FUN_00462790;
undefined1* g_CDog_ForestVTable = (undefined1*)core_dog_cpp_FUN_00462790;
undefined1* g_CDemonDogVTable = (undefined1*)core_dog_cpp_FUN_00462790;
undefined1* g_CEtherealDogVTable = (undefined1*)core_dog_cpp_FUN_00462790;
undefined1* g_CStrListVTable = (undefined1*)shape_edittool_cpp_CStrList_dtor_FUN_00481f40;
undefined1* g_CPickListVTable = (undefined1*)shape_edittool_cpp_CPickList_dtor_FUN_004832b0;
undefined1* g_CRainDropVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;
undefined1* g_CPopcornVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;
undefined1* g_CShellVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;
undefined1* g_CGlassParticleVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;
undefined1* g_CLeafVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;
undefined1* g_CRockVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;
undefined1* g_CFireballVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;
undefined1* g_CFireflyVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;
undefined1* g_CSparkVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00509e40;

// void*
void* g_CDemonActorVTable = (void*)core_actor_cpp_FUN_00408890;
void* g_CAmmoVTable = (void*)core_ammo_cpp_FUN_0040def0;
void* g_CAmmo_ManaVTable = (void*)core_ammo_cpp_FUN_0040def0;
void* g_CAmmo_ManaLargeVTable = (void*)core_ammo_cpp_FUN_0040def0;
void* g_CAmmo_BulletVTable = (void*)core_ammo_cpp_FUN_0040def0;
void* g_CBodyPartVTable = (void*)core_bodypart_cpp_CBodyPart_setup_FUN_00414f60;

