// Name: FUN_005054a0
// Address: 005054a0
// Address Range: [[005054a0, 00505706]]
// Convention: unknown
// Signature: void FUN_005054a0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_005054a0(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int local_28;
  int local_24;
  int *local_14;
  
  iVar1 = *(int *)(param_5 + 0x10);
  iVar4 = *(int *)(param_5 + 0x18);
  if (0 < iVar4) {
    local_28 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        piVar7 = (int *)(local_28 + param_3);
        do {
          if (*piVar7 != 0) {
            bVar2 = FUN_00504b00(param_1,2);
            *(uint *)(param_2 + iVar5 * 0x80 + local_28) = (uint)bVar2;
          }
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 0x20;
        } while (iVar5 < iVar1);
      }
      local_28 = local_28 + 4;
    } while (local_28 < iVar4 << 2);
  }
  if (iVar4 < 0x20) {
    iVar5 = iVar4 * 4;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        puVar8 = (uint *)(param_2 + iVar5);
        do {
          iVar6 = iVar6 + 1;
          *puVar8 = 0;
          puVar8 = puVar8 + 0x20;
        } while (iVar6 < iVar1);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x80);
  }
  if (0 < iVar4) {
    local_24 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        local_14 = (int *)(local_24 + param_3);
        puVar8 = (uint *)(local_24 + param_4);
        do {
          if (*local_14 == 0) {
            puVar8[0x40] = 0x3f;
            puVar8[0x20] = puVar8[0x40];
            *puVar8 = puVar8[0x40];
            goto switchD_005055b0_default;
          }
          switch(*(uint *)(iVar5 * 0x80 + param_2 + local_24)) {
          case 0:
            uVar3 = FUN_00504b00(param_1,6);
            *puVar8 = uVar3;
            uVar3 = FUN_00504b00(param_1,6);
            puVar8[0x20] = uVar3;
            goto LAB_005055d8;
          case 1:
            uVar3 = FUN_00504b00(param_1,6);
            puVar8[0x20] = uVar3;
            *puVar8 = uVar3;
LAB_005055d8:
            uVar3 = FUN_00504b00(param_1,6);
            puVar8[0x40] = uVar3;
            break;
          case 2:
            uVar3 = FUN_00504b00(param_1,6);
            puVar8[0x40] = uVar3;
            puVar8[0x20] = uVar3;
            *puVar8 = uVar3;
            break;
          case 3:
            uVar3 = FUN_00504b00(param_1,6);
            *puVar8 = uVar3;
            uVar3 = FUN_00504b00(param_1,6);
            puVar8[0x40] = uVar3;
            puVar8[0x20] = uVar3;
          }
switchD_005055b0_default:
          puVar8 = puVar8 + 0x60;
          local_14 = local_14 + 0x20;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      local_24 = local_24 + 4;
    } while (local_24 < iVar4 << 2);
  }
  if (iVar4 < 0x20) {
    iVar4 = iVar4 * 4;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        puVar8 = (uint *)(param_4 + iVar4);
        do {
          puVar8[0x40] = 0x3f;
          puVar8[0x20] = puVar8[0x40];
          iVar5 = iVar5 + 1;
          *puVar8 = puVar8[0x40];
          puVar8 = puVar8 + 0x60;
        } while (iVar5 < iVar1);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x80);
  }
  return;
}
