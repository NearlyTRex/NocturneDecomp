// Name: core_zombie.cpp_FUN_005fce40
// Address: 005fce40
// Address Range: [[005fce40, 005fcf77]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005fce40()

#include "nocturne.h"

void core_zombie_cpp_FUN_005fce40(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = g_RasterizerEdgeCount;
  iVar5 = *(int *)(in_stack_00000008 + 0x14) >> 0x10;
  iVar3 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  if (iVar3 != iVar5) {
    iVar4 = iVar3;
    iVar7 = in_stack_00000004;
    if (*(int *)(in_stack_00000008 + 0x14) < *(int *)(in_stack_00000004 + 0x14)) {
      iVar4 = iVar5;
      iVar5 = iVar3;
      iVar7 = in_stack_00000008;
      in_stack_00000008 = in_stack_00000004;
    }
    g_RasterizerEdgeArray[g_RasterizerEdgeCount].y_start = iVar4;
    iVar3 = g_RasterizerMinY;
    g_RasterizerEdgeArray[iVar2].y_end = iVar5;
    if (iVar4 < iVar3) {
      g_RasterizerMinY = iVar4;
    }
    if (g_RasterizerMaxY < iVar5) {
      g_RasterizerMaxY = iVar5;
    }
    g_RasterizerEdgeArray[iVar2].x_current = *(int *)(iVar7 + 0x10);
    g_RasterizerEdgeArray[iVar2].z_current = *(int *)(iVar7 + 8) << 8;
    g_RasterizerEdgeArray[iVar2].light_current = *(int *)(iVar7 + 0x20);
    uVar6 = *(int *)(in_stack_00000008 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 *
            (longlong)(*(int *)(in_stack_00000008 + 0x10) - *(int *)(iVar7 + 0x10));
    g_RasterizerEdgeArray[iVar2].x_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 *
            (longlong)((*(int *)(in_stack_00000008 + 8) - *(int *)(iVar7 + 8)) * 0x100);
    g_RasterizerEdgeArray[iVar2].z_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 *
            (longlong)(*(int *)(in_stack_00000008 + 0x20) - *(int *)(iVar7 + 0x20));
    g_RasterizerEdgeArray[iVar2].light_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)*(uint *)(iVar7 + 0x14) ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)g_RasterizerEdgeArray[iVar2].x_delta;
    iVar5 = g_RasterizerEdgeArray[iVar2].z_delta;
    g_RasterizerEdgeArray[iVar2].x_current =
         g_RasterizerEdgeArray[iVar2].x_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)iVar5;
    g_RasterizerEdgeArray[iVar2].z_current =
         g_RasterizerEdgeArray[iVar2].z_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)g_RasterizerEdgeArray[iVar2].light_delta;
    g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
    g_RasterizerEdgeArray[iVar2].light_current =
         g_RasterizerEdgeArray[iVar2].light_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
