// Name: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
// Address: 0050ffe0
// Address Range: [[0050ffe0, 005103e6]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

{
  float fVar1;
  CWayPoint *actor;
  int iVar2;
  char (*pacVar3) [40];
  CDeformableModelInstance *pCVar4;
  uint uVar5;
  ECollisionType bbox_type;
  SCollisionInfo local_cc;
  SActorRayHit SStack_a4;
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
  SActorRayHit *local_18;
  float fStack_14;
  
  pacVar3 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar3 + 0x13) + 0x1c) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x1d) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x1e) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x1f) = -1;
  pacVar3 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar3 + 0x13) + 0x20) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x21) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x22) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x23) = -1;
  fVar1 = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z;
  pacVar3 = this_ptr->lights[199].filter_names;
  *(char *)((int)(pacVar3 + 0x13) + 0x18) = '\0';
  *(char *)((int)(pacVar3 + 0x13) + 0x19) = '\0';
  *(char *)((int)(pacVar3 + 0x13) + 0x1a) = '\0';
  *(char *)((int)(pacVar3 + 0x13) + 0x1b) = '\0';
  if (-1 < (int)fVar1) {
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
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&local_88,&local_4c);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_cc);
    local_cc.ray_query.ray_type = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].x;
    local_cc.ray_query.laser_type = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].y;
    local_cc.ray_query.laser_color.r = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].z;
    local_cc.ray_query.laser_color.g = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].x;
    local_cc.ray_query.laser_color.b = (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].y;
    local_1c = 0;
    if (0 < (int)this_ptr->waypoints[0x6d6]) {
      local_18 = (SActorRayHit *)(this_ptr->lights[199].filter_names[0x12] + 0x24);
      local_20 = this_ptr;
      do {
        actor = local_20->waypoints[0x6d7];
        pCVar4 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0
                           (this_ptr,(CDemonActor *)actor);
        if (pCVar4 == (CDeformableModelInstance *)0x0) {
          local_cc.deformable_model = pCVar4;
          local_cc.keyframed_model = (CKeyFramedModelInstance *)pCVar4;
          bbox_type = (*((actor->base).base.vtable._ub)->getCollisionType)
                                ((CDemonActor *)actor,&local_cc);
          if (bbox_type != COLLISION_TYPE_NONE) {
            fStack_14 = core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740
                                  ((CDemonActor *)actor,ray_origin,&local_64,&SStack_a4,&local_cc,
                                   bbox_type,&local_88);
            if (((fStack_14 <= 1.0) && (fVar1 = fStack_14 * local_24, fVar1 < max_t)) &&
               (min_t < fVar1)) {
              if (&SStack_a4 != local_18) {
                (local_18->normal).x = SStack_a4.normal.x;
                (local_18->normal).y = SStack_a4.normal.y;
                (local_18->normal).z = SStack_a4.normal.z;
              }
              *(CWayPoint **)(this_ptr->lights[199].filter_names[0x13] + 0x18) = actor;
              *(int *)(this_ptr->lights[199].filter_names[0x13] + 0x1c) = SStack_a4.part_index;
              *(int *)(this_ptr->lights[199].filter_names[0x13] + 0x20) = SStack_a4.bone_index;
              fStack_40 = ray_target->x - ray_origin->x;
              fStack_3c = ray_target->y - ray_origin->y;
              CStack_58.x = fStack_40 * fVar1;
              fStack_38 = ray_target->z - ray_origin->z;
              CStack_58.y = fStack_3c * fVar1;
              CStack_58.z = fStack_38 * fVar1;
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
              local_24 = fVar1;
              core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&local_88,&CStack_34);
              max_t = fVar1;
            }
          }
        }
        local_20 = (CDemonSet *)local_20->cameras;
        local_1c = local_1c + 1;
      } while (local_1c < (int)this_ptr->waypoints[0x6d6]);
    }
    iVar2 = *(int *)(this_ptr->lights[199].filter_names[0x13] + 0x18);
    if (iVar2 != 0) {
      uVar5 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x3c))(iVar2);
      *(uint *)(this_ptr->lights[199].filter_names[0x13] + 8) = uVar5;
    }
  }
  return max_t;
}
