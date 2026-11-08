// Name: FUN_0052b100
// Address: 0052b100
// Address Range: [[0052b100, 0052b16a]]
// Convention: unknown
// Signature: void FUN_0052b100(undefined1 *param_1)

#include "nocturne.h"

void FUN_0052b100(byte *param_1)

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
    FUN_005c0d10(iVar1);
    *(int *)(param_1 + 0x5320) = 0;
    iVar1 = *(int *)(param_1 + 0x5324);
    if (iVar1 == 0) {
      *param_1 = 0;
      return;
    }
  }
  FUN_005c09f0(iVar1);
  *(uint *)(param_1 + 0x5324) = 0;
  *param_1 = 0;
  return;
}
