// Name: FUN_00571e50
// Address: 00571e50
// Address Range: [[00571e50, 00571e98]]
// Convention: unknown
// Signature: uint FUN_00571e50(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00571e50(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xa10) < *(int *)(param_1 + 0xa14)) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0xa10) + 0x610 + param_1);
    *(int *)(param_1 + 0xa10) = *(int *)(param_1 + 0xa10) + 1;
    return (uint)bVar1;
  }
  uVar2 = FUN_00571d80(param_1,param_2);
  return uVar2;
}
