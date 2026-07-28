#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x590000
// =============================================================================

// WatcomTypeInfo
WatcomTypeInfo g_CVectorTypeInfo_005993b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_CVector_ctor_FUN_0040e160,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_actor_cpp_CVector_copy_FUN_0040e2a0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_FUN_0040e170,
    .instance_size = 0x0000000C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CVector_005ace94
};
WatcomTypeInfo g_CDemonActorTypeInfo_005993d0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_FUN_00409d30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0,
    .instance_size = (int)sizeof(CDemonActor),
    .class_name = (char *)s_CDemonActor_005ace74
};
WatcomTypeInfo g_CBoundingBox3D_005993f0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_actor_cpp_FUN_0040e230,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_actor_cpp_CBoundingBox3D_copy_FUN_0040e240,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_CBoundingBox3D_dtor_FUN_0040e290,
    .instance_size = (int)sizeof(CBoundingBox3D),
    .class_name = (char *)s_CBoundingBox3D_005ace54
};
WatcomTypeInfo g_SDamageInfoTypeInfo_00599410 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SDamageInfo_copy_FUN_00511ca0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_actor_cpp_SDamageInfo_dtor_FUN_0040e220,
    .instance_size = (int)sizeof(SDamageInfo),
    .class_name = (char *)s_SDamageInfo_005ace34
};
WatcomTypeInfo g_CAmmoTypeInfo_00599530 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammo_cpp_CAmmo_ctor_FUN_0040eb70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammo_cpp_CAmmo_dtor_FUN_0040ef90,
    .instance_size = (int)sizeof(CAmmo),
    .class_name = (char *)s_CAmmo_005acea8
};
WatcomTypeInfo g_CAmmoBoxTypeInfo_00599650 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ammobox_cpp_FUN_0040f040,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ammobox_cpp_FUN_0040f4b0,
    .instance_size = (int)sizeof(CAmmoBox),
    .class_name = (char *)s_CAmmoBox_005acebc
};
WatcomTypeInfo g_CAnvilTypeInfo_00599770 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_anvil_cpp_FUN_0040f560,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_anvil_cpp_FUN_0040f8b0,
    .instance_size = (int)sizeof(CAnvil),
    .class_name = (char *)s_CAnvil_005aced0
};
WatcomTypeInfo g_CArmourTypeInfo_00599900 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_armour_cpp_FUN_0040f960,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_FUN_0040fc30,
    .instance_size = (int)sizeof(CArmour),
    .class_name = (char *)s_CArmour_005acf14
};
WatcomTypeInfo g_CEnemyTypeInfo_00599920 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_enemy_cpp_CEnemy_ctor_FUN_00479560,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CEnemy_dtor_FUN_0040fcf0,
    .instance_size = (int)sizeof(CEnemy),
    .class_name = (char *)s_CEnemy_005acf04
};
WatcomTypeInfo g_CFlameTypeInfo_00599940 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flame_cpp_CFlame_ctor_FUN_0048cf60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_CFlame_dtor_FUN_0040fdc0,
    .instance_size = (int)sizeof(CFlame),
    .class_name = (char *)s_CFlame_005acef4
};
WatcomTypeInfo g_SFireTypeInfo_00599960 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_SFire_ctor_FUN_0042b690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_armour_cpp_FUN_0040fdb0,
    .instance_size = (int)sizeof(SFire),
    .class_name = (char *)s_SFire_005acee4
};
WatcomTypeInfo g_CBackgroundActorTypeInfo_00599a80 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_backgnd_cpp_FUN_0040fed0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_backgnd_cpp_FUN_004100f0,
    .instance_size = (int)sizeof(CBackgroundActor),
    .class_name = (char *)s_CBackgroundActor_005acf28
};
WatcomTypeInfo g_CBaronWeaponTypeInfo_00599d10 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_baron_cpp_CBaronWeapon_ctor_FUN_00411350,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_baron_cpp_CBaronWeapon_dtor_FUN_00411610,
    .instance_size = 0x00000574 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CBaronWeapon_005acf70
};
WatcomTypeInfo g_CBaronTypeInfo_00599d30 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_baron_cpp_CBaron_ctor_FUN_004101d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_baron_cpp_CBaron_dtor_FUN_00411660,
    .instance_size = (int)sizeof(CBaron),
    .class_name = (char *)s_CBaron_005acf60
};
WatcomTypeInfo g_CBarrierTypeInfo_00599e50 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_barrier_cpp_CBarrier_ctor_FUN_00411710,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_barrier_cpp_FUN_004118c0,
    .instance_size = 0x00000228 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CBarrier_005acf88
};
WatcomTypeInfo g_CBatTypeInfo_00599f70 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bat_cpp_FUN_00411a10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bat_cpp_CStairs_dtor_FUN_00412000,
    .instance_size = (int)sizeof(CBat),
    .class_name = (char *)s_CBat_005acf9c
};
WatcomTypeInfo g_CBatCreatureTypeInfo_0059a110 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_batcreat_cpp_FUN_00412100,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_batcreat_cpp_FUN_004132c0,
    .instance_size = (int)sizeof(CBatCreature),
    .class_name = (char *)s_CBatCreature_005acfac
};
WatcomTypeInfo g_CBatmanTypeInfo_0059a2b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_batman_cpp_CBatman_ctor_FUN_004133e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_batman_cpp_FUN_00414c60,
    .instance_size = (int)sizeof(CBatman),
    .class_name = (char *)s_CBatman_005acfc4
};
WatcomTypeInfo g_CBatteryTypeInfo_0059a3d0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_battery_cpp_FUN_00414d80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_battery_cpp_FUN_00414fa0,
    .instance_size = (int)sizeof(CBattery),
    .class_name = (char *)s_CBattery_005acfd8
};
WatcomTypeInfo g_CBeastTypeInfo_0059a560 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_beast_cpp_FUN_00415050,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_beast_cpp_FUN_00415250,
    .instance_size = (int)sizeof(CBeast),
    .class_name = (char *)s_CBeast_005acfec
};
WatcomTypeInfo g_CBiggsTypeInfo_0059a700 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_biggs_cpp_CBiggs_ctor_FUN_00415370,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_biggs_cpp_FUN_00415a30,
    .instance_size = (int)sizeof(CBiggs),
    .class_name = (char *)s_CBiggs_005ad000
};
WatcomTypeInfo g_SBodyPartModelTypeInfo_0059a820 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartModel_ctor_FUN_004180e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartModel_dtor_FUN_00418100,
    .instance_size = (int)sizeof(SBodyPartModel),
    .class_name = (char *)s_SBodyPartModel_005ad040
};
WatcomTypeInfo g_SBodyPartFireTypeInfo_0059a840 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartFire_ctor_FUN_004180a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_SBodyPartFire_dtor_FUN_004180c0,
    .instance_size = (int)sizeof(SBodyPartFire),
    .class_name = (char *)s_SBodyPartFire_005ad028
};
WatcomTypeInfo g_CBodyPartTypeInfo_0059a860 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40,
    .instance_size = (int)sizeof(CBodyPart),
    .class_name = (char *)s_CBodyPart_005ad014
};
WatcomTypeInfo g_SBoneGuyBoxTypeInfo_0059aa00 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_FUN_0041a4d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boneguy_cpp_FUN_0041a4e0,
    .instance_size = (int)sizeof(SBoneGuyBox),
    .class_name = (char *)s_SBoneGuyBox_005ad06c
};
WatcomTypeInfo g_CBoneGuyTypeInfo_0059aa20 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boneguy_cpp_FUN_00418630,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a400,
    .instance_size = (int)sizeof(CBoneGuy),
    .class_name = (char *)s_CBoneGuy_005ad05c
};
WatcomTypeInfo g_SScrapeTypeInfo_0059aa60 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_box_cpp_FUN_0041cbc0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_box_cpp_FUN_0041cbd0,
    .instance_size = (int)sizeof(SScrape),
    .class_name = (char *)s_SScrape_005ad07f
};
WatcomTypeInfo g_CDemonFilterTypeInfo_0059ac90 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CDemonFilter_ctor_FUN_0044beb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CDemonFilter_dtor_FUN_0044bf00,
    .instance_size = (int)sizeof(CDemonFilter),
    .class_name = (char *)s_CDemonFilter_005ad0d0
};
WatcomTypeInfo g_CLightActorTypeInfo_0059acb0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boxactor_cpp_CLightActor_ctor_FUN_0041f310,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boxactor_cpp_CLightActor_dtor_FUN_0041fa10,
    .instance_size = (int)sizeof(CLightActor),
    .class_name = (char *)s_CLightActor_005ad0bc
};
WatcomTypeInfo g_CBoxActorTypeInfo_0059acd0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041e300,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_boxactor_cpp_CBoxActor_dtor_FUN_0041fa90,
    .instance_size = (int)sizeof(CBoxActor),
    .class_name = (char *)s_CBoxActor_005ad0a8
};
WatcomTypeInfo g_CBrideTypeInfo_0059ae70 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bride_cpp_FUN_0041fbb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bride_cpp_CBride_dtor_FUN_00420f20,
    .instance_size = (int)sizeof(CBride),
    .class_name = (char *)s_CBride_005ad0e8
};
WatcomTypeInfo g_SBugsTypeInfo_0059b010 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bugs_cpp_FUN_00423e60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bugs_cpp_FUN_00423e70,
    .instance_size = (int)sizeof(SBug),
    .class_name = (char *)s_SBug_005ad12c
};
WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo_0059b030 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CKeyFramedModelInstance_dtor_FUN_0048cc90,
    .instance_size = (int)sizeof(CKeyFramedModelInstance),
    .class_name = (char *)s_CKeyFramedModelInstance_005ad10c
};
WatcomTypeInfo g_CBugsTypeInfo_0059b050 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_bugs_cpp_CBugs_ctor_FUN_00421040,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_bugs_cpp_FUN_00423d90,
    .instance_size = (int)sizeof(CBugs),
    .class_name = (char *)s_CBugs_005ad0fc
};
WatcomTypeInfo g_SPoseTypeInfo_0059b1e0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_FUN_0042b6a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_charactr_cpp_FUN_0042b6b0,
    .instance_size = (int)sizeof(SPose),
    .class_name = (char *)s_SPose_005ad244
};
WatcomTypeInfo g_CCharacterTypeInfo_0059b200 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_charactr_cpp_CCharacter_ctor_FUN_00423f40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_charactr_cpp_CCharacter_dtor_FUN_0042b5d0,
    .instance_size = (int)sizeof(CCharacter),
    .class_name = (char *)s_CCharacter_005ad224
};
WatcomTypeInfo g_SChainVertexTypeInfo_0059b320 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_chain_cpp_FUN_0042cda0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_chain_cpp_FUN_0042cdb0,
    .instance_size = (int)sizeof(SChainVertex),
    .class_name = (char *)s_SChainVertex_005ad268
};
WatcomTypeInfo g_CChainTypeInfo_0059b340 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_chain_cpp_CChain_ctor_FUN_0042b750,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_chain_cpp_FUN_0042cd30,
    .instance_size = (int)sizeof(CChain),
    .class_name = (char *)s_CChain_005ad258
};
WatcomTypeInfo g_SClothVertexTypeInfo_0059b3a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cloth_cpp_SClothVertex_ctor_FUN_004389a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_cloth_cpp_SClothVertex_dtor_FUN_004389c0,
    .instance_size = (int)sizeof(SClothVertex),
    .class_name = (char *)s_SClothVertex_005ad29e
};
WatcomTypeInfo g_SClothBoneTypeInfo_0059b3c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cloth_cpp_FUN_00438980,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_cloth_cpp_FUN_00438990,
    .instance_size = (int)sizeof(SClothBone),
    .class_name = (char *)s_SClothBone_005ad28c
};
WatcomTypeInfo g_CCodecTypeInfo_0059b470 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)support_codec_cpp_CCodec_ctor_FUN_00438f20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CCodec_dtor_FUN_00438f30,
    .instance_size = (int)sizeof(CCodec),
    .class_name = (char *)s_CCodec_005ad320
};
WatcomTypeInfo g_ostrstreamTypeInfo_0059b490 = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_strstream_cpp_ostrstream_dtor_FUN_00564e98,
    .instance_size = 0x00000080 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_ostrstream_005ad30e
};
WatcomTypeInfo g_ifstreamTypeInfo_0059b4d0 = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_fstream_cpp_ifstream_ctor_FUN_005652fe,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_fstream_cpp_ifstream_dtor_FUN_00565264,
    .instance_size = (int)sizeof(ifstream),
    .class_name = (char *)s_ifstream_005ad2ec
};
WatcomTypeInfo g_ofstreamTypeInfo_0059b4f0 = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_fstream_cpp_ofstream_ctor_FUN_0056536a,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_fstream_cpp_ofstream_dtor_FUN_005651ca,
    .instance_size = (int)sizeof(ofstream),
    .class_name = (char *)s_ofstream_005ad2dc
};
WatcomTypeInfo g_CLZWDecompressTypeInfo_0059b510 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CLZWDecompress_dtor_FUN_00439c10,
    .instance_size = (int)sizeof(CLZWDecompress),
    .class_name = (char *)s_CLZWDecompress_005ad2c6
};
WatcomTypeInfo g_CLZWCompressTypeInfo_0059b530 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)support_codec_cpp_CLZWCompress_dtor_FUN_00439c70,
    .instance_size = (int)sizeof(CLZWCompress),
    .class_name = (char *)s_CLZWCompress_005ad2b2
};
WatcomTypeInfo g_CColonelTypeInfo_0059b6c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_colonel_cpp_FUN_00439d30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_colonel_cpp_FUN_0043ab60,
    .instance_size = 0x0001FA54 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CColonel_005ad334
};
WatcomTypeInfo g_CConveyorTypeInfo_0059b810 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_conveyor_cpp_CConveyor_ctor_FUN_0043b050,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_conveyor_cpp_FUN_0043b420,
    .instance_size = 0x00000854 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CConveyor_005ad39c
};
WatcomTypeInfo g_CPlatformTypeInfo_0059b830 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_platfrm_cpp_FUN_004f5d90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_conveyor_cpp_FUN_0043b490,
    .instance_size = 0x00000720 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CPlatform_005ad388
};
WatcomTypeInfo g_CZombieCowTypeInfo_0059b9f0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_cow_cpp_FUN_0043bbe0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_cow_cpp_FUN_0043c6f0,
    .instance_size = (int)sizeof(CZombieCow),
    .class_name = (char *)s_CZombieCow_005ad3b4
};
WatcomTypeInfo g_CCrateTypeInfo_0059bb10 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_crate_cpp_FUN_0043c810,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_crate_cpp_FUN_0043ce60,
    .instance_size = (int)sizeof(CCrate),
    .class_name = (char *)s_CCrate_005ad3cc
};
WatcomTypeInfo g_CCrossbowTypeInfo_0059bc50 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_crossbow_cpp_CCrossbow_ctor_FUN_0043cf10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_crossbow_cpp_FUN_0043d870,
    .instance_size = (int)sizeof(CCrossbow),
    .class_name = (char *)s_CCrossbow_005ad3e0
};
WatcomTypeInfo g_SCollisionInfoTypeInfo_0059bd70 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_curtain_cpp_SCollisionInfo_dtor_FUN_0043f970,
    .instance_size = (int)sizeof(SCollisionInfo),
    .class_name = (char *)s_SCollisionInfo_005ad420
};
WatcomTypeInfo g_SCurtainVertexTypeInfo_0059bd90 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_curtain_cpp_FUN_0043f950,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_curtain_cpp_FUN_0043f960,
    .instance_size = (int)sizeof(SCurtainVertex),
    .class_name = (char *)s_SCurtainVertex_005ad408
};
WatcomTypeInfo g_CCurtainTypeInfo_0059bdb0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_curtain_cpp_CCurtain_ctor_FUN_0043d960,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_curtain_cpp_FUN_0043f8e0,
    .instance_size = (int)sizeof(CCurtain),
    .class_name = (char *)s_CCurtain_005ad3f8
};
WatcomTypeInfo g_CActorDestinationTypeInfo_0059bf40 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dest_cpp_CActorDestination_ctor_FUN_0044b7a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dest_cpp_FUN_0044bbd0,
    .instance_size = (int)sizeof(CActorDestination),
    .class_name = (char *)s_CActorDestination_005ad4c4
};
WatcomTypeInfo g_CFilterCacheTypeInfo_0059bf90 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CFilterCache_ctor_FUN_0044bca0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_FUN_0044bcb0,
    .instance_size = (int)sizeof(CFilterCache),
    .class_name = (char *)s_CFilterCache_005ad56c
};
WatcomTypeInfo g_CFilterFXTypeInfo_0059bfb0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dfilter_cpp_CFilterFX_ctor_FUN_0044c2b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dfilter_cpp_CFilterFX_dtor_FUN_0044c2d0,
    .instance_size = 0x0000000C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CFilterFX_005ad558
};
WatcomTypeInfo g_CDemonTriangleTypeInfo_0059c080 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_FUN_004545c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dmodel_cpp_FUN_004545d0,
    .instance_size = (int)sizeof(CDemonTriangle),
    .class_name = (char *)s_CDemonTriangle_005ae663
};
WatcomTypeInfo g_CKeyFramedModelTypeInfo_0059c0a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00452630,
    .instance_size = 0x00000398 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CKeyFramedModel_005ae64c
};
WatcomTypeInfo g_CZombieDogTypeInfo_0059c240 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dog_cpp_FUN_00454660,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dog_cpp_FUN_00454f30,
    .instance_size = (int)sizeof(CZombieDog),
    .class_name = (char *)s_CZombieDog_005ae680
};
WatcomTypeInfo g_CDoorTypeInfo_0059c360 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_door_cpp_CDoor_ctor_FUN_00455050,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_door_cpp_FUN_004566b0,
    .instance_size = (int)sizeof(CDoor),
    .class_name = (char *)s_CDoor_005ae698
};
WatcomTypeInfo g_CFileFinder_0059c380 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20,
    .instance_size = (int)sizeof(CFileFinder),
    .class_name = (char *)s_CFileFinder_005ae6a5
};
WatcomTypeInfo g_SFreakyTypeInfo_0059c560 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dracbrid_cpp_SFreaky_ctor_FUN_0045b310,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dracbrid_cpp_SFreaky_dtor_FUN_0045b330,
    .instance_size = (int)sizeof(SFreaky),
    .class_name = (char *)s_SFreaky_005ae6e8
};
WatcomTypeInfo g_CDraculaBrideTypeInfo_0059c580 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dracbrid_cpp_CDraculaBride_ctor_FUN_00458640,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dracbrid_cpp_FUN_0045b350,
    .instance_size = (int)sizeof(CDraculaBride),
    .class_name = (char *)s_CDraculaBride_005ae6d0
};
WatcomTypeInfo g_CDripTypeInfo_0059c6c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_drip_cpp_CDrip_ctor_FUN_00462060,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_drip_cpp_CDrip_dtor_FUN_00462890,
    .instance_size = (int)sizeof(CDrip),
    .class_name = (char *)s_CDrip_005b0654
};
WatcomTypeInfo g_CDroneTypeInfo_0059c860 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_drone_cpp_CDrone_ctor_FUN_00462940,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_drone_cpp_FUN_00463310,
    .instance_size = (int)sizeof(CDrone),
    .class_name = (char *)s_CDrone_005b0668
};
WatcomTypeInfo g_CDemonCubeTypeInfo_0059c8c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dcube_cpp_CDemonCube_ctor_FUN_0044abd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dcube_cpp_CDemonCube_dtor_FUN_0044ac10,
    .instance_size = (int)sizeof(CDemonCube),
    .class_name = (char *)s_CDemonCube_005b6d14
};
WatcomTypeInfo g_CDynamiteTypeInfo_0059ca20 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dynamite_cpp_CDynamite_ctor_FUN_0046ebd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dynamite_cpp_CDynamite_dtor_FUN_0046ef30,
    .instance_size = 0x00000584 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CDynamite_005b6d2c
};
WatcomTypeInfo g_CEditorToolsTypeInfo_0059cab0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEditorTools_ctor_FUN_0046f9f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_FUN_0046fa20,
    .instance_size = (int)sizeof(CEditorTools),
    .class_name = (char *)s_CEditorTools_005b75b4
};
WatcomTypeInfo g_CPickListTypeInfo_0059cad0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_FUN_00474c90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CPickList_dtor_FUN_00474cf0,
    .instance_size = 0x00000170 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CPickList_005b7594
};
WatcomTypeInfo g_CStrListTypeInfo_0059caf0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_ctor_FUN_00473b60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_copy_FUN_00473bd0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CStrList_dtor_FUN_00473b80,
    .instance_size = (int)sizeof(CStrList),
    .class_name = (char *)s_CStrList_005b7584
};
WatcomTypeInfo g_CElephantGunTypeInfo_0059cc30 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_elephant_cpp_FUN_00477710,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_elephant_cpp_FUN_00478310,
    .instance_size = 0x0000057C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CElephantGun_005b75cc
};
WatcomTypeInfo g_SLaserInfoTypeInfo_0059cd50 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_emitter_cpp_SLaserInfo_copy_FUN_00479470,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_emitter_cpp_SLaserInfo_dtor_FUN_00479520,
    .instance_size = (int)sizeof(SLaserInfo),
    .class_name = (char *)s_SLaserInfo_005b75f4
};
WatcomTypeInfo g_CEmitterTypeInfo_0059cd70 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_emitter_cpp_CEmitter_ctor_FUN_004783c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_emitter_cpp_FUN_00479420,
    .instance_size = (int)sizeof(CEmitter),
    .class_name = (char *)s_CEmitter_005b75e4
};
WatcomTypeInfo g_CFilmReelTypeInfo_0059d140 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_filmreel_cpp_CFilmReel_ctor_FUN_00481c30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_filmreel_cpp_FUN_00482310,
    .instance_size = (int)sizeof(CFilmReel),
    .class_name = (char *)s_CFilmReel_005b803c
};
WatcomTypeInfo g_CFilmProjectorTypeInfo_0059d160 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_filmreel_cpp_CFilmProjector_ctor_FUN_00481f10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_filmreel_cpp_FUN_00482360,
    .instance_size = (int)sizeof(CFilmProjector),
    .class_name = (char *)s_CFilmProjector_005b8024
};
WatcomTypeInfo g_CSmokeParticleTypeInfo_0059d300 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cc70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cc80,
    .instance_size = (int)sizeof(CSmokeParticle),
    .class_name = (char *)s_CSmokeParticle_005b8dd4
};
WatcomTypeInfo g_CBulletHoleTypeInfo_0059d320 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cc50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cc60,
    .instance_size = (int)sizeof(CBulletHole),
    .class_name = (char *)s_CBulletHole_005b8db4
};
WatcomTypeInfo g_CStakeTypeInfo_0059d340 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CStake_ctor_FUN_0048cc10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CStake_dtor_FUN_0048cc30,
    .instance_size = (int)sizeof(CStake),
    .class_name = (char *)s_CStake_005b8da4
};
WatcomTypeInfo g_CSparkTypeInfo_0059d360 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cbe0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cc00,
    .instance_size = 0x0000004C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CSpark_005b8d94
};
WatcomTypeInfo g_CMuzzleFlashTypeInfo_0059d380 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cb60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cb70,
    .instance_size = (int)sizeof(CMuzzleFlash),
    .class_name = (char *)s_CMuzzleFlash_005b8d74
};
WatcomTypeInfo g_CGlassParticleTypeInfo_0059d3a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CGlassParticle_dtor_FUN_0048cb30,
    .instance_size = (int)sizeof(CGlassParticle),
    .class_name = (char *)s_CGlassParticle_005b8d54
};
WatcomTypeInfo g_CBulletTrailTypeInfo_0059d3c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cae0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048caf0,
    .instance_size = (int)sizeof(CBulletTrail),
    .class_name = (char *)s_CBulletTrail_005b8d34
};
WatcomTypeInfo g_CFireballTypeInfo_0059d3e0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cbb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cbd0,
    .instance_size = (int)sizeof(CFireball),
    .class_name = (char *)s_CFireball_005b8d14
};
WatcomTypeInfo g_CRockTypeInfo_0059d400 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cb80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cba0,
    .instance_size = 0x00000048 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CRock_005b8d04
};
WatcomTypeInfo g_CLaserBeamTypeInfo_0059d420 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cac0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048cad0,
    .instance_size = (int)sizeof(CLaserBeam),
    .class_name = (char *)s_CLaserBeam_005b8ce4
};
WatcomTypeInfo g_CExplosionTypeInfo_0059d440 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CExplosion_ctor_FUN_00486d90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CExplosion_dtor_FUN_0048cab0,
    .instance_size = (int)sizeof(CExplosion),
    .class_name = (char *)s_CExplosion_005b8cc4
};
WatcomTypeInfo g_CTossTypeInfo_0059d460 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CToss_ctor_FUN_00487370,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CToss_dtor_FUN_0048ca90,
    .instance_size = (int)sizeof(CToss),
    .class_name = (char *)s_CToss_005b8cb4
};
WatcomTypeInfo g_CCraterTypeInfo_0059d480 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_CCrater_ctor_FUN_0048ca50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_CCrater_dtor_FUN_0048ca70,
    .instance_size = (int)sizeof(CCrater),
    .class_name = (char *)s_CCrater_005b8ca4
};
WatcomTypeInfo g_CGunFlameTypeInfo_0059d4a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048ca30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048ca40,
    .instance_size = (int)sizeof(CGunFlame),
    .class_name = (char *)s_CGunFlame_005b8c84
};
WatcomTypeInfo g_CLightningBoltTypeInfo_0059d4c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048ca10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048ca20,
    .instance_size = (int)sizeof(CLightningBolt),
    .class_name = (char *)s_CLightningBolt_005b8c64
};
WatcomTypeInfo g_CTrailTypeInfo_0059d4e0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048c9f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048ca00,
    .instance_size = 0x00000024 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CTrail_005b8c54
};
WatcomTypeInfo g_CShellTypeInfo_0059d500 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048c9c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048c9e0,
    .instance_size = 0x00000058 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CShell_005b8c44
};
WatcomTypeInfo g_CPopcornTypeInfo_0059d520 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048c990,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048c9b0,
    .instance_size = 0x00000038 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CPopcorn_005b8c34
};
WatcomTypeInfo g_CRainDropTypeInfo_0059d540 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fire_cpp_FUN_0048c960,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fire_cpp_FUN_0048c980,
    .instance_size = (int)sizeof(CRainDrop),
    .class_name = (char *)s_CRainDrop_005b8c14
};
WatcomTypeInfo g_CFlameCanTypeInfo_0059d760 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flamecan_cpp_CFlameCan_ctor_FUN_0048e370,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flamecan_cpp_FUN_0048e8f0,
    .instance_size = (int)sizeof(CFlameCan),
    .class_name = (char *)s_CFlameCan_005b91cc
};
WatcomTypeInfo g_CFlameThrowerTypeInfo_0059d8b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flamegun_cpp_FUN_0048ecb0,
    .instance_size = 0x00000580 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CFlameThrower_005b91e4
};
WatcomTypeInfo g_CFlashlightTypeInfo_0059d9f0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flashlit_cpp_CFlashlight_ctor_FUN_0048ed60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flashlit_cpp_FUN_0048ee00,
    .instance_size = 0x00000570 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CFlashlight_005b9200
};
WatcomTypeInfo g_SFlyTypeInfo_0059db10 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flies_cpp_SFly_ctor_FUN_0048fca0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flies_cpp_SFly_dtor_FUN_0048fcc0,
    .instance_size = (int)sizeof(SFly),
    .class_name = (char *)s_SFly_CFlies_005b9240
};
WatcomTypeInfo g_CFliesTypeInfo_0059db30 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_flies_cpp_FUN_0048eef0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_flies_cpp_FUN_0048fc30,
    .instance_size = (int)sizeof(CFlies),
    .class_name = (char *)s_CFlies_005b9230
};
WatcomTypeInfo g_CFrankenstienMachineTypeInfo_0059dc60 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_frankgen_cpp_FUN_00495430,
    .instance_size = (int)sizeof(CFrankenstienMachine),
    .class_name = (char *)s_CFrankenstienMachine_005b9290
};
WatcomTypeInfo g_CGabriellaTypeInfo_0059de40 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gabriela_cpp_CGabriella_ctor_FUN_004956a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gabriela_cpp_CGabriella_dtor_FUN_0049a170,
    .instance_size = 0x0005A5B0 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CGabriella_005b92b0
};
WatcomTypeInfo g_CDemonLightTypeInfo_0059dea0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dlight_cpp_FUN_0044e1c0,
    .instance_size = (int)sizeof(CDemonLight),
    .class_name = (char *)s_CDemonLight_005b9614
};
WatcomTypeInfo g_CGameTypeInfo_0059dec0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_game_cpp_CGame_ctor_FUN_0049a650,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_game_cpp_CGame_dtor_FUN_0049a880,
    .instance_size = (int)sizeof(CGame),
    .class_name = (char *)s_CGame_005b9604
};
WatcomTypeInfo g_CSlewTypeInfo_0059dee0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_game_cpp_CSlew_ctor_FUN_004a72a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_game_cpp_CSlew_dtor_FUN_004a72b0,
    .instance_size = (int)sizeof(CSlew),
    .class_name = (char *)s_CSlew_005b95f4
};
WatcomTypeInfo g_CAlphaBitmapTypeInfo_0059df00 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340,
    .instance_size = (int)sizeof(CAlphaBitmap),
    .class_name = (char *)s_CAlphaBitmap_005b95d4
};
WatcomTypeInfo g_CGargoyleTypeInfo_0059e0a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gargoyle_cpp_CGargoyle_ctor_FUN_004a7350,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gargoyle_cpp_FUN_004a88f0,
    .instance_size = (int)sizeof(CGargoyle),
    .class_name = (char *)s_CGargoyle_005b962c
};
WatcomTypeInfo g_CGasMaskTypeInfo_0059e1c0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gasmask_cpp_FUN_004a8a10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gasmask_cpp_FUN_004a8bc0,
    .instance_size = (int)sizeof(CGasMask),
    .class_name = (char *)s_CGasMask_005b9644
};
WatcomTypeInfo g_CGhoulTypeInfo_0059e370 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ghoul_cpp_CGhoul_dtor_FUN_004aba30,
    .instance_size = (int)sizeof(CGhoul),
    .class_name = (char *)s_CGhoul_005b965c
};
WatcomTypeInfo g_CGlassTypeInfo_0059e490 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_glass_cpp_FUN_004abb50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_glass_cpp_FUN_004adef0,
    .instance_size = (int)sizeof(CGlass),
    .class_name = (char *)s_CGlass_005b9688
};
WatcomTypeInfo g_CGoreTypeInfo_0059e510 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CGore_ctor_FUN_004afd80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_FUN_004afda0,
    .instance_size = (int)sizeof(CGore),
    .class_name = (char *)s_CGore_005ba8bc
};
WatcomTypeInfo g_CBloodParticleTypeInfo_0059e530 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_FUN_004b0a30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_FUN_004b0a50,
    .instance_size = (int)sizeof(CBloodParticle),
    .class_name = (char *)s_CBloodParticle_005ba8a4
};
WatcomTypeInfo g_CBloodSplatTypeInfo_0059e550 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_FUN_004b0a10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_FUN_004b0a20,
    .instance_size = (int)sizeof(CBloodSplat),
    .class_name = (char *)s_CBloodSplat_005ba890
};
WatcomTypeInfo g_CBloodPoolTypeInfo_0059e570 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_FUN_004b09f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_FUN_004b0a00,
    .instance_size = (int)sizeof(CBloodPool),
    .class_name = (char *)s_CBloodPool_005ba87c
};
WatcomTypeInfo g_CFootstepTypeInfo_0059e590 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gore_cpp_CFootstep_ctor_FUN_004b09b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gore_cpp_CFootstep_dtor_FUN_004b09d0,
    .instance_size = (int)sizeof(CFootstep),
    .class_name = (char *)s_CFootstep_005ba868
};
WatcomTypeInfo g_CGraveTypeInfo_0059e6b0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_grave_cpp_CGrave_ctor_FUN_004b0b40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_grave_cpp_FUN_004b1010,
    .instance_size = (int)sizeof(CGrave),
    .class_name = (char *)s_CGrave_005ba8d0
};
WatcomTypeInfo g_CGroundTypeInfo_0059e700 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ground_cpp_FUN_004b13b0,
    .instance_size = (int)sizeof(CGround),
    .class_name = (char *)s_CGround_005ba8f4
};
WatcomTypeInfo g_CGunTypeInfo_0059e840 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_gun_cpp_FUN_004b2760,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_gun_cpp_FUN_004b2ff0,
    .instance_size = 0x00000570 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CGun_005ba908
};
WatcomTypeInfo g_CHaystackTypeInfo_0059e9d0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_haystack_cpp_FUN_004b30a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_haystack_cpp_FUN_004b4140,
    .instance_size = 0x0001FA54 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CHaystack_005ba918
};
WatcomTypeInfo g_CHealthItemTypeInfo_0059eaf0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_health_cpp_FUN_004b41f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_health_cpp_FUN_004b4460,
    .instance_size = (int)sizeof(CHealthItem),
    .class_name = (char *)s_CHealthItem_005ba930
};
WatcomTypeInfo g_CHeroPlaceholderTypeInfo_0059ed60 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0,
    .instance_size = (int)sizeof(CHeroPlaceholder),
    .class_name = (char *)s_CHeroPlaceholder_005ba94c
};
WatcomTypeInfo g_CHiramTypeInfo_0059eee0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hiram_cpp_FUN_004b6610,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hiram_cpp_CHiram_dtor_FUN_004b6670,
    .instance_size = (int)sizeof(CHiram),
    .class_name = (char *)s_CHiram_005ba974
};
WatcomTypeInfo g_CNPCTypeInfo_0059ef00 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_npc_cpp_FUN_004ee950,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_npc_cpp_CNPC_dtor_FUN_004b68c0,
    .instance_size = (int)sizeof(CNPC),
    .class_name = (char *)s_CNPC_005ba968
};
WatcomTypeInfo g_CHostageTypeInfo_0059f080 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hostage_cpp_CHostage_ctor_FUN_004b69f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hostage_cpp_CHostage_dtor_FUN_004b8b70,
    .instance_size = (int)sizeof(CHostage),
    .class_name = (char *)s_CHostage_005ba988
};
WatcomTypeInfo g_CHotDemonTypeInfo_0059f220 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hotdemon_cpp_CHotDemon_dtor_FUN_004b99d0,
    .instance_size = (int)sizeof(CHotDemon),
    .class_name = (char *)s_CHotDemon_005ba99c
};
WatcomTypeInfo g_CHighPriestOfGardathTypeInfo_0059f3a0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_hpriest_cpp_FUN_004b9af0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_hpriest_cpp_FUN_004b9bf0,
    .instance_size = (int)sizeof(CHighPriestOfGardath),
    .class_name = (char *)s_CHighPriestOfGardath_005ba9b4
};
WatcomTypeInfo g_CIcePickTypeInfo_0059f530 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_icepick_cpp_CIcePick_ctor_FUN_004b9d20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_icepick_cpp_FUN_004bb6b0,
    .instance_size = 0x0001FA6C /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CIcePick_005ba9d4
};
WatcomTypeInfo g_CImpTypeInfo_0059f6d0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_imp_cpp_FUN_004bb760,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_imp_cpp_FUN_004bcfd0,
    .instance_size = (int)sizeof(CImp),
    .class_name = (char *)s_CImp_005ba9e8
};
WatcomTypeInfo g_CIniTypeInfo_0059f6f0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_ini_cpp_FUN_004bdb60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ini_cpp_FUN_004bdb70,
    .instance_size = 0x00000004 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_cIni_005ba9f4
};
WatcomTypeInfo g_CKeyActorTypeInfo_0059f900 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_keyactor_cpp_FUN_004c3460,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_keyactor_cpp_FUN_004c3710,
    .instance_size = (int)sizeof(CKeyActor),
    .class_name = (char *)s_CKeyActor_005bac54
};
WatcomTypeInfo g_CLadderTypeInfo_0059fa30 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ladder_cpp_CLadder_ctor_FUN_004c4290,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ladder_cpp_FUN_004c47d0,
    .instance_size = (int)sizeof(CLadder),
    .class_name = (char *)s_CLadder_005bac70
};
WatcomTypeInfo g_CLarvaTypeInfo_0059fbd0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_larva_cpp_CLarva_ctor_FUN_004c4880,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_larva_cpp_FUN_004c5540,
    .instance_size = (int)sizeof(CLarva),
    .class_name = (char *)s_CLarva_005bac84
};
WatcomTypeInfo g_CLeverTypeInfo_0059fd20 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lever_cpp_CLever_ctor_FUN_004c6040,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lever_cpp_FUN_004c6970,
    .instance_size = (int)sizeof(CLever),
    .class_name = (char *)s_CLever_005bacc4
};
WatcomTypeInfo g_CLightGunTypeInfo_0059fe90 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lightgun_cpp_FUN_004c8040,
    .instance_size = (int)sizeof(CLightGun),
    .class_name = (char *)s_CLightGun_005bace8
};
WatcomTypeInfo g_CLightConeTypeInfo_0059ffb0 = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_litecone_cpp_CLightCone_ctor_FUN_004c80f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualConstructor_FUN_00564905,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_litecone_cpp_FUN_004c8380,
    .instance_size = 0x00000224 /* FIXME(64bit): unresolved WatcomTypeInfo type, 32-bit-only size */,
    .class_name = (char *)s_CLightCone_005bad00
};

// undefined1
undefined1 DAT_005992ac = 0x00;

