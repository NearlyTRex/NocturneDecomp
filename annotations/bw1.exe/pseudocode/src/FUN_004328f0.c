// Name: FUN_004328f0
// Address: 004328f0
// Address Range: [[004328f0, 00432bdf]]
// Convention: unknown
// Signature: void FUN_004328f0(int param_1,float param_2)

#include "nocturne.h"

void FUN_004328f0(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_1040 [859];
  byte local_e8 [48];
  uint local_b8 [12];
  uint local_88 [12];
  uint local_58;
  int local_54 [4];
  uint local_44;
  uint local_40;
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  
  bVar6 = 0;
  local_24 = param_1 + 0x30;
  local_28 = param_1 + 0x20;
  local_20 = param_1 + 0xfd8;
  local_18 = (int *)(param_1 + 0x25a8);
  local_1c = 0;
  do {
    piVar2 = local_18;
    if (local_18[2] != 0) {
      if (local_18[0x11] == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 300))(param_1,local_1c);
        puVar4 = (uint *)&stack0xfffffe88;
      }
      else {
        FUN_005b5200(local_18 + 0x12,*local_18 * 0x30 + local_20);
        puVar4 = (uint *)&stack0xfffffeb8;
      }
      puVar5 = (uint *)&stack0xfffffee8;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if ((float)piVar2[0x10] < 1.0) {
        fVar1 = (float)piVar2[0xf] * param_2 + (float)piVar2[0x10];
        piVar2[0x10] = (int)fVar1;
        if (fVar1 <= 1.0) {
          FUN_005b6380(*piVar2 * 0x30 + local_20);
          puVar4 = (uint *)&stack0xfffffe28;
          puVar5 = (uint *)&stack0xfffffd98;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          FUN_005b5200(&stack0xfffffee8,&stack0xfffffd98);
          puVar4 = (uint *)&stack0xfffffd38;
          puVar5 = (uint *)&stack0xfffffd68;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          FUN_005b72c0(piVar2 + 3,&stack0xfffffd68,piVar2[0x10]);
          puVar4 = local_88;
          puVar5 = (uint *)&stack0xfffffdc8;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          FUN_005b5200(&stack0xfffffdc8,*piVar2 * 0x30 + local_20);
          puVar4 = (uint *)&stack0xfffffdf8;
          puVar5 = (uint *)&stack0xfffffee8;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
        }
        else {
          piVar2[0x10] = 0x3f800000;
        }
      }
      FUN_005b5760(local_e8,local_28,local_24);
      FUN_005b5200(&stack0xfffffee8,local_e8);
      puVar4 = local_b8;
      puVar5 = (uint *)&stack0xfffffe58;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      FUN_005b6270(&stack0xfffffe58);
      local_58 = local_40;
      local_54[(uint)bVar6 * -2] = local_54[(uint)bVar6 * -2 + 6];
      local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      iVar3 = piVar2[2];
      *(uint *)(iVar3 + 0x20) = local_58;
      *(int *)(iVar3 + 0x24) = local_54[0];
      *(int *)(iVar3 + 0x28) = local_54[1];
      FUN_005b5930(&stack0xfffffe58);
      local_54[2] = local_34;
      local_54[(uint)bVar6 * -2 + 3] = local_54[(uint)bVar6 * -2 + 9];
      local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      iVar3 = piVar2[2];
      if ((int *)(iVar3 + 0x30) != local_54 + 2) {
        *(int *)(iVar3 + 0x30) = local_54[2];
        *(int *)(iVar3 + 0x34) = local_54[3];
        *(uint *)(iVar3 + 0x38) = local_44;
      }
      FUN_004088b0(piVar2[2]);
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 0x1e;
  } while (local_1c < 2);
  return;
}
