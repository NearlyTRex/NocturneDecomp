// Name: core_zombie.cpp_CZombie_getGrabbed_FUN_00562440
// Address: 00562440
// Address Range: [[00562440, 005624a0]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_CZombie_getGrabbed_FUN_00562440(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint core_zombie_cpp_CZombie_getGrabbed_FUN_00562440(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 1) {
    iVar1 = *(int *)(param_1 + 0xbca4);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xec))(iVar1);
      if (iVar1 == param_1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe8))
                  (*(int *)(param_1 + 0xbca4));
      }
    }
    *(uint *)(param_1 + 0x2590) = param_2;
    *(uint *)(param_1 + 0x2594) = 1;
    return 1;
  }
  return 0;
}
