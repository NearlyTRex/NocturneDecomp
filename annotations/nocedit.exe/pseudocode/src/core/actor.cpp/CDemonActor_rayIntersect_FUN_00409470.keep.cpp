// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
// Address: 00409470
// MANUAL RECONSTRUCTION
// Address Range: [[00409470, 0040983a]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

#include "nocturne.h"

float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)

{
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  CVector3f *pCVar3;
  CKeyFramedModel *this_ptr_01;
  CDeformableModel *this_ptr_02;
  CVector3f *ray_origin_01;
  CVector3f *ray_direction_00;
  CVector3f *pCVar2;
  int lod_level;
  float local_a0;
  CBoundingBox3D local_9c;
  CBoundingBox3D local_84;
  CBoundingBox3D local_6c;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f CStack_24;
  CDeformableModelInstance *deformable_model;
  int triangle_index;
  CDemonSet *pCVar1;

  if (bbox_type == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
            (this_ptr,&local_9c,collision_info,bbox_type);
  if (ray_bbox == (CBoundingBox3D *)0x0) {
    if (&local_6c != (CBoundingBox3D *)ray_origin) {
      local_6c.min = *ray_origin;
    }
    if (&local_6c.max != ray_origin) {
      local_6c.max = *ray_origin;
    }
    local_48.x = ray_origin->x + ray_direction->x;
    local_48.y = ray_origin->y + ray_direction->y;
    local_48.z = ray_origin->z + ray_direction->z;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_6c,&local_48);
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(&local_6c,&local_9c);
  }
  else {
    iVar2 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(ray_bbox,&local_9c);
  }
  if (iVar2 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr,&local_3c,ray_origin);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(this_ptr,&local_54,ray_direction);
  if ((uint)bbox_type < 2) {
    if (bbox_type == 1) {
      pCVar2 = &local_30;
      ray_direction_00 = &local_54;
      ray_origin_01 = &local_3c;
      this_ptr_00 = (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_84);
      local_a0 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                           (this_ptr_00,ray_origin_01,ray_direction_00,pCVar2);
      goto LAB_004095c9;
    }
  }
  else {
    if ((uint)bbox_type < 3) {
      local_a0 = core_actor_cpp_rayCylinderIntersect_FUN_00408340
                           (collision_info,&local_3c,&local_54,&local_30);
      goto LAB_004095c9;
    }
    if (bbox_type == 3) {
      local_a0 = (*((this_ptr->vtable)._ub)->customRayIntersect)
                           (this_ptr,&local_3c,&local_54,&local_30);
      goto LAB_004095c9;
    }
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 1115;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::rayIntersect - Invalid collision type!");
LAB_004095c9:
  if ((local_a0 < 0.0) || (1.0 < local_a0)) {
    return 2.0;
  }
  out_hit->lod_index = -1;
  out_hit->triangle_index = -1;
  out_hit->bone_index = -1;
  pCVar1 = g_CDemonSetPtr;
  out_hit->part_index = -1;
  if (pCVar1->skip_exact_collisions == 0) {
    deformable_model = collision_info->deformable_model;
    if (deformable_model == (CDeformableModelInstance *)0x0) {
      if (collision_info->keyframed_model != (CKeyFramedModelInstance *)0x0) {
        this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                (collision_info->keyframed_model);
        local_a0 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
                             (this_ptr_01,0,&local_3c,&local_54,&local_30);
        if (local_a0 < 0.0) {
          return 2.0;
        }
        local_3c.z = local_a0;
        if (1.0 < local_a0) {
          return 2.0;
        }
      }
    }
    else {
      local_a0 = core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
                           (collision_info->deformable_model,&local_3c,&local_54);
      if (local_a0 < 0.0) {
        return 2.0;
      }
      if (1.0 < local_a0) {
        return 2.0;
      }
      out_hit->part_index = g_DeformableModelRayHitPartIndex;
      out_hit->lod_index = g_DeformableModelRayHitLodIndex;
      triangle_index = g_DeformableModelRayHitTriangleIndex;
      lod_level = g_DeformableModelRayHitLodIndex;
      out_hit->triangle_index = g_DeformableModelRayHitTriangleIndex;
      local_3c.z = local_a0;
      this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                              (collision_info->deformable_model);
      out_hit->bone_index = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0059dca0
                                      (this_ptr_02,lod_level,triangle_index);
      local_30 = g_DeformableModelRayHitNormal;
    }
  }
  pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(this_ptr,&CStack_24,&local_30);
  if (out_hit != (SActorRayHit *)pCVar3) {
    out_hit->normal = *pCVar3;
  }
  return local_a0;
}
