// Name: FUN_004e37d0
// Address: 004e37d0
// Address Range: [[004e37d0, 004e3a5c]]
// Convention: unknown
// Signature: void FUN_004e37d0(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004e37d0(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int local_4c;
  int local_48;
  int local_2c;
  int local_20;
  int *local_1c;
  int local_18;
  
  iVar1 = *(int *)(param_4 + 0x10);
  iVar11 = *(int *)(param_4 + 0x18);
  iVar10 = *(int *)(param_4 + 0x14);
  iVar4 = *(int *)(param_4 + 8);
  local_2c = 0;
  if (0 < iVar11) {
    local_48 = 0;
    local_4c = iVar4;
    do {
      local_18 = param_2;
      local_1c = (int *)(local_48 + param_3);
      local_20 = 0;
      while( true ) {
        iVar3 = iVar1;
        if (iVar10 <= local_2c) {
          iVar3 = 1;
        }
        if (iVar3 <= local_20) break;
        if (*local_1c == 0) {
          puVar8 = (uint *)(local_48 + local_18);
          do {
            *puVar8 = 0;
            puVar8 = puVar8 + 0x20;
          } while (puVar8 != (uint *)(local_48 + 0x180 + local_18));
        }
        else {
          puVar5 = (uint *)(*local_1c * 0x10 + iVar4 + local_2c * 0x100);
          if (puVar5[2] == 3) {
            puVar8 = (uint *)(local_48 + local_18);
            do {
              puVar9 = puVar8 + 0x20;
              uVar6 = FUN_004e2ac0(param_1,*(uint *)
                                            (*(int *)(local_48 + param_3 + local_20 * 0x80) * 0x10 +
                                             local_4c + 4));
              *puVar8 = uVar6;
              puVar8 = puVar9;
            } while (puVar9 != (uint *)(local_48 + 0x180 + local_18));
          }
          else {
            uVar2 = *puVar5;
            uVar7 = FUN_004e2ac0(param_1,puVar5[1]);
            puVar5 = (uint *)(local_48 + local_18);
            do {
              *puVar5 = uVar7 % uVar2;
              uVar7 = uVar7 / uVar2;
              puVar5 = puVar5 + 0x20;
            } while (puVar5 != (uint *)(local_48 + 0x180 + local_18));
          }
        }
        if ((iVar1 == 2) && (iVar10 <= local_2c)) {
          puVar8 = (uint *)(local_48 + param_2);
          do {
            puVar9 = puVar8 + 0x20;
            puVar8[0x60] = *puVar8;
            puVar8 = puVar9;
          } while (puVar9 != (uint *)(local_48 + 0x180 + param_2));
        }
        local_1c = local_1c + 0x20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 0x180;
      }
      local_48 = local_48 + 4;
      local_4c = local_4c + 0x100;
      local_2c = local_2c + 1;
    } while (local_2c < iVar11);
  }
  if (iVar11 < 0x20) {
    iVar11 = iVar11 * 4;
    do {
      iVar10 = 0;
      if (0 < iVar1) {
        do {
          iVar4 = iVar10 * 0x180 + param_2;
          puVar8 = (uint *)(iVar11 + iVar4);
          do {
            puVar9 = puVar8 + 0x20;
            *puVar8 = 0;
            puVar8 = puVar9;
          } while (puVar9 != (uint *)(iVar4 + iVar11 + 0x180));
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar1);
      }
      iVar11 = iVar11 + 4;
    } while (iVar11 < 0x80);
  }
  return;
}
