// Name: core_boneguy.cpp_hsvToRgb_FUN_00418480
// Address: 00418480
// Address Range: [[00418480, 00418627]]
// Convention: __cdecl
// Signature: float * __cdecl core_boneguy_cpp_hsvToRgb_FUN_00418480(float *param_1,float *param_2)

#include "nocturne.h"

float * __cdecl core_boneguy_cpp_hsvToRgb_FUN_00418480(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float local_34;
  float local_20;
  float local_1c;
  float local_14;
  
  fVar1 = param_2[1];
  fVar6 = param_2[2];
  if (0.0 < fVar1) {
    fVar5 = *param_2 * (float)0.023529411764705899;
    dVar4 = (double)floor((double)fVar5);
    fVar7 = (float10)round((float10)dVar4);
    fVar2 = (1.0 - local_34) * fVar5;
    fVar1 = fVar1 - (float)(int)ROUND(fVar7);
    fVar3 = (1.0 - local_34 * fVar1) * fVar5;
    fVar1 = (1.0 - (1.0 - fVar1) * local_34) * fVar5;
    fVar6 = local_20;
    switch(((int)ROUND(fVar7) + 600) % 6) {
    case 0:
      fVar6 = fVar2;
      local_1c = fVar5;
      local_14 = fVar1;
      break;
    case 1:
      fVar6 = fVar2;
      local_1c = fVar3;
      local_14 = fVar5;
      break;
    case 2:
      fVar6 = fVar1;
      local_1c = fVar2;
      local_14 = fVar5;
      break;
    case 3:
      fVar6 = fVar5;
      local_1c = fVar2;
      local_14 = fVar3;
      break;
    case 4:
      fVar6 = fVar5;
      local_1c = fVar1;
      local_14 = fVar2;
      break;
    case 5:
      fVar6 = fVar3;
      local_1c = fVar5;
      local_14 = fVar2;
    }
  }
  local_20 = fVar6;
  *param_1 = local_1c;
  param_1[1] = local_14;
  param_1[2] = local_20;
  return param_1;
}
