// Name: FUN_00539860
// Address: 00539860
// Address Range: [[00539860, 005398b2]]
// Convention: unknown
// Signature: void FUN_00539860(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00539860(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00460c70(&DAT_005e6020,param_2,&DAT_005e601d);
  if (iVar1 == 0) {
    FUN_00539d50(param_1);
    FUN_00539c30(param_1,param_2);
    return;
  }
  FUN_005398d0(param_1,iVar1);
  FUN_005b89c0(iVar1);
  return;
}
