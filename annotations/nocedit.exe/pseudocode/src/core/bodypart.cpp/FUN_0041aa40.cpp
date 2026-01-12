// Name: core_bodypart.cpp_FUN_0041aa40
// Address: 0041aa40
// Address Range: [[0041aa40, 0041adcb]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041aa40()

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0041ad84) */
/* WARNING: Removing unreachable block (ram,0x0041ad97) */
/* WARNING: Type propagation algorithm not settling */

void core_bodypart_cpp_FUN_0041aa40(void)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int extraout_EDX;
  float fVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  int in_stack_00000004;
  float afStackY_108c [1001];
  int iStack_e0;
  int iStack_dc;
  CMatrix3x3f CStack_d8;
  float local_b4;
  CVector3f local_b0;
  float local_a4;
  float local_a0 [3];
  int iStack_94;
  int local_90;
  float local_8c;
  float local_88 [3];
  int iStack_7c;
  int local_78;
  CVector3f local_74;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_28;
  
  local_40 = 0x7fffffff;
  local_44 = 0;
  bVar7 = 0;
  iStack_dc = iStack_68;
  iStack_e0 = 0;
  do {
    local_38 = iStack_dc;
    local_74.x = (float)iStack_e0 * (float)3.1415926535000001 * (float)0.083333333333333301;
    local_74.y = (float)iStack_dc * (float)3.1415926535000001 * (float)0.083333333333333301;
    local_74.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_d8,&local_74);
    fVar8 = (float10)local_b0.x * (float10)65536f;
    fVar9 = (float10)local_b0.y * (float10)65536f;
    fVar10 = (float10)local_b0.z * (float10)65536f;
    fVar11 = (float10)local_a4 * (float10)65536f;
    fVar12 = (float10)local_a0[0] * (float10)65536f;
    fVar13 = (float10)local_a0[1] * (float10)65536f;
    CStack_d8.m[2].x = 6.030683e-39;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)(local_b4 * 65536f));
    local_28 = (int)ROUND(dVar15);
    fVar14 = (float10)local_a0[1] * (float10)65536f;
    CStack_d8.m[1].z = 6.030716e-39;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
    local_28 = (int)ROUND(dVar15);
    fVar8 = (float10)local_a0[1] * (float10)65536f;
    local_5c = 0x7fffffff;
    local_60 = 0x7fffffff;
    iStack_64 = 0x7fffffff;
    local_74.x = -1.4013e-45;
    local_78 = -0x7fffffff;
    iStack_7c = -0x7fffffff;
    iVar6 = 0;
    CStack_d8.m[1].y = 6.030813e-39;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
    fVar9 = (float10)dVar15;
    CStack_d8.m[1].x = 6.030823e-39;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
    fVar10 = (float10)dVar15;
    CStack_d8.m[0].z = 6.030833e-39;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
    fVar11 = (float10)dVar15;
    CStack_d8.m[0].y = 6.030842e-39;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
    fVar12 = (float10)dVar15;
    CStack_d8.m[0].x = 6.030852e-39;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar13);
    fVar13 = (float10)dVar15;
    iStack_dc = 0x41ab97;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
    fVar14 = (float10)dVar15;
    dVar15 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
    local_5c = (int)ROUND(fVar9);
    local_40 = (int)ROUND(fVar10);
    local_54 = (int)ROUND(fVar11);
    local_4c = (int)ROUND(fVar12);
    local_50 = (int)ROUND(fVar13);
    local_58 = (int)ROUND(fVar14);
    local_60 = (int)ROUND(dVar15);
    if (0 < extraout_EDX) {
      local_3c = 0;
      do {
        piVar3 = (int *)(*(int *)(in_stack_00000004 + 0x178) + local_3c);
        lVar1 = (longlong)(int)ROUND(fVar10) * (longlong)piVar3[1];
        lVar2 = (longlong)(int)ROUND(fVar13) * (longlong)piVar3[2];
        fVar4 = (float)(((uint)((longlong)local_48 * (longlong)*piVar3) >> 0x10 |
                        (int)((ulonglong)((longlong)local_48 * (longlong)*piVar3) >> 0x20) << 0x10)
                        + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10));
        lVar1 = (longlong)(int)ROUND(fVar11) * (longlong)piVar3[1];
        lVar2 = (longlong)(int)ROUND(fVar14) * (longlong)piVar3[2];
        iVar5 = ((uint)((longlong)local_44 * (longlong)*piVar3) >> 0x10 |
                (int)((ulonglong)((longlong)local_44 * (longlong)*piVar3) >> 0x20) << 0x10) +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)ROUND(fVar9) * (longlong)*piVar3;
        lVar2 = (longlong)(int)ROUND(fVar12) * (longlong)piVar3[1];
        local_38 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)ROUND(dVar15) * (longlong)piVar3[2];
        local_38 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + local_38;
        if ((int)fVar4 < (int)local_88[2]) {
          local_88[2] = fVar4;
        }
        if ((int)local_a0[2] < (int)fVar4) {
          local_a0[2] = fVar4;
        }
        if (iVar5 < iStack_7c) {
          iStack_7c = iVar5;
        }
        if (iStack_94 < iVar5) {
          iStack_94 = iVar5;
        }
        if (local_38 < local_78) {
          local_78 = local_38;
        }
        if (local_90 < local_38) {
          local_90 = local_38;
        }
        iVar6 = iVar6 + 1;
        local_3c = local_3c + 0xc;
      } while (iVar6 < *(int *)(in_stack_00000004 + 0x174));
    }
    iVar6 = (int)local_a0[2] - (int)local_88[2];
    if ((int)local_a0[2] - (int)local_88[2] < iStack_94 - iStack_7c) {
      iVar6 = iStack_94 - iStack_7c;
    }
    if (iVar6 < iStack_64) {
      local_a4 = local_88[2];
      local_a0[(uint)bVar7 * -2] = local_88[(uint)bVar7 * -2 + 3];
      local_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           local_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      iStack_64 = iVar6;
      local_8c = local_a0[2];
      local_88[(uint)bVar7 * -2] = local_a0[(uint)bVar7 * -2 + 3];
      local_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           local_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (&local_b0 != &local_74) {
        local_b0.x = local_74.x;
        local_b0.y = local_74.y;
        local_b0.z = local_74.z;
      }
    }
    iStack_e0 = 0x41aba0;
  } while( true );
}
