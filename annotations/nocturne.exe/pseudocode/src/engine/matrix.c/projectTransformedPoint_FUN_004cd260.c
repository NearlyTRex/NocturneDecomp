// Name: engine_matrix.c_projectTransformedPoint_FUN_004cd260
// Address: 004cd260
// Address Range: [[004cd260, 004cd2fd]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectTransformedPoint_FUN_004cd260(SProjectedVertex *point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_matrix_c_projectTransformedPoint_FUN_004cd260(SProjectedVertex *point)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar4 = _DAT_01c00c48;
  iVar1 = point->transformed_y;
  iVar2 = point->transformed_z;
  iVar3 = point->transformed_x;
  if (iVar2 < 1) {
    point->screen_x = -0x7ffffff0;
    return;
  }
  bVar6 = iVar2 < iVar3;
  if (iVar3 < -iVar2) {
    bVar6 = bVar6 | 2;
  }
  if (iVar2 < iVar1) {
    bVar6 = bVar6 | 4;
  }
  if (iVar1 < -iVar2) {
    bVar6 = bVar6 | 8;
  }
  if (bVar6 != 0) {
    point->screen_x = bVar6 | 0x80000000;
    return;
  }
  point->inv_z = (int)(0x7fffffff / (longlong)iVar2);
  iVar5 = _DAT_01c00c4c;
  point->screen_x = (int)(((longlong)iVar3 * (longlong)iVar4) / (longlong)iVar2) + _DAT_01c00c50;
  point->screen_y = (int)(((longlong)iVar1 * (longlong)iVar5) / (longlong)iVar2) + _DAT_01c00c54;
  return;
}
