#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5F0000
// =============================================================================

// WatcomDestructorCall
WatcomDestructorCall DAT_005FC8F0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_arrdtor4_FUN_004188f0,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_007c3984
};
WatcomDestructorCall DAT_005FC8FC = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_arrdtor5_FUN_004188d0,
    .object_instance = (void *)&CAlphaBitmap_ARRAY_007c39d4
};
WatcomDestructorCall DAT_005FC908 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_alphabit_cpp_CAudioRecPuzzle_dtor_FUN_00415df0,
    .object_instance = (void *)&g_CAudioRecPuzzleInstance
};
WatcomDestructorCall DAT_005FC914 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00417630,
    .object_instance = (void *)&g_CChemPuzzleInstance
};
WatcomDestructorCall DAT_005FCE20 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_00423810,
    .object_instance = (void *)&CDemonFilter_ARRAY_007c5098
};
WatcomDestructorCall g_CConsoleDestructorCall = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_console_cpp_CConsole_dtor_FUN_00445420,
    .object_instance = (void *)&g_CConsoleInstance
};
WatcomDestructorCall DAT_005FE5F0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)support_codec_cpp_CLZWDecompress_dtor_FUN_00444210,
    .object_instance = (void *)&g_CLZWDecompressInstance
};
WatcomDestructorCall DAT_005FE950 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_boxactor_cpp_CDemonFilter_arrdtor8_FUN_00423810,
    .object_instance = (void *)&CDemonFilter_ARRAY_0152c39c
};
WatcomDestructorCall DAT_005FE95C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CDemonFilter_arrdtor4_FUN_0045dfe0,
    .object_instance = (void *)&CDemonFilter_ARRAY_0152c5fc
};
WatcomDestructorCall DAT_005FE968 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CFilterCache_dtor_FUN_0045d750,
    .object_instance = (void *)&g_CFilterCacheInstance
};
WatcomDestructorCall DAT_005FE974 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dfilter_cpp_CFilterFX_dtor_FUN_0045dd70,
    .object_instance = (void *)&g_CFilterFXInstance
};
WatcomDestructorCall DAT_005FEC30 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_arrdtor256_FUN_00468990,
    .object_instance = (void *)&g_CKeyFramedModelPool
};
WatcomDestructorCall DAT_005FF7E0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CEditorTools_dtor_FUN_00493bd0,
    .object_instance = (void *)&g_CEditorToolsInstance
};
WatcomDestructorCall DAT_005FFF10 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CStake_arrdtor256_FUN_004b79b0,
    .object_instance = (void *)&g_StakePool
};
WatcomDestructorCall DAT_005FFF1C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CSpark_arrdtor256_FUN_004b7990,
    .object_instance = (void *)&g_SparkPool
};
WatcomDestructorCall DAT_005FFF28 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CFirefly_arrdtor64_FUN_004b7970,
    .object_instance = (void *)&CFirefly_ARRAY_01c9dab8
};
WatcomDestructorCall DAT_005FFF34 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CGlassParticle_arrdtor256_FUN_004b7950,
    .object_instance = (void *)&g_GlassParticlePool
};
WatcomDestructorCall DAT_005FFF40 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CFireball_arrdtor64_FUN_004b7930,
    .object_instance = (void *)&g_FireballPool
};
WatcomDestructorCall DAT_005FFF4C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CRock_arrdtor64_FUN_004b7910,
    .object_instance = (void *)&g_RockPool
};
WatcomDestructorCall DAT_005FFF58 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CLeaf_arrdtor64_FUN_004b78f0,
    .object_instance = (void *)&CLeaf_ARRAY_01cadb68
};
WatcomDestructorCall DAT_005FFF64 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CToss_arrdtor20_FUN_004b78d0,
    .object_instance = (void *)&g_TossPool
};
WatcomDestructorCall DAT_005FFF70 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CShell_arrdtor50_FUN_004b78b0,
    .object_instance = (void *)&g_ShellPool
};
WatcomDestructorCall DAT_005FFF7C = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CPopcorn_arrdtor256_FUN_004b7890,
    .object_instance = (void *)&g_PopcornPool
};
WatcomDestructorCall DAT_005FFF88 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fire_cpp_CRainDrop_arrdtor256_FUN_004b7870,
    .object_instance = (void *)&g_RainDropPool
};

