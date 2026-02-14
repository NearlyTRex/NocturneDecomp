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
  CKeyFramedModelInstance *pCVar3;
  int iVar4;
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
  
  this_ptr->unk1 = -1;
  this_ptr->unk2 = -1;
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
    local_cc.unk1 = this_ptr->unk8;
    local_cc.unk2 = this_ptr->unk9;
    local_cc.unk3 = this_ptr->unk10;
    local_cc.unk4 = this_ptr->unk11;
    local_1c = 0;
    if (0 < *(int *)(this_ptr->unk4 + 0x7d08)) {
      local_18 = &this_ptr->collision_normal;
      local_20 = this_ptr;
      do {
        pCVar1 = *(CDemonActor **)(local_20->unk4 + 0x7d0c);
        pCVar3 = (CKeyFramedModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,pCVar1);
        if (pCVar3 == (CKeyFramedModelInstance *)0x0) {
          local_cc.result_ptr = pCVar3;
          local_cc.model = pCVar3;
          iVar4 = (*((pCVar1->vtable)._ub)->hasCollision)(pCVar1,&local_cc);
          if (iVar4 != 0) {
            fStack_14 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                                  (pCVar1,ray_origin,&local_64,&CStack_a4,&local_cc,iVar4,&local_88)
            ;
            if (((fStack_14 <= 1.0) && (fVar2 = fStack_14 * local_24, fVar2 < max_t)) &&
               (min_t < fVar2)) {
              if (&CStack_a4 != local_18) {
                local_18->x = CStack_a4.x;
                local_18->y = CStack_a4.y;
                local_18->z = CStack_a4.z;
              }
              this_ptr->collision_actor = pCVar1;
              this_ptr->unk1 = iStack_98;
              this_ptr->unk2 = iStack_8c;
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
      } while (local_1c < *(int *)(this_ptr->unk4 + 0x7d08));
    }
    pCVar1 = this_ptr->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      iVar4 = (*((pCVar1->vtable)._ub)->getGroundType)(pCVar1);
      this_ptr->ground_type = iVar4;
    }
  }
  return max_t;
}
