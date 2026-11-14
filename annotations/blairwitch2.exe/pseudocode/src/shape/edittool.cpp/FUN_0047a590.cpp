// Name: shape_edittool.cpp_FUN_0047a590
// Address: 0047a590
// Address Range: [[0047a590, 0047a717]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047a590(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047a590(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if (param_3 < param_1) {
    param_1 = param_3;
    param_3 = iVar1;
  }
  if (param_4 < param_2) {
    param_2 = param_4;
    param_4 = iVar2;
  }
  iVar1 = 1;
  if (param_1 < param_3) {
    iVar2 = param_1;
    do {
      if (iVar1 % (param_5 * 2) < param_5) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(iVar2,param_2);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(iVar2,param_2);
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < param_3);
  }
  if (param_2 < param_4) {
    iVar2 = param_2;
    do {
      if (iVar1 % (param_5 * 2) < param_5) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(param_3,iVar2);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(param_3,iVar2);
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < param_4);
  }
  if (param_1 < param_3) {
    do {
      if (iVar1 % (param_5 * 2) < param_5) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(param_3,param_4);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(param_3,param_4);
        }
      }
      param_3 = param_3 + -1;
      iVar1 = iVar1 + 1;
    } while (param_1 < param_3);
  }
  if (param_2 < param_4) {
    do {
      if (iVar1 % (param_5 * 2) < param_5) {
        if (_DAT_01c25f84 == 0) {
          engine_2d_c_plotPixel_FUN_00401130(param_1,param_4);
        }
        else {
          engine_mini3d_cpp_drawPixel_FUN_004f8fe0(param_1,param_4);
        }
      }
      param_4 = param_4 + -1;
      iVar1 = iVar1 + 1;
    } while (param_2 < param_4);
  }
  return;
}
