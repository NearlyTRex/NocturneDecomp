// Name: core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0
// Address: 0056f2c0
// Address Range: [[0056f2c0, 0056f394]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_0056f2c0(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_0056f2c0(CSuccubus *this_ptr)

{
  CMorph CVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  CDeformableModelInstance *pCVar5;
  CClothList *pCVar6;
  CMorph *pCVar7;
  char *pcVar8;
  CMorph *pCVar9;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0
                     ((CDeformableModelInstance *)(pCVar4 + 1));
  pCVar6 = core_cloth_cpp_CClothList_ctor_FUN_005b1440((CClothList *)(pCVar5 + 1));
  pCVar7 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)(pCVar6 + 0x1cc));
  *(byte **)(pCVar7 + -77000) = &g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar7 + -0x12cc4),"succubus.dfm");
  pcVar8 = "hdwing.cth";
  pCVar9 = pCVar7 + -0x1c8;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar7 + -0x2480),"hotdemon.dfm");
  *(uint *)(pCVar7 + -0xfb48) = 0x3f19999a;
  uVar2 = _DAT_005fc3cc;
  *(uint *)(pCVar7 + -0xfb44) = 0x3f666666;
  uVar3 = _DAT_005fc3d0;
  *(uint *)(pCVar7 + -0x1cc) = 1;
  *(uint *)(pCVar7 + -0xfb40) = uVar2;
  *(uint *)(pCVar7 + -0xfb3c) = uVar3;
  do {
    CVar1 = (CMorph)*pcVar8;
    *pCVar9 = CVar1;
    if (CVar1 == (CMorph)0x0) {
      return (CSuccubus *)(pCVar7 + -0x12f78);
    }
    CVar1 = *(CMorph *)(pcVar8 + 1);
    pcVar8 = pcVar8 + 2;
    pCVar9[1] = CVar1;
    pCVar9 = pCVar9 + 2;
  } while (CVar1 != (CMorph)0x0);
  return (CSuccubus *)(pCVar7 + -0x12f78);
}
