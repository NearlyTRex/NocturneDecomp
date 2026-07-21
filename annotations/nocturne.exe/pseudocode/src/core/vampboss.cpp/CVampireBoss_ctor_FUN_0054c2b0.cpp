// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0
// Address: 0054c2b0
// Address Range: [[0054c2b0, 0054c3df]]
// Convention: unknown
// Signature: int core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(undefined4 param_1)

#include "nocturne.h"

int core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(iVar1 + 0xbd24);
  iVar1 = core_cloth_cpp_CCloth_ctor_FUN_00435100(iVar1 + 0x22b4);
  iVar1 = core_cloth_cpp_CCloth_ctor_FUN_00435100(iVar1 + 0x3ab30);
  iVar1 = core_cloth_cpp_CCloth_ctor_FUN_00435100(iVar1 + 0x3ab30);
  iVar1 = core_morph_cpp_CMorph_ctor_FUN_004e0050(iVar1 + 0x3ab34);
  *(byte ***)(iVar1 + -0xbe020) = &PTR_FUN_005a3a94;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar1 + -0xbe01c,"nosfer.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar1 + -0xb2448,"batboss.dfm");
  *(uint *)(iVar1 + -0xbb398) = 0x40000000;
  *(uint *)(iVar1 + -0xbb394) = 0x40400000;
  *(uint *)(iVar1 + -0xbb390) = 0x42480000;
  *(uint *)(iVar1 + -0xbb38c) = 0x42c80000;
  *(uint *)(iVar1 + 0xc30) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0xc2c) = 0;
  *(uint *)(iVar1 + 0xc48) = 0;
  *(uint *)(iVar1 + 0xc4c) = 0;
  *(uint *)(iVar1 + 0xc50) = 0;
  *(uint *)(iVar1 + 0xc54) = 0;
  *(uint *)(iVar1 + 0xc44) = 0;
  *(uint *)(iVar1 + 0xc58) = 0;
  *(uint *)(iVar1 + 0xc34) = 0x41200000;
  *(uint *)(iVar1 + 0xc40) = 1;
  *(uint *)(iVar1 + -0xbbb50) = 0;
  return iVar1 + -0xbe16c;
}
