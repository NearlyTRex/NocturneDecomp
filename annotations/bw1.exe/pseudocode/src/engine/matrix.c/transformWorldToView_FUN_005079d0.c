// Name: engine_matrix.c_transformWorldToView_FUN_005079d0
// Address: 005079d0
// Address Range: [[005079d0, 00507a9c]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_matrix_c_transformWorldToView_FUN_005079d0(CVector3i *input_coords,CVector3i *output_coords)

#include "nocturne.h"

CVector3i * __stack_esi engine_matrix_c_transformWorldToView_FUN_005079d0(CVector3i *input_coords,CVector3i *output_coords)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = input_coords->x - g_INT_01c51d2c;
  iVar8 = input_coords->z - g_INT_01c51d34;
  iVar7 = input_coords->y - g_INT_01c51d30;
  lVar1 = (longlong)g_INT_01c51d60;
  lVar2 = (longlong)g_INT_01c51d6c;
  lVar3 = (longlong)g_INT_01c51d78;
  lVar4 = (longlong)g_INT_01c51d64;
  lVar5 = (longlong)g_INT_01c51d70;
  lVar6 = (longlong)g_INT_01c51d7c;
  output_coords->x =
       ((uint)((longlong)g_INT_01c51d5c * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_01c51d5c * (longlong)iVar9) >> 0x20) << 0x10) +
       ((uint)((longlong)g_INT_01c51d68 * (longlong)iVar7) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_01c51d68 * (longlong)iVar7) >> 0x20) << 0x10) +
       ((uint)((longlong)g_INT_01c51d74 * (longlong)iVar8) >> 0x10 |
       (int)((ulonglong)((longlong)g_INT_01c51d74 * (longlong)iVar8) >> 0x20) << 0x10);
  output_coords->y =
       ((uint)(lVar1 * iVar9) >> 0x10 | (int)((ulonglong)(lVar1 * iVar9) >> 0x20) << 0x10) +
       ((uint)(lVar2 * iVar7) >> 0x10 | (int)((ulonglong)(lVar2 * iVar7) >> 0x20) << 0x10) +
       ((uint)(lVar3 * iVar8) >> 0x10 | (int)((ulonglong)(lVar3 * iVar8) >> 0x20) << 0x10);
  output_coords->z =
       ((uint)(lVar4 * iVar9) >> 0x10 | (int)((ulonglong)(lVar4 * iVar9) >> 0x20) << 0x10) +
       ((uint)(lVar5 * iVar7) >> 0x10 | (int)((ulonglong)(lVar5 * iVar7) >> 0x20) << 0x10) +
       ((uint)(lVar6 * iVar8) >> 0x10 | (int)((ulonglong)(lVar6 * iVar8) >> 0x20) << 0x10);
  return output_coords;
}
