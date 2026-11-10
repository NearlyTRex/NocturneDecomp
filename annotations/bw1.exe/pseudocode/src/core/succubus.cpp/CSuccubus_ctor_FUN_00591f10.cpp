// Name: core_succubus.cpp_CSuccubus_ctor_FUN_00591f10
// Address: 00591f10
// Address Range: [[00591f10, 00591fe4]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_00591f10(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_00591f10(CSuccubus *this_ptr)

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
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
                     ((CDeformableModelInstance *)(pCVar4 + 1));
  pCVar6 = core_cloth_cpp_CClothList_ctor_FUN_00441c60((CClothList *)(pCVar5 + 1));
  pCVar7 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)(pCVar6[1].filenames[0] + 0xc));
  *(CEnemy_full_vtable **)(pCVar7 + -0xe684) = &g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar7 + -0xe680),"succubus.dfm");
  pcVar8 = "hdwing.cth";
  pCVar9 = pCVar7 + -0x1c8;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar7 + -0x2570),"hotdemon.dfm");
  *(uint *)(pCVar7 + -0xb7ec) = 0x3f19999a;
  uVar2 = _DAT_0060626c;
  *(uint *)(pCVar7 + -0xb7e8) = 0x3f666666;
  uVar3 = _DAT_00606270;
  *(uint *)(pCVar7 + -0x1cc) = 1;
  *(uint *)(pCVar7 + -0xb7e4) = uVar2;
  *(uint *)(pCVar7 + -0xb7e0) = uVar3;
  do {
    CVar1 = (CMorph)*pcVar8;
    *pCVar9 = CVar1;
    if (CVar1 == (CMorph)0x0) {
      return (CSuccubus *)(pCVar7 + -0xe7d8);
    }
    CVar1 = *(CMorph *)(pcVar8 + 1);
    pcVar8 = pcVar8 + 2;
    pCVar9[1] = CVar1;
    pCVar9 = pCVar9 + 2;
  } while (CVar1 != (CMorph)0x0);
  return (CSuccubus *)(pCVar7 + -0xe7d8);
}
