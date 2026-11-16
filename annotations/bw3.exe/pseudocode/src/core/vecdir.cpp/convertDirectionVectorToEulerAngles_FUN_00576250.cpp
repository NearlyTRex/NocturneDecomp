// Name: core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
// Address: 00576250
// Address Range: [[00576250, 005762e2]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(CVector3f *in_direction_vector,CVector3f *out_euler_angles)

#include "nocturne.h"

CVector3f * __stack_esi core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(CVector3f *in_direction_vector,CVector3f *out_euler_angles)

{
  CVector3f *extraout_ECX;
  float *extraout_EDX;
  float *pfVar1;
  byte bVar2;
  float10 x;
  float10 fVar3;
  float afStack_1008 [1022];
  uint local_10;
  float local_c;
  
  bVar2 = 0;
  local_10 = 0;
  if ((ABS(in_direction_vector->x) == 0.0) && (ABS(in_direction_vector->z) == 0.0)) {
    if (0.0 < in_direction_vector->y) {
      local_c = -1.5707964;
    }
    else {
      local_c = 1.5707964;
    }
    out_euler_angles->x = local_c;
    out_euler_angles->y = 0.0;
    out_euler_angles->z = 0.0;
    return out_euler_angles;
  }
  afStack_1008[0x3fb] = 8.025096e-39;
  atan2((float10)in_direction_vector->x,(float10)in_direction_vector->z);
  x = SQRT((float10)*extraout_EDX * (float10)*extraout_EDX +
           (float10)extraout_EDX[2] * (float10)extraout_EDX[2]);
  fVar3 = atan2((float10)extraout_EDX[1],x);
  afStack_1008[0x3fb] = (float)x;
  pfVar1 = (float *)((int)extraout_ECX + (uint)bVar2 * -8 + 4);
  extraout_ECX->x = (float)-fVar3;
  *pfVar1 = afStack_1008[(uint)bVar2 * -2 + 0x3fb];
  pfVar1[(uint)bVar2 * -2 + 1] = afStack_1008[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
  return extraout_ECX;
}
