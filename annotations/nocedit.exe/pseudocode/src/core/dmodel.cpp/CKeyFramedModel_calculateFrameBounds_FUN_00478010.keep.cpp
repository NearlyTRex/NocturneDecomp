// Name: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
// Address: 00478010
// MANUAL RECONSTRUCTION
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
  CBoundingBox3D *frame_bounds_array;
  CVector3f temp_vertex;
  CBoundingBox3D *bounds_min_ptr;
  int frame_index;

  if (0 < model_ptr->frame_count) {
    // frame_bounds is mistyped as CVector3f* in CKeyFramedModel but actually
    // points at an array of CBoundingBox3D (24-byte stride per asm).
    frame_bounds_array = (CBoundingBox3D *)model_ptr->frame_bounds;
    bounds_min_ptr = (CBoundingBox3D *)&model_ptr->bounds_min;
    frame_index = 0;
    do {
      this_ptr_00 = &frame_bounds_array[frame_index];
      pCVar1 = model_ptr->vertex_list + frame_index * model_ptr->vertex_count;
      fVar1 = (float)0.00390625;
      temp_vertex.x = (float)pCVar1->x * fVar1;
      temp_vertex.y = (float)pCVar1->y * fVar1;
      temp_vertex.z = (float)pCVar1->z * fVar1;
      (this_ptr_00->min).x = temp_vertex.x;
      (this_ptr_00->min).y = temp_vertex.y;
      (this_ptr_00->min).z = temp_vertex.z;
      (this_ptr_00->max).x = temp_vertex.x;
      (this_ptr_00->max).y = temp_vertex.y;
      (this_ptr_00->max).z = temp_vertex.z;
      iVar2 = 1;
      if (1 < model_ptr->vertex_count) {
        do {
          temp_vertex.x = (float)pCVar1[1].x * (float)0.00390625;
          temp_vertex.y = (float)pCVar1[1].y * (float)0.00390625;
          temp_vertex.z = (float)pCVar1[1].z * (float)0.00390625;
          pCVar1 = pCVar1 + 1;
          iVar2 = iVar2 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240(this_ptr_00,&temp_vertex);
        } while (iVar2 < model_ptr->vertex_count);
      }
      if (frame_index == 0) {
        (bounds_min_ptr->min).x = (this_ptr_00->min).x;
        (bounds_min_ptr->min).y = (this_ptr_00->min).y;
        (bounds_min_ptr->min).z = (this_ptr_00->min).z;
        (bounds_min_ptr->max).x = (this_ptr_00->min).x;
        (bounds_min_ptr->max).y = (this_ptr_00->min).y;
        (bounds_min_ptr->max).z = (this_ptr_00->min).z;
      }
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(bounds_min_ptr,(CVector3f *)this_ptr_00);
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(bounds_min_ptr,&this_ptr_00->max);
      frame_index = frame_index + 1;
    } while (frame_index < model_ptr->frame_count);
  }
  return;
}
