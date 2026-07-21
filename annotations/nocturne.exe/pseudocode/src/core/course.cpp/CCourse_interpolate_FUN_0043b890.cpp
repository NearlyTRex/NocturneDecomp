// Name: core_course.cpp_CCourse_interpolate_FUN_0043b890
// Address: 0043b890
// Address Range: [[0043b890, 0043bb73]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_interpolate_FUN_0043b890(int *param_1,float param_2,float *param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_interpolate_FUN_0043b890(int *param_1,float param_2,float *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1854 [1517];
  uint local_90;
  float local_7c;
  float fStack_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_24;
  int local_1c;
  int local_18;
  int local_14;
  uint *puVar7;
  
  bVar9 = 0;
  if (param_1[2] == 0) {
    if (0.0 < param_2) {
      iVar8 = *param_1 + -1;
      local_14 = iVar8;
      if (param_2 < (float)iVar8) {
        fVar10 = (float10)round((float10)param_2);
        local_1c = (int)ROUND(fVar10);
        local_18 = local_1c;
        iVar8 = local_1c + 1;
        local_7c = (float)((float10)param_2 - (float10)local_1c);
      }
      else {
        local_18 = iVar8;
      }
      goto LAB_0043b8ca;
    }
    local_18 = param_1[2];
  }
  else {
    fVar3 = (float)*param_1;
    if (0.0 <= param_2) {
      local_24 = (double)floor((double)(param_2 / fVar3));
      local_7c = param_2 - (float)local_24 * fVar3;
    }
    else {
      local_24 = (double)floor((double)(-param_2 / fVar3));
      local_7c = (float)local_24 * fVar3 + param_2;
      if (local_7c < 0.0) {
        local_7c = local_7c + fVar3;
      }
    }
    fVar10 = (float10)round((float10)local_7c);
    local_1c = (int)ROUND(fVar10);
    local_18 = local_1c;
    iVar8 = local_1c + 1;
    local_7c = (float)((float10)local_7c - (float10)local_1c);
    if (iVar8 < *param_1) goto LAB_0043b8ca;
  }
  iVar8 = 0;
LAB_0043b8ca:
  local_90 = (uint)((ulonglong)(double)local_7c >> 0x20);
  iVar4 = local_1c * 0x1c;
  if ((double)local_7c <= _DAT_0057b2c2) {
    pfVar5 = (float *)(param_1[1] + iVar4);
    if (&local_40 != pfVar5) {
      local_40 = *pfVar5;
      local_3c = pfVar5[1];
      local_38 = pfVar5[2];
    }
    puVar6 = (uint *)(param_1[1] + 0xc + local_1c * 0x1c);
  }
  else {
    pfVar5 = (float *)(iVar8 * 0x1c + param_1[1]);
    local_4c = *pfVar5 * local_7c;
    local_48 = pfVar5[1] * local_7c;
    local_44 = local_7c * pfVar5[2];
    local_24._4_4_ = 1.0 - local_7c;
    iVar2 = param_1[1];
    fStack_58 = *(float *)(iVar4 + iVar2) * local_24._4_4_;
    local_54 = *(float *)(iVar4 + 4 + iVar2) * local_24._4_4_;
    local_50 = *(float *)(iVar4 + 8 + iVar2) * local_24._4_4_;
    local_34 = fStack_58 + local_4c;
    local_30 = local_54 + local_48;
    local_2c = local_50 + local_44;
    if (&local_40 != &local_34) {
      local_40 = local_34;
      local_3c = local_30;
      local_38 = local_2c;
    }
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              (local_1c * 0x1c + param_1[1] + 0xc,iVar8 * 0x1c + param_1[1] + 0xc,local_7c);
    puVar6 = (uint *)&stack0xffffff98;
  }
  puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
  uVar1 = *puVar6;
  *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8) = *puVar7;
  *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       puVar7[(uint)bVar9 * -2 + 1];
  *(uint *)
   ((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4) =
       (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  if (param_3 != &local_40) {
    *param_3 = local_40;
    param_3[1] = local_3c;
    param_3[2] = local_38;
    puVar6 = param_4 + (uint)bVar9 * -2 + 1;
    *param_4 = uVar1;
    *puVar6 = *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8);
    puVar6[(uint)bVar9 * -2 + 1] =
         *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
    return;
  }
  puVar6 = param_4 + (uint)bVar9 * -2 + 1;
  *param_4 = uVar1;
  *puVar6 = *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8);
  puVar6[(uint)bVar9 * -2 + 1] =
       *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4)
  ;
  return;
}
