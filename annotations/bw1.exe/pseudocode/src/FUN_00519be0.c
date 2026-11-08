// Name: FUN_00519be0
// Address: 00519be0
// Address Range: [[00519be0, 00519c12]]
// Convention: unknown
// Signature: void FUN_00519be0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00519be0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00519960(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00481eb0(DAT_00612560,param_1 + 0xe8);
  return;
}
