// Name: shape_edittool.cpp_FUN_00480720
// Address: 00480720
// Address Range: [[00480720, 004807bd]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00480720(undefined4 param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00480720(uint param_1,float *param_2,uint param_3)

{
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  fStack_48 = *param_2 * _DAT_005d24f7;
  fStack_44 = param_2[1] * _DAT_005d24f7;
  fStack_40 = param_2[2] * _DAT_005d24f7;
  fStack_24 = -*param_2;
  fStack_20 = -param_2[1];
  fStack_1c = -param_2[2];
  fStack_30 = fStack_24 * _DAT_005d24f7;
  fStack_2c = fStack_20 * _DAT_005d24f7;
  fStack_28 = fStack_1c * _DAT_005d24f7;
  fStack_3c = fStack_48;
  fStack_38 = fStack_44;
  fStack_34 = fStack_40;
  fStack_18 = fStack_30;
  fStack_14 = fStack_2c;
  fStack_10 = fStack_28;
  shape_edittool_cpp_FUN_00480150(param_1,&fStack_30,&fStack_48,param_3);
  return;
}
