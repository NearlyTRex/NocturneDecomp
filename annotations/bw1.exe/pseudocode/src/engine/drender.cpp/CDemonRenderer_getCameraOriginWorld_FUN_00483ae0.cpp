// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0
// Address: 00483ae0
// Address Range: [[00483ae0, 00483b43]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0(CDemonRenderer *this_ptr,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0(CDemonRenderer *this_ptr,CVector3f *output)

{
  float fVar1;
  float *pfVar2;
  byte bVar3;
  float afStack_1004 [1015];
  CVector3i local_28;
  float local_1c;
  float local_18 [2];
  int local_10;
  
  bVar3 = 0;
  engine_matrix_c_getCameraOrigin_FUN_00509050(&local_28);
  fVar1 = (float)_DAT_005db3c4;
  local_10 = local_28.z;
  local_1c = (float)local_28.x * fVar1;
  local_18[0] = (float)local_28.y * fVar1;
  local_18[1] = (float)local_28.z * fVar1;
  pfVar2 = (float *)((int)output + (uint)bVar3 * -8 + 4);
  output->x = (float)local_28.x * fVar1;
  *pfVar2 = local_18[(uint)bVar3 * -2];
  pfVar2[(uint)bVar3 * -2 + 1] = local_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  return output;
}
