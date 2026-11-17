// Name: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_0047f210
// Address: 0047f210
// Address Range: [[0047f210, 0047fba7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_0047f210(CEditorTools *this_ptr,int use_clipping)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_0047f210(CEditorTools *this_ptr,int use_clipping)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0(this_ptr);
  if (g_INT_01c25f84 != 0) {
    iVar4 = (uVar1 & 0xff) * 3;
    engine_mini3d_cpp_setColor_FUN_004f8e20
              ((uint)g_UCHAR_ARRAY_01c35838[iVar4 + 2] |
               (uint)g_UCHAR_ARRAY_01c35838[iVar4] << 0x10 |
               (uint)g_UCHAR_ARRAY_01c35838[iVar4 + 1] << 8);
    uVar1 = g_INT_01c35e60;
  }
  g_INT_01c35e60 = uVar1;
  if (g_INT_01c25f80 == 0) {
    if ((((-1 < g_INT_01c2a37c) && (-1 < g_INT_01c2a380)) &&
        ((g_INT_01c2a37c < g_INT_006141b8 && (g_INT_01c2a380 < g_INT_006141bc)))) &&
       ((use_clipping == 0 ||
        ((((g_INT_01c35e48 <= g_INT_01c2a37c && (g_INT_01c2a37c < g_INT_01c35e50)) &&
          (g_INT_01c35e4c <= g_INT_01c2a380)) && (g_INT_01c2a380 < g_INT_01c35e54)))))) {
      if (g_INT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_INT_01c2a37c,g_INT_01c2a380);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(g_INT_01c2a37c,g_INT_01c2a380);
      }
    }
    for (iVar4 = 1; iVar4 <= g_INT_006138e4 / 2; iVar4 = iVar4 + 1) {
      iVar3 = g_INT_01c2a37c - iVar4;
      if ((((-1 < iVar3) && (-1 < g_INT_01c2a380)) &&
          ((iVar3 < g_INT_006141b8 && (g_INT_01c2a380 < g_INT_006141bc)))) &&
         ((use_clipping == 0 ||
          (((g_INT_01c35e48 <= iVar3 && (iVar3 < g_INT_01c35e50)) &&
           ((g_INT_01c35e4c <= g_INT_01c2a380 && (g_INT_01c2a380 < g_INT_01c35e54)))))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,g_INT_01c2a380);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar3,g_INT_01c2a380);
        }
      }
      iVar3 = g_INT_01c2a37c + iVar4;
      if (((((-1 < iVar3) && (-1 < g_INT_01c2a380)) && (iVar3 < g_INT_006141b8)) &&
          (g_INT_01c2a380 < g_INT_006141bc)) &&
         ((use_clipping == 0 ||
          (((g_INT_01c35e48 <= iVar3 && (iVar3 < g_INT_01c35e50)) &&
           ((g_INT_01c35e4c <= g_INT_01c2a380 && (g_INT_01c2a380 < g_INT_01c35e54)))))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,g_INT_01c2a380);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar3,g_INT_01c2a380);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_INT_006138e8 / 2) {
      iVar3 = g_INT_01c2a380 - iVar4;
      if ((((-1 < g_INT_01c2a37c) && (-1 < iVar3)) &&
          ((g_INT_01c2a37c < g_INT_006141b8 && (iVar3 < g_INT_006141bc)))) &&
         ((use_clipping == 0 ||
          ((((g_INT_01c35e48 <= g_INT_01c2a37c && (g_INT_01c2a37c < g_INT_01c35e50)) &&
            (g_INT_01c35e4c <= iVar3)) && (iVar3 < g_INT_01c35e54)))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(g_INT_01c2a37c,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(g_INT_01c2a37c,iVar3);
        }
      }
      iVar3 = g_INT_01c2a380 + iVar4;
      if ((((g_INT_01c2a37c < 0) || (iVar3 < 0)) ||
          ((g_INT_006141b8 <= g_INT_01c2a37c || (g_INT_006141bc <= iVar3)))) ||
         ((use_clipping != 0 &&
          (((g_INT_01c2a37c < g_INT_01c35e48 || (g_INT_01c35e50 <= g_INT_01c2a37c)) ||
           ((iVar3 < g_INT_01c35e4c || (g_INT_01c35e54 <= iVar3)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_INT_01c2a37c,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(g_INT_01c2a37c,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if ((uint)g_INT_01c25f80 < 2) {
    iVar5 = g_INT_01c2a380 - g_INT_006138e8 / 2;
    iVar3 = g_INT_006138e8 + iVar5 + -1;
    iVar4 = iVar5;
    while (iVar4 = iVar4 + 1, iVar4 < iVar3) {
      if (((((-1 < g_INT_01c2a37c) && (-1 < iVar4)) && (g_INT_01c2a37c < g_INT_006141b8)) &&
          (iVar4 < g_INT_006141bc)) &&
         ((use_clipping == 0 ||
          (((g_INT_01c35e48 <= g_INT_01c2a37c && (g_INT_01c2a37c < g_INT_01c35e50)) &&
           ((g_INT_01c35e4c <= iVar4 && (iVar4 < g_INT_01c35e54)))))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(g_INT_01c2a37c,iVar4);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(g_INT_01c2a37c,iVar4);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_INT_006138e4 / 2) {
      iVar2 = g_INT_01c2a37c - iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < g_INT_006141b8 && (iVar5 < g_INT_006141bc))))
         && ((use_clipping == 0 ||
             ((((g_INT_01c35e48 <= iVar2 && (iVar2 < g_INT_01c35e50)) && (g_INT_01c35e4c <= iVar5))
              && (iVar5 < g_INT_01c35e54)))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar2,iVar5);
        }
      }
      iVar2 = g_INT_01c2a37c + iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < g_INT_006141b8 && (iVar5 < g_INT_006141bc))))
         && ((use_clipping == 0 ||
             (((g_INT_01c35e48 <= iVar2 && (iVar2 < g_INT_01c35e50)) &&
              ((g_INT_01c35e4c <= iVar5 && (iVar5 < g_INT_01c35e54)))))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar2,iVar5);
        }
      }
      iVar2 = g_INT_01c2a37c - iVar4;
      if (((((-1 < iVar2) && (-1 < iVar3)) && (iVar2 < g_INT_006141b8)) && (iVar3 < g_INT_006141bc))
         && ((use_clipping == 0 ||
             (((g_INT_01c35e48 <= iVar2 && (iVar2 < g_INT_01c35e50)) &&
              ((g_INT_01c35e4c <= iVar3 && (iVar3 < g_INT_01c35e54)))))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar2,iVar3);
        }
      }
      iVar2 = g_INT_01c2a37c + iVar4;
      if ((((iVar2 < 0) || (iVar3 < 0)) || ((g_INT_006141b8 <= iVar2 || (g_INT_006141bc <= iVar3))))
         || ((use_clipping != 0 &&
             ((((iVar2 < g_INT_01c35e48 || (g_INT_01c35e50 <= iVar2)) || (iVar3 < g_INT_01c35e4c))
              || (g_INT_01c35e54 <= iVar3)))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (g_INT_01c25f80 == 2) {
    if ((((-1 < g_INT_01c2a37c) && (-1 < g_INT_01c2a380)) &&
        ((g_INT_01c2a37c < g_INT_006141b8 && (g_INT_01c2a380 < g_INT_006141bc)))) &&
       ((use_clipping == 0 ||
        (((g_INT_01c35e48 <= g_INT_01c2a37c && (g_INT_01c2a37c < g_INT_01c35e50)) &&
         ((g_INT_01c35e4c <= g_INT_01c2a380 && (g_INT_01c2a380 < g_INT_01c35e54)))))))) {
      if (g_INT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(g_INT_01c2a37c,g_INT_01c2a380);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(g_INT_01c2a37c,g_INT_01c2a380);
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_INT_006138e4 / 2) {
      iVar5 = g_INT_01c2a37c - iVar4;
      iVar3 = g_INT_01c2a380 - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && (iVar5 < g_INT_006141b8)) &&
         ((iVar3 < g_INT_006141bc &&
          ((use_clipping == 0 ||
           (((g_INT_01c35e48 <= iVar5 && (iVar5 < g_INT_01c35e50)) &&
            ((g_INT_01c35e4c <= iVar3 && (iVar3 < g_INT_01c35e54)))))))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar5,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar5,iVar3);
        }
      }
      iVar3 = g_INT_01c2a37c + iVar4;
      iVar5 = g_INT_01c2a380 - iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < g_INT_006141b8 && (iVar5 < g_INT_006141bc))))
         && ((use_clipping == 0 ||
             ((((g_INT_01c35e48 <= iVar3 && (iVar3 < g_INT_01c35e50)) && (g_INT_01c35e4c <= iVar5))
              && (iVar5 < g_INT_01c35e54)))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar3,iVar5);
        }
      }
      iVar5 = g_INT_01c2a37c - iVar4;
      iVar3 = g_INT_01c2a380 + iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && ((iVar5 < g_INT_006141b8 && (iVar3 < g_INT_006141bc))))
         && ((use_clipping == 0 ||
             (((g_INT_01c35e48 <= iVar5 && (iVar5 < g_INT_01c35e50)) &&
              ((g_INT_01c35e4c <= iVar3 && (iVar3 < g_INT_01c35e54)))))))) {
        if (g_INT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar5,iVar3);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar5,iVar3);
        }
      }
      iVar3 = g_INT_01c2a37c + iVar4;
      iVar5 = g_INT_01c2a380 + iVar4;
      if (((((iVar3 < 0) || (iVar5 < 0)) || (g_INT_006141b8 <= iVar3)) || (g_INT_006141bc <= iVar5))
         || ((use_clipping != 0 &&
             (((iVar3 < g_INT_01c35e48 || (g_INT_01c35e50 <= iVar3)) ||
              ((iVar5 < g_INT_01c35e4c || (g_INT_01c35e54 <= iVar5)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (g_INT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0x9a7;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}
