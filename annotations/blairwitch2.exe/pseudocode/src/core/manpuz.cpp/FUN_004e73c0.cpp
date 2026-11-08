// Name: FUN_004e73c0
// Address: 004e73c0
// Address Range: [[004e73c0, 004e746e]]
// Convention: unknown
// Signature: void FUN_004e73c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e73c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x74c + param_2 * 100);
  iVar2 = FUN_004e7560(param_1,param_2);
  if ((((*piVar1 == 0) || (*(int *)(param_1 + 0x74c + iVar2 * 100) != 0)) ||
      ((piVar1[1] & 0x7fffffffU) != 0)) || ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01d046a0 = "..\\core\\manpuz.cpp";
    _DAT_01d046a4 = 0x57d;
    FUN_004e4500("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  piVar1[2] = 0x3f800000;
  FUN_00550450();
  FUN_00550170(piVar1 + 0x16);
  FUN_005506b0("manpuz-doorslide.wav");
  FUN_005504d0();
  return;
}
