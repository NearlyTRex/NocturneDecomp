// Name: FUN_0040b830
// Address: 0040b830
// Address Range: [[0040b830, 0040b8a6]]
// Convention: unknown
// Signature: void FUN_0040b830(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b830(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = FUN_005a3230(DAT_007df9b4,&DAT_005b5aed,param_1);
    if (iVar1 != 1) {
      FUN_0040b2d0("Floating point value",param_2);
    }
  }
  else {
    FUN_005a3140(DAT_007df9b4,&DAT_005b5af0,&DAT_005f0990,(double)*param_1);
  }
  FUN_0040b350("Floating point value",param_2);
  return;
}
