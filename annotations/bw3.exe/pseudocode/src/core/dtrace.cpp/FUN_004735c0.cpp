// Name: FUN_004735c0
// Address: 004735c0
// Address Range: [[004735c0, 0047362d]]
// Convention: unknown
// Signature: void FUN_004735c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004735c0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
  uVar1 = FUN_005a40df(iVar2 * 0x34 + 4,iVar2,&DAT_005dee50);
  iVar2 = FUN_005a5584(uVar1);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dtrace.cpp";
  _DAT_01d71de4 = 0xae;
  FUN_004e4330("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
