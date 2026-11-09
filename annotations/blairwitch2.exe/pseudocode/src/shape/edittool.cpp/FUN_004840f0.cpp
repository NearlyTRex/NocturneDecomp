// Name: shape_edittool.cpp_FUN_004840f0
// Address: 004840f0
// Address Range: [[004840f0, 0048430d]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004840f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004840f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_01c25f84 == 0) {
    _DAT_01c35e60 = _DAT_01c263fc;
  }
  else {
    iVar3 = (_DAT_01c263fc & 0xff) * 3;
    engine_mini3d_cpp_FUN_004f8e20
              ((uint)(byte)(&DAT_01c3583a)[iVar3] |
               (uint)(byte)(&DAT_01c35839)[iVar3] << 8 | (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10)
    ;
  }
  if ((param_6 == 0) || (param_6 == 1)) {
    iVar3 = (param_1 + param_3 + -1) / 2 + param_5;
    iVar2 = (param_4 - param_2) / 3;
    iVar1 = iVar3 + iVar2;
    if (param_6 == 0) {
      param_5 = param_5 + param_2 + 1 + iVar2;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          while (_DAT_01c25f84 != 0) {
            engine_mini3d_cpp_FUN_004f9390(iVar4,param_5,iVar3);
            iVar3 = iVar3 + 1;
            param_5 = param_5 + 1;
            iVar4 = iVar4 + -1;
            if (iVar1 <= iVar3) {
              return;
            }
          }
          engine_2d_c_drawHLine_FUN_00402f30(iVar4,param_5,iVar3);
          iVar3 = iVar3 + 1;
          param_5 = param_5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar3 < iVar1);
      }
    }
    else {
      param_5 = (param_4 - iVar2) + -2 + param_5;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          while (_DAT_01c25f84 == 0) {
            engine_2d_c_drawHLine_FUN_00402f30(iVar4,param_5,iVar3);
            iVar4 = iVar4 + -1;
            iVar3 = iVar3 + 1;
            param_5 = param_5 + -1;
            if (iVar1 <= iVar3) {
              return;
            }
          }
          engine_mini3d_cpp_FUN_004f9390(iVar4,param_5,iVar3);
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + 1;
          param_5 = param_5 + -1;
        } while (iVar3 < iVar1);
      }
    }
  }
  else {
    iVar3 = (param_2 + param_4 + -1) / 2 + param_5;
    iVar2 = (param_3 - param_1) / 3;
    iVar1 = iVar3 + iVar2;
    if (param_6 == 2) {
      param_5 = param_1 + iVar2 + 1 + param_5;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          while (_DAT_01c25f84 == 0) {
            engine_2d_c_drawVLine_FUN_00403040(param_5,iVar4,iVar3);
            param_5 = param_5 + 1;
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
            if (iVar1 <= iVar3) {
              return;
            }
          }
          engine_mini3d_cpp_FUN_004f93b0(param_5,iVar4,iVar3);
          param_5 = param_5 + 1;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar3 < iVar1);
      }
    }
    else {
      param_5 = (param_3 - iVar2) + -2 + param_5;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          while (_DAT_01c25f84 == 0) {
            engine_2d_c_drawVLine_FUN_00403040(param_5,iVar4,iVar3);
            param_5 = param_5 + -1;
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
            if (iVar1 <= iVar3) {
              return;
            }
          }
          engine_mini3d_cpp_FUN_004f93b0(param_5,iVar4,iVar3);
          param_5 = param_5 + -1;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar3 < iVar1);
      }
    }
  }
  return;
}
