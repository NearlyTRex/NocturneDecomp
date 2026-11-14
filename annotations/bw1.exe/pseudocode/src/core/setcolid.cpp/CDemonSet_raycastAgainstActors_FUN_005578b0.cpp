// Name: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_005578b0
// Address: 005578b0
// Address Range: [[005578b0, 00557da1]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_005578b0(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_005578b0(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

{
  CDemonActor *pCVar1;
  float fVar2;
  CDeformableModelInstance *pCVar3;
  EGroundType EVar4;
  ECollisionType bbox_type;
  byte bVar5;
  float afStackY_10a0 [987];
  CBoundingBox3D *this_ptr_00;
  CVector3f *point;
  float fStack_118;
  SCollisionInfo local_114;
  SActorRayHit SStack_ec;
  CBoundingBox3D local_d0;
  float fStack_b8;
  float afStack_b4 [4];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  CVector3f CStack_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_24;
  int local_20;
  CDemonSet *local_1c;
  SActorRayHit *local_18;
  float fStack_14;
  
  bVar5 = 0;
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
    afStack_b4[2] = ray_target->x - ray_origin->x;
    afStack_b4[3] = ray_target->y - ray_origin->y;
    local_a4 = ray_target->z - ray_origin->z;
    local_94 = afStack_b4[2] * local_24;
    local_90 = afStack_b4[3] * local_24;
    local_8c = local_a4 * local_24;
    if (&local_d0 != (CBoundingBox3D *)ray_origin) {
      local_d0.min.x = ray_origin->x;
      local_d0.min.y = ray_origin->y;
      local_d0.min.z = ray_origin->z;
    }
    if (&local_d0.max != ray_origin) {
      local_d0.max.x = ray_origin->x;
      local_d0.max.y = ray_origin->y;
      local_d0.max.z = ray_origin->z;
    }
    local_7c = ray_origin->x + local_94;
    local_78 = ray_origin->y + local_90;
    local_74 = ray_origin->z + local_8c;
    local_a0 = afStack_b4[2];
    local_9c = afStack_b4[3];
    local_98 = local_a4;
    local_70.x = local_94;
    local_70.y = local_90;
    local_70.z = local_8c;
    local_64.x = local_7c;
    local_64.y = local_78;
    local_64.z = local_74;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(&local_d0,&local_64);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(&local_114);
    local_114.ray_query.ray_type = (this_ptr->ray_query).ray_type;
    local_114.ray_query.laser_type = (this_ptr->ray_query).laser_type;
    local_114.ray_query.laser_color.r = (this_ptr->ray_query).laser_color.r;
    local_114.ray_query.laser_color.g = (this_ptr->ray_query).laser_color.g;
    local_114.ray_query.laser_color.b = (this_ptr->ray_query).laser_color.b;
    local_20 = 0;
    if (0 < this_ptr->collidable_actor_count) {
      local_18 = (SActorRayHit *)&this_ptr->collision_normal;
      local_1c = this_ptr;
      do {
        pCVar1 = local_1c->collidable_actors[0];
        pCVar3 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00557db0(this_ptr,pCVar1);
        if (pCVar3 == (CDeformableModelInstance *)0x0) {
          local_114.deformable_model = pCVar3;
          local_114.keyframed_model = (CKeyFramedModelInstance *)pCVar3;
          bbox_type = (*((pCVar1->vtable)._ub)->getCollisionType)(pCVar1,&local_114);
          if (bbox_type != COLLISION_TYPE_NONE) {
            fStack_118 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409170
                                   (pCVar1,ray_origin,&local_70,&SStack_ec,&local_114,bbox_type,
                                    &local_d0);
            fStack_14 = fStack_118;
            if (((fStack_118 <= 1.0) &&
                (fVar2 = fStack_118 * local_24, fStack_118 = fVar2, fVar2 < max_t)) &&
               (min_t < fVar2)) {
              if (&SStack_ec != local_18) {
                (local_18->normal).x = SStack_ec.normal.x;
                (local_18->normal).y = SStack_ec.normal.y;
                (local_18->normal).z = SStack_ec.normal.z;
              }
              this_ptr->collision_actor = pCVar1;
              this_ptr->collision_part_index = SStack_ec.part_index;
              this_ptr->collision_bone_index = SStack_ec.bone_index;
              local_24 = fVar2;
              afStack_54[2] = ray_target->x - ray_origin->x;
              afStack_54[3] = ray_target->y - ray_origin->y;
              fStack_44 = ray_target->z - ray_origin->z;
              fStack_34 = afStack_54[2];
              afStack_54[(uint)bVar5 * -2 + 9] = afStack_54[(uint)bVar5 * -2 + 3];
              afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
                   afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
              fStack_b8 = fStack_34 * fVar2;
              afStack_b4[0] = fStack_30 * fVar2;
              afStack_b4[1] = fStack_2c * fVar2;
              CStack_40.x = fStack_34 * fVar2;
              afStack_54[(uint)bVar5 * -2 + 6] = afStack_b4[(uint)bVar5 * -2];
              afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
                   afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              if (&local_70 != (CVector3f *)(afStack_54 + 5)) {
                local_70.x = CStack_40.x;
                local_70.y = CStack_40.y;
                local_70.z = CStack_40.z;
              }
              if (&local_d0 != (CBoundingBox3D *)ray_origin) {
                local_d0.min.x = ray_origin->x;
                local_d0.min.y = ray_origin->y;
                local_d0.min.z = ray_origin->z;
              }
              if (&local_d0.max != ray_origin) {
                local_d0.max.x = ray_origin->x;
                local_d0.max.y = ray_origin->y;
                local_d0.max.z = ray_origin->z;
              }
              point = &CStack_88;
              fStack_58 = ray_origin->x + local_70.x;
              afStack_54[0] = ray_origin->y + local_70.y;
              this_ptr_00 = &local_d0;
              afStack_54[1] = ray_origin->z + local_70.z;
              CStack_88.x = fStack_58;
              *(float *)((int)&CStack_88 + (uint)bVar5 * -8 + 4) = afStack_54[(uint)bVar5 * -2];
              *(float *)((int)&CStack_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                   afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              core_box_cpp_CBoundingBox3D_expand_FUN_00420500(this_ptr_00,point);
              max_t = fVar2;
            }
          }
        }
        local_1c = (CDemonSet *)local_1c->cameras;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->collidable_actor_count);
    }
    pCVar1 = this_ptr->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      EVar4 = (*((pCVar1->vtable)._ub)->getGroundType)(pCVar1);
      this_ptr->ground_type = EVar4;
    }
  }
  return max_t;
}
