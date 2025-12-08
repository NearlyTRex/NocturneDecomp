// Name: core_course.cpp_CCourse_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 00442a83]]
// Convention: unknown
// Signature: undefined core_course.cpp_CCourse_FUN_004427a0()

#include "nocturne.h"

void core_course_cpp_CCourse_FUN_004427a0(void)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *extraout_EBX;
  float *extraout_EBX_00;
  BADSPACEBASE *in_ESP;
  uint *puVar6;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  double dVar11;
  int *in_stack_00000004;
  float in_stack_00000008;
  float *in_stack_0000000c;
  uint *in_stack_00000010;
  CQuaternion4f *apCStackY_1854 [1517];
  uint local_90;
  CQuaternion4f *local_7c;
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
  if (in_stack_00000004[2] == 0) {
    if (0.0 < in_stack_00000008) {
      iVar8 = *in_stack_00000004 + -1;
      local_14 = iVar8;
      if (in_stack_00000008 < (float)iVar8) {
        fVar10 = (float10)in_stack_00000008;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000008);
        local_1c = (int)ROUND(dVar11);
        local_18 = local_1c;
        iVar8 = local_1c + 1;
        local_7c = (CQuaternion4f *)(float)(fVar10 - (float10)local_1c);
      }
      else {
        local_18 = iVar8;
      }
      goto LAB_004427da;
    }
    local_18 = in_stack_00000004[2];
  }
  else {
    fVar3 = (float)*in_stack_00000004;
    if (0.0 <= in_stack_00000008) {
      local_24 = crt_math_c_floor_FUN_005feb90((double)(in_stack_00000008 / fVar3));
      local_7c = (CQuaternion4f *)(in_stack_00000008 - (float)local_24 * fVar3);
      in_stack_0000000c = extraout_EBX_00;
    }
    else {
      local_24 = crt_math_c_floor_FUN_005feb90((double)(-in_stack_00000008 / fVar3));
      local_7c = (CQuaternion4f *)((float)local_24 * fVar3 + in_stack_00000008);
      in_stack_0000000c = extraout_EBX;
      if ((float)local_7c < 0.0) {
        local_7c = (CQuaternion4f *)((float)local_7c + fVar3);
      }
    }
    fVar10 = (float10)(float)local_7c;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)(float)local_7c);
    local_1c = (int)ROUND(dVar11);
    local_18 = local_1c;
    iVar8 = local_1c + 1;
    local_7c = (CQuaternion4f *)(float)(fVar10 - (float10)local_1c);
    if (iVar8 < *in_stack_00000004) goto LAB_004427da;
  }
  iVar8 = 0;
LAB_004427da:
  dVar11 = (double)(float)local_7c;
  local_90 = (uint)((ulonglong)dVar11 >> 0x20);
  iVar4 = local_1c * 0x1c;
  if (dVar11 <= 0.001) {
    pfVar5 = (float *)(in_stack_00000004[1] + iVar4);
    if (&local_40 != pfVar5) {
      local_40 = *pfVar5;
      local_3c = pfVar5[1];
      local_38 = pfVar5[2];
    }
    puVar6 = (uint *)(in_stack_00000004[1] + 0xc + local_1c * 0x1c);
  }
  else {
    pfVar5 = (float *)(iVar8 * 0x1c + in_stack_00000004[1]);
    local_4c = *pfVar5 * (float)local_7c;
    local_48 = pfVar5[1] * (float)local_7c;
    local_44 = (float)local_7c * pfVar5[2];
    local_50 = 1.0 - (float)local_7c;
    iVar2 = in_stack_00000004[1];
    local_24 = (double)CONCAT44 /* combine 2-byte values */(local_50,(uint)local_24);
    fStack_58 = *(float *)(iVar4 + iVar2) * local_50;
    local_54 = *(float *)(iVar4 + 4 + iVar2) * local_50;
    local_50 = *(float *)(iVar4 + 8 + iVar2) * local_50;
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
               (CQuaternion4f *)(iVar8 * 0x1c + in_stack_00000004[1] + 0xc),local_7c,SUB84 /* extract 2-byte value */(dVar11,0)
              );
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
  if (in_stack_0000000c != &local_40) {
    *in_stack_0000000c = local_40;
    in_stack_0000000c[1] = local_3c;
    in_stack_0000000c[2] = local_38;
    puVar6 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
    *in_stack_00000010 = uVar1;
    *puVar6 = *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8);
    puVar6[(uint)bVar9 * -2 + 1] =
         *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
    return;
  }
  puVar6 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
  *in_stack_00000010 = uVar1;
  *puVar6 = *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8);
  puVar6[(uint)bVar9 * -2 + 1] =
       *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4)
  ;
  return;
}
