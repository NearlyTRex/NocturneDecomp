// Name: core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
// Address: 0050fb00
// Address Range: [[0050fb00, 0050fc8f]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)

{
  CVector3f *pCVar1;
  float *out_intersection_point;
  char *pcVar2;
  CMatrix3x3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char local_20 [12];
  float local_14;
  
  pCVar1 = (CVector3f *)(this_ptr->lights[199].filter_names[0x12] + 0xc);
  if (pCVar1 != ray_origin) {
    pCVar1->x = ray_origin->x;
    *(float *)(this_ptr->lights[199].filter_names[0x12] + 0x10) = ray_origin->y;
    *(float *)(this_ptr->lights[199].filter_names[0x12] + 0x14) = ray_origin->z;
  }
  pCVar1 = (CVector3f *)(this_ptr->lights[199].filter_names[0x12] + 0x18);
  if (pCVar1 != ray_target) {
    pCVar1->x = ray_target->x;
    *(float *)(this_ptr->lights[199].filter_names[0x12] + 0x1c) = ray_target->y;
    *(float *)(this_ptr->lights[199].filter_names[0x12] + 0x20) = ray_target->z;
  }
  out_intersection_point = &this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].z;
  local_14 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                       ((CDemonRaytrace *)&DAT_01fba938,ray_origin,ray_target,
                        (CVector3f *)out_intersection_point,
                        (int *)&this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].z);
  pcVar2 = this_ptr->lights[199].filter_names[0x12] + 0x24;
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].y = local_14;
  if ((float *)pcVar2 != out_intersection_point) {
    *(float *)pcVar2 = *out_intersection_point;
    *(float *)this_ptr->lights[199].filter_names[0x13] =
         this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].x;
    *(float *)(this_ptr->lights[199].filter_names[0x13] + 4) =
         this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].y;
  }
  fVar11 = this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].y;
  *(float *)(this_ptr->lights[199].filter_names[0x13] + 8) =
       this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].z;
  if (fVar11 < 0.0) {
    this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].y = 1.01;
  }
  fVar11 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
                     (this_ptr,-1.0,ray_origin,ray_target,
                      this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].y);
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].x = fVar11;
  if (this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].x <= 1.0) {
    fVar11 = ray_target->y;
    fVar4 = ray_origin->y;
    pCVar3 = &this_ptr->vdir_boxes[0xec].rotation_matrix;
    fVar5 = ray_target->z;
    fVar6 = ray_origin->z;
    fVar7 = pCVar3->m[0].x;
    fVar8 = pCVar3->m[0].x;
    fVar9 = ray_origin->y;
    fVar10 = ray_origin->z;
    pcVar2 = this_ptr->lights[199].filter_names[0x13] + 0xc;
    if (pcVar2 != local_20) {
      *(float *)pcVar2 = ray_origin->x + (ray_target->x - ray_origin->x) * pCVar3->m[0].x;
      *(float *)(this_ptr->lights[199].filter_names[0x13] + 0x10) = fVar9 + (fVar11 - fVar4) * fVar7
      ;
      *(float *)(this_ptr->lights[199].filter_names[0x13] + 0x14) = fVar10 + (fVar5 - fVar6) * fVar8
      ;
      return this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].x;
    }
  }
  return this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].x;
}
