// Name: FUN_00479f70
// Address: 00479f70
// Address Range: [[00479f70, 00479ff6]]
// Convention: unknown
// Signature: void FUN_00479f70(int param_1,int param_2)

#include "nocturne.h"

void FUN_00479f70(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xf0))(param_1);
  FUN_00428510(param_1,param_2);
  if (0.0 < *(float *)(param_2 + 4)) {
    iVar1 = FUN_0040d890(*(uint *)(param_2 + 0x38),DAT_00765a98);
    if (iVar1 == 0) {
      iVar1 = FUN_0040d890(*(uint *)(param_2 + 0x34),DAT_00765a98);
    }
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xbca8) = 0x41700000;
      *(uint *)(param_1 + 0xbc98) = 1;
      *(int *)(param_1 + 0xbca4) = iVar1;
      return;
    }
  }
  return;
}
