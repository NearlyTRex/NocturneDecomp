// Name: FUN_0059ee60
// Address: 0059ee60
// Address Range: [[0059ee60, 0059eea8]]
// Convention: unknown
// Signature: uint FUN_0059ee60(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0059ee60(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xa10) < *(int *)(param_1 + 0xa14)) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0xa10) + 0x610 + param_1);
    *(int *)(param_1 + 0xa10) = *(int *)(param_1 + 0xa10) + 1;
    return (uint)bVar1;
  }
  uVar2 = FUN_0059ed90(param_1,param_2);
  return uVar2;
}
