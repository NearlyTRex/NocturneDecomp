// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
// Address: 004a1380
// Address Range: [[004a1380, 004a1b23]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380 (CEditorTools *this_ptr,int use_clipping)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380
          (CEditorTools *this_ptr,int use_clipping)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  g_ActiveRenderColor =
       shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(this_ptr);
  if (g_MouseCursorType == 0) {
    if ((((-1 < g_MouseX) && (-1 < g_MouseY)) &&
        ((g_MouseX < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
       ((use_clipping == 0 ||
        ((((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_ClipTop <= g_MouseY)) &&
         (g_MouseY < g_ClipBottom)))))) {
      engine_2d_c_plotPixel_FUN_00401140(g_MouseX,g_MouseY);
    }
    for (iVar3 = 1; iVar3 <= g_CursorSizeHorizontal / 2; iVar3 = iVar3 + 1) {
      iVar1 = g_MouseX - iVar3;
      if ((((-1 < iVar1) && (-1 < g_MouseY)) &&
          ((iVar1 < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= iVar1 && (iVar1 < g_ClipRight)) &&
           ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar1,g_MouseY);
      }
      iVar1 = g_MouseX + iVar3;
      if (((((-1 < iVar1) && (-1 < g_MouseY)) && (iVar1 < g_WindowWidth)) &&
          (g_MouseY < g_WindowHeight)) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= iVar1 && (iVar1 < g_ClipRight)) &&
           ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar1,g_MouseY);
      }
    }
    iVar3 = 1;
    while (iVar3 <= g_CursorSizeVertical / 2) {
      iVar1 = g_MouseY - iVar3;
      if ((((-1 < g_MouseX) && (-1 < iVar1)) &&
          ((g_MouseX < g_WindowWidth && (iVar1 < g_WindowHeight)))) &&
         ((use_clipping == 0 ||
          ((((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_ClipTop <= iVar1)) &&
           (iVar1 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar1);
      }
      iVar1 = g_MouseY + iVar3;
      if ((((g_MouseX < 0) || (iVar1 < 0)) ||
          ((g_WindowWidth <= g_MouseX || (g_WindowHeight <= iVar1)))) ||
         ((use_clipping != 0 &&
          (((g_MouseX < g_ClipLeft || (g_ClipRight <= g_MouseX)) ||
           ((iVar1 < g_ClipTop || (g_ClipBottom <= iVar1)))))))) {
        iVar3 = iVar3 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar1);
        iVar3 = iVar3 + 1;
      }
    }
  }
  else if ((uint)g_MouseCursorType < 2) {
    iVar4 = g_MouseY - g_CursorSizeVertical / 2;
    iVar1 = g_CursorSizeVertical + iVar4 + -1;
    iVar3 = iVar4;
    while (iVar3 = iVar3 + 1, iVar3 < iVar1) {
      if (((((-1 < g_MouseX) && (-1 < iVar3)) && (g_MouseX < g_WindowWidth)) &&
          (iVar3 < g_WindowHeight)) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) &&
           ((g_ClipTop <= iVar3 && (iVar3 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar3);
      }
    }
    iVar3 = 1;
    while (iVar3 <= g_CursorSizeHorizontal / 2) {
      iVar2 = g_MouseX - iVar3;
      if ((((-1 < iVar2) && (-1 < iVar4)) && ((iVar2 < g_WindowWidth && (iVar4 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             ((((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) && (g_ClipTop <= iVar4)) &&
              (iVar4 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar4);
      }
      iVar2 = g_MouseX + iVar3;
      if ((((-1 < iVar2) && (-1 < iVar4)) && ((iVar2 < g_WindowWidth && (iVar4 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
              ((g_ClipTop <= iVar4 && (iVar4 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar4);
      }
      iVar2 = g_MouseX - iVar3;
      if (((((-1 < iVar2) && (-1 < iVar1)) && (iVar2 < g_WindowWidth)) && (iVar1 < g_WindowHeight))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
              ((g_ClipTop <= iVar1 && (iVar1 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1);
      }
      iVar2 = g_MouseX + iVar3;
      if ((((iVar2 < 0) || (iVar1 < 0)) || ((g_WindowWidth <= iVar2 || (g_WindowHeight <= iVar1))))
         || ((use_clipping != 0 &&
             ((((iVar2 < g_ClipLeft || (g_ClipRight <= iVar2)) || (iVar1 < g_ClipTop)) ||
              (g_ClipBottom <= iVar1)))))) {
        iVar3 = iVar3 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1);
        iVar3 = iVar3 + 1;
      }
    }
  }
  else if (g_MouseCursorType == 2) {
    if ((((-1 < g_MouseX) && (-1 < g_MouseY)) &&
        ((g_MouseX < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
       ((use_clipping == 0 ||
        (((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) &&
         ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
      engine_2d_c_plotPixel_FUN_00401140(g_MouseX,g_MouseY);
    }
    iVar3 = 1;
    while (iVar3 <= g_CursorSizeHorizontal / 2) {
      iVar4 = g_MouseX - iVar3;
      iVar1 = g_MouseY - iVar3;
      if ((((-1 < iVar4) && (-1 < iVar1)) && (iVar4 < g_WindowWidth)) &&
         ((iVar1 < g_WindowHeight &&
          ((use_clipping == 0 ||
           (((g_ClipLeft <= iVar4 && (iVar4 < g_ClipRight)) &&
            ((g_ClipTop <= iVar1 && (iVar1 < g_ClipBottom)))))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar4,iVar1);
      }
      iVar4 = g_MouseX + iVar3;
      iVar1 = g_MouseY - iVar3;
      if ((((-1 < iVar4) && (-1 < iVar1)) && ((iVar4 < g_WindowWidth && (iVar1 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             ((((g_ClipLeft <= iVar4 && (iVar4 < g_ClipRight)) && (g_ClipTop <= iVar1)) &&
              (iVar1 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar4,iVar1);
      }
      iVar1 = g_MouseX - iVar3;
      iVar4 = g_MouseY + iVar3;
      if ((((-1 < iVar1) && (-1 < iVar4)) && ((iVar1 < g_WindowWidth && (iVar4 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar1 && (iVar1 < g_ClipRight)) &&
              ((g_ClipTop <= iVar4 && (iVar4 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar4);
      }
      iVar1 = g_MouseX + iVar3;
      iVar4 = g_MouseY + iVar3;
      if (((((iVar1 < 0) || (iVar4 < 0)) || (g_WindowWidth <= iVar1)) || (g_WindowHeight <= iVar4))
         || ((use_clipping != 0 &&
             (((iVar1 < g_ClipLeft || (g_ClipRight <= iVar1)) ||
              ((iVar4 < g_ClipTop || (g_ClipBottom <= iVar4)))))))) {
        iVar3 = iVar3 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar4);
        iVar3 = iVar3 + 1;
      }
    }
  }
  else {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x932;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}