// WatcomTypeInfo
WatcomTypeInfo g_CInStreamFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)unkclass_instream_cpp_CInStreamFile_copy_FUN_005a0a20,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50,
    .instance_size = (int)sizeof(CInStreamFile),
    .class_name = (char *)s_CInStreamFile_006104d4
};
WatcomTypeInfo g_COutStreamFileTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_ctor_FUN_005a17d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_copy_FUN_005a1830,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860,
    .instance_size = (int)sizeof(COutStreamFile),
    .class_name = (char *)s_COutStreamFile_006104b4
};
WatcomTypeInfo g_CDemonActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_CDemonActor_ctor_FUN_004085c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_CDemonActor_dtor_FUN_00408730,
    .instance_size = (int)sizeof(CDemonActor),
    .class_name = (char *)s_CDemonActor_00610874
};
WatcomTypeInfo g_CVectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_CVector3f_ctor_FUN_0040cfe0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_CVector3f_dtor_FUN_0040d090,
    .instance_size = (int)sizeof(CVector3f),
    .class_name = (char *)s_CVector_00610864
};
WatcomTypeInfo g_CAmmoTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammo_cpp_CAmmo_dtor_FUN_0040e000,
    .instance_size = (int)sizeof(CAmmo),
    .class_name = (char *)s_CAmmo_0061088c
};
WatcomTypeInfo g_CAmmoBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e0b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammobox_cpp_CAmmoBox_dtor_FUN_0040e520,
    .instance_size = (int)sizeof(CAmmoBox),
    .class_name = (char *)s_CAmmoBox_006108a0
};
WatcomTypeInfo g_CAnvilTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_anvil_cpp_CAnvil_ctor_FUN_0040e5d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_anvil_cpp_CAnvil_dtor_FUN_0040e930,
    .instance_size = (int)sizeof(CAnvil),
    .class_name = (char *)s_CAnvil_006108b4
};
WatcomTypeInfo g_CArmourTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_armour_cpp_CArmour_ctor_FUN_0040e9e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CArmour_dtor_FUN_0040ecc0,
    .instance_size = (int)sizeof(CArmour),
    .class_name = (char *)s_CArmour_006108e8
};
WatcomTypeInfo g_CEnemyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CEnemy_dtor_FUN_0040ed50,
    .instance_size = (int)sizeof(CEnemy),
    .class_name = (char *)s_CEnemy_006108d8
};
WatcomTypeInfo g_CFlameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flame_cpp_CFlame_ctor_FUN_004b7a30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CFlame_dtor_FUN_0040ede0,
    .instance_size = (int)sizeof(CFlame),
    .class_name = (char *)s_CFlame_006108c8
};
WatcomTypeInfo g_CBackgroundActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040eeb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_backgnd_cpp_CBackgroundActor_dtor_FUN_0040f130,
    .instance_size = (int)sizeof(CBackgroundActor),
    .class_name = (char *)s_CBackgroundActor_006108fc
};
WatcomTypeInfo g_CBaronWeaponTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_baron_cpp_CBaronWeapon_ctor_FUN_00410460,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_baron_cpp_CBaronWeapon_dtor_FUN_00410730,
    .instance_size = (int)sizeof(CBaronWeapon),
    .class_name = (char *)s_CBaronWeapon_00610944
};
WatcomTypeInfo g_CBaronTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_baron_cpp_CBaron_ctor_FUN_0040f210,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_baron_cpp_CBaron_dtor_FUN_00410780,
    .instance_size = (int)sizeof(CBaron),
    .class_name = (char *)s_CBaron_00610934
};
WatcomTypeInfo g_CBarrierTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_barrier_cpp_CBarrier_ctor_FUN_00410830,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_barrier_cpp_CBarrier_dtor_FUN_00410a00,
    .instance_size = (int)sizeof(CBarrier),
    .class_name = (char *)s_CBarrier_0061095c
};
WatcomTypeInfo g_CBatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bat_cpp_CBat_ctor_FUN_00410b50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bat_cpp_CBat_dtor_FUN_00411140,
    .instance_size = (int)sizeof(CBat),
    .class_name = (char *)s_CBat_00610970
};
WatcomTypeInfo g_CBatCreatureTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_batcreat_cpp_CBatCreature_ctor_FUN_00411210,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_batcreat_cpp_CBatCreature_dtor_FUN_00412690,
    .instance_size = (int)sizeof(CBatCreature),
    .class_name = (char *)s_CBatCreature_00610980
};
WatcomTypeInfo g_CBatmanTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_batman_cpp_CBatman_ctor_FUN_00412780,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_batman_cpp_CBatman_dtor_FUN_00414320,
    .instance_size = (int)sizeof(CBatman),
    .class_name = (char *)s_CBatman_00610998
};
WatcomTypeInfo g_CBatteryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_battery_cpp_CBattery_ctor_FUN_00414410,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_battery_cpp_CBattery_dtor_FUN_00414640,
    .instance_size = (int)sizeof(CBattery),
    .class_name = (char *)s_CBattery_006109ac
};
WatcomTypeInfo g_CBeastTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_beast_cpp_CBeast_ctor_FUN_004146f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_beast_cpp_CBeast_dtor_FUN_00414900,
    .instance_size = (int)sizeof(CBeast),
    .class_name = (char *)s_CBeast_006109c0
};
WatcomTypeInfo g_CBiggsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_biggs_cpp_CBiggs_ctor_FUN_004149f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_biggs_cpp_CBiggs_dtor_FUN_004150f0,
    .instance_size = (int)sizeof(CBiggs),
    .class_name = (char *)s_CBiggs_006109d4
};
WatcomTypeInfo g_CBirdTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_bird_cpp_CBird_ctor_FUN_004151f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_bird_cpp_CBird_dtor_FUN_004159f0,
    .instance_size = (int)sizeof(CBird),
    .class_name = (char *)s_CBird_006109fc
};
WatcomTypeInfo g_CCharacterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_CCharacter_ctor_FUN_0042c080,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_charactr_cpp_CCharacter_dtor_FUN_00415a90,
    .instance_size = (int)sizeof(CCharacter),
    .class_name = (char *)s_CCharacter_006109e8
};
WatcomTypeInfo g_CAlphaBitmapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0,
    .instance_size = (int)sizeof(CAlphaBitmap),
    .class_name = (char *)s_CAlphaBitmap_00610ab9
};
WatcomTypeInfo g_CAudioRecPuzzleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_alphabit_cpp_CAudioRecPuzzle_ctor_FUN_00415d90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_alphabit_cpp_CAudioRecPuzzle_dtor_FUN_00415df0,
    .instance_size = (int)sizeof(CAudioRecPuzzle),
    .class_name = (char *)s_CAudioRecPuzzle_00610aa2
};
WatcomTypeInfo g_buttonStructTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_superopt_cpp_buttonStruct_ctor_FUN_00418870,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_superopt_cpp_buttonStruct_dtor_FUN_00418880,
    .instance_size = 0x0000002C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_buttonStruct_CAudioRecPu_00610a7d
};
WatcomTypeInfo g_CChemPuzzleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_superopt_cpp_CChemPuzzle_ctor_FUN_004175f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00417630,
    .instance_size = (int)sizeof(CChemPuzzle),
    .class_name = (char *)s_CChemPuzzle_00610a6a
};
WatcomTypeInfo g_SBodyPartModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b170,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SBodyPartModel),
    .class_name = (char *)s_SBodyPartModel_00610b00
};
WatcomTypeInfo g_SBodyPartFireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b130,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b150,
    .instance_size = (int)sizeof(SBodyPartFire),
    .class_name = (char *)s_SBodyPartFire_00610ae8
};
WatcomTypeInfo g_CBodyPartTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_CBodyPart_ctor_FUN_00418b40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_CBodyPart_dtor_FUN_00418c70,
    .instance_size = (int)sizeof(CBodyPart),
    .class_name = (char *)s_CBodyPart_00610ad4
};
WatcomTypeInfo g_SBoneGuyBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_SBoneGuyBox_ctor_FUN_0041d8e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SBoneGuyBox),
    .class_name = (char *)s_SBoneGuyBox_00610b2c
};
WatcomTypeInfo g_CBoneGuyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_CBoneGuy_ctor_FUN_0041b750,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boneguy_cpp_CBoneGuy_dtor_FUN_0041d850,
    .instance_size = (int)sizeof(CBoneGuy),
    .class_name = (char *)s_CBoneGuy_00610b1c
};
WatcomTypeInfo g_SScrapeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_box_cpp_SScrape_ctor_FUN_004204f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SScrape),
    .class_name = (char *)s_SScrape_00610b3f
};
WatcomTypeInfo g_CDemonFilterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CDemonFilter_ctor_FUN_0045d950,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CDemonFilter_dtor_FUN_0045d9a0,
    .instance_size = (int)sizeof(CDemonFilter),
    .class_name = (char *)s_CDemonFilter_00610b90
};
WatcomTypeInfo g_CLightActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boxactor_cpp_CLightActor_ctor_FUN_00422ed0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boxactor_cpp_CLightActor_dtor_FUN_00423720,
    .instance_size = (int)sizeof(CLightActor),
    .class_name = (char *)s_CLightActor_00610b7c
};
WatcomTypeInfo g_CBoxActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boxactor_cpp_CBoxActor_ctor_FUN_00421ca0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boxactor_cpp_CBoxActor_dtor_FUN_004237a0,
    .instance_size = (int)sizeof(CBoxActor),
    .class_name = (char *)s_CBoxActor_00610b68
};
WatcomTypeInfo g_CBrideTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bride_cpp_CBride_ctor_FUN_004238c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bride_cpp_CBride_dtor_FUN_00424e90,
    .instance_size = (int)sizeof(CBride),
    .class_name = (char *)s_CBride_00610ba8
};
WatcomTypeInfo g_SBugTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bugs_cpp_SBug_ctor_FUN_00428210,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SBug),
    .class_name = (char *)s_SBug_00610bec
};
WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CKeyFramedModelInstance_dtor_FUN_004b7860,
    .instance_size = (int)sizeof(CKeyFramedModelInstance),
    .class_name = (char *)s_CKeyFramedModelInstance_00610bcc
};
WatcomTypeInfo g_CBugsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bugs_cpp_CBugs_ctor_FUN_00424f80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bugs_cpp_CBugs_dtor_FUN_00428180,
    .instance_size = (int)sizeof(CBugs),
    .class_name = (char *)s_CBugs_00610bbc
};
WatcomTypeInfo g_CCameraViewTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_camview_cpp_CCameraView_ctor_FUN_00428220,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_camview_cpp_CCameraView_dtor_FUN_00428240,
    .instance_size = (int)sizeof(CCameraView),
    .class_name = (char *)s_CCameraView_00610bf8
};
WatcomTypeInfo g_CCarvedTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_carved_cpp_CCarved_ctor_FUN_004286d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_carved_cpp_CCarved_dtor_FUN_0042bf50,
    .instance_size = (int)sizeof(CCarved),
    .class_name = (char *)s_CCarved_00610c10
};
WatcomTypeInfo g_SFireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_SFire_ctor_FUN_004355e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SFire),
    .class_name = (char *)s_SFire_00610d04
};
WatcomTypeInfo g_SChainVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_chain_cpp_SChainVertex_ctor_FUN_00436f10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SChainVertex),
    .class_name = (char *)s_SChainVertex_00610d28
};
WatcomTypeInfo g_CChainTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_chain_cpp_CChain_ctor_FUN_00435660,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_chain_cpp_CChain_dtor_FUN_00436ec0,
    .instance_size = (int)sizeof(CChain),
    .class_name = (char *)s_CChain_00610d18
};
WatcomTypeInfo g_SClothVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cloth_cpp_SClothVertex_ctor_FUN_00442450,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SClothVertex),
    .class_name = (char *)s_SClothVertex_00610d5e
};
WatcomTypeInfo g_SClothBoneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cloth_cpp_SClothBone_ctor_FUN_00442440,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SClothBone),
    .class_name = (char *)s_SClothBone_00610d4c
};
WatcomTypeInfo g_CCodecTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CCodec_ctor_FUN_00442ba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CCodec_dtor_FUN_00442bb0,
    .instance_size = (int)sizeof(CCodec),
    .class_name = (char *)s_CCodec_006110c4
};
WatcomTypeInfo g_COutStreamMemoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_ctor_FUN_005a1a90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_copy_FUN_005a1b30,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60,
    .instance_size = (int)sizeof(COutStreamMemory),
    .class_name = (char *)s_COutStreamMemory_006110a4
};
WatcomTypeInfo g_CInStreamMemoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_ctor_FUN_005a1130,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_copy_FUN_005a11b0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_trstream_cpp_CInStreamMemory_dtor_FUN_005a11e0,
    .instance_size = (int)sizeof(CInStreamMemory),
    .class_name = (char *)s_CInStreamMemory_00611084
};
WatcomTypeInfo g_CInStreamPipeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CInStreamPipe_ctor_FUN_00443b90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60,
    .instance_size = (int)sizeof(CInStreamPipe),
    .class_name = (char *)s_CInStreamPipe_00611064
};
WatcomTypeInfo g_CCheesyCipherTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CCheesyCipher_dtor_FUN_00444120,
    .instance_size = (int)sizeof(CCheesyCipher),
    .class_name = (char *)s_CCheesyCipher_00611044
};
WatcomTypeInfo g_CAsciiUnarmorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CAsciiUnarmor_ctor_FUN_00443990,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CAsciiUnarmor_dtor_FUN_00444170,
    .instance_size = (int)sizeof(CAsciiUnarmor),
    .class_name = (char *)s_CAsciiUnarmor_00611024
};
WatcomTypeInfo g_CAsciiArmorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CAsciiArmor_ctor_FUN_00443890,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CAsciiArmor_dtor_FUN_004441c0,
    .instance_size = (int)sizeof(CAsciiArmor),
    .class_name = (char *)s_CAsciiArmor_00611004
};
WatcomTypeInfo g_CLZWDecompressTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CLZWDecompress_dtor_FUN_00444210,
    .instance_size = (int)sizeof(CLZWDecompress),
    .class_name = (char *)s_CLZWDecompress_00610fe4
};
WatcomTypeInfo g_CLZWCompressTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CLZWCompress_dtor_FUN_00444270,
    .instance_size = (int)sizeof(CLZWCompress),
    .class_name = (char *)s_CLZWCompress_00610fc4
};
WatcomTypeInfo g_CColonelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_colonel_cpp_CColonel_ctor_FUN_00444330,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_colonel_cpp_CColonel_dtor_FUN_00445320,
    .instance_size = (int)sizeof(CColonel),
    .class_name = (char *)s_CColonel_006110d8
};
WatcomTypeInfo g_CConsoleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_console_cpp_CConsole_dtor_FUN_00445420,
    .instance_size = (int)sizeof(CConsole),
    .class_name = (char *)s_CConsole_00611124
};
WatcomTypeInfo g_CConstructTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_constrct_cpp_CConstruct_ctor_FUN_00445820,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_construc_cpp_CConstruct_dtor_FUN_00447660,
    .instance_size = (int)sizeof(CConstruct),
    .class_name = (char *)s_CConstruct_00611150
};
WatcomTypeInfo g_CConveyorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_conveyor_cpp_CConveyor_ctor_FUN_00447750,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_conveyor_cpp_CConveyor_dtor_FUN_00447b70,
    .instance_size = (int)sizeof(CConveyor),
    .class_name = (char *)s_CConveyor_0061117c
};
WatcomTypeInfo g_CPlatformTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_platfrm_cpp_CPlatform_ctor_FUN_00539400,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_conveyor_cpp_CPlatform_dtor_FUN_00447be0,
    .instance_size = (int)sizeof(CPlatform),
    .class_name = (char *)s_CPlatform_00611168
};
WatcomTypeInfo g_CZombieCowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cow_cpp_CZombieCow_ctor_FUN_004483a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_cow_cpp_CZombieCow_dtor_FUN_00448f20,
    .instance_size = (int)sizeof(CZombieCow),
    .class_name = (char *)s_CZombieCow_00611194
};
WatcomTypeInfo g_CCrateTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_crate_cpp_CCrate_ctor_FUN_00449010,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_crate_cpp_CCrate_dtor_FUN_004496c0,
    .instance_size = (int)sizeof(CCrate),
    .class_name = (char *)s_CCrate_006111ac
};
WatcomTypeInfo g_CCrossbowTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_crossbow_cpp_CCrossbow_ctor_FUN_00449770,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_crossbow_cpp_CCrossbow_dtor_FUN_0044a120,
    .instance_size = (int)sizeof(CCrossbow),
    .class_name = (char *)s_CCrossbow_006111c0
};
WatcomTypeInfo g_SCollisionInfoTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_curtain_cpp_SCollisionInfo_dtor_FUN_0044c570,
    .instance_size = (int)sizeof(SCollisionInfo),
    .class_name = (char *)s_SCollisionInfo_00611200
};
WatcomTypeInfo g_SCurtainVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_curtain_cpp_SCurtainVertex_ctor_FUN_0044c560,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SCurtainVertex),
    .class_name = (char *)s_SCurtainVertex_006111e8
};
WatcomTypeInfo g_CCurtainTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_curtain_cpp_CCurtain_ctor_FUN_0044a210,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_curtain_cpp_CCurtain_dtor_FUN_0044c510,
    .instance_size = (int)sizeof(CCurtain),
    .class_name = (char *)s_CCurtain_006111d8
};
WatcomTypeInfo g_CDemonCameraTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dcamera_cpp_CDemonCamera_ctor_FUN_0044caa0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00,
    .instance_size = (int)sizeof(CDemonCamera),
    .class_name = (char *)s_CDemonCamera_006112a0
};
WatcomTypeInfo g_CDemnfolkTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_demnfolk_cpp_CDemnfolk_ctor_FUN_00458a10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_demnfolk_cpp_CDemnfolk_dtor_FUN_0045d0e0,
    .instance_size = (int)sizeof(CDemnfolk),
    .class_name = (char *)s_CDemnfolk_006112b8
};
WatcomTypeInfo g_CActorDestinationTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dest_cpp_CActorDestination_ctor_FUN_0045d1f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dest_cpp_CActorDestination_dtor_FUN_0045d670,
    .instance_size = (int)sizeof(CActorDestination),
    .class_name = (char *)s_CActorDestination_006112d0
};
WatcomTypeInfo g_CFilterCacheTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CFilterCache_ctor_FUN_0045d740,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CFilterCache_dtor_FUN_0045d750,
    .instance_size = (int)sizeof(CFilterCache),
    .class_name = (char *)s_CFilterCache_00611378
};
WatcomTypeInfo g_CFilterFXTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CFilterFX_ctor_FUN_0045dd50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CFilterFX_dtor_FUN_0045dd70,
    .instance_size = (int)sizeof(CFilterFX),
    .class_name = (char *)s_CFilterFX_00611364
};
WatcomTypeInfo g_SDjienBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_djien_cpp_SDjienBox_ctor_FUN_00462440,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .instance_size = (int)sizeof(SDjienBox),
    .class_name = (char *)s_SDjienBox_0061228c
};
WatcomTypeInfo g_CDjienTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)unkafter_djien_cpp_CDjien_ctor_FUN_0045fe10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)unkafter_djien_cpp_CDjien_dtor_FUN_004623b0,
    .instance_size = (int)sizeof(CDjien),
    .class_name = (char *)s_CDjien_0061227c
};
WatcomTypeInfo g_CDemonLightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dlight_cpp_CDemonLight_dtor_FUN_00462530,
    .instance_size = (int)sizeof(CDemonLight),
    .class_name = (char *)s_CDemonLight_00612494
};
WatcomTypeInfo g_CKeyFramedModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00466880,
    .instance_size = (int)sizeof(CKeyFramedModel),
    .class_name = (char *)s_CKeyFramedModel_006124b7
};
WatcomTypeInfo g_CDocTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_doc_cpp_CDoc_ctor_FUN_00468c80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_doc_cpp_CDoc_dtor_FUN_00476700,
    .instance_size = (int)sizeof(CDoc),
    .class_name = (char *)s_CDoc_006124d4
};
WatcomTypeInfo g_CZombieDogTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dog_cpp_CZombieDog_ctor_FUN_004767b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dog_cpp_CZombieDog_dtor_FUN_00477180,
    .instance_size = (int)sizeof(CZombieDog),
    .class_name = (char *)s_CZombieDog_006124e4
};
WatcomTypeInfo g_CDoorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_door_cpp_CDoor_ctor_FUN_00477270,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_door_cpp_CDoor_dtor_FUN_00478d70,
    .instance_size = (int)sizeof(CDoor),
    .class_name = (char *)s_CDoor_006124fc
};
WatcomTypeInfo g_CFileFinderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_dosio_cpp_CFileFinder_ctor_FUN_00479320,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_dosio_cpp_CFileFinder_dtor_FUN_00479340,
    .instance_size = (int)sizeof(CFileFinder),
    .class_name = (char *)s_CFileFinder_00612510
};
WatcomTypeInfo g_SFreakyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dracbrid_cpp_SFreaky_ctor_FUN_0047e150,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dracbrid_cpp_SFreaky_dtor_FUN_0047e170,
    .instance_size = (int)sizeof(SFreaky),
    .class_name = (char *)s_SFreaky_00612544
};
WatcomTypeInfo g_CDraculaBrideTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dracbrid_cpp_CDraculaBride_ctor_FUN_0047b0b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dracbrid_cpp_CDraculaBride_dtor_FUN_0047e180,
    .instance_size = (int)sizeof(CDraculaBride),
    .class_name = (char *)s_CDraculaBride_0061252c
};
WatcomTypeInfo g_CDripTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_drip_cpp_CDrip_ctor_FUN_00485370,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_drip_cpp_CDrip_dtor_FUN_00485ba0,
    .instance_size = (int)sizeof(CDrip),
    .class_name = (char *)s_CDrip_006144b0
};
WatcomTypeInfo g_CDroneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_drone_cpp_CDrone_ctor_FUN_00485c50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_drone_cpp_CDrone_dtor_FUN_004866c0,
    .instance_size = (int)sizeof(CDrone),
    .class_name = (char *)s_CDrone_006144c4
};
WatcomTypeInfo g_CDemonCubeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dcube_cpp_CDemonCube_ctor_FUN_00457b60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dcube_cpp_CDemonCube_dtor_FUN_00457ba0,
    .instance_size = (int)sizeof(CDemonCube),
    .class_name = (char *)s_CDemonCube_0061ab74
};
WatcomTypeInfo g_CDemonTriangleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dtri_cpp_CDemonTriangle_ctor_FUN_00492450,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dtri_cpp_CDemonTriangle_dtor_FUN_00492460,
    .instance_size = (int)sizeof(CDemonTriangle),
    .class_name = (char *)s_CDemonTriangle_0061ab86
};
WatcomTypeInfo g_CDynamiteTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dynamite_cpp_CDynamite_ctor_FUN_004924e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dynamite_cpp_CDynamite_dtor_FUN_004928d0,
    .instance_size = (int)sizeof(CDynamite),
    .class_name = (char *)s_CDynamite_0061aba0
};
WatcomTypeInfo g_CEditorToolsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEditorTools_ctor_FUN_00493ba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CEditorTools_dtor_FUN_00493bd0,
    .instance_size = (int)sizeof(CEditorTools),
    .class_name = (char *)s_CEditorTools_0061b444
};
WatcomTypeInfo g_CEdButtonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEdButton_ctor_FUN_0049d480,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CEdButton_dtor_FUN_0049d4b0,
    .instance_size = (int)sizeof(CEdButton),
    .class_name = (char *)s_CEdButton_0061b424
};
WatcomTypeInfo g_CStrListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_ctor_FUN_00499380,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_copy_FUN_004993f0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_dtor_FUN_004993a0,
    .instance_size = (int)sizeof(CStrList),
    .class_name = (char *)s_CStrList_0061b414
};
WatcomTypeInfo g_CPickListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CPickList_ctor_FUN_0049a620,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CPickList_dtor_FUN_0049a710,
    .instance_size = (int)sizeof(CPickList),
    .class_name = (char *)s_CPickList_0061b3f4
};
WatcomTypeInfo g_CElephantGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_elephant_cpp_CElephantGun_ctor_FUN_0049e000,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_elephant_cpp_CElephantGun_dtor_FUN_0049ed90,
    .instance_size = (int)sizeof(CElephantGun),
    .class_name = (char *)s_CElephantGun_0061b45c
};
WatcomTypeInfo g_CEmitterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_emitter_cpp_CEmitter_ctor_FUN_0049ee40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_emitter_cpp_CEmitter_dtor_FUN_004a0390,
    .instance_size = (int)sizeof(CEmitter),
    .class_name = (char *)s_CEmitter_0061b474
};
WatcomTypeInfo g_CFilmReelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_filmreel_cpp_CFilmReel_ctor_FUN_004ab2d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_filmreel_cpp_CFilmReel_dtor_FUN_004ab9f0,
    .instance_size = (int)sizeof(CFilmReel),
    .class_name = (char *)s_CFilmReel_0061bf4c
};
WatcomTypeInfo g_CFilmProjectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_filmreel_cpp_CFilmProjector_ctor_FUN_004ab5c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005bfae6,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_filmreel_cpp_CFilmProjector_dtor_FUN_004aba40,
    .instance_size = (int)sizeof(CFilmProjector),
    .class_name = (char *)s_CFilmProjector_0061bf34
};

