// Name: engine_matrix.c_invertTransformMatrix_FUN_004e4e10
// Address: 004e4e10
// Address Range: [[004e4e10, 004e50e9]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004e4e10(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004e4e10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uStack_54;
  
  fVar3 = (float)g_INT_01c6e2fc * (float)1.52587890625e-05;
  fVar8 = (float)g_INT_01c6e300 * (float)1.52587890625e-05;
  fVar9 = (float)g_INT_01c6e304 * (float)1.52587890625e-05;
  fVar11 = (float)g_INT_01c6e308 * (float)1.52587890625e-05;
  fVar4 = (float)g_INT_01c6e30c * (float)1.52587890625e-05;
  fVar5 = (float)g_INT_01c6e310 * (float)1.52587890625e-05;
  fVar12 = (float)g_INT_01c6e314 * (float)1.52587890625e-05;
  fVar7 = (float)g_INT_01c6e318 * (float)1.52587890625e-05;
  fVar6 = (float)g_INT_01c6e31c * (float)1.52587890625e-05;
  fVar1 = fVar4 * fVar6 - fVar5 * fVar7;
  fVar10 = fVar11 * fVar6 - fVar5 * fVar12;
  g_TransformMatrixCopy.m[0].x = g_INT_01c6e2fc;
  g_TransformMatrixCopy.m[0].y = g_INT_01c6e300;
  g_TransformMatrixCopy.m[0].z = g_INT_01c6e304;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  g_TransformMatrixCopy.m[1].x = g_INT_01c6e308;
  g_TransformMatrixCopy.m[1].y = g_INT_01c6e30c;
  g_TransformMatrixCopy.m[1].z = g_INT_01c6e310;
  g_TransformMatrixCopy.m[2].x = g_INT_01c6e314;
  g_TransformMatrixCopy.m[2].y = g_INT_01c6e318;
  g_TransformMatrixCopy.m[2].z = g_INT_01c6e31c;
  fVar13 = (float)65536 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  dVar14 = round((double)(fVar1 * fVar13));
  g_INT_01d72644 = (int)ROUND(dVar14);
  dVar14 = round((double)(-(fVar8 * fVar6 - fVar9 * fVar7) * fVar13));
  g_INT_01d72648 = (int)ROUND(dVar14);
  dVar14 = round((double)((fVar8 * fVar5 - fVar9 * fVar4) * fVar13));
  dVar15 = round((double)(-fVar10 * fVar13));
  dVar16 = round((double)((fVar3 * fVar6 - fVar9 * fVar12) * fVar13));
  dVar17 = round((double)(-(fVar3 * fVar5 - fVar9 * fVar11) * fVar13));
  dVar18 = round((double)(fVar2 * fVar13));
  dVar19 = round((double)(uStack_54 * 7.192002e-39));
  dVar20 = round((double)(-(fVar3 * fVar7 - fVar8 * fVar12) * 7.19203e-39));
  g_INT_01d7264c = (int)ROUND(dVar14);
  g_INT_01d72650 = (int)ROUND(dVar15);
  g_INT_01d72654 = (int)ROUND(dVar16);
  g_INT_01d72658 = (int)ROUND(dVar17);
  g_INT_01d7265c = (int)ROUND(dVar18);
  g_INT_01d72660 = (int)ROUND(dVar19);
  g_INT_01d72664 = (int)ROUND(dVar20);
  return;
}
