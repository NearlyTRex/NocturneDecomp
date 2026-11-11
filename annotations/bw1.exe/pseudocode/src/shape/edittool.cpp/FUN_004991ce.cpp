// Name: shape_edittool.cpp_FUN_004991ce
// Address: 004991ce
// Address Range: [[004991ce, 00499242]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004991ce(undefined4 param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004991ce(uint param_1,float *param_2,uint param_3)

{
  SProjectedVertex aSStack_40 [2];
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(*param_2 * _DAT_005ff7ec);
  CStack_10.y = (int)ROUND(param_2[1] * _DAT_005ff7ec);
  CStack_10.z = (int)ROUND(param_2[2] * _DAT_005ff7ec);
  engine_special_cpp_FUN_00580173(aSStack_40,&CStack_10);
  if ((aSStack_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_FUN_00498f10
            (param_1,aSStack_40[0].screen_x >> 0x10,aSStack_40[0].screen_y >> 0x10,param_3);
  return;
}
