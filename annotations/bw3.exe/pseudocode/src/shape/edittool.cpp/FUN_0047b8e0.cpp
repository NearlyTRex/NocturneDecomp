// Name: shape_edittool.cpp_FUN_0047b8e0
// Address: 0047b8e0
// Address Range: [[0047b8e0, 0047b974]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047b8e0(int param_1,int param_2,int param_3,int param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047b8f1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047b8e0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (_DAT_01c5baec == 0) {
    engine_2d_c_fillRectColor_FUN_004031c0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  iVar1 = (param_5 & 0xff) * 3;
  engine_mini3d_cpp_FUN_004f3520
            ((uint)(byte)(&DAT_01c6af9a)[iVar1] |
             (uint)(byte)(&DAT_01c6af98)[iVar1] << 0x10 | (uint)(byte)(&DAT_01c6af99)[iVar1] << 8);
  engine_mini3d_cpp_FUN_004f37e0(param_1,param_2,param_3,param_4);
  return;
}
