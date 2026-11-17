// Name: shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_00497660
// Address: 00497660
// Address Range: [[00497660, 0049782c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_00497660(CEditorTools *this_ptr,int line_position)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_00497660(CEditorTools *this_ptr,int line_position)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int x2;
  int iVar5;
  
  if (g_WindowStackCount < 1) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0x99c;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar2 = g_INT_01c4f020;
  iVar1 = g_INT_01c4f00c;
  iVar5 = (g_WindowStackCount + -1) * 0x1f8;
  g_INT_01c4f00c = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 4);
  iVar3 = g_INT_0061b49c / 0x60;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_0049d9e0((char *)0x0);
  iVar4 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0xc) -
          ((line_position + 1) * iVar3 + line_position * iVar4);
  iVar3 = g_INT_01c3f54c;
  if (g_INT_01c3f544 != 0) {
    iVar3 = (g_INT_01c3f54c & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar3 + 2] |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar3] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar3 + 1] << 8);
    iVar3 = g_INT_01c4f020;
  }
  g_INT_01c4f020 = iVar3;
  iVar3 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5) + 1;
  x2 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -2;
  if (g_INT_01c3f544 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(iVar3,iVar4,x2);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_005182e0(iVar3,iVar4,x2);
  }
  if (g_INT_01c3f550 != g_INT_01c3f54c) {
    if (g_INT_01c3f544 == 0) {
      g_INT_01c4f020 = g_INT_01c3f550;
    }
    else {
      iVar3 = (g_INT_01c3f550 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar3 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar3] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar3 + 2]);
    }
    iVar3 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5) + 1;
    iVar5 = *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 8) + -2;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar3,iVar4 + -1,iVar5);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_005182e0(iVar3,iVar4 + -1,iVar5);
    }
  }
  g_INT_01c4f020 = iVar2;
  g_INT_01c4f00c = iVar1;
  return;
}
