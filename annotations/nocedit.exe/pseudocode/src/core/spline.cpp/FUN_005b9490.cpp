// Name: core_spline.cpp_FUN_005b9490
// Address: 005b9490
// Address Range: [[005b9490, 005b95a3]]
// Convention: __cdecl
// Signature: float * __cdecl core_spline_cpp_FUN_005b9490(void)

#include "nocturne.h"

float * __cdecl core_spline_cpp_FUN_005b9490(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  float fVar20;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  float *in_stack_00000018;
  
  pfVar1 = (float *)(in_stack_00000004 + 0x1c);
  fVar5 = in_stack_00000018[1];
  fVar6 = *pfVar1;
  fVar7 = in_stack_00000018[2];
  fVar8 = *pfVar1;
  pfVar2 = (float *)(in_stack_00000004 + 0x18);
  fVar9 = in_stack_00000014[1];
  fVar10 = *pfVar2;
  fVar11 = in_stack_00000014[2];
  fVar12 = *pfVar2;
  pfVar3 = (float *)(in_stack_00000004 + 0x14);
  fVar13 = in_stack_00000010[1];
  fVar14 = *pfVar3;
  fVar15 = in_stack_00000010[2];
  fVar16 = *pfVar3;
  pfVar4 = (float *)(in_stack_00000004 + 0x10);
  fVar17 = in_stack_0000000c[1];
  fVar18 = *pfVar4;
  fVar19 = in_stack_0000000c[2];
  fVar20 = *pfVar4;
  *in_stack_00000008 =
       *in_stack_0000000c * *pfVar4 + *in_stack_00000010 * *pfVar3 + *in_stack_00000014 * *pfVar2 +
       *in_stack_00000018 * *pfVar1;
  in_stack_00000008[1] = fVar17 * fVar18 + fVar13 * fVar14 + fVar9 * fVar10 + fVar5 * fVar6;
  in_stack_00000008[2] = fVar19 * fVar20 + fVar15 * fVar16 + fVar11 * fVar12 + fVar7 * fVar8;
  return in_stack_00000008;
}
