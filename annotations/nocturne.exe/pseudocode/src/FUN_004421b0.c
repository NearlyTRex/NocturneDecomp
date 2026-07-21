// Name: FUN_004421b0
// Address: 004421b0
// Address Range: [[004421b0, 004425cf]]
// Convention: unknown
// Signature: void FUN_004421b0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004421b0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  byte bVar11;
  int aiStackY_1064 [1014];
  int local_80;
  uint local_7c;
  int local_74;
  uint local_70;
  uint local_64;
  uint local_58;
  uint local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_1c;
  int local_18;
  uint local_14;
  
  bVar11 = 0;
  local_38 = 1;
  local_80 = 0;
  if (1 < *(int *)(param_1 + 0x154)) {
    local_40 = 0x500;
    local_3c = 0xf00;
    do {
      local_28 = 1;
      puVar4 = (uint *)(*(int *)(&DAT_01bd2fa0 +
                                (local_38 * *(int *)(param_1 + 0x14c) + *(int *)(param_1 + 0x148)) *
                                4) + *(int *)(param_1 + 0x144) * 4);
      if (1 < *(int *)(param_1 + 0x150)) {
        local_34 = local_3c + 0xc;
        local_2c = local_40 + 4;
        local_24 = local_34;
        do {
          puVar4 = puVar4 + *(int *)(param_1 + 0x14c);
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (param_1,local_28 * *(int *)(param_1 + 0x14c),
                     local_38 * *(int *)(param_1 + 0x14c));
          local_7c = local_64;
          *(uint *)((int)&stack0xffffff88 + (uint)bVar11 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffa0 + (uint)bVar11 * -8);
          *(uint *)((int)&stack0xffffff8c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
               *(uint *)(&stack0xffffffa4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          if ((local_74 != 0x7fffffff) && (local_80 < local_74)) {
            local_80 = local_74;
          }
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
                    (param_1,&stack0xffffff84);
          local_4c = local_70;
          *(uint *)(&stack0xffffffb8 + (uint)bVar11 * -8) =
               *(uint *)(&stack0xffffff94 + (uint)bVar11 * -8);
          *(uint *)(&stack0xffffffbc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
               *(uint *)(&stack0xffffff98 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          puVar9 = (uint *)(local_34 + 0x8d927c + (uint)bVar11 * -8);
          *(uint *)(local_34 + 0x8d9278) = local_70;
          *puVar9 = *(uint *)(&stack0xffffff94 + (uint)bVar11 * -8);
          puVar9[(uint)bVar11 * -2 + 1] =
               *(uint *)(&stack0xffffff98 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          if (*puVar4 >> 0x18 != 0) {
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910
                      (param_1,&stack0xffffff84,*puVar4 >> 0x18);
            local_4c = local_58;
            *(uint *)(&stack0xffffffb8 + (uint)bVar11 * -8) =
                 *(uint *)(&stack0xffffffac + (uint)bVar11 * -8);
            *(uint *)(&stack0xffffffbc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                 *(uint *)(&stack0xffffffb0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          }
          puVar9 = (uint *)(local_24 + 0x7f737c + (uint)bVar11 * -8);
          *(uint *)(local_24 + 0x7f7378) = local_4c;
          *puVar9 = *(uint *)(&stack0xffffffb8 + (uint)bVar11 * -8);
          puVar9[(uint)bVar11 * -2 + 1] =
               *(uint *)(&stack0xffffffbc + (uint)bVar11 * -8 + (uint)bVar11 * -8);
          *(int *)(local_2c + 0xac2af8) = local_74;
          uVar10 = *puVar4;
          fVar1 = (float)_DAT_0057b80b;
          uVar3 = *puVar4;
          *(float *)(local_24 + 0x9bb178) = (float)(short)(char)(*puVar4 >> 0x10) * fVar1;
          *(float *)(local_24 + 0x9bb17c) = (float)(short)(char)(uVar10 >> 8) * fVar1;
          local_14 = CONCAT22((short)((uint)local_24 >> 0x10),(short)(char)uVar3);
          local_34 = local_34 + 0xc;
          local_2c = local_2c + 4;
          iVar5 = local_24 + 0xc;
          *(float *)(local_24 + 0x9bb180) = (float)(short)(char)uVar3 * fVar1;
          local_28 = local_28 + 1;
          local_24 = iVar5;
        } while (local_28 < *(int *)(param_1 + 0x150));
      }
      local_3c = local_3c + 0xf00;
      local_40 = local_40 + 0x500;
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(param_1 + 0x154));
  }
  local_18 = local_80;
  *(float *)(param_1 + 0x100) = (float)local_80 * (float)_DAT_0057b803;
  FUN_00446810(param_1);
  _DAT_00b0e604 = 0;
  _DAT_01216608 = 0;
  _DAT_012b0664 = 0;
  if (0x1df < *(int *)(param_1 + 0x140)) {
    for (local_1c = *(uint *)(param_1 + 0x14c); uVar10 = *(uint *)(param_1 + 0x14c),
        (int)local_1c < (int)(*(int *)(param_1 + 0x140) - uVar10); local_1c = local_1c + 1) {
      local_30 = uVar10 * 4;
      for (; (int)uVar10 < *(int *)(param_1 + 0x13c) + *(int *)(param_1 + 0x14c) * -2;
          uVar10 = uVar10 + 1) {
        if ((_DAT_012b0664 < 10000) && (((uVar10 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar5 = *(int *)(*(int *)(&DAT_01bd4260 + (local_1c + *(int *)(param_1 + 0x148)) * 4) +
                           local_30 + *(int *)(param_1 + 0x144) * 4);
          iVar8 = 0x7fffffff;
          if (iVar5 == 0) {
            iVar5 = 0x7fffffff;
          }
          else {
            iVar5 = (int)(0x7fffffff / (longlong)iVar5);
          }
          uVar6 = iVar5 - *(int *)(((int)local_1c >> (DAT_012b0660 & 0x1f)) * 0x500 + 0xac2af8 +
                                  ((int)uVar10 >> (DAT_012b0660 & 0x1f)) * 4);
          uVar3 = (int)uVar6 >> 0x1f;
          if (0x400 < (int)((uVar6 ^ uVar3) - uVar3)) {
            iVar7 = 0;
            do {
              uVar3 = iVar5 - *(int *)((((int)local_1c >> (DAT_012b0660 & 0x1f)) +
                                       *(int *)((int)&DAT_005ad47c + iVar7)) * 0x500 + 0xac2af8 +
                                      (((int)uVar10 >> (DAT_012b0660 & 0x1f)) +
                                      *(int *)((int)&DAT_005ad45c + iVar7)) * 4);
              uVar6 = (int)uVar3 >> 0x1f;
              iVar2 = (uVar3 ^ uVar6) - uVar6;
              if (iVar2 < iVar8) {
                *(int *)(_DAT_012b0664 * 0xc + 0x12b0668) =
                     *(int *)((int)&DAT_005ad47c + iVar7) * 0x140 +
                     *(int *)((int)&DAT_005ad45c + iVar7);
                iVar8 = iVar2;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 != 0x20);
            iVar5 = _DAT_012b0664 * 0xc;
            if (*(int *)(iVar5 + 0x12b0668) != 0) {
              *(uint *)(iVar5 + 0x12b066c) = uVar10;
              *(uint *)(iVar5 + 0x12b0670) = local_1c;
              _DAT_012b0664 = _DAT_012b0664 + 1;
            }
          }
        }
        local_30 = local_30 + 4;
      }
    }
  }
  return;
}
