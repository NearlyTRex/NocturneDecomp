// Name: shape_edittool.cpp_FUN_00492d40
// Address: 00492d40
// Address Range: [[00492d40, 00492dd4]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00492d40(int param_1,int param_2,int param_3,int param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00492d51) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00492d40(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (_DAT_01c3f544 == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  iVar1 = (param_5 & 0xff) * 3;
  engine_mini3d_cpp_FUN_00517d50
            ((uint)(byte)(&DAT_01c4e9fa)[iVar1] |
             (uint)(byte)(&DAT_01c4e9f8)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c4e9f9)[iVar1] << 8);
  engine_mini3d_cpp_FUN_00518010(param_1,param_2,param_3,param_4);
  return;
}
