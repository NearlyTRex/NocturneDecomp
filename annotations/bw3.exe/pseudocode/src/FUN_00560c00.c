// Name: FUN_00560c00
// Address: 00560c00
// Address Range: [[00560c00, 00560c2c]]
// Convention: unknown
// Signature: void FUN_00560c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00560c00(uint param_1,uint param_2,uint param_3,uint param_4)

{
  _DAT_02cf56a4 = param_2;
  _DAT_02cf56a8 = param_3;
  _DAT_02cf56ac = param_4;
  FUN_00558860(param_2,param_3,param_4);
  return;
}
