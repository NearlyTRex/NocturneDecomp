// Name: FUN_00403250
// Address: 00403250
// Address Range: [[00403250, 004032a8]]
// Convention: unknown
// Signature: void FUN_00403250(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403250(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  
  FUN_004031c0(param_1,param_2,param_3,param_4,param_5);
  uVar1 = _DAT_01c6b5c0;
  _DAT_01c6b5c0 = param_6;
  FUN_00403170(param_1 + -1,param_2 + -1,param_3 + 1,param_4 + 1);
  _DAT_01c6b5c0 = uVar1;
  return;
}
