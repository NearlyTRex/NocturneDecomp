// Name: engine_mini3d.cpp_FUN_004f5c50
// Address: 004f5c50
// Address Range: [[004f5c50, 004f5d46]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f5c50(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f5c50(uint *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0;
  engine_mini3d_cpp_FUN_004f4f50(param_2,&fStack_40);
  fVar1 = fStack_40 * _DAT_005dde4c - _DAT_00618118;
  fVar2 = fStack_3c * _DAT_005dde4c - _DAT_00618118;
  fVar3 = fStack_38 * _DAT_005dde4c - _DAT_00618118;
  fVar4 = fStack_34 * _DAT_005dde4c - _DAT_00618118;
  param_1[5] = 0;
  param_1[4] = (int)ROUND(fVar3) << 0x10 | (int)ROUND(fVar2) << 8 | (int)ROUND(fVar1) |
               (int)ROUND(fVar4) << 0x18;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  return;
}
