// Name: FUN_00484b60
// Address: 00484b60
// Address Range: [[00484b60, 00484c8b]]
// Convention: unknown
// Signature: undefined4 FUN_00484b60(float *param_1)

#include "nocturne.h"

uint FUN_00484b60(float *param_1)

{
  int iVar1;
  
  FUN_00527230();
  if (param_1[0x11] == 0.0) {
    iVar1 = 0;
    do {
      FUN_0048b270();
      iVar1 = iVar1 + 1;
      FUN_0048ae90(0x01C08D04,param_1,0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    FUN_0050e660();
    FUN_00526340();
    FUN_00525f50((double)*param_1,(double)param_1[1],(double)param_1[2]);
  }
  else {
    if (param_1[0x11] != 2.8026e-45) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_0048ae90(0x01C08D04,param_1,0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    FUN_00526340();
    FUN_00525f50((double)*param_1,(double)param_1[1],(double)param_1[2]);
    FUN_005260f0();
  }
  FUN_005265a0();
  FUN_005263c0();
  return 1;
}
