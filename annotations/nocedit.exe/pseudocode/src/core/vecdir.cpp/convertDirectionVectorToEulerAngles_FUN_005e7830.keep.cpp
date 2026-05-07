// Name: core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
// Address: 005e7830
// MANUAL RECONSTRUCTION
// Address Range: [[005e7830, 005e78c8]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f *out_euler_angles,CVector3f *in_direction_vector)

#include "nocturne.h"

CVector3f * __cdecl core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f *out_euler_angles,CVector3f *in_direction_vector)

{
  float10 fVar1;
  float10 fVar2;

  out_euler_angles->z = 0.0;
  if ((ABS(in_direction_vector->x) == 0.0) && (ABS(in_direction_vector->z) == 0.0)) {
    out_euler_angles->y = 0.0;
    if (0.0 < in_direction_vector->y) {
      out_euler_angles->x = (float)-1.5707963267948966;
    }
    else {
      out_euler_angles->x = (float)1.5707963267948966;
    }
    return out_euler_angles;
  }
  fVar2 = (float10)fpatan((float10)in_direction_vector->x,(float10)in_direction_vector->z);
  out_euler_angles->y = (float)fVar2;
  fVar1 = (float10)fpatan((float10)in_direction_vector->y,
                          SQRT((float10)in_direction_vector->x * (float10)in_direction_vector->x +
                               (float10)in_direction_vector->z * (float10)in_direction_vector->z));
  out_euler_angles->x = (float)-fVar1;
  return out_euler_angles;
}
