// Name: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004724e0
// Address: 004724e0
// Address Range: [[004724e0, 00472c83]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(CEditorTools *this_ptr,int use_clipping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(CEditorTools *this_ptr,int use_clipping)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  g_ActiveRenderColor =
       shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490(this_ptr);
  if (_DAT_01bcd9c0 == 0) {
    if ((((-1 < _DAT_01bd1d8c) && (-1 < _DAT_01bd1d90)) &&
        ((_DAT_01bd1d8c < g_WindowWidth && (_DAT_01bd1d90 < g_WindowHeight)))) &&
       ((use_clipping == 0 ||
        ((((g_ClipLeft <= _DAT_01bd1d8c && (_DAT_01bd1d8c < g_ClipRight)) &&
          (g_ClipTop <= _DAT_01bd1d90)) && (_DAT_01bd1d90 < g_ClipBottom)))))) {
      engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,_DAT_01bd1d90);
    }
    for (iVar3 = 1; iVar3 <= DAT_005b6d54 / 2; iVar3 = iVar3 + 1) {
      iVar1 = _DAT_01bd1d8c - iVar3;
      if ((((-1 < iVar1) && (-1 < _DAT_01bd1d90)) &&
          ((iVar1 < g_WindowWidth && (_DAT_01bd1d90 < g_WindowHeight)))) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= iVar1 && (iVar1 < g_ClipRight)) &&
           ((g_ClipTop <= _DAT_01bd1d90 && (_DAT_01bd1d90 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar1,_DAT_01bd1d90);
      }
      iVar1 = _DAT_01bd1d8c + iVar3;
      if (((((-1 < iVar1) && (-1 < _DAT_01bd1d90)) && (iVar1 < g_WindowWidth)) &&
          (_DAT_01bd1d90 < g_WindowHeight)) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= iVar1 && (iVar1 < g_ClipRight)) &&
           ((g_ClipTop <= _DAT_01bd1d90 && (_DAT_01bd1d90 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar1,_DAT_01bd1d90);
      }
    }
    iVar3 = 1;
    while (iVar3 <= DAT_005b6d58 / 2) {
      iVar1 = _DAT_01bd1d90 - iVar3;
      if ((((-1 < _DAT_01bd1d8c) && (-1 < iVar1)) &&
          ((_DAT_01bd1d8c < g_WindowWidth && (iVar1 < g_WindowHeight)))) &&
         ((use_clipping == 0 ||
          ((((g_ClipLeft <= _DAT_01bd1d8c && (_DAT_01bd1d8c < g_ClipRight)) && (g_ClipTop <= iVar1))
           && (iVar1 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,iVar1);
      }
      iVar1 = _DAT_01bd1d90 + iVar3;
      if ((((_DAT_01bd1d8c < 0) || (iVar1 < 0)) ||
          ((g_WindowWidth <= _DAT_01bd1d8c || (g_WindowHeight <= iVar1)))) ||
         ((use_clipping != 0 &&
          (((_DAT_01bd1d8c < g_ClipLeft || (g_ClipRight <= _DAT_01bd1d8c)) ||
           ((iVar1 < g_ClipTop || (g_ClipBottom <= iVar1)))))))) {
        iVar3 = iVar3 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,iVar1);
        iVar3 = iVar3 + 1;
      }
    }
  }
  else if (_DAT_01bcd9c0 < 2) {
    iVar4 = _DAT_01bd1d90 - DAT_005b6d58 / 2;
    iVar1 = DAT_005b6d58 + iVar4 + -1;
    iVar3 = iVar4;
    while (iVar3 = iVar3 + 1, iVar3 < iVar1) {
      if (((((-1 < _DAT_01bd1d8c) && (-1 < iVar3)) && (_DAT_01bd1d8c < g_WindowWidth)) &&
          (iVar3 < g_WindowHeight)) &&
         ((use_clipping == 0 ||
          (((g_ClipLeft <= _DAT_01bd1d8c && (_DAT_01bd1d8c < g_ClipRight)) &&
           ((g_ClipTop <= iVar3 && (iVar3 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,iVar3);
      }
    }
    iVar3 = 1;
    while (iVar3 <= DAT_005b6d54 / 2) {
      iVar2 = _DAT_01bd1d8c - iVar3;
      if ((((-1 < iVar2) && (-1 < iVar4)) && ((iVar2 < g_WindowWidth && (iVar4 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             ((((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) && (g_ClipTop <= iVar4)) &&
              (iVar4 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar2,iVar4);
      }
      iVar2 = _DAT_01bd1d8c + iVar3;
      if ((((-1 < iVar2) && (-1 < iVar4)) && ((iVar2 < g_WindowWidth && (iVar4 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
              ((g_ClipTop <= iVar4 && (iVar4 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar2,iVar4);
      }
      iVar2 = _DAT_01bd1d8c - iVar3;
      if (((((-1 < iVar2) && (-1 < iVar1)) && (iVar2 < g_WindowWidth)) && (iVar1 < g_WindowHeight))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar2 && (iVar2 < g_ClipRight)) &&
              ((g_ClipTop <= iVar1 && (iVar1 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar2,iVar1);
      }
      iVar2 = _DAT_01bd1d8c + iVar3;
      if ((((iVar2 < 0) || (iVar1 < 0)) || ((g_WindowWidth <= iVar2 || (g_WindowHeight <= iVar1))))
         || ((use_clipping != 0 &&
             ((((iVar2 < g_ClipLeft || (g_ClipRight <= iVar2)) || (iVar1 < g_ClipTop)) ||
              (g_ClipBottom <= iVar1)))))) {
        iVar3 = iVar3 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401530(iVar2,iVar1);
        iVar3 = iVar3 + 1;
      }
    }
  }
  else if (_DAT_01bcd9c0 == 2) {
    if ((((-1 < _DAT_01bd1d8c) && (-1 < _DAT_01bd1d90)) &&
        ((_DAT_01bd1d8c < g_WindowWidth && (_DAT_01bd1d90 < g_WindowHeight)))) &&
       ((use_clipping == 0 ||
        (((g_ClipLeft <= _DAT_01bd1d8c && (_DAT_01bd1d8c < g_ClipRight)) &&
         ((g_ClipTop <= _DAT_01bd1d90 && (_DAT_01bd1d90 < g_ClipBottom)))))))) {
      engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,_DAT_01bd1d90);
    }
    iVar3 = 1;
    while (iVar3 <= DAT_005b6d54 / 2) {
      iVar4 = _DAT_01bd1d8c - iVar3;
      iVar1 = _DAT_01bd1d90 - iVar3;
      if ((((-1 < iVar4) && (-1 < iVar1)) && (iVar4 < g_WindowWidth)) &&
         ((iVar1 < g_WindowHeight &&
          ((use_clipping == 0 ||
           (((g_ClipLeft <= iVar4 && (iVar4 < g_ClipRight)) &&
            ((g_ClipTop <= iVar1 && (iVar1 < g_ClipBottom)))))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar4,iVar1);
      }
      iVar4 = _DAT_01bd1d8c + iVar3;
      iVar1 = _DAT_01bd1d90 - iVar3;
      if ((((-1 < iVar4) && (-1 < iVar1)) && ((iVar4 < g_WindowWidth && (iVar1 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             ((((g_ClipLeft <= iVar4 && (iVar4 < g_ClipRight)) && (g_ClipTop <= iVar1)) &&
              (iVar1 < g_ClipBottom)))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar4,iVar1);
      }
      iVar1 = _DAT_01bd1d8c - iVar3;
      iVar4 = _DAT_01bd1d90 + iVar3;
      if ((((-1 < iVar1) && (-1 < iVar4)) && ((iVar1 < g_WindowWidth && (iVar4 < g_WindowHeight))))
         && ((use_clipping == 0 ||
             (((g_ClipLeft <= iVar1 && (iVar1 < g_ClipRight)) &&
              ((g_ClipTop <= iVar4 && (iVar4 < g_ClipBottom)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar4);
      }
      iVar1 = _DAT_01bd1d8c + iVar3;
      iVar4 = _DAT_01bd1d90 + iVar3;
      if (((((iVar1 < 0) || (iVar4 < 0)) || (g_WindowWidth <= iVar1)) || (g_WindowHeight <= iVar4))
         || ((use_clipping != 0 &&
             (((iVar1 < g_ClipLeft || (g_ClipRight <= iVar1)) ||
              ((iVar4 < g_ClipTop || (g_ClipBottom <= iVar4)))))))) {
        iVar3 = iVar3 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar4);
        iVar3 = iVar3 + 1;
      }
    }
  }
  else {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 1978;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}
