// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
// Address: 0048c800
// Address Range: [[0048c800, 0048c861]]
// Convention: __cdecl
// Signature: float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)

#include "nocturne.h"

float * __cdecl
engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
          (CDemonRenderer *this_ptr,float *output)

{
  float fVar1;
  float fVar2;
  CVector3i local_1c;
  
  engine_matrix_c_getCameraRotation_FUN_0050e2f0(&local_1c);
  fVar2 = (float)3.0517578125e-05;
  fVar1 = (float)3.1415926535000001;
  *output = (float)local_1c.x * fVar2 * fVar1;
  output[2] = (float)local_1c.y * fVar2 * fVar1;
  output[1] = fVar1 * (float)local_1c.z * fVar2;
  return output;
}
