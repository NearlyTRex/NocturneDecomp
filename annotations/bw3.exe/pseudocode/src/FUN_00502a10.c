// Name: FUN_00502a10
// Address: 00502a10
// Address Range: [[00502a10, 00502a7a]]
// Convention: unknown
// Signature: void FUN_00502a10(undefined1 *param_1)

#include "nocturne.h"

void FUN_00502a10(byte *param_1)

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
    FUN_005a3a90(iVar1);
    *(int *)(param_1 + 0x5320) = 0;
    iVar1 = *(int *)(param_1 + 0x5324);
    if (iVar1 == 0) {
      *param_1 = 0;
      return;
    }
  }
  FUN_005a3770(iVar1);
  *(uint *)(param_1 + 0x5324) = 0;
  *param_1 = 0;
  return;
}
