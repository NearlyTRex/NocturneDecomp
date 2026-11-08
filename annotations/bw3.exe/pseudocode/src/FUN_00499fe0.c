// Name: FUN_00499fe0
// Address: 00499fe0
// Address Range: [[00499fe0, 00499fff]]
// Convention: unknown
// Signature: undefined4 FUN_00499fe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_00499fe0(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x4c) = param_4;
  uVar1 = FUN_00509e40(param_1,param_2,param_3);
  return uVar1;
}
