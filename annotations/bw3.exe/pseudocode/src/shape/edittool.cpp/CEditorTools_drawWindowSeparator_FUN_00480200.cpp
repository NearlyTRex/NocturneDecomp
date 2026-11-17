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
  int iVar5;
  
  if (g_INT_01c5b104 < 1) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0x99f;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CEditorTools::paintWindow() called but no window was opened!");
  }
  iVar3 = g_INT_01c6b5c0;
  iVar2 = g_INT_01c6b5ac;
  iVar1 = (g_INT_01c5b104 + -1) * 0x1f8;
  g_INT_01c6b5ac = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar1 + 4);
  iVar4 = g_INT_005fba1c / 0x60;
  iVar5 = shape_edittool_cpp_calculateButtonHeight_FUN_00486580((char *)0x0);
  iVar5 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar1 + 0xc) -
          ((line_position + 1) * iVar4 + line_position * iVar5);
  iVar4 = g_INT_01c5baf4;
  if (g_INT_01c5baec != 0) {
    iVar4 = (g_INT_01c5baf4 & 0xffU) * 3;
    engine_mini3d_cpp_setColor_FUN_004f3520
              ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2] |
               (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8);
    iVar4 = g_INT_01c6b5c0;
  }
  g_INT_01c6b5c0 = iVar4;
  iVar4 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar1) + 1;
  if (g_INT_01c5baec == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(iVar4,iVar5,*(int *)(g_CHAR_ARRAY_01c5b108 + iVar1 + 8) + -2)
    ;
  }
  else {
    engine_mini3d_cpp_drawHLine_FUN_004f3ab0
              (iVar4,iVar5,*(int *)(g_CHAR_ARRAY_01c5b108 + iVar1 + 8) + -2);
  }
  if (g_INT_01c5baf8 != g_INT_01c5baf4) {
    if (g_INT_01c5baec == 0) {
      g_INT_01c6b5c0 = g_INT_01c5baf8;
    }
    else {
      iVar4 = (g_INT_01c5baf8 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2]);
    }
    iVar4 = *(int *)(g_CHAR_ARRAY_01c5b108 + iVar1) + 1;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_drawHLine_FUN_00402f30
                (iVar4,iVar5 + -1,*(int *)(g_CHAR_ARRAY_01c5b108 + iVar1 + 8) + -2);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f3ab0
                (iVar4,iVar5 + -1,*(int *)(g_CHAR_ARRAY_01c5b108 + iVar1 + 8) + -2);
    }
  }
  g_INT_01c6b5c0 = iVar3;
  g_INT_01c6b5ac = iVar2;
  return;
}
