// Name: core_scat.cpp_FUN_0051fa90
// Address: 0051fa90
// Address Range: [[0051fa90, 0051fb3b]]
// Convention: unknown
// Signature: undefined4 core_scat_cpp_FUN_0051fa90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_scat_cpp_FUN_0051fa90(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = core_charactr_cpp_FUN_004254b0(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x25654);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x18))(iVar1);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x25654) != 0) {
        switch(*(uint *)(*(int *)(param_1 + 0x25654) + 0x43c)) {
        default:
          uVar2 = 2;
          break;
        case 9:
          uVar2 = 0;
        }
      }
      fVar3 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,uVar2);
      if ((float)_DAT_005e2b8b < fVar3) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x25654) + 0x2b0) + 0xf8))
                  (*(int *)(param_1 + 0x25654));
        return 1;
      }
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
