// Name: engine_matrix.c_transformWorldToView_FUN_004cd0e0
// Address: 004cd0e0
// Address Range: [[004cd0e0, 004cd1ac]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_matrix_c_transformWorldToView_FUN_004cd0e0(CVector3i *input_coords,CVector3i *output_coords)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __stack_esi engine_matrix_c_transformWorldToView_FUN_004cd0e0(CVector3i *input_coords,CVector3i *output_coords)

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
  
  iVar9 = input_coords->x - _DAT_01c039b8;
  iVar8 = input_coords->z - _DAT_01c039c0;
  iVar7 = input_coords->y - _DAT_01c039bc;
  lVar1 = (longlong)_DAT_01c039ec;
  lVar2 = (longlong)_DAT_01c039f8;
  lVar3 = (longlong)_DAT_01c03a04;
  lVar4 = (longlong)_DAT_01c039f0;
  lVar5 = (longlong)_DAT_01c039fc;
  lVar6 = (longlong)_DAT_01c03a08;
  output_coords->x =
       ((uint)((longlong)_DAT_01c039e8 * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)_DAT_01c039e8 * (longlong)iVar9) >> 0x20) << 0x10) +
       ((uint)((longlong)_DAT_01c039f4 * (longlong)iVar7) >> 0x10 |
       (int)((ulonglong)((longlong)_DAT_01c039f4 * (longlong)iVar7) >> 0x20) << 0x10) +
       ((uint)((longlong)_DAT_01c03a00 * (longlong)iVar8) >> 0x10 |
       (int)((ulonglong)((longlong)_DAT_01c03a00 * (longlong)iVar8) >> 0x20) << 0x10);
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
