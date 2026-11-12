// Name: core_charactr.cpp_CCharacter_ctor_FUN_00422340
// Address: 00422340
// Address Range: [[00422340, 00422921]]
// Convention: unknown
// Signature: CCharacter * core_charactr_cpp_CCharacter_ctor_FUN_00422340(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCharacter * core_charactr_cpp_CCharacter_ctor_FUN_00422340(CCharacter *this_ptr)

{
  uint uVar1;
  CDemonActor *pCVar2;
  CDeformableModelInstance *pCVar3;
  CClothList *pCVar4;
  void *pvVar5;
  int iVar6;
  CCharacter *pCVar7;
  byte bVar9;
  uint auStackY_1070 [1012];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  char *pcVar8;
  
  bVar9 = 0;
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0
                     ((CDeformableModelInstance *)(pCVar2 + 1));
  pCVar4 = core_cloth_cpp_CClothList_ctor_FUN_005b1440
                     ((CClothList *)&pCVar3[1].bone_transform.pose_data.bone_rotations[0xf].x);
  pvVar5 = __arrinit(pCVar4[1].filenames[0] + 8,0xf,&g_CVectorTypeInfo);
  pvVar5 = __arrinit((void *)((int)pvVar5 + 0xb4),0xf,&g_CVectorTypeInfo);
  iVar6 = core_muzzle_cpp_FUN_0059ded0((int)pvVar5 + 0xd0);
  pvVar5 = __arrinit((void *)(iVar6 + 0x518),0x32,&g_SFireTypeInfo);
  pvVar5 = __arrinit((void *)((int)pvVar5 + 0x4b0),0x32,&g_CFlameTypeInfo)
  ;
  *(CCharacter_full_vtable **)((int)pvVar5 + -0x3770) = &g_CCharacterVTable;
  *(uint *)((int)pvVar5 + -0x14b4) = 1;
  *(uint *)((int)pvVar5 + -0x14b8) = 0;
  *(uint *)((int)pvVar5 + -0x1490) = 0;
  *(uint *)((int)pvVar5 + -0x1494) = *(uint *)((int)pvVar5 + -0x1490);
  *(uint *)((int)pvVar5 + -0x1498) = *(uint *)((int)pvVar5 + -0x1494);
  *(uint *)((int)pvVar5 + -0x1478) = 0x42c80000;
  *(uint *)((int)pvVar5 + -0x1474) = 0x42c80000;
  *(uint *)((int)pvVar5 + -0x5f0) = 0x3f800000;
  *(uint *)((int)pvVar5 + -0x5ec) = 0x40000000;
  *(uint *)((int)pvVar5 + -0x5e8) = 0x41a00000;
  *(uint *)((int)pvVar5 + -0x5e4) = 0x42480000;
  *(uint *)((int)pvVar5 + -0x5e0) = 0x40000000;
  *(uint *)((int)pvVar5 + -0x5dc) = 0xc479c000;
  *(uint *)((int)pvVar5 + -0x5d8) = 0;
  *(uint *)((int)pvVar5 + -0x4bc) = 0;
  *(uint *)((int)pvVar5 + -0x4b4) = 0x40000000;
  *(uint *)((int)pvVar5 + -0x125c) = 0xffffffff;
  *(uint *)((int)pvVar5 + -0x1260) = 0xffffffff;
  *(uint *)((int)pvVar5 + -0x9d0) = 0;
  *(uint *)((int)pvVar5 + -0x1274) = 0;
  *(uint *)((int)pvVar5 + -0x12ac) = 0;
  *(uint *)((int)pvVar5 + -0x12a8) = 0x40400000;
  *(uint *)((int)pvVar5 + -0x12a4) = 0x7149f2ca;
  *(uint *)((int)pvVar5 + -0x12a0) = 0xbf800000;
  *(uint *)((int)pvVar5 + -0x1270) = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0x40000000;
  if ((uint *)((int)pvVar5 + -0x126c) != &stack0xffffff9c) {
    *(uint *)((int)pvVar5 + -0x126c) = 0;
    *(uint *)((int)pvVar5 + -0x1268) = 0;
    *(uint *)((int)pvVar5 + -0x1264) = 0x40000000;
  }
  *(uint *)((int)pvVar5 + -0x123c) = 0;
  *(uint *)((int)pvVar5 + -0x1238) = 0;
  *(uint *)((int)pvVar5 + -0x1234) = 0;
  *(uint *)((int)pvVar5 + -0x1230) = 0;
  *(uint *)((int)pvVar5 + -0x1240) = 0xffffffff;
  pCVar7 = (CCharacter *)((int)pvVar5 + -0x3a20);
  do {
    pcVar8 = (pCVar7->base).create_event;
    pCVar7->carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar7->carry_hands[0].bone_index = -1;
    pCVar7->carry_hands[0].secondary_bone_index = -1;
    pCVar7 = (CCharacter *)pcVar8;
  } while (pcVar8 != (byte *)((int)pvVar5 + -0x3930));
  *(uint *)((int)pvVar5 + -0x124c) = 0;
  *(uint *)((int)pvVar5 + -0x1248) = 0;
  *(uint *)((int)pvVar5 + -0x1244) = 0;
  *(uint *)((int)pvVar5 + -0x1254) = 0;
  *(uint *)((int)pvVar5 + -0x1250) = 0;
  *(uint *)((int)pvVar5 + -0x1214) = 0;
  *(uint *)((int)pvVar5 + 0xc804) = 0;
  *(uint *)((int)pvVar5 + -0x1210) = 0;
  *(uint *)((int)pvVar5 + -0x120c) = 0;
  *(uint *)((int)pvVar5 + -0x1208) = 0;
  *(uint *)((int)pvVar5 + -0x1204) = 0;
  *(uint *)((int)pvVar5 + -0x12b4) = 0;
  *(uint *)((int)pvVar5 + -0x12b0) = 0;
  *(uint *)((int)pvVar5 + -0x1200) = 0;
  *(uint *)((int)pvVar5 + 0xc80c) = 0;
  *(uint *)((int)pvVar5 + -0x11fc) = 0x3f800000;
  *(uint *)((int)pvVar5 + -0x11f8) = 0;
  *(uint *)((int)pvVar5 + -0x11f0) = 0;
  *(uint *)((int)pvVar5 + -0xd1c) = 0;
  *(uint *)((int)pvVar5 + -0xd18) = 0;
  *(uint *)((int)pvVar5 + -0x11f4) = 1;
  *(uint *)((int)pvVar5 + -0x1470) = 0;
  *(byte *)((int)pvVar5 + -0x146c) = 0;
  *(uint *)((int)pvVar5 + -0xb58) = 0;
  *(uint *)((int)pvVar5 + -0xb54) = 0;
  *(uint *)((int)pvVar5 + -0xb50) = 0;
  *(uint *)((int)pvVar5 + -0x9e4) = 0;
  *(uint *)((int)pvVar5 + -0x9d4) = 0;
  *(uint *)((int)pvVar5 + -0x129c) = 0;
  *(byte *)((int)pvVar5 + -0x1318) = 0;
  local_40 = 0x461c1800;
  local_3c = 0;
  local_38 = 0x461c1800;
  if ((uint *)((int)pvVar5 + -0x1298) != &stack0xffffffc0) {
    *(uint *)((int)pvVar5 + -0x1298) = 0x461c1800;
    *(uint *)((int)pvVar5 + -0x1294) = 0;
    *(uint *)((int)pvVar5 + -0x1290) = 0x461c1800;
  }
  local_74 = 0x45f2d000;
  local_7c = 0x45f2d000;
  local_78 = 0;
  if ((uint *)((int)pvVar5 + -0x128c) != &stack0xffffff84) {
    *(uint *)((int)pvVar5 + -0x128c) = 0x45f2d000;
    *(uint *)((int)pvVar5 + -0x1288) = 0;
    *(uint *)((int)pvVar5 + -0x1284) = 0x45f2d000;
  }
  local_48 = 0;
  local_44 = 0x45ad7000;
  local_4c = 0x45ad7000;
  if ((uint *)((int)pvVar5 + -0x1280) != &stack0xffffffb4) {
    *(uint *)((int)pvVar5 + -0x1280) = 0x45ad7000;
    *(uint *)((int)pvVar5 + -0x127c) = 0;
    *(uint *)((int)pvVar5 + -0x1278) = 0x45ad7000;
  }
  *(uint *)((int)pvVar5 + -0x1480) = 0x40c90fdb;
  *(uint *)((int)pvVar5 + -0x1484) = 0x40c90fdb;
  *(uint *)((int)pvVar5 + -0x147c) = 0x40490fdb;
  *(uint *)((int)pvVar5 + 0xcfa0) = 0;
  *(uint *)((int)pvVar5 + 0xcfa4) = 0;
  uVar1 = _DAT_005f4088;
  *(uint *)((int)pvVar5 + 0xcfa8) = 0;
  *(uint *)((int)pvVar5 + 0xcfb4) = 0;
  *(uint *)((int)pvVar5 + 0xcfac) = 0;
  *(uint *)((int)pvVar5 + 0xcfb8) = 0xfffffffe;
  *(uint *)((int)pvVar5 + 0xcfb0) = uVar1;
  core_muzzle_cpp_FUN_0059df80();
  *(uint *)((int)pvVar5 + -0x5f4) = 0;
  local_28 = 0xbdc6a7f0;
  local_24 = 0x3ea7ef9e;
  local_20 = 0x3e75c28f;
  if ((uint *)((int)pvVar5 + 0xcfec) != &stack0xffffffd8) {
    *(uint *)((int)pvVar5 + 0xcfec) = 0xbdc6a7f0;
    *(uint *)((int)pvVar5 + 0xcff0) = 0x3ea7ef9e;
    *(uint *)((int)pvVar5 + 0xcff4) = 0x3e75c28f;
  }
  local_18 = 0x3ea7ef9e;
  local_14 = 0x3e75c28f;
  local_1c = 0x3dc6a7f0;
  if ((uint *)((int)pvVar5 + 0xcff8) != &stack0xffffffe4) {
    *(uint *)((int)pvVar5 + 0xcff8) = 0x3dc6a7f0;
    *(uint *)((int)pvVar5 + 0xcffc) = 0x3ea7ef9e;
    *(uint *)((int)pvVar5 + 0xd000) = 0x3e75c28f;
  }
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_88 = 0;
  *(uint *)((int)&stack0xffffff7c + (uint)bVar9 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar9 * -8);
  *(uint *)((int)&stack0xffffff80 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  if ((uint *)((int)pvVar5 + 0xd028) != &stack0xffffff78) {
    *(uint *)((int)pvVar5 + 0xd028) = local_88;
    *(uint *)((int)pvVar5 + 0xd02c) = local_84;
    *(uint *)((int)pvVar5 + 0xd030) = local_80;
  }
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_58 = 0;
  *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8) =
       *(uint *)((int)&stack0xffffff94 + (uint)bVar9 * -8);
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  if ((uint *)((int)pvVar5 + 0xd034) != &stack0xffffffa8) {
    *(uint *)((int)pvVar5 + 0xd034) = local_58;
    *(uint *)((int)pvVar5 + 0xd038) = local_54;
    *(uint *)((int)pvVar5 + 0xd03c) = local_50;
  }
  *(uint *)((int)pvVar5 + 0xd00c) = 0;
  *(uint *)((int)pvVar5 + 0xd010) = 0x3f800000;
  *(uint *)((int)pvVar5 + 0xd014) = 0x3f800000;
  *(uint *)((int)pvVar5 + 0xd018) = 0;
  *(uint *)((int)pvVar5 + 0xd008) = 0;
  if ((uint *)((int)pvVar5 + 0xd01c) != (uint *)&stack0xffffff6c) {
    *(uint *)((int)pvVar5 + 0xd01c) = 0;
    *(uint *)((int)pvVar5 + 0xd020) = 0;
    *(uint *)((int)pvVar5 + 0xd024) = 0x3f800000;
  }
  *(uint *)((int)pvVar5 + 0xd004) = 0xffffffff;
  return (CCharacter *)((int)pvVar5 + -0x3a20);
}
