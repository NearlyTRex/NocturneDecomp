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
  uint extraout_EAX;
  float fVar3;
  int *piVar4;
  uint extraout_EDX;
  float fVar5;
  BADSPACEBASE *in_ESP;
  float fVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  int unaff_retaddr;
  int in_stack_00000004;
  int iStack0000000c;
  float afStackY_1044 [991];
  int local_c0;
  int local_bc;
  CMatrix3x3f local_b8;
  float fStack_94;
  float local_8c;
  uint local_6c;
  float fStack_68;
  uint uStack_64;
  uint local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  local_48[1] = NAN;
  local_48[0] = 0.0;
  bVar8 = 0;
  local_bc = 0;
  local_c0 = 0;
  do {
    local_18 = local_bc;
    local_54.x = (float)local_c0 * (float)3.1415926535000001 * (float)0.083333333333333301;
    local_54.y = (float)local_bc * (float)3.1415926535000001 * (float)0.083333333333333301;
    local_54.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_b8,&local_54);
    fVar9 = (float10)local_b8.m[0].y * (float10)65536f;
    fVar10 = (float10)local_b8.m[0].z * (float10)65536f;
    fVar11 = (float10)local_b8.m[1].x * (float10)65536f;
    fVar12 = (float10)local_b8.m[1].y * (float10)65536f;
    fVar13 = (float10)local_b8.m[1].z * (float10)65536f;
    fVar14 = (float10)local_b8.m[2].x * (float10)65536f;
    fVar15 = (float10)local_b8.m[2].y * (float10)65536f;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
    local_20 = (int)ROUND(fVar9);
    fVar9 = (float10)fStack_94 * (float10)65536f;
    local_bc = 0x41ab2f;
    crt_math_c_round_FUN_005fe6b0(dVar16);
    local_18 = (int)ROUND(fVar10);
    fVar10 = (float10)local_8c * (float10)65536f;
    local_54.z = NAN;
    local_54.y = NAN;
    local_54.x = NAN;
    uStack_64 = 0x80000001;
    fStack_68 = -1.4013e-45;
    local_6c = 0x80000001;
    iVar7 = 0;
    local_b8.m[0].x = 6.030813e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */(*(uint *)(in_stack_00000004 + 0x174),
                                         in_stack_00000004));
    local_b8.m[0].y = 6.030823e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[0].z = 6.030833e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[1].x = 6.030842e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[1].y = 6.030852e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[1].z = 6.030862e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    local_b8.m[2].x = 6.030872e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
    iStack_14 = (int)ROUND(fVar11);
    local_18 = (int)ROUND(fVar10);
    if ((int)((ulonglong)dVar16 >> 0x20) != 0 && -1 < (longlong)dVar16) {
      iStack0000000c = 0;
      do {
        piVar4 = (int *)(*(int *)(in_stack_00000004 + 0x178) + iStack0000000c);
        fVar5 = (float)(((uint)((longlong)unaff_retaddr * (longlong)*piVar4) >> 0x10 |
                        (int)((ulonglong)((longlong)unaff_retaddr * (longlong)*piVar4) >> 0x20) <<
                        0x10) + ((uint)((longlong)(int)ROUND(fVar12) * (longlong)piVar4[1]) >> 0x10
                                | (int)((ulonglong)
                                        ((longlong)(int)ROUND(fVar12) * (longlong)piVar4[1]) >> 0x20
                                       ) << 0x10) +
                       ((uint)((longlong)(int)ROUND(fVar15) * (longlong)piVar4[2]) >> 0x10 |
                       (int)((ulonglong)((longlong)(int)ROUND(fVar15) * (longlong)piVar4[2]) >> 0x20
                            ) << 0x10));
        fVar6 = (float)(((uint)((longlong)in_stack_00000004 * (longlong)*piVar4) >> 0x10 |
                        (int)((ulonglong)((longlong)in_stack_00000004 * (longlong)*piVar4) >> 0x20)
                        << 0x10) +
                        ((uint)((longlong)(int)ROUND(fVar13) * (longlong)piVar4[1]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)ROUND(fVar13) * (longlong)piVar4[1]) >>
                             0x20) << 0x10) +
                       ((uint)((longlong)(int)ROUND(fVar9) * (longlong)piVar4[2]) >> 0x10 |
                       (int)((ulonglong)((longlong)(int)ROUND(fVar9) * (longlong)piVar4[2]) >> 0x20)
                       << 0x10));
        lVar1 = (longlong)(int)ROUND(fVar11) * (longlong)*piVar4;
        lVar2 = (longlong)(int)ROUND(fVar10) * (longlong)piVar4[2];
        fVar3 = (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                       ((uint)((longlong)(int)ROUND(fVar14) * (longlong)piVar4[1]) >> 0x10 |
                       (int)((ulonglong)((longlong)(int)ROUND(fVar14) * (longlong)piVar4[1]) >> 0x20
                            ) << 0x10));
        if ((int)fVar5 < (int)local_38) {
          local_38 = fVar5;
        }
        if ((int)local_54.y < (int)fVar5) {
          local_54.y = fVar5;
        }
        if ((int)fVar6 < (int)local_34) {
          local_34 = fVar6;
        }
        if ((int)local_54.z < (int)fVar6) {
          local_54.z = fVar6;
        }
        if ((int)fVar3 < (int)local_30[0]) {
          local_30[0] = fVar3;
        }
        if ((int)local_48[0] < (int)fVar3) {
          local_48[0] = fVar3;
        }
        iVar7 = iVar7 + 1;
        iStack0000000c = iStack0000000c + 0xc;
      } while (iVar7 < *(int *)(in_stack_00000004 + 0x174));
    }
    iVar7 = (int)local_54.y - (int)local_38;
    if ((int)local_54.y - (int)local_38 < (int)local_54.z - (int)local_34) {
      iVar7 = (int)local_54.z - (int)local_34;
    }
    if (iVar7 < local_1c) {
      local_5c = local_38;
      (&local_58)[(uint)bVar8 * -2] = local_30[(uint)bVar8 * -2 + -1];
      *(float *)((int)&local_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           local_30[(uint)bVar8 * -2 + (uint)bVar8 * -2];
      local_1c = iVar7;
      local_48[1] = local_54.y;
      local_48[(uint)bVar8 * -2 + 2] = *(float *)((int)&local_54 + (uint)bVar8 * -8 + 8);
      local_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3] =
           local_48[(uint)bVar8 * -2 + (uint)bVar8 * -2];
      if (&fStack_68 != local_30 + 1) {
        fStack_68 = local_30[1];
        uStack_64 = local_30[2];
        local_60 = local_30[3];
      }
    }
    local_c0 = 0x41ab19;
  } while( true );
}
