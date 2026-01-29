// Name: core_skeledit.cpp_FUN_0058e240
// Address: 0058e240
// Address Range: [[0058e240, 0058e3d2]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_0058e240(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058e240(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  int *in_stack_00000004;
  ushort auStackY_201c [1018];
  uint auStackY_1828 [1528];
  byte auStackY_48 [4];
  uint uStackY_44;
  uint local_40;
  ushort auStackY_3c [2];
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  bVar13 = 0;
  __STK(0x50);
  local_34 = 0;
  if (0 < *in_stack_00000004) {
    local_38 = in_stack_00000004;
    local_30 = 0;
    do {
      local_24 = 0;
      local_20 = 0;
      if (0 < in_stack_00000004[0x1c50]) {
        local_14 = local_38;
        local_28 = local_30 + (int)in_stack_00000004;
        do {
          local_2c = local_20 + *(int *)(local_28 + 0x7164);
          local_1c = local_2c + -2;
          if (local_20 <= local_1c) {
            do {
              if (local_20 <= local_1c) {
                iVar7 = local_20 * 4;
                iVar4 = local_20 * 0x12;
                local_18 = local_1c << 2;
                iVar8 = iVar4;
                do {
                  iVar8 = iVar8 + 0x12;
                  piVar1 = (int *)(local_14[0x24] + iVar7);
                  if (piVar1[1] < *piVar1) {
                    piVar6 = (int *)(local_14[0x24] + iVar7 + 4);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar6;
                    *piVar6 = iVar3;
                    puVar10 = (uint *)(local_14[0x1f] + iVar8);
                    puVar5 = (uint *)(local_14[0x1f] + iVar4);
                    uVar2 = *puVar5;
                    *(ushort *)(auStackY_48 + (uint)bVar13 * -8) =
                         *(ushort *)(puVar5 + (uint)bVar13 * -2 + 1);
                    stack0xffffffba = *(uint *)((int)puVar5 + 6);
                    *(ushort *)((int)&uStackY_44 + (uint)bVar13 * -8 + 2) =
                         *(ushort *)((int)puVar5 + (uint)bVar13 * -8 + 10);
                    local_40 = puVar5[3];
                    auStackY_3c[(uint)bVar13 * -4] = *(ushort *)(puVar5 + (uint)bVar13 * -2 + 4)
                    ;
                    puVar11 = puVar5 + (uint)bVar13 * -2 + 1;
                    puVar9 = puVar10 + (uint)bVar13 * -2 + 1;
                    *puVar5 = *puVar10;
                    puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
                    puVar5 = puVar9 + (uint)bVar13 * -2 + 1;
                    *puVar11 = *puVar9;
                    *puVar12 = *puVar5;
                    puVar12[(uint)bVar13 * -2 + 1] = puVar5[(uint)bVar13 * -2 + 1];
                    *(ushort *)(puVar12 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
                         *(ushort *)(puVar5 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
                    puVar5 = puVar10 + (uint)bVar13 * -2 + 1;
                    *puVar10 = uVar2;
                    puVar9 = puVar5 + (uint)bVar13 * -2 + 1;
                    puVar10 = &uStackY_44 + (uint)bVar13 * -2 + (uint)bVar13 * -2;
                    *puVar5 = *(uint *)(auStackY_48 + (uint)bVar13 * -8);
                    *puVar9 = *puVar10;
                    puVar9[(uint)bVar13 * -2 + 1] = puVar10[(uint)bVar13 * -2 + 1];
                    *(ushort *)(puVar9 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
                         *(ushort *)(puVar10 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
                  }
                  iVar7 = iVar7 + 4;
                  iVar4 = iVar4 + 0x12;
                } while (iVar7 <= local_18);
              }
              local_1c = local_1c + -1;
            } while (local_20 <= local_1c);
          }
          local_20 = local_2c;
          local_24 = local_24 + 1;
          local_28 = local_28 + 0x60;
        } while (local_24 < in_stack_00000004[0x1c50]);
      }
      local_34 = local_34 + 1;
      local_30 = local_30 + 4;
      local_38 = local_38 + 1;
    } while (local_34 < *in_stack_00000004);
  }
  return;
}
