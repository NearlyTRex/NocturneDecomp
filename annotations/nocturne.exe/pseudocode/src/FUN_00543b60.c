// Name: FUN_00543b60
// Address: 00543b60
// Address Range: [[00543b60, 00543bbf]]
// Convention: unknown
// Signature: int FUN_00543b60(undefined4 param_1)

#include "nocturne.h"

int FUN_00543b60(uint param_1)

{
  int iVar1;
  
  iVar1 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_tentacle_cpp_CTentacle_setup_FUN_00543bc0_005a3104;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar1 + 0x150,"tentacle.dfm");
  *(uint *)(iVar1 + 0x2ddc) = 0x42480000;
  *(uint *)(iVar1 + 0x2de0) = 0x42c80000;
  *(uint *)(iVar1 + 0xbd24) = 0;
  *(uint *)(iVar1 + 0xbd28) = 0;
  *(uint *)(iVar1 + 0xbd2c) = 0;
  return iVar1;
}
