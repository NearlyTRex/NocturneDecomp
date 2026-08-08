// Name: engine_matrix.c_invertTransformMatrix_FUN_004ccae0
// Address: 004ccae0
// Address Range: [[004ccae0, 004ccdb9]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004ccae0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004ccae0(void)

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
  _DAT_01cc5140 = g_TransformMatrix.m[0].x;
  _DAT_01cc5144 = g_TransformMatrix.m[0].y;
  _DAT_01cc5148 = g_TransformMatrix.m[0].z;
  fVar2 = fVar11 * fVar7 - fVar4 * fVar12;
  _DAT_01cc514c = g_TransformMatrix.m[1].x;
  _DAT_01cc5150 = g_TransformMatrix.m[1].y;
  _DAT_01cc5154 = g_TransformMatrix.m[1].z;
  _DAT_01cc5158 = g_TransformMatrix.m[2].x;
  _DAT_01cc515c = g_TransformMatrix.m[2].y;
  _DAT_01cc5160 = g_TransformMatrix.m[2].z;
  fVar13 = (float)65536 / ((fVar3 * fVar1 - fVar8 * fVar10) + fVar9 * fVar2);
  dVar14 = round((double)(fVar1 * fVar13));
  _DAT_01cc5118 = (int)ROUND(dVar14);
  dVar14 = round((double)(-(fVar8 * fVar6 - fVar9 * fVar7) * fVar13));
  _DAT_01cc511c = (int)ROUND(dVar14);
  dVar14 = round((double)((fVar8 * fVar5 - fVar9 * fVar4) * fVar13));
  dVar15 = round((double)(-fVar10 * fVar13));
  dVar16 = round((double)((fVar3 * fVar6 - fVar9 * fVar12) * fVar13));
  dVar17 = round((double)(-(fVar3 * fVar5 - fVar9 * fVar11) * fVar13));
  dVar18 = round((double)(fVar2 * fVar13));
  dVar19 = round((double)(uStack_54 * 7.053105e-39));
  dVar20 = round((double)(-(fVar3 * fVar7 - fVar8 * fVar12) * 7.053133e-39))
  ;
  _DAT_01cc5120 = (int)ROUND(dVar14);
  _DAT_01cc5124 = (int)ROUND(dVar15);
  _DAT_01cc5128 = (int)ROUND(dVar16);
  _DAT_01cc512c = (int)ROUND(dVar17);
  _DAT_01cc5130 = (int)ROUND(dVar18);
  _DAT_01cc5134 = (int)ROUND(dVar19);
  _DAT_01cc5138 = (int)ROUND(dVar20);
  return;
}
