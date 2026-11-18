// Name: engine_mini3d.cpp_matrixPushAndTransformMatrix_FUN_004ed520
// Address: 004ed520
// Address Range: [[004ed520, 004ed717]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_004ed520(CMatrix3x3f *rotation,CVector3f *position)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_004ed520(CMatrix3x3f *rotation,CVector3f *position)

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
  
  g_PTR_01d76d00 = g_PTR_01d76d00 + 1;
  if (9 < (int)g_PTR_01d76d00) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\mini3d.cpp";
    g_INT_01d71de4 = 0x447;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance");
  }
  puVar9 = g_PTR_01d76d00;
  iVar7 = (int)g_PTR_01d76d00 * 0x3c;
  iVar8 = (int)g_PTR_01d76d00 * 0xf;
  fVar4 = *(float *)(g_PTR_01d76cfc + 0x28) - position->y;
  fVar5 = *(float *)(g_PTR_01d76cfc + 0x24) - position->x;
  fVar6 = *(float *)(g_PTR_01d76cfc + 0x2c) - position->z;
  *(float *)(iVar7 + 0x1d76d28) =
       fVar6 * rotation->m[2].x + fVar5 * rotation->m[0].x + fVar4 * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d76d2c) =
       fVar6 * rotation->m[2].y + fVar4 * rotation->m[1].y + fVar5 * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d76d30) =
       fVar6 * rotation->m[2].z + fVar4 * rotation->m[1].z + fVar5 * rotation->m[0].z;
  *(float *)(iVar7 + 0x1d76d34) =
       *(float *)(g_PTR_01d76cfc + 0x38) * rotation->m[2].x +
       *(float *)(g_PTR_01d76cfc + 0x30) * rotation->m[0].x +
       *(float *)(g_PTR_01d76cfc + 0x34) * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d76d38) =
       *(float *)(g_PTR_01d76cfc + 0x38) * rotation->m[2].y +
       *(float *)(g_PTR_01d76cfc + 0x34) * rotation->m[1].y +
       *(float *)(g_PTR_01d76cfc + 0x30) * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d76d3c) =
       *(float *)(g_PTR_01d76cfc + 0x38) * rotation->m[2].z +
       *(float *)(g_PTR_01d76cfc + 0x34) * rotation->m[1].z +
       *(float *)(g_PTR_01d76cfc + 0x30) * rotation->m[0].z;
  (&g_FLOAT_01d76d04)[iVar8] =
       rotation->m[2].x * *(float *)(g_PTR_01d76cfc + 0x18) +
       rotation->m[0].x * *(float *)g_PTR_01d76cfc +
       rotation->m[1].x * *(float *)(g_PTR_01d76cfc + 0xc);
  (&g_FLOAT_01d76d08)[(int)puVar9 * 0xf] =
       rotation->m[2].x * *(float *)(g_PTR_01d76cfc + 0x1c) +
       rotation->m[0].x * *(float *)(g_PTR_01d76cfc + 4) +
       rotation->m[1].x * *(float *)(g_PTR_01d76cfc + 0x10);
  (&g_FLOAT_01d76d0c)[(int)puVar9 * 0xf] =
       rotation->m[2].x * *(float *)(g_PTR_01d76cfc + 0x20) +
       rotation->m[0].x * *(float *)(g_PTR_01d76cfc + 8) +
       rotation->m[1].x * *(float *)(g_PTR_01d76cfc + 0x14);
  (&g_FLOAT_01d76d10)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d76cfc + 0x18) +
       rotation->m[0].y * *(float *)g_PTR_01d76cfc +
       rotation->m[1].y * *(float *)(g_PTR_01d76cfc + 0xc);
  (&g_FLOAT_01d76d14)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d76cfc + 0x1c) +
       rotation->m[1].y * *(float *)(g_PTR_01d76cfc + 0x10) +
       rotation->m[0].y * *(float *)(g_PTR_01d76cfc + 4);
  (&g_FLOAT_01d76d18)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d76cfc + 0x20) +
       rotation->m[1].y * *(float *)(g_PTR_01d76cfc + 0x14) +
       rotation->m[0].y * *(float *)(g_PTR_01d76cfc + 8);
  (&g_FLOAT_01d76d1c)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *(float *)(g_PTR_01d76cfc + 0x18) +
       rotation->m[0].z * *(float *)g_PTR_01d76cfc +
       rotation->m[1].z * *(float *)(g_PTR_01d76cfc + 0xc);
  (&g_FLOAT_01d76d20)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *(float *)(g_PTR_01d76cfc + 0x1c) +
       rotation->m[1].z * *(float *)(g_PTR_01d76cfc + 0x10) +
       rotation->m[0].z * *(float *)(g_PTR_01d76cfc + 4);
  pfVar1 = (float *)(g_PTR_01d76cfc + 8);
  pfVar2 = (float *)(g_PTR_01d76cfc + 0x14);
  pfVar3 = (float *)(g_PTR_01d76cfc + 0x20);
  g_INT_01d7977c = 1;
  g_PTR_01d76cfc = (byte *)(&g_FLOAT_01d76d04 + iVar8);
  (&g_FLOAT_01d76d24)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *pfVar3 + rotation->m[1].z * *pfVar2 + rotation->m[0].z * *pfVar1;
  return;
}
