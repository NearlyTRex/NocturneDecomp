// Name: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
// Address: 00478010
// Address Range: [[00478010, 00478187]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel *model_ptr)

{
  float fVar1;
  CVector3i *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D local_28;
  float this_ptr;
  
  local_28.max.y = 0.0;
  if (0 < model_ptr->frame_count) {
    local_28.max.z = (float)&model_ptr->bounds_min;
    local_28.max.x = 0.0;
    do {
      this_ptr_00 = (CBoundingBox3D *)((int)&(model_ptr->frame_bounds->min).x + (int)local_28.max.x)
      ;
      pCVar1 = model_ptr->vertex_list + (int)local_28.max.y * model_ptr->vertex_count;
      fVar1 = (float)0.00390625;
      local_28.min.x = (float)pCVar1->x * fVar1;
      local_28.min.y = (float)pCVar1->y * fVar1;
      local_28.min.z = (float)pCVar1->z * fVar1;
      if (this_ptr_00 != &local_28) {
        (this_ptr_00->min).x = local_28.min.x;
        (this_ptr_00->min).y = local_28.min.y;
        (this_ptr_00->min).z = local_28.min.z;
      }
      if ((CBoundingBox3D *)&this_ptr_00->max != &local_28) {
        (this_ptr_00->max).x = local_28.min.x;
        (this_ptr_00->max).y = local_28.min.y;
        (this_ptr_00->max).z = local_28.min.z;
      }
      iVar2 = 1;
      if (1 < model_ptr->vertex_count) {
        do {
          local_28.min.x = (float)pCVar1[1].x * (float)0.00390625;
          local_28.min.y = (float)pCVar1[1].y * (float)0.00390625;
          local_28.min.z = (float)pCVar1[1].z * (float)0.00390625;
          pCVar1 = pCVar1 + 1;
          iVar2 = iVar2 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240(this_ptr_00,&local_28.min);
        } while (iVar2 < model_ptr->vertex_count);
      }
      this_ptr = local_28.max.z;
      if (local_28.max.y == 0.0) {
        if (this_ptr_00 != (CBoundingBox3D *)local_28.max.z) {
          *(float *)local_28.max.z = (this_ptr_00->min).x;
          *(float *)((int)local_28.max.z + 4) = (this_ptr_00->min).y;
          *(float *)((int)local_28.max.z + 8) = (this_ptr_00->min).z;
        }
        if ((CBoundingBox3D *)((int)local_28.max.z + 0xc) != this_ptr_00) {
          (((CBoundingBox3D *)((int)local_28.max.z + 0xc))->min).x = (this_ptr_00->min).x;
          *(float *)((int)local_28.max.z + 0x10) = (this_ptr_00->min).y;
          *(float *)((int)local_28.max.z + 0x14) = (this_ptr_00->min).z;
        }
      }
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                ((CBoundingBox3D *)local_28.max.z,(CVector3f *)this_ptr_00);
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)this_ptr,&this_ptr_00->max);
      local_28.max.x = (float)((int)local_28.max.x + 0x18);
      local_28.max.y = (float)((int)local_28.max.y + 1);
    } while ((int)local_28.max.y < model_ptr->frame_count);
  }
  return;
}
