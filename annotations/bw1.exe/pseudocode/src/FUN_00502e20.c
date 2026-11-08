// Name: FUN_00502e20
// Address: 00502e20
// Address Range: [[00502e20, 00502e7f]]
// Convention: unknown
// Signature: void FUN_00502e20(int param_1)

#include "nocturne.h"

void FUN_00502e20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x160) == 0) {
    iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x164);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x160) = 1;
      return;
    }
  }
  else {
    iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x1c8);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x160) = 0;
      return;
    }
  }
  return;
}
