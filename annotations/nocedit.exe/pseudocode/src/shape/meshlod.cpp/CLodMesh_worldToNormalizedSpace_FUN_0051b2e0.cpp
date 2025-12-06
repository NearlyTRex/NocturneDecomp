// Name: shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
// Address: 0051b2e0
// Address Range: [[0051b2e0, 0051b32e]]
// Convention: __cdecl
// Signature: CVector3f * shape_meshlod.cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * input_point)

#include "nocturne.h"

CVector3f * __cdecl
shape_meshlod_cpp_CLodMesh_worldToNormalizedSpace_FUN_0051b2e0
          (CLodMesh *this_ptr,CVector3f *output_point,CVector3f *input_point)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = &this_ptr->scale_factor;
  fVar2 = input_point->y;
  fVar3 = *pfVar1;
  fVar4 = input_point->z;
  fVar5 = *pfVar1;
  output_point->x = input_point->x / *pfVar1 - (this_ptr->center_offset).x;
  output_point->y = fVar2 / fVar3 - (this_ptr->center_offset).y;
  output_point->z = fVar4 / fVar5 - (this_ptr->center_offset).z;
  return output_point;
}
