// Name: shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10
// Address: 00516e10
// Address Range: [[00516e10, 00516f4c]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(CLodMesh *this_ptr)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
            (this_ptr,(CBoundingBox3D *)&stack0xffffffa4);
  local_24.z = local_58 + local_4c;
  local_18 = local_54 + local_48;
  local_14 = local_50 + local_44;
  fVar1 = local_14 * 0.5f;
  local_10 = -(local_24.z * 0.5f);
  local_c = -(local_18 * 0.5f);
  if (&this_ptr->center_offset != (CVector3f *)&local_10) {
    (this_ptr->center_offset).x = local_10;
    (this_ptr->center_offset).y = local_c;
    (this_ptr->center_offset).z = -fVar1;
  }
  shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(this_ptr,&this_ptr->center_offset);
  local_58 = local_48 - local_54;
  if (local_48 - local_54 < local_44 - local_50) {
    local_58 = local_44 - local_50;
  }
  if (local_58 < local_40 - local_4c) {
    local_58 = local_40 - local_4c;
  }
  this_ptr->scale_factor = 1.0 / local_58;
  local_24.x = this_ptr->scale_factor;
  local_24.y = local_24.x;
  local_24.z = local_24.x;
  shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(this_ptr,&local_24);
  return;
}
