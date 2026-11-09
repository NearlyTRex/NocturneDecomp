// Name: shape_edittool.cpp_FUN_00481d6e
// Address: 00481d6e
// Address Range: [[00481d6e, 00481de2]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00481d6e(undefined4 param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00481d6e(uint param_1,float *param_2,uint param_3)

{
  SProjectedVertex aSStack_40 [16];
  uint uStack_30;
  int iStack_2c;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_10 = (int)ROUND(*param_2 * _DAT_005deffc);
  iStack_c = (int)ROUND(param_2[1] * _DAT_005deffc);
  iStack_8 = (int)ROUND(param_2[2] * _DAT_005deffc);
  engine_special_cpp_FUN_005632a3(aSStack_40,(CVector3i *)&iStack_10);
  if ((uStack_30 & 0x80000000) != 0) {
    return;
  }
  shape_edittool_cpp_FUN_00481ab0(param_1,(int)uStack_30 >> 0x10,iStack_2c >> 0x10,param_3);
  return;
}
