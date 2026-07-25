// Name: FUN_004f7890
// Address: 004f7890
// Address Range: [[004f7890, 004f78c3]]
// Convention: unknown
// Signature: undefined4 FUN_004f7890(undefined1 *param_1,uint param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_004f7890(byte *param_1,uint param_2,uint param_3)

{
  byte uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1;
      param_3 = FUN_004f77d0(param_3,uVar1);
    } while (uVar2 < param_2);
  }
  return param_3;
}
