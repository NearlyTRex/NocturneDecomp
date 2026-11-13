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
  int iVar2;
  
  iVar2 = core_hero_cpp_FUN_004ce240(this_ptr);
  iVar2 = core_necklace_cpp_FUN_005adda0(iVar2 + 0x25680);
  *(CHero_full_vtable **)(iVar2 + -0x253d0) = &g_CGabriellaVTable;
  *(uint *)(iVar2 + -0x40) = 0;
  *(uint *)(iVar2 + -0x3c) = 0;
  *(uint *)(iVar2 + -0x38) = 0;
  *(uint *)(iVar2 + -0x34) = 0;
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x30) = 0;
  *(uint *)(iVar2 + -0x2c) = 0xbf060a92;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -4) = 0;
  uVar1 = _DAT_005f736c;
  *(uint *)(iVar2 + -0x28) = 0;
  *(uint *)(iVar2 + 0x3ab30) = uVar1;
  *(uint *)(iVar2 + -0x24) = 0;
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0x18);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(iVar2 + -0x253cc),"?gabriela.dfm" + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)
             (*(int *)(iVar2 + -0xcf4 + *(int *)(iVar2 + -0xe9c) * 4) + 0x2b4),(char *)0x5d6dd0);
  return (CGabriella *)(iVar2 + -0x25680);
}
