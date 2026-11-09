// Name: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0
// Address: 0041fad0
// Address Range: [[0041fad0, 0041feab]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(CBugs *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  CBugs *pCVar4;
  uint *puVar5;
  uint *puVar6;
  CBugs *pCVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_106c [1005];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  double local_48;
  byte local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CBugs *local_18;
  float local_14;
  
  bVar8 = 0;
  local_a8 = *(float *)&this_ptr->field_0x1e608 + *(float *)&this_ptr->field_0x1e614;
  local_14 = 1.0 / _DAT_005f3e28;
  local_a4 = *(float *)&this_ptr->field_0x1e60c + *(float *)&this_ptr->field_0x1e618;
  local_a0 = *(float *)&this_ptr->field_0x1e610 + *(float *)&this_ptr->field_0x1e61c;
  local_78 = local_a8 * _DAT_005cca0d;
  local_74 = local_a4 * _DAT_005cca0d;
  local_70 = local_a0 * _DAT_005cca0d;
  local_9c = *(float *)&this_ptr->field_0x20 + local_78;
  fStack_98 = *(float *)&this_ptr->field_0x24 + local_74;
  local_94 = *(float *)&this_ptr->field_0x28 + local_70;
  local_90 = local_a8;
  local_8c = local_a4;
  local_88 = local_a0;
  local_60 = local_9c;
  local_5c = fStack_98;
  local_58 = local_94;
  local_54 = local_78;
  local_50 = local_74;
  local_4c = local_70;
  local_48 = floor((double)(local_9c * local_14));
  fVar9 = (float10)local_48;
  fVar10 = (float10)local_94 * (float10)local_14;
  round();
  local_38 = (int)ROUND(fVar9);
  local_48 = floor((double)fVar10);
  fVar11 = (float10)local_48;
  local_14 = (float)local_38;
  fVar10 = (float10)local_38 * (float10)_DAT_005f3e28 - (float10)*(float *)&this_ptr->field_0x20;
  fVar9 = (float10)_DAT_005f3e28 * (float10)_DAT_005cca11 * (float10)_DAT_005cca19;
  iVar1 = round();
  local_3c = (int)ROUND(fVar11);
  *(float *)(iVar1 + 0x1e628) = (float)(fVar10 - fVar9);
  local_14 = (float)local_3c;
  *(float *)&this_ptr->field_0x1e62c =
       (float)(((float10)local_3c * (float10)_DAT_005f3e28 -
               (float10)*(float *)&this_ptr->field_0x28) - fVar9);
  if ((local_38 != *(int *)&this_ptr->field_0x1e620) ||
     (local_3c != *(int *)&this_ptr->field_0x1e624)) {
    iVar1 = *(int *)&this_ptr->field_0x1e620 - local_38;
    local_20 = iVar1;
    local_24 = *(int *)&this_ptr->field_0x1e624 - local_3c;
    local_28 = iVar1 + 0xb;
    local_2c = local_24 + 0xb;
    puVar5 = (uint *)&this_ptr->field_0x174f4;
    puVar6 = &DAT_007bcd08;
    for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar8 * -2 + 1);
      puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
    }
    puVar5 = (uint *)((int)this_ptr + (uint)bVar8 * -8 + 0x24);
    local_6c = *(float *)&this_ptr->field_0x20;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * 0xfffffffe * 4) = *puVar5;
    *(uint *)((int)&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         puVar5[(uint)bVar8 * -2 + 1];
    local_18 = this_ptr;
    local_6c = local_6c + *(float *)&this_ptr->field_0x1e628;
    local_64 = local_64 + *(float *)&this_ptr->field_0x1e62c;
    local_84 = local_6c;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * 0xfffffffe * 4);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    local_34 = local_24 << 2;
    local_1c = 0;
    local_30 = iVar1 * -0x30;
    do {
      iVar1 = 0;
      local_84 = (float)local_1c * _DAT_005f3e28 + local_6c;
      iVar3 = local_30 - local_34;
      pCVar4 = local_18;
      pCVar7 = local_18;
      do {
        local_7c = (float)iVar1 * _DAT_005f3e28 + local_64;
        if ((((local_1c < local_20) || (local_28 < local_1c)) || (iVar1 < local_24)) ||
           (local_2c < iVar1)) {
          local_14 = (float)iVar1;
          fVar2 = (float)core_dtrace_cpp_FUN_004738d0
                                   (&g_CDemonRaytraceInstance,&stack0xffffff7c,local_40,0);
          *(float *)&pCVar4->field_0x174f4 = fVar2 - *(float *)&this_ptr->field_0x24;
        }
        else {
          *(uint *)&pCVar7->field_0x174f4 = *(uint *)((int)&DAT_007bcd08 + iVar3);
        }
        pCVar7 = (CBugs *)&pCVar7->field_0x4;
        iVar3 = iVar3 + 4;
        iVar1 = iVar1 + 1;
        pCVar4 = (CBugs *)&pCVar4->field_0x4;
      } while (iVar1 < 0xc);
      local_30 = local_30 + 0x30;
      local_1c = local_1c + 1;
      local_18 = (CBugs *)&local_18->field_0x30;
    } while (local_1c < 0xc);
    *(int *)&this_ptr->field_0x1e620 = local_38;
    *(int *)&this_ptr->field_0x1e624 = local_3c;
  }
  return;
}
