// Name: shape_edittool.cpp_draw3DInsetBorder_FUN_00476310
// Address: 00476310
// Address Range: [[00476310, 00476443]]
// Convention: unknown
// Signature: int shape_edittool_cpp_draw3DInsetBorder_FUN_00476310(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int shape_edittool_cpp_draw3DInsetBorder_FUN_00476310(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  _DAT_01c00c70 = 0;
  if ((param_6 == 0) || (param_6 == 1)) {
    iVar4 = (param_1 + param_3 + -1) / 2 + param_5;
    iVar2 = (param_4 - param_2) / 3;
    iVar1 = iVar4 + iVar2;
    if (param_6 == 0) {
      param_5 = param_5 + param_2 + iVar2 + 1;
      iVar5 = iVar4;
      if (0 < iVar2) {
        do {
          iVar3 = iVar4 + 1;
          iVar2 = engine_2d_c_drawHLine_FUN_00403bd0(iVar5,param_5,iVar4);
          param_5 = param_5 + 1;
          iVar4 = iVar3;
          iVar5 = iVar5 + -1;
        } while (iVar3 < iVar1);
      }
    }
    else {
      param_5 = (param_4 - iVar2) + -2 + param_5;
      iVar5 = iVar4;
      if (0 < iVar2) {
        do {
          iVar3 = iVar4 + 1;
          iVar2 = engine_2d_c_drawHLine_FUN_00403bd0(iVar5,param_5,iVar4);
          param_5 = param_5 + -1;
          iVar4 = iVar3;
          iVar5 = iVar5 + -1;
        } while (iVar3 < iVar1);
        return iVar2;
      }
    }
  }
  else {
    iVar4 = (param_2 + param_4 + -1) / 2 + param_5;
    iVar2 = (param_3 - param_1) / 3;
    iVar1 = iVar4 + iVar2;
    if (param_6 == 2) {
      param_5 = param_1 + iVar2 + 1 + param_5;
      iVar5 = iVar4;
      if (0 < iVar2) {
        do {
          iVar3 = iVar4 + 1;
          iVar2 = engine_2d_c_drawVLine_FUN_00403ce0(param_5,iVar5,iVar4);
          param_5 = param_5 + 1;
          iVar4 = iVar3;
          iVar5 = iVar5 + -1;
        } while (iVar3 < iVar1);
        return iVar2;
      }
    }
    else {
      param_5 = param_5 + (param_3 - iVar2) + -2;
      iVar5 = iVar4;
      if (0 < iVar2) {
        do {
          iVar3 = iVar4 + 1;
          iVar2 = engine_2d_c_drawVLine_FUN_00403ce0(param_5,iVar5,iVar4);
          param_5 = param_5 + -1;
          iVar4 = iVar3;
          iVar5 = iVar5 + -1;
        } while (iVar3 < iVar1);
        return iVar2;
      }
    }
  }
  return iVar2;
}
