// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
// Address: 004a1380
// Address Range: [[004a1380, 004a1b23]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380
          (CEditorTools *this_ptr,int use_clipping)

{
  uchar uVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(this_ptr);
  g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar1);
  if (g_MouseCursorType == 0) {
    if ((((-1 < g_MouseX) && (-1 < g_MouseY)) &&
        ((g_MouseX < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
       ((use_clipping == 0 ||
        ((((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_ClipTop <= g_MouseY)) &&
         (g_MouseY < g_ClipBottom)))))) {
      engine_2d_c_plotPixel_FUN_00401140(g_MouseX,g_MouseY);
    }
    for (iVar4 = 1; iVar4 <= g_CursorSizeHorizontal / 2; iVar4 = iVar4 + 1) {
      iVar2 = g_MouseX - iVar4;
      if ((((-1 < iVar2) && (-1 < g_MouseY)) &&
          ((iVar2 < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
           ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,g_MouseY);
      }
      iVar2 = g_MouseX + iVar4;
      if (((((-1 < iVar2) && (-1 < g_MouseY)) && (iVar2 < g_WindowWidth)) &&
          (g_MouseY < g_WindowHeight)) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
           ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,g_MouseY);
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeVertical / 2) {
      iVar2 = g_MouseY - iVar4;
      if ((((-1 < g_MouseX) && (-1 < iVar2)) &&
          ((g_MouseX < g_WindowWidth && (iVar2 < g_WindowHeight)))) &&
         ((use_clipping == 0 ||
          ((((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_ClipTop <= iVar2)) &&
           (iVar2 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar2);
      }
      iVar2 = g_MouseY + iVar4;
      if ((((g_MouseX < 0) || (iVar2 < 0)) ||
          ((g_WindowWidth <= g_MouseX || (g_WindowHeight <= iVar2)))) ||
         ((use_clipping != 0 &&
          (((g_MouseX < g_ClipLeft || (g_ClipRight <= g_MouseX)) ||
           ((iVar2 < g_ClipTop || (g_ClipBottom <= iVar2)))))))) {
        iVar4 = iVar4 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar2);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if ((uint)g_MouseCursorType < 2) {
    iVar5 = g_MouseY - g_CursorSizeVertical / 2;
    iVar2 = g_CursorSizeVertical + iVar5 + -1;
    iVar4 = iVar5;
    while (iVar4 = iVar4 + 1, iVar4 < iVar2) {
      if (((((-1 < g_MouseX) && (-1 < iVar4)) && (g_MouseX < g_WindowWidth)) &&
          (iVar4 < g_WindowHeight)) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) &&
           ((g_ClipTop <= iVar4 && (iVar4 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar4);
      }
    }
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeHorizontal / 2) {
      iVar3 = g_MouseX - iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < g_WindowWidth && (iVar5 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             ((((g_ClipLeft <= iVar3 && (iVar3 < g_ClipRight)) && (g_ClipTop <= iVar5)) &&
              (iVar5 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar5);
      }
      iVar3 = g_MouseX + iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < g_WindowWidth && (iVar5 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar3 && (iVar3 < g_ClipRight)) &&
              ((g_ClipTop <= iVar5 && (iVar5 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar5);
      }
      iVar3 = g_MouseX - iVar4;
      if (((((-1 < iVar3) && (-1 < iVar2)) && (iVar3 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar3 && (iVar3 < g_ClipRight)) &&
              ((g_ClipTop <= iVar2 && (iVar2 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar2);
      }
      iVar3 = g_MouseX + iVar4;
      if ((((iVar3 < 0) || (iVar2 < 0)) || ((g_WindowWidth <= iVar3 || (g_WindowHeight <= iVar2))))
         || ((use_clipping != 0 &&
             ((((iVar3 < g_ClipLeft || (g_ClipRight <= iVar3)) || (iVar2 < g_ClipTop)) ||
              (g_ClipBottom <= iVar2)))))) {
        iVar4 = iVar4 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar2);
        iVar4 = iVar4 + 1;
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
    iVar4 = 1;
    while (iVar4 <= g_CursorSizeHorizontal / 2) {
      iVar5 = g_MouseX - iVar4;
      iVar2 = g_MouseY - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar2)) && (iVar5 < g_WindowWidth)) &&
         ((iVar2 < g_WindowHeight &&
          ((use_clipping == 0 ||
           (((g_ClipLeft <= iVar5 && (iVar5 < g_ClipRight)) &&
            ((g_ClipTop <= iVar2 && (iVar2 < g_ClipBottom)))))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar2);
      }
      iVar5 = g_MouseX + iVar4;
      iVar2 = g_MouseY - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar2)) && ((iVar5 < g_WindowWidth && (iVar2 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             ((((g_ClipLeft <= iVar5 && (iVar5 < g_ClipRight)) && (g_ClipTop <= iVar2)) &&
              (iVar2 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar2);
      }
      iVar2 = g_MouseX - iVar4;
      iVar5 = g_MouseY + iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < g_WindowWidth && (iVar5 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
              ((g_ClipTop <= iVar5 && (iVar5 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar5);
      }
      iVar2 = g_MouseX + iVar4;
      iVar5 = g_MouseY + iVar4;
      if (((((iVar2 < 0) || (iVar5 < 0)) || (g_WindowWidth <= iVar2)) || (g_WindowHeight <= iVar5))
         || ((use_clipping != 0 &&
             (((iVar2 < g_ClipLeft || (g_ClipRight <= iVar2)) ||
              ((iVar5 < g_ClipTop || (g_ClipBottom <= iVar5)))))))) {
        iVar4 = iVar4 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar5);
        iVar4 = iVar4 + 1;
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
