// Name: engine_mini3d.cpp_matrixPushAndTransformMatrix_FUN_00511d50
// Address: 00511d50
// Address Range: [[00511d50, 00511f47]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_00511d50(CMatrix3x3f *rotation,CVector3f *position)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPushAndTransformMatrix_FUN_00511d50(CMatrix3x3f *rotation,CVector3f *position)

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
  
  g_PTR_01d22580 = g_PTR_01d22580 + 1;
  if (9 < (int)g_PTR_01d22580) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\mini3d.cpp";
    g_INT_01d1d404 = 0x447;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Matrix unbalance");
  }
  puVar9 = g_PTR_01d22580;
  iVar7 = (int)g_PTR_01d22580 * 0x3c;
  iVar8 = (int)g_PTR_01d22580 * 0xf;
  fVar4 = *(float *)(g_PTR_01d2257c + 0x28) - position->y;
  fVar5 = *(float *)(g_PTR_01d2257c + 0x24) - position->x;
  fVar6 = *(float *)(g_PTR_01d2257c + 0x2c) - position->z;
  *(float *)(iVar7 + 0x1d225a8) =
       fVar6 * rotation->m[2].x + fVar5 * rotation->m[0].x + fVar4 * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d225ac) =
       fVar6 * rotation->m[2].y + fVar4 * rotation->m[1].y + fVar5 * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d225b0) =
       fVar6 * rotation->m[2].z + fVar4 * rotation->m[1].z + fVar5 * rotation->m[0].z;
  *(float *)(iVar7 + 0x1d225b4) =
       *(float *)(g_PTR_01d2257c + 0x38) * rotation->m[2].x +
       *(float *)(g_PTR_01d2257c + 0x30) * rotation->m[0].x +
       *(float *)(g_PTR_01d2257c + 0x34) * rotation->m[1].x;
  *(float *)(iVar7 + 0x1d225b8) =
       *(float *)(g_PTR_01d2257c + 0x38) * rotation->m[2].y +
       *(float *)(g_PTR_01d2257c + 0x34) * rotation->m[1].y +
       *(float *)(g_PTR_01d2257c + 0x30) * rotation->m[0].y;
  *(float *)(iVar7 + 0x1d225bc) =
       *(float *)(g_PTR_01d2257c + 0x38) * rotation->m[2].z +
       *(float *)(g_PTR_01d2257c + 0x34) * rotation->m[1].z +
       *(float *)(g_PTR_01d2257c + 0x30) * rotation->m[0].z;
  (&g_FLOAT_01d22584)[iVar8] =
       rotation->m[2].x * *(float *)(g_PTR_01d2257c + 0x18) +
       rotation->m[0].x * *(float *)g_PTR_01d2257c +
       rotation->m[1].x * *(float *)(g_PTR_01d2257c + 0xc);
  (&g_FLOAT_01d22588)[(int)puVar9 * 0xf] =
       rotation->m[2].x * *(float *)(g_PTR_01d2257c + 0x1c) +
       rotation->m[0].x * *(float *)(g_PTR_01d2257c + 4) +
       rotation->m[1].x * *(float *)(g_PTR_01d2257c + 0x10);
  (&g_FLOAT_01d2258c)[(int)puVar9 * 0xf] =
       rotation->m[2].x * *(float *)(g_PTR_01d2257c + 0x20) +
       rotation->m[0].x * *(float *)(g_PTR_01d2257c + 8) +
       rotation->m[1].x * *(float *)(g_PTR_01d2257c + 0x14);
  (&g_FLOAT_01d22590)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d2257c + 0x18) +
       rotation->m[0].y * *(float *)g_PTR_01d2257c +
       rotation->m[1].y * *(float *)(g_PTR_01d2257c + 0xc);
  (&g_FLOAT_01d22594)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d2257c + 0x1c) +
       rotation->m[1].y * *(float *)(g_PTR_01d2257c + 0x10) +
       rotation->m[0].y * *(float *)(g_PTR_01d2257c + 4);
  (&g_FLOAT_01d22598)[(int)puVar9 * 0xf] =
       rotation->m[2].y * *(float *)(g_PTR_01d2257c + 0x20) +
       rotation->m[1].y * *(float *)(g_PTR_01d2257c + 0x14) +
       rotation->m[0].y * *(float *)(g_PTR_01d2257c + 8);
  (&g_FLOAT_01d2259c)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *(float *)(g_PTR_01d2257c + 0x18) +
       rotation->m[0].z * *(float *)g_PTR_01d2257c +
       rotation->m[1].z * *(float *)(g_PTR_01d2257c + 0xc);
  (&g_FLOAT_01d225a0)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *(float *)(g_PTR_01d2257c + 0x1c) +
       rotation->m[1].z * *(float *)(g_PTR_01d2257c + 0x10) +
       rotation->m[0].z * *(float *)(g_PTR_01d2257c + 4);
  pfVar1 = (float *)(g_PTR_01d2257c + 8);
  pfVar2 = (float *)(g_PTR_01d2257c + 0x14);
  pfVar3 = (float *)(g_PTR_01d2257c + 0x20);
  g_INT_01d24ffc = 1;
  g_PTR_01d2257c = (byte *)(&g_FLOAT_01d22584 + iVar8);
  (&g_FLOAT_01d225a4)[(int)puVar9 * 0xf] =
       rotation->m[2].z * *pfVar3 + rotation->m[1].z * *pfVar2 + rotation->m[0].z * *pfVar1;
  return;
}
