// Name: shape_edittool.cpp_restoreScreen_FUN_0047ccb0
// Address: 0047ccb0
// Address Range: [[0047ccb0, 0047cd75]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_restoreScreen_FUN_0047ccb0(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_restoreScreen_FUN_0047ccb0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint local_12c8 [1200];
  
  bVar7 = 0;
  if (g_INT_01c6cee8 != 0) {
    if (0 < g_INT_005fba1c) {
      iVar2 = 0;
      do {
        iVar1 = iVar2 + 4;
        *(uint *)((int)local_12c8 + iVar2) =
             *(uint *)((int)g_ARRAY_PTR_01c5faec + iVar2);
        iVar2 = iVar1;
      } while (iVar1 < g_INT_005fba1c * 4);
    }
    iVar2 = engine_special_cpp_lockFrame_FUN_00565820();
    if (iVar2 != 0) {
      iVar2 = g_INT_005fba18 * g_INT_005fba20 >> 0x1f;
      uVar3 = (int)((g_INT_005fba18 * g_INT_005fba20 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
      iVar2 = 0;
      if (0 < g_INT_005fba1c) {
        iVar1 = 0;
        do {
          if ((*(uint **)((int)g_ARRAY_PTR_01c5faec + iVar1) != (uint *)0x0) &&
             (*(uint **)((int)local_12c8 + iVar1) != (uint *)0x0)) {
            puVar5 = *(uint **)((int)local_12c8 + iVar1);
            puVar6 = *(uint **)((int)g_ARRAY_PTR_01c5faec + iVar1);
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(byte *)puVar6 = *(byte *)puVar5;
              puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
              puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
            }
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 4;
        } while (iVar2 < g_INT_005fba1c);
      }
      engine_special_cpp_unlockFrame_FUN_00565870(1);
    }
  }
  return;
}
