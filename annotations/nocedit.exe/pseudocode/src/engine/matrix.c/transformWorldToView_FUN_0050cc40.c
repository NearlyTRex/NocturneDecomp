// Name: engine_matrix.c_transformWorldToView_FUN_0050cc40
// Address: 0050cc40
// Address Range: [[0050cc40, 0050cd0c]]
// Convention: __stack_esi
// Signature: void __stack_esi engine_matrix_c_transformWorldToView_FUN_0050cc40(CVector3i *input_coords,CVector3i *output_coords)

#include "nocturne.h"

void __stack_esi engine_matrix_c_transformWorldToView_FUN_0050cc40(CVector3i *input_coords,CVector3i *output_coords)

{
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar1;
  longlong lVar6;
  longlong lVar4;
  longlong lVar5;
  longlong lVar2;
  longlong lVar3;
  
  iVar9 = input_coords->x - g_RelativeX;
  iVar8 = input_coords->z - g_RelativeZ;
  iVar7 = input_coords->y - g_RelativeY;
  lVar1 = (longlong)g_TransformMatrix.m[0].y;
  lVar2 = (longlong)g_TransformMatrix.m[1].y;
  lVar3 = (longlong)g_TransformMatrix.m[2].y;
  lVar4 = (longlong)g_TransformMatrix.m[0].z;
  lVar5 = (longlong)g_TransformMatrix.m[1].z;
  lVar6 = (longlong)g_TransformMatrix.m[2].z;
  output_coords->x =
       ((uint)((longlong)g_TransformMatrix.m[0].x * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_TransformMatrix.m[0].x * (longlong)iVar9) >> 0x20) << 0x10) +
       ((uint)((longlong)g_TransformMatrix.m[1].x * (longlong)iVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_TransformMatrix.m[1].x * (longlong)iVar7) >> 0x20) << 0x10) +
       ((uint)((longlong)g_TransformMatrix.m[2].x * (longlong)iVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_TransformMatrix.m[2].x * (longlong)iVar8) >> 0x20) << 0x10);
  output_coords->y =
       ((uint)(lVar1 * iVar9) >> 0x10 | (int)((ulonglong)(lVar1 * iVar9) >> 0x20) << 0x10) +
       ((uint)(lVar2 * iVar7) >> 0x10 | (int)((ulonglong)(lVar2 * iVar7) >> 0x20) << 0x10) +
       ((uint)(lVar3 * iVar8) >> 0x10 | (int)((ulonglong)(lVar3 * iVar8) >> 0x20) << 0x10);
  output_coords->z =
       ((uint)(lVar4 * iVar9) >> 0x10 | (int)((ulonglong)(lVar4 * iVar9) >> 0x20) << 0x10) +
       ((uint)(lVar5 * iVar7) >> 0x10 | (int)((ulonglong)(lVar5 * iVar7) >> 0x20) << 0x10) +
       ((uint)(lVar6 * iVar8) >> 0x10 | (int)((ulonglong)(lVar6 * iVar8) >> 0x20) << 0x10);
  return;
}
