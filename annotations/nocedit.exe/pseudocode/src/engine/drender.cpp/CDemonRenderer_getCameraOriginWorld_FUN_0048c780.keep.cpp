// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_0048c780
// Address: 0048c780
// MANUAL RECONSTRUCTION
// Address Range: [[0048c780, 0048c7d3]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0048c780(CDemonRenderer *this_ptr,CVector3f *output)

#include "nocturne.h"

CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0048c780(CDemonRenderer *this_ptr,CVector3f *output)

{
  float fVar1;
  CVector3i local_20;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&local_20);
  fVar1 = (float)0.00390625;
  output->x = (float)local_20.x * fVar1;
  output->y = (float)local_20.y * fVar1;
  output->z = (float)local_20.z * fVar1;
  return output;
}
