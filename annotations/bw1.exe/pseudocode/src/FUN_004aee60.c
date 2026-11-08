// Name: FUN_004aee60
// Address: 004aee60
// Address Range: [[004aee60, 004aef8b]]
// Convention: unknown
// Signature: undefined4 FUN_004aee60(float *param_1)

#include "nocturne.h"

uint FUN_004aee60(float *param_1)

{
  int iVar1;
  
  FUN_00573a80();
  if (param_1[0x13] == 0.0) {
    iVar1 = 0;
    do {
      FUN_004b5e00();
      iVar1 = iVar1 + 1;
      FUN_004b59e0(0x01C57074,param_1,0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    FUN_00555ab0();
    FUN_00572ac0();
    FUN_00572780((double)*param_1,(double)param_1[1],(double)param_1[2]);
  }
  else {
    if (param_1[0x13] != 2.8026e-45) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_004b59e0(0x01C57074,param_1,0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    FUN_00572ac0();
    FUN_00572780((double)*param_1,(double)param_1[1],(double)param_1[2]);
    FUN_005728e0();
  }
  FUN_00572d20();
  FUN_00572b40();
  return 1;
}
