// Name: FUN_00472550
// Address: 00472550
// Address Range: [[00472550, 004725bd]]
// Convention: unknown
// Signature: void FUN_00472550(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472550(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
  uVar1 = FUN_005b8df8(iVar2 * 0x34 + 4,iVar2,&DAT_005f5b30);
  iVar2 = FUN_005ba2b4(uVar1);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dtrace.cpp";
  _DAT_01d046a4 = 0xae;
  FUN_004e4500("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
