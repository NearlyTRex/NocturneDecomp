// Name: FUN_00441920
// Address: 00441920
// Address Range: [[00441920, 00441963]]
// Convention: unknown
// Signature: uint FUN_00441920(int param_1)

#include "nocturne.h"

uint FUN_00441920(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x1c)) {
    uVar2 = FUN_00441c80(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return (uint)bVar1;
}
