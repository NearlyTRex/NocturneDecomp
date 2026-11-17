// Name: engine_matrix.c_invertTransformMatrix_FUN_005073d0
// Address: 005073d0
// Address Range: [[005073d0, 005076a9]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_invertTransformMatrix_FUN_005073d0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_005073d0(void)

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
  
  fVar3 = (float)g_INT_01c51d5c * (float)1.52587890625e-05;
  fVar8 = (float)g_INT_01c51d60 * (float)1.52587890625e-05;
  fVar9 = (float)g_INT_01c51d64 * (float)1.52587890625e-05;
  fVar11 = (float)g_INT_01c51d68 * (float)1.52587890625e-05;
  fVar4 = (float)g_INT_01c51d6c * (float)1.52587890625e-05;
  fVar5 = (float)g_INT_01c51d70 * (float)1.52587890625e-05;
  fVar12 = (float)g_INT_01c51d74 * (float)1.52587890625e-05;
  fVar7 = (float)g_INT_01c51d78 * (float)1.52587890625e-05;
  fVar6 = (float)g_INT_01c51d7c * (float)1.52587890625e-05;
  fVar1 = fVar4 * fVar6 - fVar5 * fVar7;
  fVar10 = fVar11 * fVar6 - fVar5 * fVar12;
  g_CMatrix3x3i_01d1dd40.m[0].x = g_INT_01c51d5c;
  g_CMatrix3x3i_01d1dd40.m[0].y = g_INT_01c51d60;
  g_CMatrix3x3i_01d1dd40.m[0].z = g_INT_01c51d64;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  g_CMatrix3x3i_01d1dd40.m[1].x = g_INT_01c51d68;
  g_CMatrix3x3i_01d1dd40.m[1].y = g_INT_01c51d6c;
  g_CMatrix3x3i_01d1dd40.m[1].z = g_INT_01c51d70;
  g_CMatrix3x3i_01d1dd40.m[2].x = g_INT_01c51d74;
  g_CMatrix3x3i_01d1dd40.m[2].y = g_INT_01c51d78;
  g_CMatrix3x3i_01d1dd40.m[2].z = g_INT_01c51d7c;
  fVar13 = (float)65536 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  dVar14 = round((double)(fVar1 * fVar13));
  g_INT_01d1dd18 = (int)ROUND(dVar14);
  dVar14 = round((double)(-(fVar8 * fVar6 - fVar9 * fVar7) * fVar13));
  g_INT_01d1dd1c = (int)ROUND(dVar14);
  dVar14 = round((double)((fVar8 * fVar5 - fVar9 * fVar4) * fVar13));
  dVar15 = round((double)(-fVar10 * fVar13));
  dVar16 = round((double)((fVar3 * fVar6 - fVar9 * fVar12) * fVar13));
  dVar17 = round((double)(-(fVar3 * fVar5 - fVar9 * fVar11) * fVar13));
  dVar18 = round((double)(fVar2 * fVar13));
  dVar19 = round((double)(uStack_54 * 7.389215e-39));
  dVar20 = round((double)(-(fVar3 * fVar7 - fVar8 * fVar12) * 7.389243e-39))
  ;
  g_INT_01d1dd20 = (int)ROUND(dVar14);
  g_INT_01d1dd24 = (int)ROUND(dVar15);
  g_INT_01d1dd28 = (int)ROUND(dVar16);
  g_INT_01d1dd2c = (int)ROUND(dVar17);
  g_INT_01d1dd30 = (int)ROUND(dVar18);
  g_INT_01d1dd34 = (int)ROUND(dVar19);
  g_INT_01d1dd38 = (int)ROUND(dVar20);
  return;
}
