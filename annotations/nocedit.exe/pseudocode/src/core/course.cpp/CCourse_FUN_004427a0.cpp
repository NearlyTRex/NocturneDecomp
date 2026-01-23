// Name: core_course.cpp_CCourse_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 00442a83]]
// Convention: unknown
// Signature: undefined core_course.cpp_CCourse_FUN_004427a0()

#include "nocturne.h"

void core_course_cpp_CCourse_FUN_004427a0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *extraout_EBX;
  float *extraout_EBX_00;
  CQuaternion4f *pCVar5;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  double dVar10;
  int *in_stack_00000004;
  float in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float afStackY_1854 [1517];
  uint local_90;
  uint uStack_8c;
  uint local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  CQuaternion4f CStack_68;
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
  double local_28;
  float fStack_20;
  int local_1c;
  int local_18;
  int local_14;
  uint *puVar6;
  
  bVar9 = 0;
  if (in_stack_00000004[2] == 0) {
    if (0.0 < in_stack_00000008) {
      iVar8 = *in_stack_00000004 + -1;
      local_14 = iVar8;
      if (in_stack_00000008 < (float)iVar8) {
        dVar10 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000008);
        local_1c = (int)ROUND(dVar10);
        local_18 = local_1c;
        local_7c = in_stack_00000008 - (float)local_1c;
        iVar8 = local_1c + 1;
      }
      else {
        local_18 = iVar8;
      }
      goto LAB_004427da;
    }
    local_18 = in_stack_00000004[2];
  }
  else {
    dVar10 = (double)in_stack_00000008;
    local_88 = SUB84(dVar10,0);
    fStack_84 = (float)((ulonglong)dVar10 >> 0x20);
    if (0.0 <= dVar10) {
      local_28 = crt_math_c_floor_FUN_005feb90
                           ((double)(in_stack_00000008 / (float)*in_stack_00000004));
      local_80 = (float)(double)CONCAT44(local_88,uStack_8c) - (float)local_28 * fStack_84;
      in_stack_0000000c = extraout_EBX_00;
    }
    else {
      local_28 = crt_math_c_floor_FUN_005feb90
                           ((double)(-in_stack_00000008 / (float)*in_stack_00000004));
      local_80 = (float)local_28 * fStack_84 + (float)(double)CONCAT44(local_88,uStack_8c);
      in_stack_0000000c = extraout_EBX;
      if (local_80 < 0.0) {
        local_80 = local_80 + fStack_84;
      }
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)local_80);
    fStack_20 = (float)(int)ROUND(dVar10);
    local_1c = (int)fStack_20;
    iVar8 = (int)fStack_20 + 1;
    if (iVar8 < *in_stack_00000004) goto LAB_004427da;
  }
  iVar8 = 0;
LAB_004427da:
  local_90 = (uint)((ulonglong)(double)local_7c >> 0x20);
  iVar3 = local_1c * 0x1c;
  if ((double)local_7c <= 0.001) {
    pfVar4 = (float *)(in_stack_00000004[1] + iVar3);
    if (&local_40 != pfVar4) {
      local_40 = *pfVar4;
      local_3c = pfVar4[1];
      local_38 = pfVar4[2];
    }
    pCVar5 = (CQuaternion4f *)(in_stack_00000004[1] + 0xc + local_1c * 0x1c);
  }
  else {
    pfVar4 = (float *)(iVar8 * 0x1c + in_stack_00000004[1]);
    local_4c = *pfVar4 * local_7c;
    local_48 = pfVar4[1] * local_7c;
    local_44 = local_7c * pfVar4[2];
    fStack_20 = 1.0 - local_7c;
    iVar2 = in_stack_00000004[1];
    fStack_58 = *(float *)(iVar3 + iVar2) * fStack_20;
    local_54 = *(float *)(iVar3 + 4 + iVar2) * fStack_20;
    local_50 = *(float *)(iVar3 + 8 + iVar2) * fStack_20;
    local_34 = fStack_58 + local_4c;
    local_30 = local_54 + local_48;
    local_2c = local_50 + local_44;
    if (&local_40 != &local_34) {
      local_40 = local_34;
      local_3c = local_30;
      local_38 = local_2c;
    }
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)(local_1c * 0x1c + in_stack_00000004[1] + 0xc),
               (CQuaternion4f *)(iVar8 * 0x1c + in_stack_00000004[1] + 0xc),local_7c,&CStack_68);
    pCVar5 = &CStack_68;
  }
  puVar6 = (uint *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
  fVar1 = pCVar5->w;
  puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
  *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8) = *puVar6;
  *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) = *puVar7;
  *(uint *)
   ((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4) =
       puVar7[(uint)bVar9 * -2 + 1];
  if (in_stack_0000000c != &local_40) {
    *in_stack_0000000c = local_40;
    in_stack_0000000c[1] = local_3c;
    in_stack_0000000c[2] = local_38;
    pfVar4 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
    *in_stack_00000010 = fVar1;
    *pfVar4 = *(float *)(&stack0xffffff8c + (uint)bVar9 * -8);
    pfVar4[(uint)bVar9 * -2 + 1] =
         *(float *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (pfVar4 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(float *)((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                   ((uint)bVar9 * -2 + 1) * 4);
    return;
  }
  pfVar4 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
  *in_stack_00000010 = fVar1;
  *pfVar4 = *(float *)(&stack0xffffff8c + (uint)bVar9 * -8);
  pfVar4[(uint)bVar9 * -2 + 1] = *(float *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  (pfVar4 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(float *)((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                 ((uint)bVar9 * -2 + 1) * 4);
  return;
}
