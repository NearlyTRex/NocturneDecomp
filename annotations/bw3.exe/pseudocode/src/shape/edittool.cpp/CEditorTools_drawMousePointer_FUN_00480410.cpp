// Name: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_00480410
// Address: 00480410
// Address Range: [[00480410, 00480da7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_00480410(CEditorTools *this_ptr,int use_clipping)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_00480410(CEditorTools *this_ptr,int use_clipping)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004803d0(this_ptr);
  if (g_INT_01c5baec != 0) {
    iVar4 = (uVar1 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_004f3520
              ((uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 2] |
               (uint)g_UCHAR_ARRAY_01c6af98[iVar4] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c6af98[iVar4 + 1] << 8);
    uVar1 = g_INT_01c6b5c0;
  }
  g_INT_01c6b5c0 = uVar1;
  if (g_INT_01c5bae8 == 0) {
    if ((((-1 < g_INT_01c5fadc) && (-1 < g_INT_01c5fae0)) &&
        ((g_INT_01c5fadc < g_INT_005fba18 && (g_INT_01c5fae0 < g_INT_005fba1c)))) &&
       ((use_clipping == 0 ||
        ((((g_INT_01c6b5a8 <= g_INT_01c5fadc && (g_INT_01c5fadc < g_INT_01c6b5b0)) &&
          (g_INT_01c6b5ac <= g_INT_01c5fae0)) && (g_INT_01c5fae0 < g_INT_01c6b5b4)))))) {
      if (g_INT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_INT_01c5fadc,g_INT_01c5fae0);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f36e0(g_INT_01c5fadc,g_INT_01c5fae0);
      }
    }
    for (iVar4 = 1; iVar4 <= g_INT_005fb144 / 2; iVar4 = iVar4 + 1) {
      iVar3 = g_INT_01c5fadc - iVar4;
      if ((((-1 < iVar3) && (-1 < g_INT_01c5fae0)) &&
          ((iVar3 < g_INT_005fba18 && (g_INT_01c5fae0 < g_INT_005fba1c)))) &&
         ((use_clipping == 0 ||
          (((g_INT_01c6b5a8 <= iVar3 && (iVar3 < g_INT_01c6b5b0)) &&
           ((g_INT_01c6b5ac <= g_INT_01c5fae0 && (g_INT_01c5fae0 < g_INT_01c6b5b4)))))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,g_INT_01c5fae0);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar3,g_INT_01c5fae0);
        }
      }
      iVar3 = g_INT_01c5fadc + iVar4;
      if (((((-1 < iVar3) && (-1 < g_INT_01c5fae0)) && (iVar3 < g_INT_005fba18)) &&
          (g_INT_01c5fae0 < g_INT_005fba1c)) &&
         ((use_clipping == 0 ||
          (((g_INT_01c6b5a8 <= iVar3 && (iVar3 < g_INT_01c6b5b0)) &&
           ((g_INT_01c6b5ac <= g_INT_01c5fae0 && (g_INT_01c5fae0 < g_INT_01c6b5b4)))))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,g_INT_01c5fae0);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar3,g_INT_01c5fae0);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_INT_005fb148 / 2) {
      iVar3 = g_INT_01c5fae0 - iVar4;
      if ((((-1 < g_INT_01c5fadc) && (-1 < iVar3)) &&
          ((g_INT_01c5fadc < g_INT_005fba18 && (iVar3 < g_INT_005fba1c)))) &&
         ((use_clipping == 0 ||
          ((((g_INT_01c6b5a8 <= g_INT_01c5fadc && (g_INT_01c5fadc < g_INT_01c6b5b0)) &&
            (g_INT_01c6b5ac <= iVar3)) && (iVar3 < g_INT_01c6b5b4)))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(g_INT_01c5fadc,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(g_INT_01c5fadc,iVar3);
        }
      }
      iVar3 = g_INT_01c5fae0 + iVar4;
      if ((((g_INT_01c5fadc < 0) || (iVar3 < 0)) ||
          ((g_INT_005fba18 <= g_INT_01c5fadc || (g_INT_005fba1c <= iVar3)))) ||
         ((use_clipping != 0 &&
          (((g_INT_01c5fadc < g_INT_01c6b5a8 || (g_INT_01c6b5b0 <= g_INT_01c5fadc)) ||
           ((iVar3 < g_INT_01c6b5ac || (g_INT_01c6b5b4 <= iVar3)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_INT_01c5fadc,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f36e0(g_INT_01c5fadc,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if ((uint)g_INT_01c5bae8 < 2) {
    iVar5 = g_INT_01c5fae0 - g_INT_005fb148 / 2;
    iVar3 = g_INT_005fb148 + iVar5 + -1;
    iVar4 = iVar5;
    while (iVar4 = iVar4 + 1, iVar4 < iVar3) {
      if (((((-1 < g_INT_01c5fadc) && (-1 < iVar4)) && (g_INT_01c5fadc < g_INT_005fba18)) &&
          (iVar4 < g_INT_005fba1c)) &&
         ((use_clipping == 0 ||
          (((g_INT_01c6b5a8 <= g_INT_01c5fadc && (g_INT_01c5fadc < g_INT_01c6b5b0)) &&
           ((g_INT_01c6b5ac <= iVar4 && (iVar4 < g_INT_01c6b5b4)))))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(g_INT_01c5fadc,iVar4);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(g_INT_01c5fadc,iVar4);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_INT_005fb144 / 2) {
      iVar2 = g_INT_01c5fadc - iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < g_INT_005fba18 && (iVar5 < g_INT_005fba1c))))
         && ((use_clipping == 0 ||
             ((((g_INT_01c6b5a8 <= iVar2 && (iVar2 < g_INT_01c6b5b0)) && (g_INT_01c6b5ac <= iVar5))
              && (iVar5 < g_INT_01c6b5b4)))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar2,iVar5);
        }
      }
      iVar2 = g_INT_01c5fadc + iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < g_INT_005fba18 && (iVar5 < g_INT_005fba1c))))
         && ((use_clipping == 0 ||
             (((g_INT_01c6b5a8 <= iVar2 && (iVar2 < g_INT_01c6b5b0)) &&
              ((g_INT_01c6b5ac <= iVar5 && (iVar5 < g_INT_01c6b5b4)))))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar2,iVar5);
        }
      }
      iVar2 = g_INT_01c5fadc - iVar4;
      if (((((-1 < iVar2) && (-1 < iVar3)) && (iVar2 < g_INT_005fba18)) && (iVar3 < g_INT_005fba1c))
         && ((use_clipping == 0 ||
             (((g_INT_01c6b5a8 <= iVar2 && (iVar2 < g_INT_01c6b5b0)) &&
              ((g_INT_01c6b5ac <= iVar3 && (iVar3 < g_INT_01c6b5b4)))))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar2,iVar3);
        }
      }
      iVar2 = g_INT_01c5fadc + iVar4;
      if ((((iVar2 < 0) || (iVar3 < 0)) || ((g_INT_005fba18 <= iVar2 || (g_INT_005fba1c <= iVar3))))
         || ((use_clipping != 0 &&
             ((((iVar2 < g_INT_01c6b5a8 || (g_INT_01c6b5b0 <= iVar2)) || (iVar3 < g_INT_01c6b5ac))
              || (g_INT_01c6b5b4 <= iVar3)))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (g_INT_01c5bae8 == 2) {
    if ((((-1 < g_INT_01c5fadc) && (-1 < g_INT_01c5fae0)) &&
        ((g_INT_01c5fadc < g_INT_005fba18 && (g_INT_01c5fae0 < g_INT_005fba1c)))) &&
       ((use_clipping == 0 ||
        (((g_INT_01c6b5a8 <= g_INT_01c5fadc && (g_INT_01c5fadc < g_INT_01c6b5b0)) &&
         ((g_INT_01c6b5ac <= g_INT_01c5fae0 && (g_INT_01c5fae0 < g_INT_01c6b5b4)))))))) {
      if (g_INT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_INT_01c5fadc,g_INT_01c5fae0);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f36e0(g_INT_01c5fadc,g_INT_01c5fae0);
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_INT_005fb144 / 2) {
      iVar5 = g_INT_01c5fadc - iVar4;
      iVar3 = g_INT_01c5fae0 - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && (iVar5 < g_INT_005fba18)) &&
         ((iVar3 < g_INT_005fba1c &&
          ((use_clipping == 0 ||
           (((g_INT_01c6b5a8 <= iVar5 && (iVar5 < g_INT_01c6b5b0)) &&
            ((g_INT_01c6b5ac <= iVar3 && (iVar3 < g_INT_01c6b5b4)))))))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar5,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar5,iVar3);
        }
      }
      iVar3 = g_INT_01c5fadc + iVar4;
      iVar5 = g_INT_01c5fae0 - iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < g_INT_005fba18 && (iVar5 < g_INT_005fba1c))))
         && ((use_clipping == 0 ||
             ((((g_INT_01c6b5a8 <= iVar3 && (iVar3 < g_INT_01c6b5b0)) && (g_INT_01c6b5ac <= iVar5))
              && (iVar5 < g_INT_01c6b5b4)))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar3,iVar5);
        }
      }
      iVar5 = g_INT_01c5fadc - iVar4;
      iVar3 = g_INT_01c5fae0 + iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && ((iVar5 < g_INT_005fba18 && (iVar3 < g_INT_005fba1c))))
         && ((use_clipping == 0 ||
             (((g_INT_01c6b5a8 <= iVar5 && (iVar5 < g_INT_01c6b5b0)) &&
              ((g_INT_01c6b5ac <= iVar3 && (iVar3 < g_INT_01c6b5b4)))))))) {
        if (g_INT_01c5baec == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar5,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar5,iVar3);
        }
      }
      iVar3 = g_INT_01c5fadc + iVar4;
      iVar5 = g_INT_01c5fae0 + iVar4;
      if (((((iVar3 < 0) || (iVar5 < 0)) || (g_INT_005fba18 <= iVar3)) || (g_INT_005fba1c <= iVar5))
         || ((use_clipping != 0 &&
             (((iVar3 < g_INT_01c6b5a8 || (g_INT_01c6b5b0 <= iVar3)) ||
              ((iVar5 < g_INT_01c6b5ac || (g_INT_01c6b5b4 <= iVar5)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f36e0(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa10;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}
