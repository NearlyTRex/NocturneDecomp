// Name: shape_edittool.cpp_FUN_0047f210
// Address: 0047f210
// Address Range: [[0047f210, 0047fba7]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047f210(CEditorTools *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047f210(CEditorTools *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0(param_1);
  if (_DAT_01c25f84 != 0) {
    iVar4 = (uVar1 & 0xff) * 3;
    engine_mini3d_cpp_FUN_004f8e20
              ((uint)(byte)(&DAT_01c3583a)[iVar4] |
               (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar4] << 8)
    ;
    uVar1 = _DAT_01c35e60;
  }
  _DAT_01c35e60 = uVar1;
  if (_DAT_01c25f80 == 0) {
    if ((((-1 < _DAT_01c2a37c) && (-1 < _DAT_01c2a380)) &&
        ((_DAT_01c2a37c < DAT_006141b8 && (_DAT_01c2a380 < DAT_006141bc)))) &&
       ((param_2 == 0 ||
        ((((_DAT_01c35e48 <= _DAT_01c2a37c && (_DAT_01c2a37c < _DAT_01c35e50)) &&
          (_DAT_01c35e4c <= _DAT_01c2a380)) && (_DAT_01c2a380 < _DAT_01c35e54)))))) {
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(_DAT_01c2a37c,_DAT_01c2a380);
      }
      else {
        engine_mini3d_cpp_FUN_004f8fe0(_DAT_01c2a37c,_DAT_01c2a380);
      }
    }
    for (iVar4 = 1; iVar4 <= DAT_006138e4 / 2; iVar4 = iVar4 + 1) {
      iVar3 = _DAT_01c2a37c - iVar4;
      if ((((-1 < iVar3) && (-1 < _DAT_01c2a380)) &&
          ((iVar3 < DAT_006141b8 && (_DAT_01c2a380 < DAT_006141bc)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c35e48 <= iVar3 && (iVar3 < _DAT_01c35e50)) &&
           ((_DAT_01c35e4c <= _DAT_01c2a380 && (_DAT_01c2a380 < _DAT_01c35e54)))))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,_DAT_01c2a380);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(iVar3,_DAT_01c2a380);
        }
      }
      iVar3 = _DAT_01c2a37c + iVar4;
      if (((((-1 < iVar3) && (-1 < _DAT_01c2a380)) && (iVar3 < DAT_006141b8)) &&
          (_DAT_01c2a380 < DAT_006141bc)) &&
         ((param_2 == 0 ||
          (((_DAT_01c35e48 <= iVar3 && (iVar3 < _DAT_01c35e50)) &&
           ((_DAT_01c35e4c <= _DAT_01c2a380 && (_DAT_01c2a380 < _DAT_01c35e54)))))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,_DAT_01c2a380);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(iVar3,_DAT_01c2a380);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_006138e8 / 2) {
      iVar3 = _DAT_01c2a380 - iVar4;
      if ((((-1 < _DAT_01c2a37c) && (-1 < iVar3)) &&
          ((_DAT_01c2a37c < DAT_006141b8 && (iVar3 < DAT_006141bc)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c35e48 <= _DAT_01c2a37c && (_DAT_01c2a37c < _DAT_01c35e50)) &&
            (_DAT_01c35e4c <= iVar3)) && (iVar3 < _DAT_01c35e54)))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(_DAT_01c2a37c,iVar3);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(_DAT_01c2a37c,iVar3);
        }
      }
      iVar3 = _DAT_01c2a380 + iVar4;
      if ((((_DAT_01c2a37c < 0) || (iVar3 < 0)) ||
          ((DAT_006141b8 <= _DAT_01c2a37c || (DAT_006141bc <= iVar3)))) ||
         ((param_2 != 0 &&
          (((_DAT_01c2a37c < _DAT_01c35e48 || (_DAT_01c35e50 <= _DAT_01c2a37c)) ||
           ((iVar3 < _DAT_01c35e4c || (_DAT_01c35e54 <= iVar3)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(_DAT_01c2a37c,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_FUN_004f8fe0(_DAT_01c2a37c,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (_DAT_01c25f80 < 2) {
    iVar5 = _DAT_01c2a380 - DAT_006138e8 / 2;
    iVar3 = DAT_006138e8 + iVar5 + -1;
    iVar4 = iVar5;
    while (iVar4 = iVar4 + 1, iVar4 < iVar3) {
      if (((((-1 < _DAT_01c2a37c) && (-1 < iVar4)) && (_DAT_01c2a37c < DAT_006141b8)) &&
          (iVar4 < DAT_006141bc)) &&
         ((param_2 == 0 ||
          (((_DAT_01c35e48 <= _DAT_01c2a37c && (_DAT_01c2a37c < _DAT_01c35e50)) &&
           ((_DAT_01c35e4c <= iVar4 && (iVar4 < _DAT_01c35e54)))))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(_DAT_01c2a37c,iVar4);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(_DAT_01c2a37c,iVar4);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_006138e4 / 2) {
      iVar2 = _DAT_01c2a37c - iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < DAT_006141b8 && (iVar5 < DAT_006141bc)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c35e48 <= iVar2 && (iVar2 < _DAT_01c35e50)) && (_DAT_01c35e4c <= iVar5)) &&
           (iVar5 < _DAT_01c35e54)))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar5);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(iVar2,iVar5);
        }
      }
      iVar2 = _DAT_01c2a37c + iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < DAT_006141b8 && (iVar5 < DAT_006141bc)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c35e48 <= iVar2 && (iVar2 < _DAT_01c35e50)) &&
           ((_DAT_01c35e4c <= iVar5 && (iVar5 < _DAT_01c35e54)))))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar5);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(iVar2,iVar5);
        }
      }
      iVar2 = _DAT_01c2a37c - iVar4;
      if (((((-1 < iVar2) && (-1 < iVar3)) && (iVar2 < DAT_006141b8)) && (iVar3 < DAT_006141bc)) &&
         ((param_2 == 0 ||
          (((_DAT_01c35e48 <= iVar2 && (iVar2 < _DAT_01c35e50)) &&
           ((_DAT_01c35e4c <= iVar3 && (iVar3 < _DAT_01c35e54)))))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar3);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(iVar2,iVar3);
        }
      }
      iVar2 = _DAT_01c2a37c + iVar4;
      if ((((iVar2 < 0) || (iVar3 < 0)) || ((DAT_006141b8 <= iVar2 || (DAT_006141bc <= iVar3)))) ||
         ((param_2 != 0 &&
          ((((iVar2 < _DAT_01c35e48 || (_DAT_01c35e50 <= iVar2)) || (iVar3 < _DAT_01c35e4c)) ||
           (_DAT_01c35e54 <= iVar3)))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_FUN_004f8fe0(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (_DAT_01c25f80 == 2) {
    if ((((-1 < _DAT_01c2a37c) && (-1 < _DAT_01c2a380)) &&
        ((_DAT_01c2a37c < DAT_006141b8 && (_DAT_01c2a380 < DAT_006141bc)))) &&
       ((param_2 == 0 ||
        (((_DAT_01c35e48 <= _DAT_01c2a37c && (_DAT_01c2a37c < _DAT_01c35e50)) &&
         ((_DAT_01c35e4c <= _DAT_01c2a380 && (_DAT_01c2a380 < _DAT_01c35e54)))))))) {
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(_DAT_01c2a37c,_DAT_01c2a380);
      }
      else {
        engine_mini3d_cpp_FUN_004f8fe0(_DAT_01c2a37c,_DAT_01c2a380);
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_006138e4 / 2) {
      iVar5 = _DAT_01c2a37c - iVar4;
      iVar3 = _DAT_01c2a380 - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && (iVar5 < DAT_006141b8)) &&
         ((iVar3 < DAT_006141bc &&
          ((param_2 == 0 ||
           (((_DAT_01c35e48 <= iVar5 && (iVar5 < _DAT_01c35e50)) &&
            ((_DAT_01c35e4c <= iVar3 && (iVar3 < _DAT_01c35e54)))))))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar5,iVar3);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(iVar5,iVar3);
        }
      }
      iVar3 = _DAT_01c2a37c + iVar4;
      iVar5 = _DAT_01c2a380 - iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < DAT_006141b8 && (iVar5 < DAT_006141bc)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c35e48 <= iVar3 && (iVar3 < _DAT_01c35e50)) && (_DAT_01c35e4c <= iVar5)) &&
           (iVar5 < _DAT_01c35e54)))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(iVar3,iVar5);
        }
      }
      iVar5 = _DAT_01c2a37c - iVar4;
      iVar3 = _DAT_01c2a380 + iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && ((iVar5 < DAT_006141b8 && (iVar3 < DAT_006141bc)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c35e48 <= iVar5 && (iVar5 < _DAT_01c35e50)) &&
           ((_DAT_01c35e4c <= iVar3 && (iVar3 < _DAT_01c35e54)))))))) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar5,iVar3);
        }
        else {
          engine_mini3d_cpp_FUN_004f8fe0(iVar5,iVar3);
        }
      }
      iVar3 = _DAT_01c2a37c + iVar4;
      iVar5 = _DAT_01c2a380 + iVar4;
      if (((((iVar3 < 0) || (iVar5 < 0)) || (DAT_006141b8 <= iVar3)) || (DAT_006141bc <= iVar5)) ||
         ((param_2 != 0 &&
          (((iVar3 < _DAT_01c35e48 || (_DAT_01c35e50 <= iVar3)) ||
           ((iVar5 < _DAT_01c35e4c || (_DAT_01c35e54 <= iVar5)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
      else {
        engine_mini3d_cpp_FUN_004f8fe0(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x9a7;
    core_main_c_FUN_004e4500("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}
