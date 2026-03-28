// Name: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004a1380
// Address: 004a1380
// Address Range: [[004a1380, 004a1b23]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(CEditorTools *this_ptr,int use_clipping)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(CEditorTools *this_ptr,int use_clipping)

{
  int iVar1;
  int iVar2;
  int iVar5;
  int iVar6;
  int iVar3;
  int iVar7;
  int iVar4;
  int iVar8;
  
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
      iVar7 = g_MouseX - iVar3;
      if ((((-1 < iVar7) && (-1 < g_MouseY)) &&
          ((iVar7 < g_WindowWidth && (g_MouseY < g_WindowHeight)))) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= iVar7 && (iVar7 < g_ClipRight)) &&
           ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar7,g_MouseY);
      }
      iVar7 = g_MouseX + iVar3;
      if (((((-1 < iVar7) && (-1 < g_MouseY)) && (iVar7 < g_WindowWidth)) &&
          (g_MouseY < g_WindowHeight)) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= iVar7 && (iVar7 < g_ClipRight)) &&
           ((g_ClipTop <= g_MouseY && (g_MouseY < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar7,g_MouseY);
      }
    }
    iVar7 = 1;
    while (iVar7 <= g_CursorSizeVertical / 2) {
      iVar1 = g_MouseY - iVar7;
      if ((((-1 < g_MouseX) && (-1 < iVar1)) &&
          ((g_MouseX < g_WindowWidth && (iVar1 < g_WindowHeight)))) &&
         ((use_clipping == 0 ||
          ((((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) && (g_ClipTop <= iVar1)) &&
           (iVar1 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar1);
      }
      iVar6 = g_MouseY + iVar7;
      if ((((g_MouseX < 0) || (iVar6 < 0)) ||
          ((g_WindowWidth <= g_MouseX || (g_WindowHeight <= iVar6)))) ||
         ((use_clipping != 0 &&
          (((g_MouseX < g_ClipLeft || (g_ClipRight <= g_MouseX)) ||
           ((iVar6 < g_ClipTop || (g_ClipBottom <= iVar6)))))))) {
        iVar7 = iVar7 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar6);
        iVar7 = iVar7 + 1;
      }
    }
  }
  else if ((uint)g_MouseCursorType < 2) {
    iVar8 = g_MouseY - g_CursorSizeVertical / 2;
    iVar6 = g_CursorSizeVertical + iVar8 + -1;
    iVar7 = iVar8;
    while (iVar7 = iVar7 + 1, iVar7 < iVar6) {
      if (((((-1 < g_MouseX) && (-1 < iVar7)) && (g_MouseX < g_WindowWidth)) &&
          (iVar7 < g_WindowHeight)) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= g_MouseX && (g_MouseX < g_ClipRight)) &&
           ((g_ClipTop <= iVar7 && (iVar7 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(g_MouseX,iVar7);
      }
    }
    iVar7 = 1;
    while (iVar7 <= g_CursorSizeHorizontal / 2) {
      iVar2 = g_MouseX - iVar7;
      if ((((-1 < iVar2) && (-1 < iVar8)) && ((iVar2 < g_WindowWidth && (iVar8 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             ((((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) && (g_ClipTop <= iVar8)) &&
              (iVar8 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar8);
      }
      iVar5 = g_MouseX + iVar7;
      if ((((-1 < iVar5) && (-1 < iVar8)) && ((iVar5 < g_WindowWidth && (iVar8 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar5 && (iVar5 < g_ClipRight)) &&
              ((g_ClipTop <= iVar8 && (iVar8 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar8);
      }
      iVar5 = g_MouseX - iVar7;
      if (((((-1 < iVar5) && (-1 < iVar6)) && (iVar5 < g_WindowWidth)) && (iVar6 < g_WindowHeight))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar5 && (iVar5 < g_ClipRight)) &&
              ((g_ClipTop <= iVar6 && (iVar6 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar6);
      }
      iVar5 = g_MouseX + iVar7;
      if ((((iVar5 < 0) || (iVar6 < 0)) || ((g_WindowWidth <= iVar5 || (g_WindowHeight <= iVar6))))
         || ((use_clipping != 0 &&
             ((((iVar5 < g_ClipLeft || (g_ClipRight <= iVar5)) || (iVar6 < g_ClipTop)) ||
              (g_ClipBottom <= iVar6)))))) {
        iVar7 = iVar7 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar6);
        iVar7 = iVar7 + 1;
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
    iVar7 = 1;
    while (iVar7 <= g_CursorSizeHorizontal / 2) {
      iVar4 = g_MouseX - iVar7;
      iVar6 = g_MouseY - iVar7;
      if ((((-1 < iVar4) && (-1 < iVar6)) && (iVar4 < g_WindowWidth)) &&
         ((iVar6 < g_WindowHeight &&
          ((use_clipping == 0 ||
           (((g_ClipLeft <= iVar4 && (iVar4 < g_ClipRight)) &&
            ((g_ClipTop <= iVar6 && (iVar6 < g_ClipBottom)))))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar4,iVar6);
      }
      iVar8 = g_MouseX + iVar7;
      iVar6 = g_MouseY - iVar7;
      if ((((-1 < iVar8) && (-1 < iVar6)) && ((iVar8 < g_WindowWidth && (iVar6 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             ((((g_ClipLeft <= iVar8 && (iVar8 < g_ClipRight)) && (g_ClipTop <= iVar6)) &&
              (iVar6 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar8,iVar6);
      }
      iVar6 = g_MouseX - iVar7;
      iVar8 = g_MouseY + iVar7;
      if ((((-1 < iVar6) && (-1 < iVar8)) && ((iVar6 < g_WindowWidth && (iVar8 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar6 && (iVar6 < g_ClipRight)) &&
              ((g_ClipTop <= iVar8 && (iVar8 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar6,iVar8);
      }
      iVar6 = g_MouseX + iVar7;
      iVar8 = g_MouseY + iVar7;
      if (((((iVar6 < 0) || (iVar8 < 0)) || (g_WindowWidth <= iVar6)) || (g_WindowHeight <= iVar8))
         || ((use_clipping != 0 &&
             (((iVar6 < g_ClipLeft || (g_ClipRight <= iVar6)) ||
              ((iVar8 < g_ClipTop || (g_ClipBottom <= iVar8)))))))) {
        iVar7 = iVar7 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401140(iVar6,iVar8);
        iVar7 = iVar7 + 1;
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
