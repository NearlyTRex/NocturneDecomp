// Name: FUN_0040b090
// Address: 0040b090
// Address Range: [[0040b090, 0040b0c4]]
// Convention: unknown
// Signature: void FUN_0040b090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0040b090(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0048fbe0(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_004b0670(0x01C78C7C,param_1,param_2,param_3,0);
  return;
}
