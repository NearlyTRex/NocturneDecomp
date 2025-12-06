// Name: core_skeledit.cpp_FUN_0058e240
// Address: 0058e240
// Address Range: [[0058e240, 0058e3d2]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e240()

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
  BADSPACEBASE *in_ESP;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  int *in_stack_0000000c;
  ushort auStackY_2014 [1018];
  uint auStackY_1820 [1528];
  byte local_40 [4];
  uint uStackY_3c;
  uint local_38;
  ushort local_34 [2];
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iStackY_10;
  int *piStackY_c;
  
  bVar13 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x50);
  local_2c = 0;
  if (0 < *in_stack_0000000c) {
    local_30 = in_stack_0000000c;
    local_28 = 0;
    do {
      local_1c = 0;
      local_18 = 0;
      if (0 < in_stack_0000000c[0x1c50]) {
        piStackY_c = local_30;
        local_20 = local_28 + (int)in_stack_0000000c;
        do {
          local_24 = local_18 + *(int *)(local_20 + 0x7164);
          local_14 = local_24 + -2;
          if (local_18 <= local_14) {
            do {
              if (local_18 <= local_14) {
                iVar7 = local_18 * 4;
                iVar4 = local_18 * 0x12;
                iStackY_10 = local_14 << 2;
                iVar8 = iVar4;
                do {
                  iVar8 = iVar8 + 0x12;
                  piVar1 = (int *)(piStackY_c[0x24] + iVar7);
                  if (piVar1[1] < *piVar1) {
                    piVar6 = (int *)(piStackY_c[0x24] + iVar7 + 4);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar6;
                    *piVar6 = iVar3;
                    puVar10 = (uint *)(piStackY_c[0x1f] + iVar8);
                    puVar5 = (uint *)(piStackY_c[0x1f] + iVar4);
                    uVar2 = *puVar5;
                    *(ushort *)(local_40 + (uint)bVar13 * -8) =
                         *(ushort *)(puVar5 + (uint)bVar13 * -2 + 1);
                    stack0xffffffc2 = *(uint *)((int)puVar5 + 6);
                    *(ushort *)((int)&uStackY_3c + (uint)bVar13 * -8 + 2) =
                         *(ushort *)((int)puVar5 + (uint)bVar13 * -8 + 10);
                    local_38 = puVar5[3];
                    local_34[(uint)bVar13 * -4] = *(ushort *)(puVar5 + (uint)bVar13 * -2 + 4);
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
                    puVar10 = &uStackY_3c + (uint)bVar13 * -2 + (uint)bVar13 * -2;
                    *puVar5 = *(uint *)(local_40 + (uint)bVar13 * -8);
                    *puVar9 = *puVar10;
                    puVar9[(uint)bVar13 * -2 + 1] = puVar10[(uint)bVar13 * -2 + 1];
                    *(ushort *)(puVar9 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
                         *(ushort *)(puVar10 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
                  }
                  iVar7 = iVar7 + 4;
                  iVar4 = iVar4 + 0x12;
                } while (iVar7 <= iStackY_10);
              }
              local_14 = local_14 + -1;
            } while (local_18 <= local_14);
          }
          local_18 = local_24;
          local_1c = local_1c + 1;
          local_20 = local_20 + 0x60;
        } while (local_1c < in_stack_0000000c[0x1c50]);
      }
      local_2c = local_2c + 1;
      local_28 = local_28 + 4;
      local_30 = local_30 + 1;
    } while (local_2c < *in_stack_0000000c);
  }
  return;
}
