// Name: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_00497870
// Address: 00497870
// Address Range: [[00497870, 00498207]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_00497870(CEditorTools *this_ptr,int use_clipping)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_00497870(CEditorTools *this_ptr,int use_clipping)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00497830(this_ptr);
  if (g_INT_01c3f544 != 0) {
    iVar4 = (uVar1 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_00517d50
              ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 2] |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c4e9f8[iVar4 + 1] << 8);
    uVar1 = g_INT_01c4f020;
  }
  g_INT_01c4f020 = uVar1;
  if (g_INT_01c3f540 == 0) {
    if ((((-1 < g_MouseX) && (-1 < g_MouseY)) &&
        ((g_MouseX < g_INT_0061b498 && (g_MouseY < g_INT_0061b49c)))) &&
       ((use_clipping == 0 ||
        ((((g_INT_01c4f008 <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_INT_01c4f00c <= g_MouseY))
         && (g_MouseY < g_INT_01c4f014)))))) {
      if (g_INT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_MouseX,g_MouseY);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(g_MouseX,g_MouseY);
      }
    }
    for (iVar4 = 1; iVar4 <= g_CursorSizeHorizontal / 2; iVar4 = iVar4 + 1) {
      iVar3 = g_MouseX - iVar4;
      if ((((-1 < iVar3) && (-1 < g_MouseY)) &&
          ((iVar3 < g_INT_0061b498 && (g_MouseY < g_INT_0061b49c)))) &&
         ((use_clipping == 0 ||
          (((g_INT_01c4f008 <= iVar3 && (iVar3 < g_ClipRight)) &&
           ((g_INT_01c4f00c <= g_MouseY && (g_MouseY < g_INT_01c4f014)))))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,g_MouseY);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar3,g_MouseY);
        }
      }
      iVar3 = g_MouseX + iVar4;
      if (((((-1 < iVar3) && (-1 < g_MouseY)) && (iVar3 < g_INT_0061b498)) &&
          (g_MouseY < g_INT_0061b49c)) &&
         ((use_clipping == 0 ||
          (((g_INT_01c4f008 <= iVar3 && (iVar3 < g_ClipRight)) &&
           ((g_INT_01c4f00c <= g_MouseY && (g_MouseY < g_INT_01c4f014)))))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,g_MouseY);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar3,g_MouseY);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeVertical / 2) {
      iVar3 = g_MouseY - iVar4;
      if ((((-1 < g_MouseX) && (-1 < iVar3)) &&
          ((g_MouseX < g_INT_0061b498 && (iVar3 < g_INT_0061b49c)))) &&
         ((use_clipping == 0 ||
          ((((g_INT_01c4f008 <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_INT_01c4f00c <= iVar3))
           && (iVar3 < g_INT_01c4f014)))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(g_MouseX,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(g_MouseX,iVar3);
        }
      }
      iVar3 = g_MouseY + iVar4;
      if ((((g_MouseX < 0) || (iVar3 < 0)) ||
          ((g_INT_0061b498 <= g_MouseX || (g_INT_0061b49c <= iVar3)))) ||
         ((use_clipping != 0 &&
          (((g_MouseX < g_INT_01c4f008 || (g_ClipRight <= g_MouseX)) ||
           ((iVar3 < g_INT_01c4f00c || (g_INT_01c4f014 <= iVar3)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_MouseX,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(g_MouseX,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if ((uint)g_INT_01c3f540 < 2) {
    iVar5 = g_MouseY - g_CursorSizeVertical / 2;
    iVar3 = g_CursorSizeVertical + iVar5 + -1;
    iVar4 = iVar5;
    while (iVar4 = iVar4 + 1, iVar4 < iVar3) {
      if (((((-1 < g_MouseX) && (-1 < iVar4)) && (g_MouseX < g_INT_0061b498)) &&
          (iVar4 < g_INT_0061b49c)) &&
         ((use_clipping == 0 ||
          (((g_INT_01c4f008 <= g_MouseX && (g_MouseX < g_ClipRight)) &&
           ((g_INT_01c4f00c <= iVar4 && (iVar4 < g_INT_01c4f014)))))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(g_MouseX,iVar4);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(g_MouseX,iVar4);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeHorizontal / 2) {
      iVar2 = g_MouseX - iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < g_INT_0061b498 && (iVar5 < g_INT_0061b49c))))
         && ((use_clipping == 0 ||
             ((((g_INT_01c4f008 <= iVar2 && (iVar2 < g_ClipRight)) && (g_INT_01c4f00c <= iVar5)) &&
              (iVar5 < g_INT_01c4f014)))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar2,iVar5);
        }
      }
      iVar2 = g_MouseX + iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < g_INT_0061b498 && (iVar5 < g_INT_0061b49c))))
         && ((use_clipping == 0 ||
             (((g_INT_01c4f008 <= iVar2 && (iVar2 < g_ClipRight)) &&
              ((g_INT_01c4f00c <= iVar5 && (iVar5 < g_INT_01c4f014)))))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar2,iVar5);
        }
      }
      iVar2 = g_MouseX - iVar4;
      if (((((-1 < iVar2) && (-1 < iVar3)) && (iVar2 < g_INT_0061b498)) && (iVar3 < g_INT_0061b49c))
         && ((use_clipping == 0 ||
             (((g_INT_01c4f008 <= iVar2 && (iVar2 < g_ClipRight)) &&
              ((g_INT_01c4f00c <= iVar3 && (iVar3 < g_INT_01c4f014)))))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar2,iVar3);
        }
      }
      iVar2 = g_MouseX + iVar4;
      if ((((iVar2 < 0) || (iVar3 < 0)) || ((g_INT_0061b498 <= iVar2 || (g_INT_0061b49c <= iVar3))))
         || ((use_clipping != 0 &&
             ((((iVar2 < g_INT_01c4f008 || (g_ClipRight <= iVar2)) || (iVar3 < g_INT_01c4f00c)) ||
              (g_INT_01c4f014 <= iVar3)))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (g_INT_01c3f540 == 2) {
    if ((((-1 < g_MouseX) && (-1 < g_MouseY)) &&
        ((g_MouseX < g_INT_0061b498 && (g_MouseY < g_INT_0061b49c)))) &&
       ((use_clipping == 0 ||
        (((g_INT_01c4f008 <= g_MouseX && (g_MouseX < g_ClipRight)) &&
         ((g_INT_01c4f00c <= g_MouseY && (g_MouseY < g_INT_01c4f014)))))))) {
      if (g_INT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_MouseX,g_MouseY);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(g_MouseX,g_MouseY);
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeHorizontal / 2) {
      iVar5 = g_MouseX - iVar4;
      iVar3 = g_MouseY - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && (iVar5 < g_INT_0061b498)) &&
         ((iVar3 < g_INT_0061b49c &&
          ((use_clipping == 0 ||
           (((g_INT_01c4f008 <= iVar5 && (iVar5 < g_ClipRight)) &&
            ((g_INT_01c4f00c <= iVar3 && (iVar3 < g_INT_01c4f014)))))))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar5,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar5,iVar3);
        }
      }
      iVar3 = g_MouseX + iVar4;
      iVar5 = g_MouseY - iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < g_INT_0061b498 && (iVar5 < g_INT_0061b49c))))
         && ((use_clipping == 0 ||
             ((((g_INT_01c4f008 <= iVar3 && (iVar3 < g_ClipRight)) && (g_INT_01c4f00c <= iVar5)) &&
              (iVar5 < g_INT_01c4f014)))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar3,iVar5);
        }
      }
      iVar5 = g_MouseX - iVar4;
      iVar3 = g_MouseY + iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && ((iVar5 < g_INT_0061b498 && (iVar3 < g_INT_0061b49c))))
         && ((use_clipping == 0 ||
             (((g_INT_01c4f008 <= iVar5 && (iVar5 < g_ClipRight)) &&
              ((g_INT_01c4f00c <= iVar3 && (iVar3 < g_INT_01c4f014)))))))) {
        if (g_INT_01c3f544 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar5,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar5,iVar3);
        }
      }
      iVar3 = g_MouseX + iVar4;
      iVar5 = g_MouseY + iVar4;
      if (((((iVar3 < 0) || (iVar5 < 0)) || (g_INT_0061b498 <= iVar3)) || (g_INT_0061b49c <= iVar5))
         || ((use_clipping != 0 &&
             (((iVar3 < g_INT_01c4f008 || (g_ClipRight <= iVar3)) ||
              ((iVar5 < g_INT_01c4f00c || (g_INT_01c4f014 <= iVar5)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0xa0d;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}
