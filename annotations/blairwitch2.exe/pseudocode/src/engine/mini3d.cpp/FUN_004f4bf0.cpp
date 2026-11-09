// Name: engine_mini3d.cpp_FUN_004f4bf0
// Address: 004f4bf0
// Address Range: [[004f4bf0, 004f4d01]]
// Convention: unknown
// Signature: undefined4 engine_mini3d_cpp_FUN_004f4bf0(float *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_mini3d_cpp_FUN_004f4bf0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1 - _DAT_01d09918[9];
  fVar4 = param_1[1] - _DAT_01d09918[10];
  fVar3 = param_1[2] - _DAT_01d09918[0xb];
  fVar6 = param_2 * _DAT_005dde3c * _DAT_01d098c8;
  fVar2 = fVar3 * _DAT_01d09918[8] + fVar4 * _DAT_01d09918[5] + fVar1 * _DAT_01d09918[2];
  if ((((0.0 <= fVar2 + fVar6) && (fVar2 - fVar6 <= _DAT_01d09910)) &&
      (fVar5 = fVar3 * _DAT_01d09918[6] + fVar1 * *_DAT_01d09918 + fVar4 * _DAT_01d09918[3],
      fVar5 - fVar6 <= fVar2)) &&
     (((-fVar2 <= fVar5 + fVar6 &&
       (fVar1 = fVar3 * _DAT_01d09918[7] + fVar4 * _DAT_01d09918[4] + fVar1 * _DAT_01d09918[1],
       fVar1 - fVar6 <= fVar2)) && (-fVar2 <= fVar1 + fVar6)))) {
    return 1;
  }
  return 0;
}
