// Name: engine_mini3d.cpp_FUN_00513940
// Address: 00513940
// Address Range: [[00513940, 00513a51]]
// Convention: unknown
// Signature: undefined4 engine_mini3d_cpp_FUN_00513940(float *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_mini3d_cpp_FUN_00513940(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1 - _DAT_01d2257c[9];
  fVar4 = param_1[1] - _DAT_01d2257c[10];
  fVar3 = param_1[2] - _DAT_01d2257c[0xb];
  fVar6 = param_2 * _DAT_005e8e83 * _DAT_01d22528;
  fVar2 = fVar3 * _DAT_01d2257c[8] + fVar4 * _DAT_01d2257c[5] + fVar1 * _DAT_01d2257c[2];
  if ((((0.0 <= fVar2 + fVar6) && (fVar2 - fVar6 <= _DAT_01d22574)) &&
      (fVar5 = fVar3 * _DAT_01d2257c[6] + fVar1 * *_DAT_01d2257c + fVar4 * _DAT_01d2257c[3],
      fVar5 - fVar6 <= fVar2)) &&
     (((-fVar2 <= fVar5 + fVar6 &&
       (fVar1 = fVar3 * _DAT_01d2257c[7] + fVar4 * _DAT_01d2257c[4] + fVar1 * _DAT_01d2257c[1],
       fVar1 - fVar6 <= fVar2)) && (-fVar2 <= fVar1 + fVar6)))) {
    return 1;
  }
  return 0;
}