// undefined1
undefined1 DAT_005fb2c4 = 0x00;

// undefined1*
undefined1* g_CArmourVTable = (undefined1*)core_armour_cpp_CArmour_setup_FUN_0040ea80;
undefined1* g_CBaronVTable = (undefined1*)core_baron_cpp_FUN_0040f300;
undefined1* g_CBatCreatureVTable = (undefined1*)core_batcreat_cpp_FUN_00411280;
undefined1* g_CBatmanVTable = (undefined1*)core_batman_cpp_FUN_00412840;
undefined1* g_CBeastVTable = (undefined1*)core_beast_cpp_FUN_00414750;
undefined1* g_CBiggsVTable = (undefined1*)core_biggs_cpp_FUN_00414ab0;
undefined1* g_CBirdVTable = (undefined1*)unkafter_bird_cpp_FUN_004152c0;
undefined1* g_CAudioRecPuzzleVTable = (undefined1*)unkafter_alphabit_cpp_CAudioRecPuzzle_dtor_FUN_00415df0;
undefined1* g_CChemPuzzleVTable = (undefined1*)unkafter_superopt_cpp_CChemPuzzle_dtor_FUN_00417630;
undefined1* g_CBoneGuyVTable = (undefined1*)core_boneguy_cpp_FUN_0041b940;
undefined1* g_CBrideVTable = (undefined1*)core_bride_cpp_FUN_00423940;
undefined1* g_CBugsVTable = (undefined1*)core_bugs_cpp_FUN_00425120;
undefined1* g_CCarvedVTable = (undefined1*)core_carved_cpp_FUN_004287e0;
undefined1* g_CAsciiArmorVTable = (undefined1*)support_codec_cpp_CAsciiArmor_dtor_FUN_004441c0;
undefined1* g_CAsciiUnarmorVTable = (undefined1*)support_codec_cpp_CAsciiUnarmor_dtor_FUN_00444170;
undefined1* g_CInStreamPipeVTable = (undefined1*)support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60;
undefined1* g_CColonelVTable = (undefined1*)core_colonel_cpp_FUN_004443a0;
undefined1* g_CConstructVTable = (undefined1*)core_constrct_cpp_FUN_004459c0;
undefined1* g_CZombieCowVTable = (undefined1*)core_cow_cpp_FUN_00448410;
undefined1* g_CDemonCameraVTable = (undefined1*)core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00;
undefined1* g_CDemnfolkVTable = (undefined1*)core_demnfolk_cpp_FUN_00458bc0;
undefined1* g_CDjienVTable = (undefined1*)unkafter_djien_cpp_FUN_0045ff00;
undefined1* g_CDocVTable = (undefined1*)core_doc_cpp_FUN_00469060;
undefined1* g_CZombieDogVTable = (undefined1*)core_dog_cpp_FUN_00476820;
undefined1* g_CDraculaBrideVTable = (undefined1*)core_dracbrid_cpp_FUN_0047b1b0;
undefined1* g_CDroneVTable = (undefined1*)core_drone_cpp_FUN_00485cc0;
undefined1* g_CStrListVTable = (undefined1*)shape_edittool_cpp_CStrList_dtor_FUN_004993a0;
undefined1* g_CPickListVTable = (undefined1*)shape_edittool_cpp_CPickList_dtor_FUN_0049a710;
undefined1* g_CRainDropVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;
undefined1* g_CPopcornVTable = (undefined1*)core_particle_cpp_CParticle_setup_FUN_00532160;

// void*
void* g_CDemonActorVTable = (void*)core_actor_cpp_FUN_00408850;
void* g_CAmmoVTable = (void*)core_ammo_cpp_FUN_0040dc50;
void* g_CBodyPartVTable = (void*)core_bodypart_cpp_CBodyPart_setup_FUN_00419350;
void* g_CCharacterVTable = (void*)core_charactr_cpp_FUN_0042c510;
void* g_CEnemyVTable = (void*)core_enemy_cpp_CEnemy_setup_FUN_004a0510;

