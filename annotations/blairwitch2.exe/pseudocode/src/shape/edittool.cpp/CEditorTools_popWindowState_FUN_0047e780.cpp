// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780
// Address: 0047e780
// Address Range: [[0047e780, 0047e866]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools *this_ptr)

{
  void *ptr;
  int iVar1;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2229;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CEditorTools::popWindow() called but no window was opened!");
  }
  g_WindowStackCount = g_WindowStackCount + -1;
  iVar1 = g_WindowStackCount * 0x1f8;
  ptr = *(void **)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1d8);
  if (ptr != (void *)0x0) {
    debugFree(ptr);
    *(uint *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1d8) = 0;
  }
  engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0
            (*(float *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x20),
             *(float *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x24),
             *(float *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x28),
             *(float *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x2c));
  g_INT_01c35e48 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x10);
  g_INT_01c35e4c = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x14);
  g_ClipRight = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x18);
  g_INT_01c35e54 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1c);
  g_INT_01c35e38 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x30);
  g_INT_01c35e3c = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x34);
  g_INT_01c35e40 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x38);
  g_INT_01c35e44 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x3c);
  g_ViewportWidth = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x40);
  g_ViewportHeight = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x44);
  return;
}
