// Name: FUN_00429010
// Address: 00429010
// Address Range: [[00429010, 0042916b]]
// Convention: unknown
// Signature: void FUN_00429010(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429010(int param_1,int param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  byte bVar7;
  int local_160 [12];
  uint local_130 [12];
  byte local_100 [48];
  byte local_d0 [48];
  uint local_a0 [12];
  uint local_70 [12];
  uint local_40 [12];
  
  bVar7 = 0;
  piVar2 = (int *)(param_1 + 0x24a4 + param_2 * 0x44);
  if (*piVar2 < 0) {
    _DAT_01cc4800 = "..\\core\\charactr.cpp";
    _DAT_01cc4804 = 0xc14;
    FUN_004c8440("CCharacter::computePickup - invalid bone!");
  }
  FUN_0055ae80(local_100,piVar2[2] + 0x20,piVar2[2] + 0x30);
  FUN_0055afb0(local_d0,param_1 + 0x20,param_1 + 0x30);
  FUN_0055aa00(local_d0,local_100);
  puVar3 = local_130;
  puVar5 = local_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  FUN_0055aa00(*piVar2 * 0x30 + param_1 + 0xfd0,local_a0);
  puVar3 = local_40;
  puVar5 = local_70;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  FUN_0055bd00(local_70);
  piVar4 = local_160;
  piVar6 = piVar2 + 3;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  if (0.0 < param_3) {
    piVar2[0x10] = 0;
    piVar2[0xf] = (int)(1.0 / param_3);
    return;
  }
  piVar2[0x10] = 0x3f800000;
  piVar2[0xf] = 0;
  return;
}
