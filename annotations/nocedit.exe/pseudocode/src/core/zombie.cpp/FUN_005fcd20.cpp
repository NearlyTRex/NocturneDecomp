// Name: core_zombie.cpp_FUN_005fcd20
// Address: 005fcd20
// Address Range: [[005fcd20, 005fce3b]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_FUN_005fcd20(void)

#include "nocturne.h"

void __cdecl core_zombie_cpp_FUN_005fcd20(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = g_RasterizerEdgeCount;
  iVar6 = *(int *)(in_stack_00000008 + 0x14) >> 0x10;
  iVar3 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  if (iVar3 != iVar6) {
    iVar4 = iVar3;
    iVar7 = in_stack_00000004;
    if (*(int *)(in_stack_00000008 + 0x14) < *(int *)(in_stack_00000004 + 0x14)) {
      iVar4 = iVar6;
      iVar6 = iVar3;
      iVar7 = in_stack_00000008;
      in_stack_00000008 = in_stack_00000004;
    }
    g_RasterizerEdgeArray[g_RasterizerEdgeCount].base.y_min = iVar4;
    iVar3 = g_RasterizerMinY;
    g_RasterizerEdgeArray[iVar2].base.y_max = iVar6;
    if (iVar4 < iVar3) {
      g_RasterizerMinY = iVar4;
    }
    if (g_RasterizerMaxY < iVar6) {
      g_RasterizerMaxY = iVar6;
    }
    uVar5 = *(int *)(in_stack_00000008 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = *(uint *)(iVar7 + 0x14) & 0xffff ^ 0xffff;
    lVar1 = (longlong)iVar6 *
            (longlong)(*(int *)(in_stack_00000008 + 0x10) - *(int *)(iVar7 + 0x10));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_RasterizerEdgeArray[iVar2].base.x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_RasterizerEdgeArray[iVar2].base.x_current =
         *(int *)(iVar7 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar6 *
            (longlong)((*(int *)(in_stack_00000008 + 8) - *(int *)(iVar7 + 8)) * 0x100);
    g_RasterizerEdgeArray[iVar2].base.w_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar8 * (longlong)g_RasterizerEdgeArray[iVar2].base.w_gradient;
    g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
    g_RasterizerEdgeArray[iVar2].base.w_current =
         (*(int *)(iVar7 + 8) * 0x100 - g_RasterizerDepthBias) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}
