// Name: FUN_004ee950
// Address: 004ee950
// Address Range: [[004ee950, 004ee9d9]]
// Convention: unknown
// Signature: int FUN_004ee950(undefined4 param_1)

#include "nocturne.h"

int FUN_004ee950(uint param_1)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00423f40(param_1);
  iVar1 = core_path_cpp_CPathMap_ctor_FUN_004efd50(iVar1 + 0xbc8c);
  *(byte ***)(iVar1 + -0xbb40) = &PTR_FUN_005a0eb4;
  *(uint *)(iVar1 + -0x8eb8) = 0x3f19999a;
  *(uint *)(iVar1 + -0x8eb4) = 0x3f666666;
  *(uint *)(iVar1 + -0x8ea8) = 0x3fcccccd;
  *(uint *)(iVar1 + -0x8ea4) = 0xc479c000;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar1 + -0xbb3c,"priest.dfm");
  *(uint *)(iVar1 + -0x9670) = 0;
  *(uint *)(iVar1 + 0x138dc) = 0;
  *(uint *)(iVar1 + 0x138e0) = 0;
  return iVar1 + -0xbc8c;
}
