// Name: shape_edittool.cpp_FUN_00492c20
// Address: 00492c20
// Address Range: [[00492c20, 00492d3c]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00492c20(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00492c4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00492c20(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  iVar1 = (param_6 & 0xff) * 3;
  engine_mini3d_cpp_setColor_FUN_00517d50
            ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
             (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8);
  engine_mini3d_cpp_drawRect_FUN_00518290(param_1 + -1,param_2 + -1,param_3 + 1,param_4 + 1);
  if (_DAT_01c3f544 == 0) {
    _DAT_01c4f020 = param_5;
    engine_mini3d_cpp_fillRect_FUN_00518010(param_1,param_2,param_3,param_4);
    return;
  }
  iVar1 = (param_5 & 0xff) * 3;
  engine_mini3d_cpp_setColor_FUN_00517d50
            ((uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8 |
             (uint)(byte)(&DAT_01c4e9fa)[iVar1]);
  engine_mini3d_cpp_fillRect_FUN_00518010(param_1,param_2,param_3,param_4);
  return;
}
