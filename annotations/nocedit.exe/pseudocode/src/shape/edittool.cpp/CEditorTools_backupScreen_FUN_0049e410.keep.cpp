// Name: shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
// Address: 0049e410
// MANUAL RECONSTRUCTION
// Address Range: [[0049e410, 0049e4c0]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_backupScreen_FUN_0049e410(CEditorTools *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  void *auStack_12c4 [1200];
  byte bVar7;

  bVar7 = 0;
  if (g_UseExternalRenderer != 0) {
    if (0 < g_WindowHeight) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + 4;
        auStack_12c4[iVar4 / 4] = g_ScreenBufferArray[iVar4 / 4];
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
        puVar5 = (uint *)g_ScreenBufferArray[iVar1 / 4];
        puVar6 = (uint *)auStack_12c4[iVar1 / 4];
        memcpy(puVar6,puVar5,uVar2);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < g_WindowHeight);
    }
    wincore_windll_cpp_unlockFrame_FUN_005b7250(1);
  }
  return;
}
