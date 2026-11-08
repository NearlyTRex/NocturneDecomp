// Name: FUN_00591e60
// Address: 00591e60
// Address Range: [[00591e60, 00591ead]]
// Convention: unknown
// Signature: undefined4 FUN_00591e60(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00591e60(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_00606230);
    FUN_005c0336(uVar1);
    return param_1;
  }
  uVar1 = FUN_004ea980(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005c0344(uVar1);
  return uVar1;
}
