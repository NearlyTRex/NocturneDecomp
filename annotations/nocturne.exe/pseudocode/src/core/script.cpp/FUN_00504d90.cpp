// Name: FUN_00504d90
// Address: 00504d90
// Address Range: [[00504d90, 00504e63]]
// Convention: unknown
// Signature: undefined4 FUN_00504d90(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00504d90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  if (param_1[0x114] < 0) {
    return 0;
  }
  FUN_00504d60(param_1);
  iVar3 = 0;
  param_1[0x10] = param_1[0x114];
  while ((*(int *)(0x01C775EC + 0x228) != 0 && (*param_1 == 0))) {
    local_c = 0x3e800000;
    iVar1 = param_1[0x10];
    iVar2 = FUN_004ff2c0(param_1,&local_c);
    if (iVar2 < 0) {
      FUN_0046fcd0(0x01BCD074,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(uint *)(param_1[0xb] + iVar1 * 8),
                   *(uint *)(param_1[0xb] + 4 + iVar1 * 8),&DAT_01e56420);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      _DAT_01cc4804 = 0xea5;
      _DAT_01cc4800 = "..\\core\\script.cpp";
      FUN_004c8440("Infinite loop detected trying to skip cinematic, at script line %d",
                   *(uint *)(param_1[0xb] + param_1[0x10] * 8));
    }
  }
  return 1;
}
