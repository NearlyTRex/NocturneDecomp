// Name: FUN_004f0a20
// Address: 004f0a20
// Address Range: [[004f0a20, 004f0a61]]
// Convention: unknown
// Signature: void FUN_004f0a20(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004f0a20(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_005317c0(param_1,param_2);
  iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x1fab8);
  if (iVar1 == 0) {
    return;
  }
  FUN_00430d90(param_1,0,0xbf800000,1);
  return;
}
