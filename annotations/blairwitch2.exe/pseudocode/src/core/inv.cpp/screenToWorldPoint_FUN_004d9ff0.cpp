// Name: core_inv.cpp_screenToWorldPoint_FUN_004d9ff0
// Address: 004d9ff0
// Address Range: [[004d9ff0, 004da120]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_inv_cpp_screenToWorldPoint_FUN_004d9ff0(float screen_x,float screen_y,CVector3i *out_point)

#include "nocturne.h"

CVector3i * __stack2_esi core_inv_cpp_screenToWorldPoint_FUN_004d9ff0(float screen_x,float screen_y,CVector3i *out_point)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  int aiStack_100c [1019];
  int local_1c;
  int local_14;
  
  iVar7 = g_INT_01c35e40;
  iVar6 = g_INT_01c35e38;
  bVar9 = 0;
  dVar11 = (double)screen_y * 65536;
  dVar10 = round((double)screen_x * 65536);
  local_14 = (int)ROUND(dVar10);
  dVar11 = round(dVar11);
  local_14 = (int)ROUND(dVar11);
  uVar1 = (ulonglong)((int)ROUND(dVar10) - iVar7);
  iVar6 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)iVar6);
  uVar1 = (ulonglong)((int)ROUND(dVar11) - g_INT_01c35e44);
  iVar7 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)g_INT_01c35e3c);
  lVar2 = (longlong)g_INT_01d04fb8 * (longlong)iVar6;
  lVar3 = (longlong)g_INT_01d04fc4 * (longlong)iVar7;
  lVar4 = (longlong)g_INT_01d04fc0 * (longlong)iVar6;
  lVar5 = (longlong)g_INT_01d04fcc * (longlong)iVar7;
  local_1c = g_RelativeZ +
             ((uint)((longlong)g_INT_01d04fd8 * 0x10000) >> 0x10 |
             (int)((ulonglong)((longlong)g_INT_01d04fd8 * 0x10000) >> 0x20) << 0x10) +
             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
             ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  puVar8 = (uint *)((int)out_point + (uint)bVar9 * -8 + 4);
  out_point->x = g_RelativeX +
                 ((uint)((longlong)g_INT_01d04fd0 * 0x10000) >> 0x10 |
                 (int)((ulonglong)((longlong)g_INT_01d04fd0 * 0x10000) >> 0x20) << 0x10) +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  *puVar8 = *(uint *)(&stack0xffffffe0 + (uint)bVar9 * -8);
  puVar8[(uint)bVar9 * -2 + 1] =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  return out_point;
}
