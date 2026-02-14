// Name: shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
// Address: 004a1230
// Address Range: [[004a1230, 004a132d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(CEditorTools *editor_tools,int line_position)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230(CEditorTools *editor_tools,int line_position)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8c6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar2 = g_ActiveRenderColor;
  iVar1 = g_ClipTop;
  iVar5 = g_WindowStackCount + -1;
  g_ClipTop = g_WindowStack[iVar5].top;
  iVar3 = g_WindowHeight / 0x60;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_004a6970((char *)0x0);
  iVar3 = g_WindowStack[iVar5].bottom - ((line_position + 1) * iVar3 + line_position * iVar4);
  g_ActiveRenderColor = g_WindowBorderColor1;
  engine_2d_c_drawHLine_FUN_00402ee0
            (g_WindowStack[iVar5].left + 1,iVar3,g_WindowStack[iVar5].right + -2);
  if (g_WindowBorderColor1 == g_WindowBorderColor2) {
    g_ActiveRenderColor = iVar2;
    g_ClipTop = iVar1;
    return;
  }
  g_ActiveRenderColor = g_WindowBorderColor2;
  engine_2d_c_drawHLine_FUN_00402ee0
            (g_WindowStack[iVar5].left + 1,iVar3 + -1,g_WindowStack[iVar5].right + -2);
  g_ActiveRenderColor = iVar2;
  g_ClipTop = iVar1;
  return;
}
