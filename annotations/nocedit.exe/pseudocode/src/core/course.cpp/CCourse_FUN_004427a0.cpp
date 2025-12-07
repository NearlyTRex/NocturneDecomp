// Name: core_course.cpp_CCourse_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 00442a83]]
// Convention: unknown
// Signature: undefined core_course.cpp_CCourse_FUN_004427a0()

#include "nocturne.h"

void core_course_cpp_CCourse_FUN_004427a0(uint param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  uint *puVar6;
  int iVar8;
  byte bVar9;
  float10 in_ST0;
  double dVar10;
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
  uint local_24;
  float fStack_20;
  int local_1c;
  int local_18;
  int local_14;
  uint *puVar7;
  
  bVar9 = 0;
  iVar8 = in_stack_00000004[2];
  if (iVar8 == 0) {
    if (0.0 < in_stack_00000008) {
      iVar8 = *in_stack_00000004 + -1;
      local_14 = iVar8;
      if (in_stack_00000008 < (float)iVar8) {
        dVar10 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000008);
        local_1c = (int)ROUND(dVar10);
        local_18 = local_1c;
        local_7c = (CQuaternion4f *)(in_stack_00000008 - (float)local_1c);
        iVar8 = local_1c + 1;
      }
      else {
        local_18 = iVar8;
      }
      goto LAB_004427da;
    }
    local_18 = iVar8;
  }
  else {
    fVar2 = (float)*in_stack_00000004;
    uVar5 = CONCAT22 /* combine 2-byte values */((short)((uint)param_1 >> 0x10),
                     (ushort)(0.0 < in_stack_00000008) << 8 | (ushort)NAN(in_stack_00000008) << 10 |
                     (ushort)(in_stack_00000008 == 0.0) << 0xe);
    if (0.0 < in_stack_00000008 || (in_stack_00000008 == 0.0) != 0) {
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      local_7c = (CQuaternion4f *)(in_stack_00000008 - (float)(double)CONCAT44 /* combine 2-byte values */(iVar8,uVar5) * fVar2)
      ;
    }
    else {
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      local_7c = (CQuaternion4f *)((float)(double)CONCAT44 /* combine 2-byte values */(iVar8,uVar5) * fVar2 + in_stack_00000008)
      ;
      if ((float)local_7c < 0.0) {
        local_7c = (CQuaternion4f *)((float)local_7c + fVar2);
      }
    }
    local_24 = uVar5;
    fStack_20 = (float)iVar8;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(float)local_7c);
    local_1c = (int)ROUND(dVar10);
    local_18 = local_1c;
    local_7c = (CQuaternion4f *)((float)local_7c - (float)local_1c);
    iVar8 = local_1c + 1;
    if (iVar8 < *in_stack_00000004) goto LAB_004427da;
  }
  iVar8 = 0;
LAB_004427da:
  dVar10 = (double)(float)local_7c;
  local_90 = (uint)((ulonglong)dVar10 >> 0x20);
  iVar3 = local_1c * 0x1c;
  if (dVar10 <= 0.001) {
    pfVar4 = (float *)(in_stack_00000004[1] + iVar3);
    if (&local_40 != pfVar4) {
      local_40 = *pfVar4;
      local_3c = pfVar4[1];
      local_38 = pfVar4[2];
    }
    puVar6 = (uint *)(in_stack_00000004[1] + 0xc + local_1c * 0x1c);
  }
  else {
    pfVar4 = (float *)(iVar8 * 0x1c + in_stack_00000004[1]);
    local_4c = *pfVar4 * (float)local_7c;
    local_48 = pfVar4[1] * (float)local_7c;
    local_44 = (float)local_7c * pfVar4[2];
    fStack_20 = 1.0 - (float)local_7c;
    iVar1 = in_stack_00000004[1];
    fStack_58 = *(float *)(iVar3 + iVar1) * fStack_20;
    local_54 = *(float *)(iVar3 + 4 + iVar1) * fStack_20;
    local_50 = *(float *)(iVar3 + 8 + iVar1) * fStack_20;
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
               (CQuaternion4f *)(iVar8 * 0x1c + in_stack_00000004[1] + 0xc),local_7c,SUB84 /* extract 2-byte value */(dVar10,0)
              );
    puVar6 = (uint *)&stack0xffffff98;
  }
  puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
  uVar5 = *puVar6;
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
    *in_stack_00000010 = uVar5;
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
  *in_stack_00000010 = uVar5;
  *puVar6 = *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8);
  puVar6[(uint)bVar9 * -2 + 1] =
       *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4)
  ;
  return;
}
