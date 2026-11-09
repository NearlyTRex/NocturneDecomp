// Name: core_stranger.cpp_FUN_00591c30
// Address: 00591c30
// Address Range: [[00591c30, 00591cd2]]
// Convention: unknown
// Signature: int core_stranger_cpp_FUN_00591c30(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

int core_stranger_cpp_FUN_00591c30(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x1ff78) == 0) && (*(int *)(param_1 + 0x1ff74) == 0)) &&
     ((*(int *)(param_1 + 0x1ff5c) == 0 || (*(int *)(param_1 + 0x1ff5c) == 3)))) {
    iVar1 = core_hero_cpp_FUN_004eadf0(param_1,param_2,param_3);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x20004) != *(int *)(param_1 + 0x25b0)) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
      }
      if (*(int *)(param_1 + 0x20004) != *(int *)(param_1 + 0x2628)) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      }
      *(uint *)(param_1 + 0x200a8) = 0;
    }
    return iVar1;
  }
  return 0;
}
