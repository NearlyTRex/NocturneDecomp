// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0
// Address: 004721e0
// Address Range: [[004721e0, 004722af]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(CEditorTools *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(CEditorTools *this_ptr)

{
  int iVar1;
  
  if (_DAT_01bcd07c < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1816;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CEditorTools::popWindow() called but no window was opened!");
  }
  _DAT_01bcd07c = _DAT_01bcd07c + -1;
  iVar1 = _DAT_01bcd07c * 0x1d8;
  if (*(void **)(iVar1 + 0x1bcd248) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x1bcd248));
    *(uint *)(iVar1 + 0x1bcd248) = 0;
  }
  g_ClipLeft = *(int *)(iVar1 + 0x1bcd090);
  g_ClipTop = *(int *)(iVar1 + 0x1bcd094);
  g_ClipRight = *(int *)(iVar1 + 0x1bcd098);
  g_ClipBottom = *(int *)(iVar1 + 0x1bcd09c);
  g_Projection.half_width_fixed = *(int *)(iVar1 + 0x1bcd0a0);
  g_Projection.neg_half_height_fixed = *(int *)(iVar1 + 0x1bcd0a4);
  g_Projection.center_x_fixed = *(int *)(iVar1 + 0x1bcd0a8);
  g_Projection.center_y_fixed = *(int *)(iVar1 + 0x1bcd0ac);
  g_ViewportWidth = *(int *)(iVar1 + 0x1bcd0b0);
  g_ViewportHeight = *(int *)(iVar1 + 0x1bcd0b4);
  return;
}
