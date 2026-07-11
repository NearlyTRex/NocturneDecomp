// Name: FUN_004e8260
// Address: 004e8260
// Address Range: [[004e8260, 004e82ca]]
// Convention: unknown
// Signature: void FUN_004e8260(undefined1 *param_1)

#include "nocturne.h"

void FUN_004e8260(byte *param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x10c) = 0;
  *(uint *)(param_1 + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 0x5320);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x5324);
    if (iVar1 == 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    FUN_00563380(iVar1);
    *(int *)(param_1 + 0x5320) = 0;
    iVar1 = *(int *)(param_1 + 0x5324);
    if (iVar1 == 0) {
      *param_1 = 0;
      return;
    }
  }
  FUN_005638d0(iVar1);
  *(uint *)(param_1 + 0x5324) = 0;
  *param_1 = 0;
  return;
}
