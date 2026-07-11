// Name: FUN_00429220
// Address: 00429220
// Address Range: [[00429220, 0042948a]]
// Convention: unknown
// Signature: void FUN_00429220(int param_1,float param_2)

#include "nocturne.h"

void FUN_00429220(int param_1,float param_2)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_280 [12];
  uint auStack_250 [12];
  uint auStack_220 [12];
  uint auStack_1f0 [12];
  uint local_1c0 [12];
  uint auStack_190 [12];
  uint auStack_160 [12];
  uint auStack_130 [12];
  uint auStack_100 [12];
  byte auStack_d0 [48];
  uint auStack_a0 [12];
  uint auStack_70 [12];
  byte auStack_40 [12];
  byte auStack_34 [12];
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  
  bVar6 = 0;
  local_28 = param_1 + 0x30;
  local_24 = param_1 + 0x20;
  local_18 = 0;
  local_20 = param_1 + 0xfd0;
  piVar4 = (int *)(param_1 + 0x24a4);
  do {
    if (piVar4[2] != 0) {
      local_1c = piVar4;
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x124))(param_1,local_18);
      puVar2 = local_1c0;
      puVar5 = auStack_220;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if ((float)piVar4[0x10] < 1.0) {
        fVar1 = (float)piVar4[0xf] * param_2 + (float)piVar4[0x10];
        piVar4[0x10] = (int)fVar1;
        if (fVar1 <= 1.0) {
          FUN_0055bd00(*piVar4 * 0x30 + local_20);
          puVar2 = auStack_250;
          puVar5 = auStack_70;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar2;
            puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          FUN_0055aa00(auStack_220,auStack_70);
          puVar2 = auStack_1f0;
          puVar5 = auStack_a0;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar2;
            puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          FUN_0055cc30(piVar4 + 3,auStack_a0,piVar4[0x10]);
          puVar2 = auStack_160;
          puVar5 = auStack_190;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar2;
            puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          FUN_0055aa00(auStack_190,*piVar4 * 0x30 + local_20);
          puVar2 = auStack_130;
          puVar5 = auStack_220;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar2;
            puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
        }
        else {
          piVar4[0x10] = 0x3f800000;
        }
      }
      FUN_0055afb0(auStack_d0,local_24,local_28);
      FUN_0055aa00(auStack_220,auStack_d0);
      puVar2 = auStack_100;
      puVar5 = auStack_280;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      puVar2 = (uint *)FUN_0055bc00(auStack_280,auStack_34);
      iVar3 = local_1c[2];
      *(uint *)(iVar3 + 0x20) = *puVar2;
      *(uint *)(iVar3 + 0x24) = puVar2[1];
      *(uint *)(iVar3 + 0x28) = puVar2[2];
      puVar2 = (uint *)FUN_0055b180(auStack_280,auStack_40);
      iVar3 = local_1c[2];
      if ((uint *)(iVar3 + 0x30) != puVar2) {
        *(uint *)(iVar3 + 0x30) = *puVar2;
        *(uint *)(iVar3 + 0x34) = puVar2[1];
        *(uint *)(iVar3 + 0x38) = puVar2[2];
      }
      FUN_0040a000(local_1c[2]);
    }
    local_18 = local_18 + 1;
    piVar4 = piVar4 + 0x11;
  } while (local_18 < 2);
  return;
}
