// Name: FUN_004cb740
// Address: 004cb740
// Address Range: [[004cb740, 004cb7ee]]
// Convention: unknown
// Signature: void FUN_004cb740(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cb740(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x5e8 + param_2 * 100);
  iVar2 = FUN_004cb8e0(param_1,param_2);
  if ((((*piVar1 == 0) || (*(int *)(param_1 + 0x5e8 + iVar2 * 100) != 0)) ||
      ((piVar1[1] & 0x7fffffffU) != 0)) || ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01cc4800 = "..\\core\\manpuz.cpp";
    _DAT_01cc4804 = 0x57d;
    FUN_004c8440("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  piVar1[2] = 0x3f800000;
  FUN_00526340();
  FUN_00525fc0(piVar1 + 0x16);
  FUN_005265a0("manpuz-doorslide.wav");
  FUN_005263c0();
  return;
}
