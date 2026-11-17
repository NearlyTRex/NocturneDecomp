// Name: shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_0047eff0
// Address: 0047eff0
// Address Range: [[0047eff0, 0047f1bc]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_0047eff0(CEditorTools *this_ptr,int line_position)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_0047eff0(CEditorTools *this_ptr,int line_position)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int x2;
  int iVar5;
  
  if (g_INT_01c2559c < 1) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0x93b;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar2 = g_INT_01c35e60;
  iVar1 = g_INT_01c35e4c;
  iVar5 = (g_INT_01c2559c + -1) * 0x1f8;
  g_INT_01c35e4c = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar5 + 4);
  iVar3 = g_INT_006141bc / 0x60;
  iVar4 = shape_edittool_cpp_calculateButtonHeight_FUN_00485380((char *)0x0);
  iVar4 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar5 + 0xc) -
          ((line_position + 1) * iVar3 + line_position * iVar4);
  iVar3 = g_INT_01c2638c;
  if (g_INT_01c25f84 != 0) {
    iVar3 = (g_INT_01c2638c & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)g_UCHAR_ARRAY_01c35838[iVar3 + 2] |
               (uint)g_UCHAR_ARRAY_01c35838[iVar3] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 1] << 8);
    iVar3 = g_INT_01c35e60;
  }
  g_INT_01c35e60 = iVar3;
  iVar3 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar5) + 1;
  x2 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar5 + 8) + -2;
  if (g_INT_01c25f84 == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(iVar3,iVar4,x2);
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f9390(iVar3,iVar4,x2);
  }
  if (g_INT_01c26390 != g_INT_01c2638c) {
    if (g_INT_01c25f84 == 0) {
      g_INT_01c35e60 = g_INT_01c26390;
    }
    else {
      iVar3 = (g_INT_01c26390 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar3 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar3] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar3 + 2]);
    }
    iVar3 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar5) + 1;
    iVar5 = *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar5 + 8) + -2;
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar3,iVar4 + -1,iVar5);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f9390(iVar3,iVar4 + -1,iVar5);
    }
  }
  g_INT_01c35e60 = iVar2;
  g_INT_01c35e4c = iVar1;
  return;
}
