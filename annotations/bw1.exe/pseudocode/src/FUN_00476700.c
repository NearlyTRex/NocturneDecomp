// Name: FUN_00476700
// Address: 00476700
// Address Range: [[00476700, 0047674d]]
// Convention: unknown
// Signature: undefined4 FUN_00476700(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00476700(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fee50);
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
