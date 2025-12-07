// Name: core_bodypart.cpp_FUN_0041aa40
// Address: 0041aa40
// Address Range: [[0041aa40, 0041adcb]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041aa40()

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041aa40(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  double dVar17;
  int in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int aiStackY_106c [1001];
  int local_c0;
  int local_bc;
  CMatrix3x3f local_b8;
  CVector3f local_90;
  int local_84;
  int aiStack_80 [5];
  int local_6c;
  uint uStack_64;
  int local_60;
  int local_5c;
  int local_58;
  CVector3f local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  local_44 = 0x7fffffff;
  local_48 = 0;
  do {
    local_bc = local_48;
    local_c0 = 0;
    do {
      local_18 = local_bc;
      local_54.x = (float)local_c0 * (float)3.1415926535000001 * (float)0.083333333333333301;
      local_54.y = (float)local_bc * (float)3.1415926535000001 * (float)0.083333333333333301;
      local_54.z = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_b8,&local_54);
      fVar10 = (float10)local_b8.m[0].z * (float10)65536f;
      fVar11 = (float10)local_b8.m[1].x * (float10)65536f;
      fVar12 = (float10)local_b8.m[1].y * (float10)65536f;
      fVar13 = (float10)local_b8.m[1].z * (float10)65536f;
      fVar3 = local_b8.m[2].x * 65536f;
      fVar14 = (float10)local_b8.m[2].y * (float10)65536f;
      local_c0 = 0x41ab17;
      dVar16 = crt_math_c_round_FUN_005fe6b0((double)(local_b8.m[0].y * 65536f));
      local_28 = (int)ROUND(dVar16);
      fVar15 = (float10)local_b8.m[2].y * (float10)65536f;
      dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
      local_28 = (int)ROUND(dVar16);
      fVar10 = (float10)local_b8.m[2].y * (float10)65536f;
      local_5c = 0x7fffffff;
      local_60 = 0x7fffffff;
      uStack_64 = 0x7fffffff;
      aiStack_80[3] = -0x7fffffff;
      aiStack_80[2] = -0x7fffffff;
      aiStack_80[1] = 0x80000001;
      iVar4 = *(int *)(in_stack_00000004 + 0x174);
      iVar8 = 0;
      dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
      fVar11 = (float10)dVar16;
      dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
      fVar12 = (float10)dVar16;
      dVar16 = crt_math_c_round_FUN_005fe6b0((double)fVar13);
      dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
      fVar13 = (float10)dVar17;
      dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
      fVar14 = (float10)dVar17;
      dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
      fVar15 = (float10)dVar17;
      dVar17 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
      local_3c = (int)ROUND(fVar11);
      local_20 = (int)ROUND(fVar12);
      local_34 = (int)ROUND(dVar16);
      local_2c = (int)ROUND(fVar13);
      local_30 = (int)ROUND(fVar14);
      local_38 = (int)ROUND(fVar15);
      local_40 = (int)ROUND(dVar17);
      if (0 < iVar4) {
        local_1c = 0;
        do {
          piVar5 = (int *)(*(int *)(in_stack_00000004 + 0x178) + local_1c);
          lVar1 = (longlong)(int)ROUND(fVar12) * (longlong)piVar5[1];
          lVar2 = (longlong)(int)ROUND(fVar14) * (longlong)piVar5[2];
          iVar6 = ((uint)((longlong)local_28 * (longlong)*piVar5) >> 0x10 |
                  (int)((ulonglong)((longlong)local_28 * (longlong)*piVar5) >> 0x20) << 0x10) +
                  ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(dVar16) * (longlong)piVar5[1];
          lVar2 = (longlong)(int)ROUND(fVar15) * (longlong)piVar5[2];
          iVar7 = ((uint)((longlong)local_24 * (longlong)*piVar5) >> 0x10 |
                  (int)((ulonglong)((longlong)local_24 * (longlong)*piVar5) >> 0x20) << 0x10) +
                  ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(fVar11) * (longlong)*piVar5;
          lVar2 = (longlong)(int)ROUND(fVar13) * (longlong)piVar5[1];
          local_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                     ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(dVar17) * (longlong)piVar5[2];
          iVar4 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + local_18;
          if (iVar6 < local_60) {
            local_60 = iVar6;
          }
          if (aiStack_80[2] < iVar6) {
            aiStack_80[2] = iVar6;
          }
          if (iVar7 < local_5c) {
            local_5c = iVar7;
          }
          if (aiStack_80[3] < iVar7) {
            aiStack_80[3] = iVar7;
          }
          if (iVar4 < local_58) {
            local_58 = iVar4;
          }
          if (aiStack_80[4] < iVar4) {
            aiStack_80[4] = iVar4;
          }
          iVar8 = iVar8 + 1;
          local_1c = local_1c + 0xc;
        } while (iVar8 < *(int *)(in_stack_00000004 + 0x174));
      }
      iVar4 = aiStack_80[2] - local_60;
      if (aiStack_80[2] - local_60 < aiStack_80[3] - local_5c) {
        iVar4 = aiStack_80[3] - local_5c;
      }
      if (iVar4 < local_44) {
        local_84 = local_60;
        aiStack_80[(uint)bVar9 * -2] = aiStack_80[(uint)bVar9 * -2 + 9];
        aiStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             aiStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        local_44 = iVar4;
        local_6c = aiStack_80[2];
        aiStack_80[(uint)bVar9 * -2 + 6] = aiStack_80[(uint)bVar9 * -2 + 3];
        aiStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             aiStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        if (&local_90 != &local_54) {
          local_90.x = local_54.x;
          local_90.y = local_54.y;
          local_90.z = local_54.z;
        }
      }
      local_c0 = local_c0 + 2;
    } while (local_c0 != 0x18);
    local_48 = local_48 + 2;
  } while (local_48 != 0x18);
  *in_stack_00000008 = local_84;
  in_stack_00000008[(uint)bVar9 * -2 + 1] = aiStack_80[(uint)bVar9 * -2];
  (in_stack_00000008 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       aiStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  *in_stack_0000000c = local_6c;
  in_stack_0000000c[(uint)bVar9 * -2 + 1] = aiStack_80[(uint)bVar9 * -2 + 6];
  (in_stack_0000000c + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       aiStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  core_bodypart_cpp_FUN_0041a630();
  return;
}
