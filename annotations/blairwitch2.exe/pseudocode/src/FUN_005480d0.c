// Name: FUN_005480d0
// Address: 005480d0
// Address Range: [[005480d0, 00548127]]
// Convention: unknown
// Signature: int FUN_005480d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

int FUN_005480d0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_004154f0(param_3,param_4,param_5,param_6,0,0,0);
  FUN_00548130(param_1,iVar1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00416700(iVar1);
  return iVar1;
}
