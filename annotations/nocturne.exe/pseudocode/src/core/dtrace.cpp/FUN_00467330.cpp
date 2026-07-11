// Name: FUN_00467330
// Address: 00467330
// Address Range: [[00467330, 0046739d]]
// Convention: unknown
// Signature: void FUN_00467330(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467330(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
  uVar1 = FUN_00564c18(iVar2 * 0x34 + 4,iVar2,&DAT_0059c8c0);
  iVar2 = FUN_00566234(uVar1);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dtrace.cpp";
  _DAT_01cc4804 = 0xae;
  FUN_004c8440("CDemonRaytrace::allocNewCubeList - Out of memory!");
  return;
}
