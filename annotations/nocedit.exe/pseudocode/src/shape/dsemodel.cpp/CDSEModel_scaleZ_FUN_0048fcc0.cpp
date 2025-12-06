// Name: shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0
// Address: 0048fcc0
// Address Range: [[0048fcc0, 0048fd68]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0(CDSEModel * this_ptr, float scale_factor)

#include "nocturne.h"

void __cdecl
shape_dsemodel_cpp_CDSEModel_scaleZ_FUN_0048fcc0(CDSEModel *this_ptr,float scale_factor)

{
  float fVar1;
  int local_20;
  float local_18;
  float local_14;
  
  local_18 = 999999.9;
  local_14 = -999999.9;
  for (local_20 = 0; local_20 < this_ptr->vertex_count; local_20 = local_20 + 1) {
    fVar1 = this_ptr->vertices[local_20].vertex.z;
    if (local_14 < fVar1) {
      local_14 = fVar1;
    }
    if (fVar1 < local_18) {
      local_18 = fVar1;
    }
  }
  for (local_20 = 0; local_20 < this_ptr->vertex_count; local_20 = local_20 + 1) {
    this_ptr->vertices[local_20].vertex.z =
         this_ptr->vertices[local_20].vertex.z * (scale_factor / (local_14 - local_18));
  }
  return;
}
