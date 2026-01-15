// Name: shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
// Address: 0049e410
// Address Range: [[0049e410, 0049e4c0]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools * this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStack_12c4 [1200];
  
  bVar7 = 0;
  if (g_UseExternalRenderer != 0) {
    if (0 < g_WindowHeight) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + 4;
        *(uint *)((int)auStack_12c4 + iVar4) =
             *(uint *)((int)g_ScreenBufferArray + iVar4);
        iVar4 = iVar1;
      } while (iVar1 < g_WindowHeight * 4);
    }
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    iVar4 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
    uVar2 = (int)((g_WindowWidth * g_BitsPerPixel + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
    iVar4 = 0;
    if (0 < g_WindowHeight) {
      iVar1 = 0;
      do {
        puVar5 = *(uint **)((int)g_ScreenBufferArray + iVar1);
        puVar6 = *(uint **)((int)auStack_12c4 + iVar1);
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < g_WindowHeight);
    }
    wincore_windll_cpp_unlockFrame_FUN_005b7250(1);
  }
  return;
}
