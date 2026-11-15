// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250
// Address: 0046d250
// Address Range: [[0046d250, 0046d2c1]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250(CDemonRenderer *this_ptr,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250(CDemonRenderer *this_ptr,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  byte bVar4;
  float afStack_1004 [1015];
  CVector3i local_28;
  float local_1c;
  float local_18 [2];
  int local_10;
  
  bVar4 = 0;
  engine_matrix_c_getCameraRotation_FUN_004e6ac0(&local_28);
  fVar2 = (float)_DAT_005bc563;
  fVar1 = (float)_DAT_005bc56b;
  local_1c = (float)local_28.x * fVar2 * fVar1;
  local_10 = local_28.z;
  local_18[1] = (float)local_28.y * fVar2 * fVar1;
  local_18[0] = (float)local_28.z * fVar2 * fVar1;
  pfVar3 = (float *)((int)output + (uint)bVar4 * -8 + 4);
  output->x = local_1c;
  *pfVar3 = local_18[(uint)bVar4 * -2];
  pfVar3[(uint)bVar4 * -2 + 1] = local_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  return output;
}
