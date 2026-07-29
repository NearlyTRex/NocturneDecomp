// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740
// Address: 0040a740
// Address Range: [[0040a740, 0040ab0a]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  SActorRayHit *pSVar2;
  CKeyFramedModel *this_ptr_01;
  CDeformableModel *this_ptr_02;
  CDeformableModelInstance *frame_index;
  CVector3f *ray_origin_00;
  CVector3f *pCVar3;
  CVector3f *output_normal;
  int triangle_index;
  ulonglong in_stack_ffffff48;
  float local_a0;
  CBoundingBox3D local_9c;
  CBoundingBox3D local_84;
  CBoundingBox3D local_6c;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f CStack_24;
  float local_14;
  
  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
            (this_ptr,&local_9c,collision_info,bbox_type);
  if (ray_bbox == (CBoundingBox3D *)0x0) {
    if (&local_6c != (CBoundingBox3D *)ray_origin) {
      local_6c.min.x = ray_origin->x;
      local_6c.min.y = ray_origin->y;
      local_6c.min.z = ray_origin->z;
    }
    if (&local_6c.max != ray_origin) {
      local_6c.max.x = ray_origin->x;
      local_6c.max.y = ray_origin->y;
      local_6c.max.z = ray_origin->z;
    }
    local_48.x = ray_origin->x + ray_direction->x;
    local_48.y = ray_origin->y + ray_direction->y;
    local_48.z = ray_origin->z + ray_direction->z;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&local_6c,&local_48);
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(&local_6c,&local_9c);
  }
  else {
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(ray_bbox,&local_9c);
  }
  if (iVar1 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(this_ptr,&local_3c,ray_origin);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(this_ptr,&local_54,ray_direction);
  if ((uint)bbox_type < 2) {
    if (bbox_type == 1) {
      pCVar3 = &local_30;
      this_ptr_00 = (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_84);
      local_a0 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                           (this_ptr_00,pCVar3,(CVector3f *)in_stack_ffffff48,
                            (CVector3f *)((ulonglong)in_stack_ffffff48 >> 0x20));
      local_14 = local_a0;
      goto LAB_0040a899;
    }
  }
  else {
    if ((uint)bbox_type < 3) {
      local_a0 = core_actor_cpp_rayCylinderIntersect_FUN_00409860
                           (collision_info,&local_3c,&local_54,&local_30);
      local_14 = local_a0;
      goto LAB_0040a899;
    }
    if (bbox_type == 3) {
      local_a0 = (*((this_ptr->vtable)._ub)->customRayIntersect)
                           (this_ptr,&local_3c,&local_54,&local_30);
      local_14 = local_a0;
      goto LAB_0040a899;
    }
  }
  PTR_01cc4800 = "..\\core\\actor.cpp";
  INT_01cc4804 = 0x45d;
  core_main_c_FUN_004c8440();
LAB_0040a899:
  if ((local_a0 < 0.0) || (1.0 < local_a0)) {
    return 2.0;
  }
  out_hit->lod_index = -1;
  out_hit->triangle_index = -1;
  out_hit->bone_index = -1;
  iVar1 = 0x01E57284;
  out_hit->part_index = -1;
  if (*(int *)(iVar1 + 0x15f2f4) == 0) {
    frame_index = collision_info->deformable_model;
    if (frame_index == (CDeformableModelInstance *)0x0) {
      if (collision_info->keyframed_model != (CKeyFramedModelInstance *)0x0) {
        output_normal = &local_30;
        pCVar3 = &local_54;
        ray_origin_00 = &local_3c;
        this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                                (collision_info->keyframed_model);
        local_a0 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990
                             (this_ptr_01,(int)frame_index,ray_origin_00,pCVar3,output_normal);
        if (local_a0 < 0.0) {
          return 2.0;
        }
        local_14 = local_a0;
        if (1.0 < local_a0) {
          return 2.0;
        }
      }
    }
    else {
      local_a0 = core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960
                           (collision_info->deformable_model,&local_3c,&local_54);
      if (local_a0 < 0.0) {
        return 2.0;
      }
      if (1.0 < local_a0) {
        return 2.0;
      }
      out_hit->part_index = _DAT_0268ced8;
      out_hit->lod_index = _DAT_0268cee8;
      triangle_index = _DAT_0268ceec;
      iVar1 = _DAT_0268cee8;
      out_hit->triangle_index = _DAT_0268ceec;
      local_14 = local_a0;
      this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                              (collision_info->deformable_model);
      iVar1 = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0051b540
                        (this_ptr_02,iVar1,triangle_index);
      out_hit->bone_index = iVar1;
      if (&stack0x00000000 != (byte *)0x268cf0c) {
        local_30.x = _DAT_0268cedc;
        local_30.y = _DAT_0268cee0;
        local_30.z = _DAT_0268cee4;
      }
    }
  }
  pSVar2 = (SActorRayHit *)
           core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(this_ptr,&CStack_24,&local_30);
  if (out_hit != pSVar2) {
    (out_hit->normal).x = (pSVar2->normal).x;
    (out_hit->normal).y = (pSVar2->normal).y;
    (out_hit->normal).z = (pSVar2->normal).z;
  }
  return local_a0;
}
