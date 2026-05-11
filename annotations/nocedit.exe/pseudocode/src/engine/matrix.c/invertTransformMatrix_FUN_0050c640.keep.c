// Name: engine_matrix.c_invertTransformMatrix_FUN_0050c640
// Address: 0050c640
// MANUAL RECONSTRUCTION
// Address Range: [[0050c640, 0050c919]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_invertTransformMatrix_FUN_0050c640(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_0050c640(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = (float)g_TransformMatrix.m[0].x * (float)1.52587890625e-05;
  fVar8 = (float)g_TransformMatrix.m[0].y * (float)1.52587890625e-05;
  fVar9 = (float)g_TransformMatrix.m[0].z * (float)1.52587890625e-05;
  fVar11 = (float)g_TransformMatrix.m[1].x * (float)1.52587890625e-05;
  fVar4 = (float)g_TransformMatrix.m[1].y * (float)1.52587890625e-05;
  fVar5 = (float)g_TransformMatrix.m[1].z * (float)1.52587890625e-05;
  fVar12 = (float)g_TransformMatrix.m[2].x * (float)1.52587890625e-05;
  fVar7 = (float)g_TransformMatrix.m[2].y * (float)1.52587890625e-05;
  fVar6 = (float)g_TransformMatrix.m[2].z * (float)1.52587890625e-05;
  fVar1 = fVar4 * fVar6 - fVar5 * fVar7;
  fVar10 = fVar11 * fVar6 - fVar5 * fVar12;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  g_TransformMatrixCopy = g_TransformMatrix;
  fVar13 = (float)65536 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  g_InverseMatrix.m[0].x = (int)ROUND(ROUND(fVar1 * fVar13));
  g_InverseMatrix.m[0].y = (int)ROUND(ROUND(-(fVar8 * fVar6 - fVar9 * fVar7) * fVar13));
  g_InverseMatrix.m[0].z = (int)ROUND(ROUND((fVar8 * fVar5 - fVar9 * fVar4) * fVar13));
  g_InverseMatrix.m[1].x = (int)ROUND(ROUND(-fVar10 * fVar13));
  g_InverseMatrix.m[1].y = (int)ROUND(ROUND((fVar3 * fVar6 - fVar9 * fVar12) * fVar13));
  g_InverseMatrix.m[1].z = (int)ROUND(ROUND(-(fVar3 * fVar5 - fVar9 * fVar11) * fVar13));
  g_InverseMatrix.m[2].x = (int)ROUND(ROUND(fVar2 * fVar13));
  g_InverseMatrix.m[2].y = (int)ROUND(ROUND(-(fVar3 * fVar7 - fVar8 * fVar12) * fVar13));
  g_InverseMatrix.m[2].z = (int)ROUND(ROUND((fVar3 * fVar4 - fVar8 * fVar11) * fVar13));
  return;
}
