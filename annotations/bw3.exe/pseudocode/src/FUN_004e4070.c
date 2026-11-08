// Name: FUN_004e4070
// Address: 004e4070
// Address Range: [[004e4070, 004e40cf]]
// Convention: unknown
// Signature: void FUN_004e4070(int param_1)

#include "nocturne.h"

void FUN_004e4070(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x160) == 0) {
    iVar1 = FUN_00491aa0(0x01C6E360,param_1 + 0x164);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x160) = 1;
      return;
    }
  }
  else {
    iVar1 = FUN_00491aa0(0x01C6E360,param_1 + 0x1c8);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x160) = 0;
      return;
    }
  }
  return;
}
