// Name: shape_edittool.cpp_FUN_0047a890
// Address: 0047a890
// Address Range: [[0047a890, 0047a924]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047a890(int param_1,int param_2,int param_3,int param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047a8a1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047a890(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (_DAT_01c25f84 == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  iVar1 = (param_5 & 0xff) * 3;
  engine_mini3d_cpp_FUN_004f8e20
            ((uint)(byte)(&DAT_01c3583a)[iVar1] |
             (uint)(byte)(&DAT_01c35838)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar1] << 8);
  engine_mini3d_cpp_FUN_004f90d0(param_1,param_2,param_3,param_4);
  return;
}
