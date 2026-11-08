// Name: FUN_004964c0
// Address: 004964c0
// Address Range: [[004964c0, 004965eb]]
// Convention: unknown
// Signature: undefined4 FUN_004964c0(float *param_1)

#include "nocturne.h"

uint FUN_004964c0(float *param_1)

{
  int iVar1;
  
  FUN_00551050();
  if (param_1[0x13] == 0.0) {
    iVar1 = 0;
    do {
      FUN_0049d500();
      iVar1 = iVar1 + 1;
      FUN_0049d090(0x01C3DEB4,param_1,0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    FUN_00534800();
    FUN_00550450();
    FUN_00550110((double)*param_1,(double)param_1[1],(double)param_1[2]);
  }
  else {
    if (param_1[0x13] != 2.8026e-45) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_0049d090(0x01C3DEB4,param_1,0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    FUN_00550450();
    FUN_00550110((double)*param_1,(double)param_1[1],(double)param_1[2]);
    FUN_00550270();
  }
  FUN_005506b0();
  FUN_005504d0();
  return 1;
}
