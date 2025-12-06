// Name: core_gabriela.cpp_constructorMaybe_FUN_004d2b20
// Address: 004d2b20
// Address Range: [[004d2b20, 004d2c37]]
// Convention: __cdecl
// Signature: CGabriella * core_gabriela.cpp_constructorMaybe_FUN_004d2b20(CGabriella * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGabriella * __cdecl core_gabriela_cpp_constructorMaybe_FUN_004d2b20(CGabriella *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  core_hero_cpp_FUN_004f2340();
  iVar2 = core_cloth_cpp_FUN_00438ba0();
  *(CDemonActor_vtable **)(iVar2 + -0x1fac0) = &PTR_core_gabriela_cpp_FUN_0065e804;
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
  uVar1 = _DAT_0065e7ec;
  *(uint *)(iVar2 + -0x28) = 0;
  *(uint *)(iVar2 + 0x3fe70) = uVar1;
  *(uint *)(iVar2 + -0x24) = 0;
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0x18);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar2 + -0x1fabc),"gabriela.dfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(*(int *)(iVar2 + -0x1ac) + 0x158),"gabgun.kfm");
  return (CGabriella *)(iVar2 + -0x1fc14);
}
