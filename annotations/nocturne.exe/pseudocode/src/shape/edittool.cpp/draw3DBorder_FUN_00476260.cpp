// Name: shape_edittool.cpp_draw3DBorder_FUN_00476260
// Address: 00476260
// Address Range: [[00476260, 00476302]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00476260(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00476260(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_5 == 0) {
    _DAT_01c00c70 = 0xff;
  }
  else {
    _DAT_01c00c70 = 0xf8;
  }
  engine_2d_c_drawHLine_FUN_00403bd0(param_1,param_2,param_3 + -1);
  engine_2d_c_drawVLine_FUN_00403ce0(param_1,param_2,param_4 + -1);
  if (param_5 == 0) {
    _DAT_01c00c70 = 0xf8;
  }
  else {
    _DAT_01c00c70 = 0xff;
  }
  engine_2d_c_drawHLine_FUN_00403bd0(param_1,param_4 + -1,param_3 + -1);
  engine_2d_c_drawVLine_FUN_00403ce0(param_3 + -1,param_2,param_4 + -1);
  engine_2d_c_fillRectColor_FUN_00403e60(param_1 + 1,param_2 + 1,param_3 + -2,param_4 + -2,7);
  return;
}
