// Name: FUN_00504ca0
// Address: 00504ca0
// Address Range: [[00504ca0, 00504d13]]
// Convention: unknown
// Signature: bool FUN_00504ca0(int param_1,uint param_2,undefined4 param_3)

#include "nocturne.h"

bool FUN_00504ca0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc) & 7;
  if (uVar1 != 0) {
    FUN_00504b00(param_1,8 - uVar1);
  }
  uVar1 = FUN_00504b00(param_1,param_3);
  while (((uVar1 & (2 << ((byte)param_3 & 0x1f)) - 1U) != param_2 && (*(int *)(param_1 + 0x1c) == 0)
         )) {
    uVar2 = FUN_00504b00(param_1,8);
    uVar1 = uVar1 << 8 | uVar2;
  }
  return *(int *)(param_1 + 0x1c) == 0;
}
