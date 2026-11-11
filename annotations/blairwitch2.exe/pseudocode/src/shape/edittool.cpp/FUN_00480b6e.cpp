// Name: shape_edittool.cpp_FUN_00480b6e
// Address: 00480b6e
// Address Range: [[00480b6e, 00480be2]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00480b6e(undefined4 param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00480b6e(uint param_1,float *param_2,uint param_3)

{
  SProjectedVertex aSStack_40 [2];
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(*param_2 * _DAT_005f5cec);
  CStack_10.y = (int)ROUND(param_2[1] * _DAT_005f5cec);
  CStack_10.z = (int)ROUND(param_2[2] * _DAT_005f5cec);
  engine_special_cpp_FUN_0055d723(aSStack_40,&CStack_10);
  if ((aSStack_40[0].screen_x & 0x80000000U) != 0) {
    return;
  }
  shape_edittool_cpp_FUN_004808b0
            (param_1,aSStack_40[0].screen_x >> 0x10,aSStack_40[0].screen_y >> 0x10,param_3);
  return;
}
