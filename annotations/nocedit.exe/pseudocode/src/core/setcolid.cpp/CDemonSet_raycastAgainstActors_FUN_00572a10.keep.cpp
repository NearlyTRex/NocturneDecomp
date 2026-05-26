// Name: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
// Address: 00572a10
// MANUAL RECONSTRUCTION
// Address Range: [[00572a10, 00572e16]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

{
  CDemonActor *this_ptr_00;
  CDeformableModelInstance *pCVar3;
  EGroundType EVar4;
  ECollisionType bbox_type;
  float fVar1;
  SCollisionInfo local_cc;
  SActorRayHit CStack_a4;
  CBoundingBox3D local_88;
  CVector3f local_64;
  CVector3f CStack_58;
  CVector3f local_4c;
  CVector3f CStack_34;
  float local_24;
  int local_1c;
  CDemonActor *pCVar1;
  
  this_ptr->collision_part_index = -1;
  this_ptr->collision_bone_index = -1;
  this_ptr->collision_actor = (CDemonActor *)0x0;
  if (-1 < this_ptr->ignore_list_count) {
    if (max_t <= 0.0) {
      return 0.0;
    }
    if (min_t < 0.0) {
      min_t = 0.0;
    }
    local_24 = max_t;
    if (1.0 < max_t) {
      local_24 = 1.0;
    }
    local_64.x = (ray_target->x - ray_origin->x) * local_24;
    local_64.y = (ray_target->y - ray_origin->y) * local_24;
    local_64.z = (ray_target->z - ray_origin->z) * local_24;
    if (&local_88 != (CBoundingBox3D *)ray_origin) {
      local_88.min = *ray_origin;
    }
    if (&local_88.max != ray_origin) {
      local_88.max = *ray_origin;
    }
    local_4c.x = ray_origin->x + local_64.x;
    local_4c.y = ray_origin->y + local_64.y;
    local_4c.z = ray_origin->z + local_64.z;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_88,&local_4c);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_cc);
    local_cc.ray_query = this_ptr->ray_query;
    local_1c = 0;
    if (0 < this_ptr->collidable_actor_count) {
      do {
        pCVar1 = this_ptr->collidable_actors[local_1c];
        pCVar3 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,pCVar1);
        if (pCVar3 == (CDeformableModelInstance *)0x0) {
          local_cc.deformable_model = pCVar3;
          local_cc.keyframed_model = (CKeyFramedModelInstance *)pCVar3;
          bbox_type = (*((pCVar1->vtable)._ub)->getCollisionType)(pCVar1,&local_cc);
          if (bbox_type != COLLISION_TYPE_NONE) {
            fVar1 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                              (pCVar1,ray_origin,&local_64,&CStack_a4,&local_cc,
                               bbox_type,&local_88);
            if (((fVar1 <= 1.0) && (fVar1 = fVar1 * local_24, fVar1 < max_t)) && (min_t < fVar1)) {
              if (&CStack_a4.normal != &this_ptr->collision_normal) {
                this_ptr->collision_normal = CStack_a4.normal;
              }
              this_ptr->collision_actor = pCVar1;
              this_ptr->collision_part_index = CStack_a4.part_index;
              this_ptr->collision_bone_index = CStack_a4.bone_index;
              CStack_58.x = (ray_target->x - ray_origin->x) * fVar1;
              CStack_58.y = (ray_target->y - ray_origin->y) * fVar1;
              CStack_58.z = (ray_target->z - ray_origin->z) * fVar1;
              local_64 = CStack_58;
              if (&local_88 != (CBoundingBox3D *)ray_origin) {
                local_88.min = *ray_origin;
              }
              if (&local_88.max != ray_origin) {
                local_88.max = *ray_origin;
              }
              CStack_34.x = ray_origin->x + local_64.x;
              CStack_34.y = ray_origin->y + local_64.y;
              CStack_34.z = ray_origin->z + local_64.z;
              core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_88,&CStack_34);
              max_t = fVar1;
              local_24 = fVar1;
            }
          }
        }
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->collidable_actor_count);
    }
    this_ptr_00 = this_ptr->collision_actor;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      EVar4 = (*((this_ptr_00->vtable)._ub)->getGroundType)(this_ptr_00);
      this_ptr->ground_type = EVar4;
    }
  }
  return max_t;
}
