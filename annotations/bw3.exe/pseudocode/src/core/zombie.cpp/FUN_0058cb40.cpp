// Name: core_zombie.cpp_FUN_0058cb40
// Address: 0058cb40
// Address Range: [[0058cb40, 0058cba0]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_FUN_0058cb40(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint core_zombie_cpp_FUN_0058cb40(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 1) {
    iVar1 = *(int *)(param_1 + 0xcde4);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xf4))(iVar1);
      if (iVar1 == param_1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xf0))
                  (*(int *)(param_1 + 0xcde4));
      }
    }
    *(uint *)(param_1 + 0x26fc) = param_2;
    *(uint *)(param_1 + 0x2700) = 1;
    return 1;
  }
  return 0;
}
