// Name: FUN_00582ae0
// Address: 00582ae0
// Address Range: [[00582ae0, 00582b08]]
// Convention: unknown
// Signature: undefined4 FUN_00582ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00582ae0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (_DAT_02c834ac == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02c83410)(param_1,param_2,param_3);
  return uVar1;
}
