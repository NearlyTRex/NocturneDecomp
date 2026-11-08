// Name: FUN_00515490
// Address: 00515490
// Address Range: [[00515490, 005154dd]]
// Convention: unknown
// Signature: undefined4 FUN_00515490(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_00515490(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005e34b0);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  uVar1 = FUN_00514350(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005a30c4(uVar1);
  return uVar1;
}
