// Name: engine_mini3d.cpp_matrixPushAndTransformMatrix_FUN_004f2f20
// Address: 004f2f20
// Address Range: [[004f2f20, 004f3117]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_004f2f20(CMatrix3x3f *rotation,CVector3f *position)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_004f2f20(CMatrix3x3f *rotation,CVector3f *position)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  
  g_PTR_01d0991c = g_PTR_01d0991c + 1;
  if (9 < (int)g_PTR_01d0991c) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\mini3d.cpp";
    g_INT_01d046a4 = 0x437;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Matrix unbalance");
  }
  puVar9 = g_PTR_01d0991c;
  iVar7 = (int)g_PTR_01d0991c * 0x3c;
  iVar8 = (int)g_PTR_01d0991c * 0xf;
  fVar4 = *(float *)(g_PTR_01d09918 + 0x28) - position->y;
  fVar5 = *(float *)(g_PTR_01d09918 + 0x24) - position->x;
  fVar6 = *(float *)(g_PTR_01d09918 + 0x2c) - position->z;
  *(float *)(iVar7 + 0x1d09944) =
       fVar6 * rotation->m[2].x + fVar5 * rotation->m[0].x + fVar4 * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d09948) =
       fVar6 * rotation->m[2].y + fVar4 * rotation->m[1].y + fVar5 * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d0994c) =
       fVar6 * rotation->m[2].z + fVar4 * rotation->m[1].z + fVar5 * rotation->m[0].z;
  *(float *)(iVar7 + 0x1d09950) =
       *(float *)(g_PTR_01d09918 + 0x38) * rotation->m[2].x +
       *(float *)(g_PTR_01d09918 + 0x30) * rotation->m[0].x +
       *(float *)(g_PTR_01d09918 + 0x34) * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d09954) =
       *(float *)(g_PTR_01d09918 + 0x38) * rotation->m[2].y +
       *(float *)(g_PTR_01d09918 + 0x34) * rotation->m[1].y +
       *(float *)(g_PTR_01d09918 + 0x30) * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d09958) =
       *(float *)(g_PTR_01d09918 + 0x38) * rotation->m[2].z +
       *(float *)(g_PTR_01d09918 + 0x34) * rotation->m[1].z +
       *(float *)(g_PTR_01d09918 + 0x30) * rotation->m[0].z;
  (&g_FLOAT_01d09920)[iVar8] =
       rotation->m[2].x * *(float *)(g_PTR_01d09918 + 0x18) +
       rotation->m[0].x * *(float *)g_PTR_01d09918 +
       rotation->m[1].x * *(float *)(g_PTR_01d09918 + 0xc);
  (&g_FLOAT_01d09924)[(int)puVar9 * 0xf] =
       rotation->m[2].x * *(float *)(g_PTR_01d09918 + 0x1c) +
       rotation->m[0].x * *(float *)(g_PTR_01d09918 + 4) +
       rotation->m[1].x * *(float *)(g_PTR_01d09918 + 0x10);
  (&g_FLOAT_01d09928)[(int)puVar9 * 0xf] =
       rotation->m[2].x * *(float *)(g_PTR_01d09918 + 0x20) +
       rotation->m[0].x * *(float *)(g_PTR_01d09918 + 8) +
       rotation->m[1].x * *(float *)(g_PTR_01d09918 + 0x14);
  (&g_FLOAT_01d0992c)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d09918 + 0x18) +
       rotation->m[0].y * *(float *)g_PTR_01d09918 +
       rotation->m[1].y * *(float *)(g_PTR_01d09918 + 0xc);
  (&g_FLOAT_01d09930)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d09918 + 0x1c) +
       rotation->m[1].y * *(float *)(g_PTR_01d09918 + 0x10) +
       rotation->m[0].y * *(float *)(g_PTR_01d09918 + 4);
  (&g_FLOAT_01d09934)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d09918 + 0x20) +
       rotation->m[1].y * *(float *)(g_PTR_01d09918 + 0x14) +
       rotation->m[0].y * *(float *)(g_PTR_01d09918 + 8);
  (&g_FLOAT_01d09938)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *(float *)(g_PTR_01d09918 + 0x18) +
       rotation->m[0].z * *(float *)g_PTR_01d09918 +
       rotation->m[1].z * *(float *)(g_PTR_01d09918 + 0xc);
  (&g_FLOAT_01d0993c)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *(float *)(g_PTR_01d09918 + 0x1c) +
       rotation->m[1].z * *(float *)(g_PTR_01d09918 + 0x10) +
       rotation->m[0].z * *(float *)(g_PTR_01d09918 + 4);
  pfVar1 = (float *)(g_PTR_01d09918 + 8);
  pfVar2 = (float *)(g_PTR_01d09918 + 0x14);
  pfVar3 = (float *)(g_PTR_01d09918 + 0x20);
  g_INT_01d0c398 = 1;
  g_PTR_01d09918 = (byte *)(&g_FLOAT_01d09920 + iVar8);
  (&g_FLOAT_01d09940)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *pfVar3 + rotation->m[1].z * *pfVar2 + rotation->m[0].z * *pfVar1;
  return;
}
