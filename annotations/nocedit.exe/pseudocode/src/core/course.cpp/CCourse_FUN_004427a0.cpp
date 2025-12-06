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
  uint extraout_EAX;
  uint uVar5;
  uint extraout_EAX_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  uint *puVar6;
  int iVar8;
  byte bVar9;
  float10 in_ST0;
  float10 fVar10;
  float10 fVar11;
  int *in_stack_00000004;
  float in_stack_00000008;
  float *in_stack_0000000c;
  uint *in_stack_00000010;
  float afStackY_184c [1517];
  float local_7c;
  CQuaternion4f *local_74;
  uint auStack_6c [7];
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
  float local_28;
  float local_24;
  uint uStack_20;
  float local_18;
  int local_14;
  uint *puVar7;
  
  bVar9 = 0;
  if (in_stack_00000004[2] == 0) {
    if (0.0 < in_stack_00000008) {
      iVar8 = *in_stack_00000004 + -1;
      local_14 = iVar8;
      fVar2 = (float)iVar8;
      if (fVar2 < in_stack_00000008 || (fVar2 == in_stack_00000008) != 0) {
        local_18 = (float)iVar8;
      }
      else {
        fVar10 = (float10)in_stack_00000008;
        fVar11 = fVar10;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44 /* combine 2-byte values */(iVar8,CONCAT22 /* combine 2-byte values */((short)((uint)param_1 >> 0x10),
                                                   (ushort)(fVar2 < in_stack_00000008) << 8 |
                                                   (ushort)(NAN(fVar2) || NAN(in_stack_00000008)) <<
                                                   10 | (ushort)(fVar2 == in_stack_00000008) << 0xe)
                                   ));
        local_14 = (int)ROUND(fVar10);
        iVar8 = local_14 + 1;
        local_74 = (CQuaternion4f *)(float)(fVar11 - (float10)local_14);
      }
      goto LAB_004427da;
    }
    local_18 = (float)in_stack_00000004[2];
  }
  else {
    fVar2 = (float)*in_stack_00000004;
    if (0.0 <= in_stack_00000008) {
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      local_7c = in_stack_00000008 -
                 (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00) * fVar2;
      uVar5 = extraout_EAX_00;
      uStack_20 = extraout_EDX_00;
    }
    else {
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      local_7c = (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) * fVar2 + in_stack_00000008;
      uVar5 = CONCAT22 /* combine 2-byte values */((short)((uint)extraout_EAX >> 0x10),
                       (ushort)(0.0 < local_7c) << 8 | (ushort)NAN(local_7c) << 10 |
                       (ushort)(local_7c == 0.0) << 0xe);
      uStack_20 = extraout_EDX;
      if (0.0 >= local_7c && (local_7c == 0.0) == 0) {
        local_7c = local_7c + fVar2;
      }
    }
    fVar10 = (float10)local_7c;
    fVar11 = fVar10;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uStack_20,uVar5));
    local_14 = (int)ROUND(fVar10);
    iVar8 = local_14 + 1;
    local_74 = (CQuaternion4f *)(float)(fVar11 - (float10)local_14);
    if (iVar8 < *in_stack_00000004) goto LAB_004427da;
  }
  iVar8 = 0;
LAB_004427da:
  iVar3 = local_14 * 0x1c;
  if ((double)(float)local_74 <= 0.001) {
    pfVar4 = (float *)(in_stack_00000004[1] + iVar3);
    if (&local_38 != pfVar4) {
      local_38 = *pfVar4;
      local_34 = pfVar4[1];
      local_30 = pfVar4[2];
    }
    puVar6 = (uint *)(in_stack_00000004[1] + 0xc + local_14 * 0x1c);
  }
  else {
    pfVar4 = (float *)(iVar8 * 0x1c + in_stack_00000004[1]);
    local_44 = *pfVar4 * (float)local_74;
    local_40 = pfVar4[1] * (float)local_74;
    local_3c = (float)local_74 * pfVar4[2];
    local_18 = 1.0 - (float)local_74;
    iVar1 = in_stack_00000004[1];
    local_50 = *(float *)(iVar3 + iVar1) * local_18;
    local_4c = *(float *)(iVar3 + 4 + iVar1) * local_18;
    local_48 = *(float *)(iVar3 + 8 + iVar1) * local_18;
    local_2c = local_50 + local_44;
    local_28 = local_4c + local_40;
    local_24 = local_48 + local_3c;
    if (&local_38 != &local_2c) {
      local_38 = local_2c;
      local_34 = local_28;
      local_30 = local_24;
    }
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)(local_14 * 0x1c + in_stack_00000004[1] + 0xc),
               (CQuaternion4f *)(iVar8 * 0x1c + in_stack_00000004[1] + 0xc),local_74,
               SUB84 /* extract 2-byte value */((double)(float)local_74,0));
    puVar6 = auStack_6c + 3;
  }
  puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
  uVar5 = *puVar6;
  auStack_6c[(uint)bVar9 * -2] = *puVar7;
  auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = puVar7[(uint)bVar9 * -2 + 1];
  (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  if (in_stack_0000000c != &local_38) {
    *in_stack_0000000c = local_38;
    in_stack_0000000c[1] = local_34;
    in_stack_0000000c[2] = local_30;
    puVar6 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
    *in_stack_00000010 = uVar5;
    *puVar6 = auStack_6c[(uint)bVar9 * -2];
    puVar6[(uint)bVar9 * -2 + 1] = auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
    return;
  }
  puVar6 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
  *in_stack_00000010 = uVar5;
  *puVar6 = auStack_6c[(uint)bVar9 * -2];
  puVar6[(uint)bVar9 * -2 + 1] = auStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       (auStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  return;
}
