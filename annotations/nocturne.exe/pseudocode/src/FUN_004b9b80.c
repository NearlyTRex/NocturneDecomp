// Name: FUN_004b9b80
// Address: 004b9b80
// Address Range: [[004b9b80, 004b9bc1]]
// Convention: unknown
// Signature: void FUN_004b9b80(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004b9b80(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_004eea20(param_1,param_2);
  iVar1 = FUN_0047dc30(0x01C03A10,param_1 + 0x1f570);
  if (iVar1 == 0) {
    return;
  }
  FUN_00427b60(param_1,0,0xbf800000,1);
  return;
}
