// Name: FUN_00414ab0
// Address: 00414ab0
// Address Range: [[00414ab0, 00414b27]]
// Convention: unknown
// Signature: void FUN_00414ab0(int param_1)

#include "nocturne.h"

void FUN_00414ab0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004a0510(param_1);
  FUN_00569b20(param_1 + 0x158);
  FUN_004688e0(param_1 + 0xc268);
  iVar1 = param_1 + 0xc3ec;
  FUN_005230c0(iVar1,0,param_1 + 0x158);
  uVar2 = FUN_00468900(param_1 + 0xc268,0);
  FUN_00523100(iVar1,1,uVar2);
  FUN_00523310(iVar1);
  *(uint *)(param_1 + 0xc3e4) = 0;
  *(uint *)(param_1 + 0xc3e8) = 0;
  return;
}
