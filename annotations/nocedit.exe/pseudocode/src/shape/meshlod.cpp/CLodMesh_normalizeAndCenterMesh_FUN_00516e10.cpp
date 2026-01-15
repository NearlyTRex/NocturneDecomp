// Name: shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10
// Address: 00516e10
// Address Range: [[00516e10, 00516f4c]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(CLodMesh *this_ptr)

{
  float local_60;
  CBoundingBox3D local_5c;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500(this_ptr,&local_5c);
  local_20 = local_5c.min.x + local_5c.max.x;
  local_38 = local_20 * 0.5f;
  local_1c = local_5c.min.y + local_5c.max.y;
  local_18 = local_5c.min.z + local_5c.max.z;
  local_34 = local_1c * 0.5f;
  local_30 = local_18 * 0.5f;
  local_14 = -local_38;
  local_10 = -local_34;
  local_c = -local_30;
  if (&this_ptr->center_offset != (CVector3f *)&local_14) {
    (this_ptr->center_offset).x = local_14;
    (this_ptr->center_offset).y = local_10;
    (this_ptr->center_offset).z = local_c;
  }
  shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(this_ptr,&this_ptr->center_offset);
  local_44 = local_5c.max.x - local_5c.min.x;
  local_40 = local_5c.max.y - local_5c.min.y;
  local_3c = local_5c.max.z - local_5c.min.z;
  local_60 = local_44;
  if (local_44 < local_40) {
    local_60 = local_40;
  }
  if (local_60 < local_3c) {
    local_60 = local_3c;
  }
  this_ptr->scale_factor = 1.0 / local_60;
  local_2c.x = this_ptr->scale_factor;
  local_2c.y = local_2c.x;
  local_2c.z = local_2c.x;
  shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(this_ptr,&local_2c);
  return;
}
