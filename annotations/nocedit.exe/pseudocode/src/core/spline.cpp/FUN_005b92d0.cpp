// Name: core_spline.cpp_FUN_005b92d0
// Address: 005b92d0
// Address Range: [[005b92d0, 005b93e0]]
// Convention: unknown
// Signature: undefined core_spline.cpp_FUN_005b92d0()

#include "nocturne.h"

float * core_spline_cpp_FUN_005b92d0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  float *in_stack_00000018;
  
  pfVar1 = in_stack_00000004 + 3;
  fVar4 = in_stack_00000018[1];
  fVar5 = *pfVar1;
  fVar6 = in_stack_00000018[2];
  fVar7 = *pfVar1;
  pfVar2 = in_stack_00000004 + 2;
  fVar8 = in_stack_00000014[1];
  fVar9 = *pfVar2;
  fVar10 = in_stack_00000014[2];
  fVar11 = *pfVar2;
  pfVar3 = in_stack_00000004 + 1;
  fVar12 = in_stack_00000010[1];
  fVar13 = *pfVar3;
  fVar14 = in_stack_00000010[2];
  fVar15 = *pfVar3;
  fVar16 = in_stack_0000000c[1];
  fVar17 = *in_stack_00000004;
  fVar18 = in_stack_0000000c[2];
  fVar19 = *in_stack_00000004;
  *in_stack_00000008 =
       *in_stack_0000000c * *in_stack_00000004 + *in_stack_00000010 * *pfVar3 +
       *in_stack_00000014 * *pfVar2 + *in_stack_00000018 * *pfVar1;
  in_stack_00000008[1] = fVar16 * fVar17 + fVar12 * fVar13 + fVar8 * fVar9 + fVar4 * fVar5;
  in_stack_00000008[2] = fVar18 * fVar19 + fVar14 * fVar15 + fVar10 * fVar11 + fVar6 * fVar7;
  return in_stack_00000008;
}
