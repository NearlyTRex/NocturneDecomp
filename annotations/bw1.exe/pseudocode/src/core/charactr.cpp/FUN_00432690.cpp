// Name: FUN_00432690
// Address: 00432690
// Address Range: [[00432690, 00432812]]
// Convention: unknown
// Signature: void FUN_00432690(int param_1,int param_2,float param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432690(int param_1,int param_2,float param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  byte bVar7;
  uint local_160 [12];
  uint local_130 [12];
  uint local_100 [12];
  byte local_d0 [48];
  byte local_a0 [48];
  uint local_70 [12];
  int local_40 [12];
  
  bVar7 = 0;
  piVar2 = (int *)(param_2 * 0x78 + param_1 + 0x25a8);
  if (*piVar2 < 0) {
    _DAT_01d1d400 = "..\\core\\charactr.cpp";
    _DAT_01d1d404 = 0xdef;
    FUN_005030e0("CCharacter::computePickup - invalid hand!  Character is %s, hand is %d",param_1,param_2);
  }
  FUN_005b5620(local_d0,piVar2[2] + 0x20,piVar2[2] + 0x30);
  FUN_005b5760(local_a0,param_1 + 0x20,param_1 + 0x30);
  FUN_005b5200(local_a0,local_d0);
  puVar3 = local_100;
  puVar5 = local_130;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  FUN_005b5200(*piVar2 * 0x30 + param_1 + 0xfd8,local_130);
  puVar3 = local_70;
  puVar5 = local_160;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  FUN_005b6380(local_160);
  piVar4 = local_40;
  piVar6 = piVar2 + 3;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  if (param_3 <= 0.0) {
    piVar2[0x10] = 0x3f800000;
    piVar2[0xf] = 0;
  }
  else {
    piVar2[0x10] = 0;
    piVar2[0xf] = (int)(1.0 / param_3);
  }
  if (param_4 == (int *)0x0) {
    piVar2[0x11] = 0;
    return;
  }
  piVar2[0x11] = 1;
  piVar2 = piVar2 + 0x12;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_4;
    param_4 = param_4 + (uint)bVar7 * -2 + 1;
    piVar2 = piVar2 + (uint)bVar7 * -2 + 1;
  }
  return;
}
