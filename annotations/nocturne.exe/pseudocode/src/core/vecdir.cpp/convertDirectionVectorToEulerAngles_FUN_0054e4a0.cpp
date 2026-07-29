// Name: core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
// Address: 0054e4a0
// Address Range: [[0054e4a0, 0054e538]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f *out_euler_angles,CVector3f *in_direction_vector)

#include "nocturne.h"

CVector3f * __cdecl core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f *out_euler_angles,CVector3f *in_direction_vector)

{
  int extraout_ECX;
  CVector3f *extraout_ECX_00;
  float *extraout_EDX;
  float10 fVar1;
  uint uStack_14;
  
  out_euler_angles->z = 0.0;
  if ((ABS(in_direction_vector->x) == 0.0) && (ABS(in_direction_vector->z) == 0.0)) {
    out_euler_angles->y = 0.0;
    if (0.0 < in_direction_vector->y) {
      uStack_14 = 0xbff921fb;
    }
    else {
      uStack_14 = 0x3ff921fb;
    }
    out_euler_angles->x = (float)__BITCAST_DOUBLE(CONCAT44(uStack_14,0x54411744));
    return out_euler_angles;
  }
  fVar1 = atan2
                    ((float10)in_direction_vector->x,(float10)in_direction_vector->z);
  *(float *)(extraout_ECX + 4) = (float)fVar1;
  fVar1 = atan2
                    ((float10)extraout_EDX[1],
                     SQRT((float10)*extraout_EDX * (float10)*extraout_EDX +
                          (float10)extraout_EDX[2] * (float10)extraout_EDX[2]));
  extraout_ECX_00->x = (float)-fVar1;
  return extraout_ECX_00;
}
