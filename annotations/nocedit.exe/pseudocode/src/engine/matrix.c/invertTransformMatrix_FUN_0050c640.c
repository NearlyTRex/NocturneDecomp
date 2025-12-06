// Name: engine_matrix.c_invertTransformMatrix_FUN_0050c640
// Address: 0050c640
// Address Range: [[0050c640, 0050c919]]
// Convention: __cdecl
// Signature: void engine_matrix.c_invertTransformMatrix_FUN_0050c640(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_0050c640(void)

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
  uint in_EDX;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  double dVar21;
  uint uStack_54;
  uint uStack_4c;
  
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
  g_TransformMatrixCopy.m[0].x = g_TransformMatrix.m[0].x;
  g_TransformMatrixCopy.m[0].y = g_TransformMatrix.m[0].y;
  g_TransformMatrixCopy.m[0].z = g_TransformMatrix.m[0].z;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  g_TransformMatrixCopy.m[1].x = g_TransformMatrix.m[1].x;
  g_TransformMatrixCopy.m[1].y = g_TransformMatrix.m[1].y;
  g_TransformMatrixCopy.m[1].z = g_TransformMatrix.m[1].z;
  g_TransformMatrixCopy.m[2].x = g_TransformMatrix.m[2].x;
  g_TransformMatrixCopy.m[2].y = g_TransformMatrix.m[2].y;
  g_TransformMatrixCopy.m[2].z = g_TransformMatrix.m[2].z;
  fVar13 = (float)65536 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  fVar14 = (float10)fVar1 * (float10)fVar13;
  fVar15 = (float10)-(fVar8 * fVar6 - fVar9 * fVar7) * (float10)fVar13;
  fVar16 = ((float10)fVar8 * (float10)fVar5 - (float10)fVar9 * (float10)fVar4) * (float10)fVar13;
  fVar17 = (float10)-fVar10 * (float10)fVar13;
  fVar18 = (float10)(fVar3 * fVar6 - fVar9 * fVar12) * (float10)fVar13;
  fVar19 = -((float10)fVar3 * (float10)fVar5 - (float10)fVar9 * (float10)fVar11) * (float10)fVar13;
  fVar20 = (float10)fVar2 * (float10)fVar13;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,g_TransformMatrix.m[2].z));
  g_InverseMatrix.m[0].x = (int)ROUND(fVar14);
  fVar14 = (float10)uStack_4c * (float10)uStack_54;
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  g_InverseMatrix.m[0].y = (int)ROUND(fVar15);
  fVar15 = (float10)(fVar11 * fVar7) *
           (float10)(float)-((float10)fVar3 * (float10)fVar7 - (float10)fVar8 * (float10)fVar12);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  dVar21 = crt_math_c_round_FUN_005fe6b0(dVar21);
  crt_math_c_round_FUN_005fe6b0(dVar21);
  g_InverseMatrix.m[0].z = (int)ROUND(fVar16);
  g_InverseMatrix.m[1].x = (int)ROUND(fVar17);
  g_InverseMatrix.m[1].y = (int)ROUND(fVar18);
  g_InverseMatrix.m[1].z = (int)ROUND(fVar19);
  g_InverseMatrix.m[2].x = (int)ROUND(fVar20);
  g_InverseMatrix.m[2].y = (int)ROUND(fVar14);
  g_InverseMatrix.m[2].z = (int)ROUND(fVar15);
  return;
}
