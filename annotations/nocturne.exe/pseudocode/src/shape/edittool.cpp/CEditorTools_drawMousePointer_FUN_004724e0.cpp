// Name: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004724e0
// Address: 004724e0
// Address Range: [[004724e0, 00472c83]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _DAT_01c00c70 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490(param_1);
  if (_DAT_01bcd9c0 == 0) {
    if ((((-1 < _DAT_01bd1d8c) && (-1 < _DAT_01bd1d90)) &&
        ((_DAT_01bd1d8c < DAT_005b761c && (_DAT_01bd1d90 < DAT_005b7620)))) &&
       ((param_2 == 0 ||
        ((((_DAT_01c00c58 <= _DAT_01bd1d8c && (_DAT_01bd1d8c < _DAT_01c00c60)) &&
          (_DAT_01c00c5c <= _DAT_01bd1d90)) && (_DAT_01bd1d90 < _DAT_01c00c64)))))) {
      engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,_DAT_01bd1d90);
    }
    for (iVar3 = 1; iVar3 <= DAT_005b6d54 / 2; iVar3 = iVar3 + 1) {
      iVar1 = _DAT_01bd1d8c - iVar3;
      if ((((-1 < iVar1) && (-1 < _DAT_01bd1d90)) &&
          ((iVar1 < DAT_005b761c && (_DAT_01bd1d90 < DAT_005b7620)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c00c58 <= iVar1 && (iVar1 < _DAT_01c00c60)) &&
           ((_DAT_01c00c5c <= _DAT_01bd1d90 && (_DAT_01bd1d90 < _DAT_01c00c64)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar1,_DAT_01bd1d90);
      }
      iVar1 = _DAT_01bd1d8c + iVar3;
      if (((((-1 < iVar1) && (-1 < _DAT_01bd1d90)) && (iVar1 < DAT_005b761c)) &&
          (_DAT_01bd1d90 < DAT_005b7620)) &&
         ((param_2 == 0 ||
          (((_DAT_01c00c58 <= iVar1 && (iVar1 < _DAT_01c00c60)) &&
           ((_DAT_01c00c5c <= _DAT_01bd1d90 && (_DAT_01bd1d90 < _DAT_01c00c64)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar1,_DAT_01bd1d90);
      }
    }
    iVar3 = 1;
    while (iVar3 <= DAT_005b6d58 / 2) {
      iVar1 = _DAT_01bd1d90 - iVar3;
      if ((((-1 < _DAT_01bd1d8c) && (-1 < iVar1)) &&
          ((_DAT_01bd1d8c < DAT_005b761c && (iVar1 < DAT_005b7620)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c00c58 <= _DAT_01bd1d8c && (_DAT_01bd1d8c < _DAT_01c00c60)) &&
            (_DAT_01c00c5c <= iVar1)) && (iVar1 < _DAT_01c00c64)))))) {
        engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,iVar1);
      }
      iVar1 = _DAT_01bd1d90 + iVar3;
      if ((((_DAT_01bd1d8c < 0) || (iVar1 < 0)) ||
          ((DAT_005b761c <= _DAT_01bd1d8c || (DAT_005b7620 <= iVar1)))) ||
         ((param_2 != 0 &&
          (((_DAT_01bd1d8c < _DAT_01c00c58 || (_DAT_01c00c60 <= _DAT_01bd1d8c)) ||
           ((iVar1 < _DAT_01c00c5c || (_DAT_01c00c64 <= iVar1)))))))) {
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
      if (((((-1 < _DAT_01bd1d8c) && (-1 < iVar3)) && (_DAT_01bd1d8c < DAT_005b761c)) &&
          (iVar3 < DAT_005b7620)) &&
         ((param_2 == 0 ||
          (((_DAT_01c00c58 <= _DAT_01bd1d8c && (_DAT_01bd1d8c < _DAT_01c00c60)) &&
           ((_DAT_01c00c5c <= iVar3 && (iVar3 < _DAT_01c00c64)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,iVar3);
      }
    }
    iVar3 = 1;
    while (iVar3 <= DAT_005b6d54 / 2) {
      iVar2 = _DAT_01bd1d8c - iVar3;
      if ((((-1 < iVar2) && (-1 < iVar4)) && ((iVar2 < DAT_005b761c && (iVar4 < DAT_005b7620)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c00c58 <= iVar2 && (iVar2 < _DAT_01c00c60)) && (_DAT_01c00c5c <= iVar4)) &&
           (iVar4 < _DAT_01c00c64)))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar2,iVar4);
      }
      iVar2 = _DAT_01bd1d8c + iVar3;
      if ((((-1 < iVar2) && (-1 < iVar4)) && ((iVar2 < DAT_005b761c && (iVar4 < DAT_005b7620)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c00c58 <= iVar2 && (iVar2 < _DAT_01c00c60)) &&
           ((_DAT_01c00c5c <= iVar4 && (iVar4 < _DAT_01c00c64)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar2,iVar4);
      }
      iVar2 = _DAT_01bd1d8c - iVar3;
      if (((((-1 < iVar2) && (-1 < iVar1)) && (iVar2 < DAT_005b761c)) && (iVar1 < DAT_005b7620)) &&
         ((param_2 == 0 ||
          (((_DAT_01c00c58 <= iVar2 && (iVar2 < _DAT_01c00c60)) &&
           ((_DAT_01c00c5c <= iVar1 && (iVar1 < _DAT_01c00c64)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar2,iVar1);
      }
      iVar2 = _DAT_01bd1d8c + iVar3;
      if ((((iVar2 < 0) || (iVar1 < 0)) || ((DAT_005b761c <= iVar2 || (DAT_005b7620 <= iVar1)))) ||
         ((param_2 != 0 &&
          ((((iVar2 < _DAT_01c00c58 || (_DAT_01c00c60 <= iVar2)) || (iVar1 < _DAT_01c00c5c)) ||
           (_DAT_01c00c64 <= iVar1)))))) {
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
        ((_DAT_01bd1d8c < DAT_005b761c && (_DAT_01bd1d90 < DAT_005b7620)))) &&
       ((param_2 == 0 ||
        (((_DAT_01c00c58 <= _DAT_01bd1d8c && (_DAT_01bd1d8c < _DAT_01c00c60)) &&
         ((_DAT_01c00c5c <= _DAT_01bd1d90 && (_DAT_01bd1d90 < _DAT_01c00c64)))))))) {
      engine_2d_c_plotPixel_FUN_00401530(_DAT_01bd1d8c,_DAT_01bd1d90);
    }
    iVar3 = 1;
    while (iVar3 <= DAT_005b6d54 / 2) {
      iVar4 = _DAT_01bd1d8c - iVar3;
      iVar1 = _DAT_01bd1d90 - iVar3;
      if ((((-1 < iVar4) && (-1 < iVar1)) && (iVar4 < DAT_005b761c)) &&
         ((iVar1 < DAT_005b7620 &&
          ((param_2 == 0 ||
           (((_DAT_01c00c58 <= iVar4 && (iVar4 < _DAT_01c00c60)) &&
            ((_DAT_01c00c5c <= iVar1 && (iVar1 < _DAT_01c00c64)))))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar4,iVar1);
      }
      iVar4 = _DAT_01bd1d8c + iVar3;
      iVar1 = _DAT_01bd1d90 - iVar3;
      if ((((-1 < iVar4) && (-1 < iVar1)) && ((iVar4 < DAT_005b761c && (iVar1 < DAT_005b7620)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c00c58 <= iVar4 && (iVar4 < _DAT_01c00c60)) && (_DAT_01c00c5c <= iVar1)) &&
           (iVar1 < _DAT_01c00c64)))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar4,iVar1);
      }
      iVar1 = _DAT_01bd1d8c - iVar3;
      iVar4 = _DAT_01bd1d90 + iVar3;
      if ((((-1 < iVar1) && (-1 < iVar4)) && ((iVar1 < DAT_005b761c && (iVar4 < DAT_005b7620)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c00c58 <= iVar1 && (iVar1 < _DAT_01c00c60)) &&
           ((_DAT_01c00c5c <= iVar4 && (iVar4 < _DAT_01c00c64)))))))) {
        engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar4);
      }
      iVar1 = _DAT_01bd1d8c + iVar3;
      iVar4 = _DAT_01bd1d90 + iVar3;
      if (((((iVar1 < 0) || (iVar4 < 0)) || (DAT_005b761c <= iVar1)) || (DAT_005b7620 <= iVar4)) ||
         ((param_2 != 0 &&
          (((iVar1 < _DAT_01c00c58 || (_DAT_01c00c60 <= iVar1)) ||
           ((iVar4 < _DAT_01c00c5c || (_DAT_01c00c64 <= iVar4)))))))) {
        iVar3 = iVar3 + 1;
      }
      else {
        engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar4);
        iVar3 = iVar3 + 1;
      }
    }
  }
  else {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x7ba;
    core_main_c_FUN_004c8440("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}
