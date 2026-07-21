// Name: core_stranger.cpp_CStranger_getGrabbed_FUN_00540770
// Address: 00540770
// Address Range: [[00540770, 00540812]]
// Convention: unknown
// Signature: int core_stranger_cpp_CStranger_getGrabbed_FUN_00540770(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

int core_stranger_cpp_CStranger_getGrabbed_FUN_00540770(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x1fa08) == 0) && (*(int *)(param_1 + 0x1fa04) == 0)) &&
     ((*(int *)(param_1 + 0x1faa0) == 0 || (*(int *)(param_1 + 0x1faa0) == 3)))) {
    iVar1 = core_hero_cpp_CHero_getGrabbed_FUN_004b4c70(param_1,param_2,param_3);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x1fa94) != *(int *)(param_1 + 0x24ac)) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
      }
      if (*(int *)(param_1 + 0x1fa94) != *(int *)(param_1 + 0x24f0)) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
      }
      *(uint *)(param_1 + 0x1fb3c) = 0;
    }
    return iVar1;
  }
  return 0;
}
