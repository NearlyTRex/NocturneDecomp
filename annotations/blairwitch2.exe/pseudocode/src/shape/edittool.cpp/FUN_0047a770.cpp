// Name: shape_edittool.cpp_FUN_0047a770
// Address: 0047a770
// Address Range: [[0047a770, 0047a88c]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047a770(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047a79c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047a770(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  if (_DAT_01c25f84 == 0) {
    engine_2d_c_fillRectWithBorder_FUN_00403250(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  iVar1 = (param_6 & 0xff) * 3;
  engine_mini3d_cpp_FUN_004f8e20
            ((uint)(byte)(&DAT_01c3583a)[iVar1] |
             (uint)(byte)(&DAT_01c35838)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar1] << 8);
  engine_mini3d_cpp_FUN_004f9340(param_1 + -1,param_2 + -1,param_3 + 1,param_4 + 1);
  if (_DAT_01c25f84 == 0) {
    _DAT_01c35e60 = param_5;
    engine_mini3d_cpp_FUN_004f90d0(param_1,param_2,param_3,param_4);
    return;
  }
  iVar1 = (param_5 & 0xff) * 3;
  engine_mini3d_cpp_FUN_004f8e20
            ((uint)(byte)(&DAT_01c35838)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c35839)[iVar1] << 8 |
             (uint)(byte)(&DAT_01c3583a)[iVar1]);
  engine_mini3d_cpp_FUN_004f90d0(param_1,param_2,param_3,param_4);
  return;
}
