// Name: core_bugs.cpp_FUN_00421b80
// Address: 00421b80
// Address Range: [[00421b80, 00421ef1]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00421b80(int param_1)

#include "nocturne.h"

void core_bugs_cpp_FUN_00421b80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  float10 fVar11;
  double dVar12;
  float fVar13;
  uint uVar14;
  float local_54;
  float local_50;
  float local_4c;
  byte local_44 [8];
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  
  bVar10 = 0;
  local_c = 1.0 / 0.5f;
  local_54 = *(float *)(param_1 + 0x19838) + *(float *)(param_1 + 0x19844);
  local_50 = *(float *)(param_1 + 0x1983c) + *(float *)(param_1 + 0x19848);
  fVar2 = local_50 * 0.5f;
  fVar1 = *(float *)(param_1 + 0x28);
  join_0x00000008_0x00000000_ =
       (double)floor
                         ((double)((*(float *)(param_1 + 0x20) +
                                   (*(float *)(param_1 + 0x19834) + *(float *)(param_1 + 0x19840)) *
                                   0.5f) * local_c));
  fVar1 = (fVar1 + fVar2) * local_c;
  uVar14 = 0x421c4a;
  fVar11 = (float10)round((float10)join_0x00000008_0x00000000_);
  local_38 = (int)ROUND(fVar11);
  dVar12 = (double)floor((double)fVar1,uVar14);
  local_10 = local_38;
  fVar1 = (float)local_38 * 0.5f;
  local_44 = (byte  [8])dVar12;
  fVar11 = (float10)round((float10)dVar12);
  local_18 = (int)ROUND(fVar11);
  fVar13 = (float)local_18 * 0.5f;
  fVar2 = 0.5f * 5.4034218993573707e-315._0_4_ * (float)0.5;
  *(float *)(param_1 + 0x19854) = (fVar1 - *(float *)(param_1 + 0x20)) - fVar2;
  *(float *)(param_1 + 0x19858) = (fVar13 - *(float *)(param_1 + 0x28)) - fVar2;
  if ((iStack_3c != *(int *)(param_1 + 0x1984c)) || (local_18 != *(int *)(param_1 + 0x19850))) {
    local_20 = *(int *)(unaff_EBX + 0x1984c) - iStack_3c;
    local_24 = *(int *)(unaff_EBX + 0x19850) - local_18;
    local_2c = local_20 + 0xb;
    local_28 = local_24 + 0xb;
    puVar7 = (uint *)(unaff_EBX + 0x12720);
    puVar8 = &DAT_00764b58;
    for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(byte *)puVar8 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
      puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
    }
    local_50 = *(float *)(unaff_EBX + 0x24);
    fVar2 = *(float *)(unaff_EBX + 0x28);
    fVar13 = *(float *)(unaff_EBX + 0x20) + *(float *)(unaff_EBX + 0x19854);
    fVar1 = *(float *)(unaff_EBX + 0x19858);
    local_34 = local_20 * -0x30;
    local_38 = local_24 * 4;
    local_1c = 0;
    local_30 = unaff_EBX;
    do {
      iVar5 = 0;
      local_54 = (float)local_1c * 0.5f + fVar13;
      iVar6 = local_34 - local_38;
      iVar4 = local_30;
      iVar9 = local_30;
      do {
        local_4c = (float)iVar5 * 0.5f + fVar2 + fVar1;
        if ((((local_1c < local_20) || (local_2c < local_1c)) || (iVar5 < local_24)) ||
           (local_28 < iVar5)) {
          local_14 = iVar5;
          fVar3 = (float)core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
                                   (&DAT_01fba938,&local_54,local_44 + 4,0);
          *(float *)(iVar9 + 0x12720) = fVar3 - *(float *)(unaff_EBX + 0x24);
        }
        else {
          *(uint *)(iVar4 + 0x12720) = *(uint *)((int)&DAT_00764b58 + iVar6);
        }
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar5 < 0xc);
      local_34 = local_34 + 0x30;
      local_1c = local_1c + 1;
      local_30 = local_30 + 0x30;
    } while (local_1c < 0xc);
    *(int *)(unaff_EBX + 0x1984c) = iStack_3c;
    *(int *)(unaff_EBX + 0x19850) = local_18;
  }
  return;
}
