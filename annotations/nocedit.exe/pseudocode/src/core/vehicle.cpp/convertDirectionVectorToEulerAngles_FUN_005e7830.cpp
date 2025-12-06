// Name: core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
// Address: 005e7830
// Address Range: [[005e7830, 005e78c8]]
// Convention: __cdecl
// Signature: CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)

#include "nocturne.h"

CVector3f * __cdecl
core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
          (CVector3f *out_euler_angles,CVector3f *in_direction_vector)

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
    out_euler_angles->x = (float)(double)CONCAT44 /* combine 2-byte values */(uStack_14,0x54411744);
    return out_euler_angles;
  }
  fVar1 = crt_math_c_atan2_FUN_006013b1
                    ((float10)in_direction_vector->x,(float10)in_direction_vector->z);
  *(float *)(extraout_ECX + 4) = (float)fVar1;
  fVar1 = crt_math_c_atan2_FUN_006013b1
                    ((float10)extraout_EDX[1],
                     SQRT((float10)*extraout_EDX * (float10)*extraout_EDX +
                          (float10)extraout_EDX[2] * (float10)extraout_EDX[2]));
  extraout_ECX_00->x = (float)-fVar1;
  return extraout_ECX_00;
}
