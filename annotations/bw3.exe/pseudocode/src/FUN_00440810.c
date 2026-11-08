// Name: FUN_00440810
// Address: 00440810
// Address Range: [[00440810, 00440858]]
// Convention: unknown
// Signature: undefined4 * FUN_00440810(undefined4 *param_1,uint param_2)

#include "nocturne.h"

uint * FUN_00440810(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005dd580);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  *param_1 = &PTR_FUN_005dd434;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005a30c4(param_1);
  return param_1;
}
