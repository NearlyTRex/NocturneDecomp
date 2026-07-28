// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
// Address: 00460d30
// Address Range: [[00460d30, 00460d83]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer *this_ptr,CVector3f *output)

#include "nocturne.h"

CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer *this_ptr,CVector3f *output)

{
  float fVar1;
  CVector3i local_20;
  
  engine_matrix_c_getCameraOrigin_FUN_004ce760(&local_20);
  fVar1 = (float)0.00390625;
  output->x = fVar1 * 4590917.0;
  output->y = (float)local_20.x * fVar1;
  output->z = (float)local_20.y * fVar1;
  return output;
}
