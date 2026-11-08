// Name: FUN_00451250
// Address: 00451250
// Address Range: [[00451250, 0045129f]]
// Convention: unknown
// Signature: void FUN_00451250(int param_1)

#include "nocturne.h"

void FUN_00451250(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x148)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00495f68(*(int *)(param_1 + 0x144) << 2);
    } while (iVar1 < *(int *)(param_1 + 0x148));
  }
  return;
}
