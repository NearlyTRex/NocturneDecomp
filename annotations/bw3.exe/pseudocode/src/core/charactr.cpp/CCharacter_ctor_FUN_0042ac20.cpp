// Name: core_charactr.cpp_CCharacter_ctor_FUN_0042ac20
// Address: 0042ac20
// Address Range: [[0042ac20, 0042b0da]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_0042ac20(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_0042ac20(CCharacter *this_ptr)

{
  uint uVar1;
  CDemonActor *pCVar2;
  CDeformableModelInstance *pCVar3;
  CClothList *pCVar4;
  void *pvVar5;
  CCharacter *pCVar6;
  char *pcVar7;
  float *matrix;
  float *matrix_00;
  uint auStack_40 [3];
  uint auStack_34 [3];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint auStack_1c [3];
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00
                     ((CDeformableModelInstance *)(pCVar2 + 1));
  pCVar4 = core_cloth_cpp_CClothList_ctor_FUN_0043f8c0
                     ((CClothList *)&pCVar3[1].bone_transform.pose_data.bone_rotations[0x35].z);
  pvVar5 = __arrinit(pCVar4[1].filenames[0] + 8,0xf,&g_CVectorTypeInfo);
  pvVar5 = __arrinit((void *)((int)pvVar5 + 0xb4),0xf,&g_CVectorTypeInfo);
  pvVar5 = __arrinit((void *)((int)pvVar5 + 0x228),0x32,&g_SFireTypeInfo);
  pvVar5 = __arrinit((void *)((int)pvVar5 + 0x4b0),0x32,&g_CFlameTypeInfo)
  ;
  *(CCharacter_full_vtable **)((int)pvVar5 + -0x3708) = &g_CCharacterVTable;
  *(uint *)((int)pvVar5 + -0x1360) = 0;
  *(uint *)((int)pvVar5 + -0x133c) = 0;
  *(uint *)((int)pvVar5 + -0x1340) = *(uint *)((int)pvVar5 + -0x133c);
  *(uint *)((int)pvVar5 + -0x1344) = *(uint *)((int)pvVar5 + -0x1340);
  *(uint *)((int)pvVar5 + -0x1320) = 0x42c80000;
  *(uint *)((int)pvVar5 + -0x5f0) = 0x3f800000;
  *(uint *)((int)pvVar5 + -0x5ec) = 0x40000000;
  *(uint *)((int)pvVar5 + -0x5e8) = 0x41a00000;
  *(uint *)((int)pvVar5 + -0x5e4) = 0x42480000;
  *(uint *)((int)pvVar5 + -0x5e0) = 0x40000000;
  *(uint *)((int)pvVar5 + -0x5dc) = 0xc479c000;
  *(uint *)((int)pvVar5 + -0x5d8) = 0;
  *(uint *)((int)pvVar5 + -0x4bc) = 0;
  *(uint *)((int)pvVar5 + -0x4b4) = 0x40000000;
  *(uint *)((int)pvVar5 + -0x1108) = 0xffffffff;
  *(uint *)((int)pvVar5 + -0x1100) = 0;
  *(uint *)((int)pvVar5 + -0x110c) = 0xffffffff;
  *(uint *)((int)pvVar5 + -0x610) = 0;
  *(uint *)((int)pvVar5 + -0x1120) = 0;
  *(uint *)((int)pvVar5 + -0x1158) = 0;
  *(uint *)((int)pvVar5 + -0x1154) = 0x40400000;
  *(uint *)((int)pvVar5 + -0x1150) = 0x7149f2ca;
  *(uint *)((int)pvVar5 + -0x114c) = 0xbf800000;
  *(uint *)((int)pvVar5 + -0x111c) = 0;
  *(uint *)((int)pvVar5 + -0x1324) = 0x42c80000;
  uStack_28 = 0;
  uStack_20 = 0x40000000;
  uStack_24 = 0;
  if ((uint *)((int)pvVar5 + -0x1118) != &uStack_28) {
    *(uint *)((int)pvVar5 + -0x1114) = 0;
    *(uint *)((int)pvVar5 + -0x1118) = 0;
    *(uint *)((int)pvVar5 + -0x1110) = 0x40000000;
  }
  *(uint *)((int)pvVar5 + -0x10e8) = 0xffffffff;
  *(uint *)((int)pvVar5 + -0x10e4) = 0;
  *(uint *)((int)pvVar5 + -0x10e0) = 0;
  *(uint *)((int)pvVar5 + -0x10dc) = 0;
  *(uint *)((int)pvVar5 + -0x10d8) = 0;
  matrix = (float *)((int)pvVar5 + -0x126c);
  memset((void *)((int)pvVar5 + -0x12b4),0,0xf0);
  matrix_00 = (float *)((int)pvVar5 + -0x12a8);
  pCVar6 = (CCharacter *)((int)pvVar5 + -0x385c);
  do {
    pCVar6->carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar6->carry_hands[0].bone_index = -1;
    pCVar6->carry_hands[0].secondary_bone_index = -1;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0((CMatrix3x4f *)matrix_00);
    pcVar7 = (pCVar6->base).create_event;
    pCVar6->carry_hands[0].blend_factor = 1.0;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0((CMatrix3x4f *)matrix);
    matrix_00 = matrix_00 + 0x1e;
    matrix = matrix + 0x1e;
    pCVar6 = (CCharacter *)pcVar7;
  } while (pcVar7 != (byte *)((int)pvVar5 + -0x376c));
  *(uint *)((int)pvVar5 + -0x10f4) = 0;
  *(uint *)((int)pvVar5 + -0x10f0) = 0;
  *(uint *)((int)pvVar5 + -0x10ec) = 0;
  *(uint *)((int)pvVar5 + -0x10fc) = 0;
  *(uint *)((int)pvVar5 + -0x10f8) = 0;
  *(uint *)((int)pvVar5 + -0x10bc) = 0;
  *(uint *)((int)pvVar5 + 0x840c) = 0;
  *(uint *)((int)pvVar5 + -0x10b8) = 0;
  *(uint *)((int)pvVar5 + -0x10b4) = 0;
  *(uint *)((int)pvVar5 + -0x10b0) = 0;
  *(uint *)((int)pvVar5 + -0x10ac) = 0;
  *(uint *)((int)pvVar5 + -0x1160) = 0;
  *(uint *)((int)pvVar5 + -0x115c) = 0;
  *(uint *)((int)pvVar5 + -0x10a8) = 0;
  *(uint *)((int)pvVar5 + 0x8414) = 0;
  *(uint *)((int)pvVar5 + -0x10a4) = 0x3f800000;
  *(uint *)((int)pvVar5 + -0x10a0) = 0;
  *(uint *)((int)pvVar5 + -0x1098) = 0;
  *(uint *)((int)pvVar5 + -0x95c) = 0;
  *(uint *)((int)pvVar5 + -0x958) = 0;
  *(uint *)((int)pvVar5 + -0x109c) = 1;
  *(uint *)((int)pvVar5 + -0x131c) = 0;
  *(byte *)((int)pvVar5 + -0x1318) = 0;
  *(uint *)((int)pvVar5 + -0x624) = 0;
  *(uint *)((int)pvVar5 + -0x614) = 0;
  *(uint *)((int)pvVar5 + -0x1148) = 0;
  *(byte *)((int)pvVar5 + -0x11c4) = 0;
  if ((uint *)((int)pvVar5 + -0x1144) != auStack_34) {
    *(uint *)((int)pvVar5 + -0x1144) = 0x461c1800;
    *(uint *)((int)pvVar5 + -0x1140) = 0;
    *(uint *)((int)pvVar5 + -0x113c) = 0x461c1800;
  }
  if ((uint *)((int)pvVar5 + -0x1138) != auStack_1c) {
    *(uint *)((int)pvVar5 + -0x1138) = 0x45f2d000;
    *(uint *)((int)pvVar5 + -0x1134) = 0;
    *(uint *)((int)pvVar5 + -0x1130) = 0x45f2d000;
  }
  if ((uint *)((int)pvVar5 + -0x112c) != auStack_40) {
    *(uint *)((int)pvVar5 + -0x112c) = 0x45ad7000;
    *(uint *)((int)pvVar5 + -0x1128) = 0;
    *(uint *)((int)pvVar5 + -0x1124) = 0x45ad7000;
  }
  *(uint *)((int)pvVar5 + -0x132c) = 0x40c90fdb;
  *(uint *)((int)pvVar5 + -0x1330) = 0x40c90fdb;
  *(uint *)((int)pvVar5 + -0x1328) = 0x40490fdb;
  *(uint *)((int)pvVar5 + 0x951c) = 0;
  *(uint *)((int)pvVar5 + 0x9520) = 0;
  *(uint *)((int)pvVar5 + 0x9524) = 0;
  *(uint *)((int)pvVar5 + 0x9530) = 0;
  *(uint *)((int)pvVar5 + 0x9528) = 0;
  *(uint *)((int)pvVar5 + 0x9534) = 0xfffffffe;
  *(uint *)((int)pvVar5 + -0x608) = 0;
  *(uint *)((int)pvVar5 + -0x600) = 0;
  *(uint *)((int)pvVar5 + -0x604) = 0;
  *(uint *)((int)pvVar5 + -0x5fc) = 0;
  *(uint *)((int)pvVar5 + 0x9568) = 0;
  *(uint *)((int)pvVar5 + 0x956c) = 0;
  *(uint *)((int)pvVar5 + -0x5f8) = 1;
  uVar1 = _DAT_005dd238;
  *(uint *)((int)pvVar5 + -0x5f4) = 0;
  *(uint *)((int)pvVar5 + 0x952c) = uVar1;
  return (CCharacter *)((int)pvVar5 + -0x385c);
}
