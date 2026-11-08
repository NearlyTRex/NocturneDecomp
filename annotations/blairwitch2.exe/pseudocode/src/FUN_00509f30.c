// Name: FUN_00509f30
// Address: 00509f30
// Address Range: [[00509f30, 00509f9a]]
// Convention: unknown
// Signature: void FUN_00509f30(undefined1 *param_1)

#include "nocturne.h"

void FUN_00509f30(byte *param_1)

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
    FUN_005b89c0(iVar1);
    *(int *)(param_1 + 0x5320) = 0;
    iVar1 = *(int *)(param_1 + 0x5324);
    if (iVar1 == 0) {
      *param_1 = 0;
      return;
    }
  }
  FUN_005b86a0(iVar1);
  *(uint *)(param_1 + 0x5324) = 0;
  *param_1 = 0;
  return;
}
