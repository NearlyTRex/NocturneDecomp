// Name: core_zombie.cpp_FUN_005fce40
// Address: 005fce40
// Address Range: [[005fce40, 005fcf77]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_FUN_005fce40(void)

#include "nocturne.h"

void __cdecl core_zombie_cpp_FUN_005fce40(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar3 = g_RasterizerEdgeCount;
  iVar6 = *(int *)(in_stack_00000008 + 0x14) >> 0x10;
  iVar4 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  if (iVar4 != iVar6) {
    iVar5 = iVar4;
    iVar8 = in_stack_00000004;
    if (*(int *)(in_stack_00000008 + 0x14) < *(int *)(in_stack_00000004 + 0x14)) {
      iVar5 = iVar6;
      iVar6 = iVar4;
      iVar8 = in_stack_00000008;
      in_stack_00000008 = in_stack_00000004;
    }
    g_RasterizerEdgeArray[g_RasterizerEdgeCount].base.y_min = iVar5;
    iVar4 = g_RasterizerMinY;
    g_RasterizerEdgeArray[iVar3].base.y_max = iVar6;
    if (iVar5 < iVar4) {
      g_RasterizerMinY = iVar5;
    }
    if (g_RasterizerMaxY < iVar6) {
      g_RasterizerMaxY = iVar6;
    }
    g_RasterizerEdgeArray[iVar3].base.x_current = *(int *)(iVar8 + 0x10);
    g_RasterizerEdgeArray[iVar3].base.w_current = *(int *)(iVar8 + 8) << 8;
    g_RasterizerEdgeArray[iVar3].base.z_current = *(int *)(iVar8 + 0x20);
    uVar7 = *(int *)(in_stack_00000008 + 0x14) - *(int *)(iVar8 + 0x14);
    if (uVar7 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar7);
    }
    lVar2 = (longlong)iVar6 *
            (longlong)(*(int *)(in_stack_00000008 + 0x10) - *(int *)(iVar8 + 0x10));
    g_RasterizerEdgeArray[iVar3].base.x_gradient =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iVar6 *
            (longlong)((*(int *)(in_stack_00000008 + 8) - *(int *)(iVar8 + 8)) * 0x100);
    g_RasterizerEdgeArray[iVar3].base.w_gradient =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iVar6 *
            (longlong)(*(int *)(in_stack_00000008 + 0x20) - *(int *)(iVar8 + 0x20));
    g_RasterizerEdgeArray[iVar3].base.z_gradient =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    uVar7 = (uint)(ushort)((ushort)*(uint *)(iVar8 + 0x14) ^ 0xffff);
    lVar2 = (longlong)(int)uVar7 * (longlong)g_RasterizerEdgeArray[iVar3].base.x_gradient;
    iVar6 = g_RasterizerEdgeArray[iVar3].base.w_gradient;
    g_RasterizerEdgeArray[iVar3].base.x_current =
         g_RasterizerEdgeArray[iVar3].base.x_current +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)(int)uVar7 * (longlong)iVar6;
    piVar1 = &g_RasterizerEdgeArray[iVar3].base.w_current;
    *piVar1 = *piVar1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar2 = (longlong)(int)uVar7 * (longlong)g_RasterizerEdgeArray[iVar3].base.z_gradient;
    g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
    g_RasterizerEdgeArray[iVar3].base.z_current =
         g_RasterizerEdgeArray[iVar3].base.z_current +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  return;
}
