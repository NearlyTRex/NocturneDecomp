// Name: FUN_00499eb0
// Address: 00499eb0
// Address Range: [[00499eb0, 00499fdb]]
// Convention: unknown
// Signature: undefined4 FUN_00499eb0(float *param_1)

#include "nocturne.h"

uint FUN_00499eb0(float *param_1)

{
  int iVar1;
  
  FUN_00556be0();
  if (param_1[0x13] == 0.0) {
    iVar1 = 0;
    do {
      FUN_004a2830();
      iVar1 = iVar1 + 1;
      FUN_004a23c0(0x01C73654,param_1,0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    FUN_0053b440();
    FUN_00555fd0();
    FUN_00555c90((double)*param_1,(double)param_1[1],(double)param_1[2]);
  }
  else {
    if (param_1[0x13] != 2.8026e-45) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_004a23c0(0x01C73654,param_1,0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    FUN_00555fd0();
    FUN_00555c90((double)*param_1,(double)param_1[1],(double)param_1[2]);
    FUN_00555df0();
  }
  FUN_00556240();
  FUN_00556050();
  return 1;
}
