// Name: core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10
// Address: 00533f10
// Address Range: [[00533f10, 00534020]]
// Convention: __cdecl
// Signature: float * __cdecl core_spline_cpp_evaluateSplinePoint3D_FUN_00533f10(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6)

#include "nocturne.h"

float * __cdecl core_spline_cpp_evaluateSplinePoint3D_FUN_00533f10(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6)

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
  
  pfVar1 = param_1 + 3;
  fVar4 = param_6[1];
  fVar5 = *pfVar1;
  fVar6 = param_6[2];
  fVar7 = *pfVar1;
  pfVar2 = param_1 + 2;
  fVar8 = param_5[1];
  fVar9 = *pfVar2;
  fVar10 = param_5[2];
  fVar11 = *pfVar2;
  pfVar3 = param_1 + 1;
  fVar12 = param_4[1];
  fVar13 = *pfVar3;
  fVar14 = param_4[2];
  fVar15 = *pfVar3;
  fVar16 = param_3[1];
  fVar17 = *param_1;
  fVar18 = param_3[2];
  fVar19 = *param_1;
  *param_2 = *param_3 * *param_1 + *param_4 * *pfVar3 + *param_5 * *pfVar2 + *param_6 * *pfVar1;
  param_2[1] = fVar16 * fVar17 + fVar12 * fVar13 + fVar8 * fVar9 + fVar4 * fVar5;
  param_2[2] = fVar18 * fVar19 + fVar14 * fVar15 + fVar10 * fVar11 + fVar6 * fVar7;
  return param_2;
}
