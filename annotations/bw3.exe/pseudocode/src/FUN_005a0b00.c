// Name: FUN_005a0b00
// Address: 005a0b00
// Address Range: [[005a0b00, 005a0bd8]]
// Convention: unknown
// Signature: void FUN_005a0b00(int param_1)

#include "nocturne.h"

void FUN_005a0b00(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00509020(param_1);
  uVar1 = FUN_0054eac0(param_1 + 0x158);
  uVar2 = FUN_00548090(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x33fb8) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0x33fac) = 0x3f400000;
  *(uint *)(param_1 + 0x33fc0) = 0;
  *(uint *)(param_1 + 0x33fbc) = uVar1;
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0x33fb8);
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  FUN_004a4130(0x01C73654,3);
  FUN_004a41d0(0x01C73654,4);
  FUN_0042f280(1);
  param_1 = param_1 + 0x158;
  FUN_0054c090(param_1);
  FUN_0054dd10(param_1);
  FUN_0054e6b0(param_1);
  FUN_0054c110(param_1);
  return;
}
