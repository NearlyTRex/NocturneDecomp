// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
// Address: 004a0ea0
// MANUAL RECONSTRUCTION
// Address Range: [[004a0ea0, 004a0f79]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools *this_ptr)

{
  int iVar1;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2134;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::popWindow() called but no window was opened!");
  }
  iVar1 = g_WindowStackCount + -1;
  g_WindowStackCount = iVar1;
  if (g_WindowStack[iVar1].screen_backup_buffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_WindowStack[iVar1].screen_backup_buffer,"..\\shape\\edittool.cpp",2145);
    g_WindowStack[iVar1].screen_backup_buffer = (void *)0x0;
  }
  g_ClipLeft = g_WindowStack[iVar1].saved_clip.left;
  g_ClipTop = g_WindowStack[iVar1].saved_clip.top;
  g_ClipRight = g_WindowStack[iVar1].saved_clip.right;
  g_ClipBottom = g_WindowStack[iVar1].saved_clip.bottom;
  g_Projection = g_WindowStack[iVar1].saved_projection;
  g_ViewportWidth = g_WindowStack[iVar1].saved_viewport_width;
  g_ViewportHeight = g_WindowStack[iVar1].saved_viewport_height;
  return;
}
