// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
// Address: 0048c780
// Address Range: [[0048c780, 0048c7d3]]
// Convention: __cdecl
// Signature: float * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer *this_ptr,float *output)

#include "nocturne.h"

float * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer *this_ptr,float *output)

{
  float fVar2;
  float *extraout_EBX;
  CVector3i local_20;
  float fVar1;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&local_20);
  fVar2 = (float)0.00390625;
  *extraout_EBX = fVar2 * 4769685.0;
  extraout_EBX[1] = (float)local_20.x * fVar2;
  extraout_EBX[2] = (float)local_20.y * fVar2;
  return extraout_EBX;
}
