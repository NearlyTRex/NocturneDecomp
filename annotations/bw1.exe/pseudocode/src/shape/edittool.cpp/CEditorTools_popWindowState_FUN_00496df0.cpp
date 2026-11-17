// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0
// Address: 00496df0
// Address Range: [[00496df0, 00496ed6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_00496df0(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_00496df0(CEditorTools *this_ptr)

{
  void *ptr;
  int iVar1;
  
  if (g_WindowStackCount < 1) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0x913;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CEditorTools::popWindow() called but no window was opened!");
  }
  g_WindowStackCount = g_WindowStackCount + -1;
  iVar1 = g_WindowStackCount * 0x1f8;
  ptr = *(void **)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x1d8);
  if (ptr != (void *)0x0) {
    debugFree(ptr);
    *(uint *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x1d8) = 0;
  }
  engine_mini3d_cpp_setRenderViewport_FUN_00511850
            (*(float *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x20),
             *(float *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x24),
             *(float *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x28),
             *(float *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x2c));
  g_INT_01c4f008 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x10);
  g_INT_01c4f00c = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x14);
  g_ClipRight = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x18);
  g_INT_01c4f014 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x1c);
  g_INT_01c4eff8 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x30);
  g_INT_01c4effc = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x34);
  g_INT_01c4f000 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x38);
  g_INT_01c4f004 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x3c);
  g_ViewportWidth = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x40);
  g_ViewportHeight = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x44);
  return;
}
