// Name: FUN_0048aa40
// Address: 0048aa40
// Address Range: [[0048aa40, 0048aaad]]
// Convention: unknown
// Signature: void FUN_0048aa40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048aa40(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
  uVar1 = FUN_005c1268(iVar2 * 0x34 + 4,iVar2,&DAT_005ff640);
  iVar2 = FUN_005c2694(uVar1);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dtrace.cpp";
  _DAT_01d1d404 = 0xae;
  FUN_005030e0("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
