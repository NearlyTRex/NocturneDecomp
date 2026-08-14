// Name: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
// Address: 00478010
// Address Range: [[00478010, 00478187]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel *this_ptr)

{
  float fVar1;
  CVector3i *pCVar1;
  int iVar2;
  CBoundingBox3D *frame_bounds_ptr;
  CBoundingBox3D local_28;
  float bounds_ptr_bits;
  
  local_28.max.y = 0.0;
  if (0 < this_ptr->frame_count) {
    local_28.max.z = (float)&this_ptr->bounds;
    local_28.max.x = 0.0;
    do {
      frame_bounds_ptr =
           (CBoundingBox3D *)((int)&(this_ptr->frame_bounds->min).x + (int)local_28.max.x);
      pCVar1 = this_ptr->vertex_list + (int)local_28.max.y * this_ptr->vertex_count;
      fVar1 = (float)0.00390625;
      local_28.min.x = (float)pCVar1->x * fVar1;
      local_28.min.y = (float)pCVar1->y * fVar1;
      local_28.min.z = (float)pCVar1->z * fVar1;
      if (frame_bounds_ptr != &local_28) {
        (frame_bounds_ptr->min).x = local_28.min.x;
        (frame_bounds_ptr->min).y = local_28.min.y;
        (frame_bounds_ptr->min).z = local_28.min.z;
      }
      if ((CBoundingBox3D *)&frame_bounds_ptr->max != &local_28) {
        (frame_bounds_ptr->max).x = local_28.min.x;
        (frame_bounds_ptr->max).y = local_28.min.y;
        (frame_bounds_ptr->max).z = local_28.min.z;
      }
      iVar2 = 1;
      if (1 < this_ptr->vertex_count) {
        do {
          local_28.min.x = (float)pCVar1[1].x * (float)0.00390625;
          local_28.min.y = (float)pCVar1[1].y * (float)0.00390625;
          local_28.min.z = (float)pCVar1[1].z * (float)0.00390625;
          pCVar1 = pCVar1 + 1;
          iVar2 = iVar2 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240(frame_bounds_ptr,&local_28.min);
        } while (iVar2 < this_ptr->vertex_count);
      }
      bounds_ptr_bits = local_28.max.z;
      if (local_28.max.y == 0.0) {
        if (frame_bounds_ptr != (CBoundingBox3D *)local_28.max.z) {
          *(float *)local_28.max.z = (frame_bounds_ptr->min).x;
          *(float *)((int)local_28.max.z + 4) = (frame_bounds_ptr->min).y;
          *(float *)((int)local_28.max.z + 8) = (frame_bounds_ptr->min).z;
        }
        if ((CBoundingBox3D *)((int)local_28.max.z + 0xc) != frame_bounds_ptr) {
          (((CBoundingBox3D *)((int)local_28.max.z + 0xc))->min).x = (frame_bounds_ptr->min).x;
          *(float *)((int)local_28.max.z + 0x10) = (frame_bounds_ptr->min).y;
          *(float *)((int)local_28.max.z + 0x14) = (frame_bounds_ptr->min).z;
        }
      }
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                ((CBoundingBox3D *)local_28.max.z,(CVector3f *)frame_bounds_ptr);
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                ((CBoundingBox3D *)bounds_ptr_bits,&frame_bounds_ptr->max);
      local_28.max.x = (float)((int)local_28.max.x + 0x18);
      local_28.max.y = (float)((int)local_28.max.y + 1);
    } while ((int)local_28.max.y < this_ptr->frame_count);
  }
  return;
}
