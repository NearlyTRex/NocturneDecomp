// Name: FUN_00467250
// Address: 00467250
// Address Range: [[00467250, 0046729d]]
// Convention: unknown
// Signature: void FUN_00467250(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467250(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00565c50(0x58,*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) *
                            *(int *)(param_1 + 0x48));
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dtrace.cpp";
  _DAT_01cc4804 = 0x88;
  FUN_004c8440("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
