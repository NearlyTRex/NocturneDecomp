// Name: core_styler.cpp_CStyler_ctor_FUN_0059d750
// Address: 0059d750
// Address Range: [[0059d750, 0059d7ed]]
// Convention: unknown
// Signature: CStyler * core_styler_cpp_CStyler_ctor_FUN_0059d750(CStyler *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStyler * core_styler_cpp_CStyler_ctor_FUN_0059d750(CStyler *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEnemy *pCVar3;
  CCloth *pCVar4;
  CMorph *pCVar5;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  pCVar4 = core_cloth_cpp_CCloth_ctor_FUN_0043c220((CCloth *)(pCVar3 + 1));
  pCVar5 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0((CMorph *)(pCVar4 + 0x3ab44));
  *(CEnemy_full_vtable **)(pCVar5 + -0x47a44) = &g_CStylerVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar5 + -0x47a40),"bwp_stylersub.dfm");
  *(uint *)(pCVar5 + -0x4492c) = 0x3f400000;
  *(uint *)(pCVar5 + -0x44928) = 0x3fc00000;
  uVar1 = _DAT_005e8348;
  *(uint *)(pCVar5 + -0xc) = 0;
  uVar2 = _DAT_005e834c;
  *(uint *)(pCVar5 + -4) = 0;
  *(uint *)(pCVar5 + -8) = 0;
  *(uint *)(pCVar5 + -0x44924) = uVar1;
  *(uint *)(pCVar5 + -0x44920) = uVar2;
  return (CStyler *)(pCVar5 + -0x47b98);
}
