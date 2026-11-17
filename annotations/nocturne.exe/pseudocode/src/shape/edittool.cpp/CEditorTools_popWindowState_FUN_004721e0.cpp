// Name: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0
// Address: 004721e0
// Address Range: [[004721e0, 004722af]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(CEditorTools *this_ptr)

{
  char *pcVar1;
  int iVar2;
  
  if (g_INT_01bcd07c < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1816;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CEditorTools::popWindow() called but no window was opened!");
  }
  g_INT_01bcd07c = g_INT_01bcd07c + -1;
  iVar2 = g_INT_01bcd07c * 0x1d8;
  if (*(void **)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x1c8) != (void *)0x0) {
    free(*(void **)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x1c8));
    pcVar1 = g_CHAR_ARRAY_01bcd080 + iVar2 + 0x1c8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
  }
  g_ClipLeft = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x10);
  g_ClipTop = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x14);
  g_ClipRight = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x18);
  g_ClipBottom = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x1c);
  g_Projection.half_width_fixed = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x20);
  g_Projection.neg_half_height_fixed = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x24);
  g_Projection.center_x_fixed = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x28);
  g_Projection.center_y_fixed = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x2c);
  g_ViewportWidth = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x30);
  g_ViewportHeight = *(int *)(g_CHAR_ARRAY_01bcd080 + iVar2 + 0x34);
  return;
}
