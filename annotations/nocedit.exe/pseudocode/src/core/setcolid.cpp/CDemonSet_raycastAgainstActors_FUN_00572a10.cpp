// Name: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
// Address: 00572a10
// Address Range: [[00572a10, 00572e16]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

{
  CDemonActor *pCVar1;
  float fVar2;
  CDeformableModelInstance *pCVar3;
  EGroundType EVar4;
  ECollisionType bbox_type;
  SCollisionInfo local_cc;
  CVector3f CStack_a4;
  int iStack_98;
  int iStack_8c;
  CBoundingBox3D local_88;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f local_64;
  CVector3f CStack_58;
  CVector3f local_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  float local_24;
  CDemonSet *local_20;
  int local_1c;
  CVector3f *local_18;
  float fStack_14;
  
  this_ptr->collision_part_index = -1;
  this_ptr->collision_triangle_index = -1;
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
    local_70 = ray_target->x - ray_origin->x;
    local_6c = ray_target->y - ray_origin->y;
    local_64.x = local_70 * local_24;
    local_68 = ray_target->z - ray_origin->z;
    local_64.y = local_6c * local_24;
    local_64.z = local_68 * local_24;
    if (&local_88 != (CBoundingBox3D *)ray_origin) {
      local_88.min.x = ray_origin->x;
      local_88.min.y = ray_origin->y;
      local_88.min.z = ray_origin->z;
    }
    if (&local_88.max != ray_origin) {
      local_88.max.x = ray_origin->x;
      local_88.max.y = ray_origin->y;
      local_88.max.z = ray_origin->z;
    }
    local_4c.x = ray_origin->x + local_64.x;
    local_4c.y = ray_origin->y + local_64.y;
    local_4c.z = ray_origin->z + local_64.z;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_88,&local_4c);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_cc);
    local_cc.ray_type = this_ptr->ray_type;
    local_cc.laser_type = this_ptr->laser_type;
    local_cc.laser_color.r = (this_ptr->laser_color).r;
    local_cc.laser_color.g = (this_ptr->laser_color).g;
    local_cc.laser_color.b = (this_ptr->laser_color).b;
    local_1c = 0;
    if (0 < this_ptr->collidable_actor_count) {
      local_18 = &this_ptr->collision_normal;
      local_20 = this_ptr;
      do {
        pCVar1 = local_20->collidable_actors[0];
        pCVar3 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,pCVar1);
        if (pCVar3 == (CDeformableModelInstance *)0x0) {
          local_cc.deformable_model = pCVar3;
          local_cc.keyframed_model = (CKeyFramedModelInstance *)pCVar3;
          bbox_type = (*((pCVar1->vtable)._ub)->getCollisionType)(pCVar1,&local_cc);
          if (bbox_type != COLLISION_TYPE_NONE) {
            fStack_14 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                                  (pCVar1,ray_origin,&local_64,&CStack_a4,&local_cc,bbox_type,
                                   &local_88);
            if (((fStack_14 <= 1.0) && (fVar2 = fStack_14 * local_24, fVar2 < max_t)) &&
               (min_t < fVar2)) {
              if (&CStack_a4 != local_18) {
                local_18->x = CStack_a4.x;
                local_18->y = CStack_a4.y;
                local_18->z = CStack_a4.z;
              }
              this_ptr->collision_actor = pCVar1;
              this_ptr->collision_part_index = iStack_98;
              this_ptr->collision_triangle_index = iStack_8c;
              fStack_40 = ray_target->x - ray_origin->x;
              fStack_3c = ray_target->y - ray_origin->y;
              CStack_58.x = fStack_40 * fVar2;
              fStack_38 = ray_target->z - ray_origin->z;
              CStack_58.y = fStack_3c * fVar2;
              CStack_58.z = fStack_38 * fVar2;
              if (&local_64 != &CStack_58) {
                local_64.x = CStack_58.x;
                local_64.y = CStack_58.y;
                local_64.z = CStack_58.z;
              }
              if (&local_88 != (CBoundingBox3D *)ray_origin) {
                local_88.min.x = ray_origin->x;
                local_88.min.y = ray_origin->y;
                local_88.min.z = ray_origin->z;
              }
              if (&local_88.max != ray_origin) {
                local_88.max.x = ray_origin->x;
                local_88.max.y = ray_origin->y;
                local_88.max.z = ray_origin->z;
              }
              CStack_34.x = ray_origin->x + local_64.x;
              CStack_34.y = ray_origin->y + local_64.y;
              CStack_34.z = ray_origin->z + local_64.z;
              local_24 = fVar2;
              core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_88,&CStack_34);
              max_t = fVar2;
            }
          }
        }
        local_20 = (CDemonSet *)local_20->cameras;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->collidable_actor_count);
    }
    pCVar1 = this_ptr->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      EVar4 = (*((pCVar1->vtable)._ub)->getGroundType)(pCVar1);
      this_ptr->ground_type = EVar4;
    }
  }
  return max_t;
}
