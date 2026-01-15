// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
// Address: 0048c780
// Address Range: [[0048c780, 0048c7d3]]
// Convention: __cdecl
// Signature: float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)

#include "nocturne.h"

float * __cdecl
engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
          (CDemonRenderer *this_ptr,float *output)

{
  float fVar1;
  CVector3i local_1c;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&local_1c);
  fVar1 = (float)0.00390625;
  *output = (float)local_1c.x * fVar1;
  output[1] = (float)local_1c.y * fVar1;
  output[2] = (float)local_1c.z * fVar1;
  return output;
}
