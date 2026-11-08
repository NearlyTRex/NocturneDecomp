// Name: FUN_00506060
// Address: 00506060
// Address Range: [[00506060, 0050610e]]
// Convention: unknown
// Signature: void FUN_00506060(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00506060(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x5f0 + param_2 * 100);
  iVar2 = FUN_00506200(param_1,param_2);
  if ((((*piVar1 == 0) || (*(int *)(param_1 + 0x5f0 + iVar2 * 100) != 0)) ||
      ((piVar1[1] & 0x7fffffffU) != 0)) || ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01d1d400 = "..\\core\\manpuz.cpp";
    _DAT_01d1d404 = 0x57d;
    FUN_005030e0("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  piVar1[2] = 0x3f800000;
  FUN_00572ac0();
  FUN_005727e0(piVar1 + 0x16);
  FUN_00572d20("manpuz-doorslide.wav");
  FUN_00572b40();
  return;
}
