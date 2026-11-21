// Name: shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_00480200
// Address: 00480200
// Address Range: [[00480200, 004803cc]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_00480200(CEditorTools *this_ptr,int line_position)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_00480200(CEditorTools *this_ptr,int line_position)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int x2;
  int iVar5;
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2463;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar2 = g_INT_01c6b5c0;
  iVar1 = g_INT_01c6b5ac;
  iVar5 = (g_WindowStackCount + -1) * 0x1f8;
  g_INT_01c6b5ac = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 4);
  iVar3 = g_INT_005fba1c / 0x60;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_00486580((char *)0x0);
  iVar4 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0xc) -
          ((line_position + 1) * iVar3 + line_position * iVar4);
  iVar3 = g_WindowBorderHighlightColor;
  if (g_INT_01c5baec != 0) {
    iVar3 = (g_WindowBorderHighlightColor & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f3520
              ((uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 2] |
               (uint)g_UCHAR_ARRAY_01c6af98[iVar3] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 1] << 8);
    iVar3 = g_INT_01c6b5c0;
  }
  g_INT_01c6b5c0 = iVar3;
  iVar3 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5) + 1;
  x2 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -2;
  if (g_INT_01c5baec == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(iVar3,iVar4,x2);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0(iVar3,iVar4,x2);
  }
  if (g_WindowBorderShadowColor != g_WindowBorderHighlightColor) {
    if (g_INT_01c5baec == 0) {
      g_INT_01c6b5c0 = g_WindowBorderShadowColor;
    }
    else {
      iVar3 = (g_WindowBorderShadowColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar3] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 2]);
    }
    iVar3 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5) + 1;
    iVar5 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 8) + -2;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar3,iVar4 + -1,iVar5);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f3ab0(iVar3,iVar4 + -1,iVar5);
    }
  }
  g_INT_01c6b5c0 = iVar2;
  g_INT_01c6b5ac = iVar1;
  return;
}
