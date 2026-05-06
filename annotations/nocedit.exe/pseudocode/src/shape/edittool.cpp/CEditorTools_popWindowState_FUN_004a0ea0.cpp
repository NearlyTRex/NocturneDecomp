// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
// Address: 004a0ea0
// Address Range: [[004a0ea0, 004a0f79]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools *this_ptr)

{
  int iVar1;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x856;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::popWindow() called but no window was opened!");
  }
  iVar1 = g_WindowStackCount + -1;
  g_WindowStackCount = iVar1;
  if (g_WindowStack[iVar1].screen_backup_buffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_WindowStack[iVar1].screen_backup_buffer,"..\\shape\\edittool.cpp",0x861);
    g_WindowStack[iVar1].screen_backup_buffer = (void *)0x0;
  }
  g_ClipLeft = g_WindowStack[iVar1].saved_clip.left;
  g_ClipTop = g_WindowStack[iVar1].saved_clip.top;
  g_ClipRight = g_WindowStack[iVar1].saved_clip.right;
  g_ClipBottom = g_WindowStack[iVar1].saved_clip.bottom;
  g_Projection.half_width_fixed = g_WindowStack[iVar1].saved_projection.half_width_fixed;
  g_Projection.neg_half_height_fixed = g_WindowStack[iVar1].saved_projection.neg_half_height_fixed;
  g_Projection.center_x_fixed = g_WindowStack[iVar1].saved_projection.center_x_fixed;
  g_Projection.center_y_fixed = g_WindowStack[iVar1].saved_projection.center_y_fixed;
  g_ViewportWidth = g_WindowStack[iVar1].saved_viewport_width;
  g_ViewportHeight = g_WindowStack[iVar1].saved_viewport_height;
  return;
}
