// Name: FUN_00471530
// Address: 00471530
// Address Range: [[00471530, 004715fa]]
// Convention: unknown
// Signature: undefined4 FUN_00471530(undefined4 param_1,undefined4 param_2,float *param_3,byte param_4)

#include "nocturne.h"

uint FUN_00471530(uint param_1,uint param_2,float *param_3,byte param_4)

{
  int iVar1;
  byte auStack_40 [40];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  if ((param_4 & 1) == 0) {
    auStack_40[0] = 0;
  }
  else {
    FUN_00563c90(auStack_40,0x57e7fa,(double)*param_3,(double)param_3[1],(double)param_3[2]);
  }
  while( true ) {
    iVar1 = FUN_00471600();
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00566b5c();
    if (iVar1 == 3) break;
    FUN_0046fcd0(param_1,"Please enter a valid vector.");
  }
  if (param_3 != &fStack_18) {
    *param_3 = fStack_18;
    param_3[1] = fStack_14;
    param_3[2] = fStack_10;
  }
  return 1;
}
