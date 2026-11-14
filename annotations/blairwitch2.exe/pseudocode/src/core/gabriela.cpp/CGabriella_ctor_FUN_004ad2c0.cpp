// Name: core_gabriela.cpp_CGabriella_ctor_FUN_004ad2c0
// Address: 004ad2c0
// Address Range: [[004ad2c0, 004ad3de]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004ad2c0(CGabriella *this_ptr)

{
  uint uVar1;
  CHero *pCVar2;
  int iVar3;
  
  pCVar2 = core_hero_cpp_CHero_ctor_FUN_004ce240(&this_ptr->base);
  iVar3 = core_necklace_cpp_FUN_005adda0(&pCVar2[1].base.base.orient_matrix.m[0].y);
  *(CHero_full_vtable **)(iVar3 + -0x253d0) = &g_CGabriellaVTable;
  *(uint *)(iVar3 + -0x40) = 0;
  *(uint *)(iVar3 + -0x3c) = 0;
  *(uint *)(iVar3 + -0x38) = 0;
  *(uint *)(iVar3 + -0x34) = 0;
  *(uint *)(iVar3 + -0x1c) = 0;
  *(uint *)(iVar3 + -0x30) = 0;
  *(uint *)(iVar3 + -0x2c) = 0xbf060a92;
  *(uint *)(iVar3 + -8) = 0;
  *(uint *)(iVar3 + -0x10) = 0;
  *(uint *)(iVar3 + -0x18) = 0;
  *(uint *)(iVar3 + -4) = 0;
  uVar1 = _DAT_005f736c;
  *(uint *)(iVar3 + -0x28) = 0;
  *(uint *)(iVar3 + 0x3ab30) = uVar1;
  *(uint *)(iVar3 + -0x24) = 0;
  *(uint *)(iVar3 + -0x20) = 0;
  *(uint *)(iVar3 + -0xc) = *(uint *)(iVar3 + -0x10);
  *(uint *)(iVar3 + -0x14) = *(uint *)(iVar3 + -0x18);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(iVar3 + -0x253cc),"?gabriela.dfm" + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)
             (*(int *)(iVar3 + -0xcf4 + *(int *)(iVar3 + -0xe9c) * 4) + 0x2b4),(char *)0x5d6dd0);
  return (CGabriella *)(iVar3 + -0x25680);
}
