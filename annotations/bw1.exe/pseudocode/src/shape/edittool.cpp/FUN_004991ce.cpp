// Name: shape_edittool.cpp_FUN_004991ce
// Address: 004991ce
// Address Range: [[004991ce, 00499242]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004991ce(undefined4 param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004991ce(uint param_1,float *param_2,uint param_3)

{
  SProjectedVertex aSStack_40 [16];
  uint uStack_30;
  int iStack_2c;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_10 = (int)ROUND(*param_2 * _DAT_005ff7ec);
  iStack_c = (int)ROUND(param_2[1] * _DAT_005ff7ec);
  iStack_8 = (int)ROUND(param_2[2] * _DAT_005ff7ec);
  engine_special_cpp_FUN_00580173(aSStack_40,(CVector3i *)&iStack_10);
  if ((uStack_30 & 0x80000000) != 0) {
    return;
  }
  shape_edittool_cpp_FUN_00498f10(param_1,(int)uStack_30 >> 0x10,iStack_2c >> 0x10,param_3);
  return;
}
