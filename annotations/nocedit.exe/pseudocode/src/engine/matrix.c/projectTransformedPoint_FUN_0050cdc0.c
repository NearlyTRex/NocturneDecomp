// Name: engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
// Address: 0050cdc0
// Address Range: [[0050cdc0, 0050ce5d]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex *point)

#include "nocturne.h"

void __cdecl engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex *point)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar4 = g_ViewportCenterXFixed;
  iVar1 = point->transformed_y;
  iVar2 = point->transformed_z;
  iVar3 = point->transformed_x;
  if (iVar2 < 1) {
    point->screen_x = (int)&DAT_80000010;
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
  iVar5 = g_ViewportCenterYFixed;
  point->screen_x =
       (int)(((longlong)iVar3 * (longlong)iVar4) / (longlong)iVar2) + g_ViewportRightFixed;
  point->screen_y =
       (int)(((longlong)iVar1 * (longlong)iVar5) / (longlong)iVar2) + g_ViewportBottomFixed;
  return;
}
