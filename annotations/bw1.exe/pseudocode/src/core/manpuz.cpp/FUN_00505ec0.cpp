// Name: FUN_00505ec0
// Address: 00505ec0
// Address Range: [[00505ec0, 00506057]]
// Convention: unknown
// Signature: void FUN_00505ec0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00505ec0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00506210(param_1,param_2);
  piVar1 = (int *)(param_1 + 0x5f0 + param_2 * 100);
  piVar3 = (int *)(param_1 + 0x5f0 + iVar2 * 100);
  if ((((*piVar1 == 0) || (*piVar3 != 0)) || ((piVar1[1] & 0x7fffffffU) != 0)) ||
     ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01d1d400 = "..\\core\\manpuz.cpp";
    _DAT_01d1d404 = 0x554;
    FUN_005030e0("CMansionPuzzleCircle::shiftPanelLeft - fubared.");
  }
  *piVar3 = *piVar1;
  piVar3[1] = piVar1[1];
  piVar3[2] = piVar1[2];
  if (piVar3 + 3 != piVar1 + 3) {
    piVar3[3] = piVar1[3];
    piVar3[4] = piVar1[4];
    piVar3[5] = piVar1[5];
  }
  if (piVar3 + 6 != piVar1 + 6) {
    piVar3[6] = piVar1[6];
    piVar3[7] = piVar1[7];
    piVar3[8] = piVar1[8];
  }
  piVar3[9] = piVar1[9];
  piVar3[10] = piVar1[10];
  piVar3[0xb] = piVar1[0xb];
  piVar3[0xc] = piVar1[0xc];
  piVar3[0xd] = piVar1[0xd];
  piVar3[0xe] = piVar1[0xe];
  piVar3[0xf] = piVar1[0xf];
  piVar3[0x10] = piVar1[0x10];
  piVar3[0x11] = piVar1[0x11];
  piVar3[0x12] = piVar1[0x12];
  piVar3[0x13] = piVar1[0x13];
  piVar3[0x14] = piVar1[0x14];
  piVar3[0x15] = piVar1[0x15];
  if (piVar3 + 0x16 != piVar1 + 0x16) {
    piVar3[0x16] = piVar1[0x16];
    piVar3[0x17] = piVar1[0x17];
    piVar3[0x18] = piVar1[0x18];
  }
  *piVar1 = 0;
  piVar3[1] = 0x3f800000;
  piVar3[2] = -0x40800000;
  FUN_00504ee0(param_1,iVar2);
  FUN_00572ac0();
  FUN_005727e0(piVar3 + 0x16);
  FUN_00572d20("manpuz-doorslide.wav");
  FUN_00572b40();
  return;
}
