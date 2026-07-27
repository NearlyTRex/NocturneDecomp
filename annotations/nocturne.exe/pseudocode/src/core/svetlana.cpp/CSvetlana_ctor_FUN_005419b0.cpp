// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0
// Address: 005419b0
// Address Range: [[005419b0, 00541a37]]
// Convention: unknown
// Signature: int core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(undefined4 param_1)

#include "nocturne.h"

int core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_hero_cpp_FUN_004b46d0(param_1);
  iVar1 = core_cloth_cpp_CCloth_ctor_FUN_00435100(iVar1 + 0x1fa44);
  iVar1 = core_cloth_cpp_CCloth_ctor_FUN_00435100(iVar1 + 0x3ab30);
  *(byte ***)(iVar1 + -0x5a428) = &PTR_core_svetlana_cpp_CSvetlana_setup_FUN_00541a40_005a2a74;
  *(uint *)(iVar1 + -0x3ab38) = 0;
  *(uint *)(iVar1 + -0x3ab34) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar1 + -0x5a424,"svetlana.dfm");
  *(uint *)(iVar1 + 0x3ab40) = 0x3f800000;
  *(uint *)(iVar1 + 0x3ab3c) = 0;
  *(uint *)(iVar1 + 0x3ab38) = *(uint *)(iVar1 + 0x3ab3c);
  *(uint *)(iVar1 + 0x3ab34) = *(uint *)(iVar1 + 0x3ab38);
  return iVar1 + -0x5a574;
}
