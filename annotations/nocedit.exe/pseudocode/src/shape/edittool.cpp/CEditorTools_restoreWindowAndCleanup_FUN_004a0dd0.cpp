// Name: shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
// Address: 004a0dd0
// Address Range: [[004a0dd0, 004a0e90]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  CEditorTools *in_stack_00000010;
  uint uStack_12c0;
  
  bVar7 = 0;
  shape_edittool_cpp_paintWindowBackground_FUN_0049e590();
  if (g_UseExternalRenderer != 0) {
    if (0 < g_WindowHeight) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + 4;
        *(uint *)((int)&uStack_12c0 + iVar4) =
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
        puVar5 = *(uint **)(&stack0xffffed44 + iVar1);
        puVar6 = *(uint **)((int)g_ScreenBufferArray + iVar1);
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
  uStack_12c0 = 0x4a0e86;
  shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(in_stack_00000010);
  return;
}
