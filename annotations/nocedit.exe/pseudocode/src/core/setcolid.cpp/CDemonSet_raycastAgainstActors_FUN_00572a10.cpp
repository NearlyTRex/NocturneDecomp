// Name: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
// Address: 00572a10
// Address Range: [[00572a10, 00572e16]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10(CDemonSet * this_ptr, float min_t, CVector3f * ray_origin, CVector3f * ray_target, float max_t)

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
          (CDemonSet *this_ptr,float min_t,CVector3f *ray_origin,CVector3f *ray_target,float max_t)

{
  CDemonActor *pCVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  byte local_c8 [40];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  byte local_88 [8];
  float local_80;
  byte local_7c [8];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f local_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f local_4c;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float local_24;
  float local_20;
  CDemonSet *local_18;
  float *pfStack_14;
  
  this_ptr->field11_0x14d148 = -1;
  this_ptr->field12_0x14d14c = -1;
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
    if ((CVector3f *)local_88 != ray_origin) {
      local_88._0_4_ = ray_origin->x;
      local_88._4_4_ = ray_origin->y;
      local_80 = ray_origin->z;
    }
    if ((CVector3f *)local_7c != ray_origin) {
      local_7c._0_4_ = ray_origin->x;
      local_7c._4_4_ = ray_origin->y;
      local_74 = ray_origin->z;
    }
    local_4c.x = ray_origin->x + local_64.x;
    local_4c.y = ray_origin->y + local_64.y;
    local_4c.z = ray_origin->z + local_64.z;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)local_88,&local_4c);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)local_c8);
    local_c8._4_4_ = this_ptr->ray_type;
    local_c8._8_4_ = this_ptr->field60_0x15f684;
    local_c8._12_4_ = this_ptr->field61_0x15f688;
    local_c8._16_4_ = this_ptr->field62_0x15f68c;
    local_c8._20_4_ = this_ptr->field63_0x15f690;
    pfStack_14 = (float *)0x0;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      local_18 = this_ptr;
      do {
        pCVar1 = *(CDemonActor **)(local_18->field19_0x14f0a0 + 0x7d0c);
        pvVar3 = (void *)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,pCVar1);
        if (pvVar3 == (void *)0x0) {
          local_c8._8_4_ = pvVar3;
          local_c8._12_4_ = pvVar3;
          iVar4 = (*pCVar1->vtable->hasCollision)(pCVar1,(SCollisionInfo *)&stack0xffffff20);
          if (iVar4 != 0) {
            local_c8._0_4_ =
                 core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                           (pCVar1,ray_origin,&local_64,(CVector3f *)(local_c8 + 0x24),
                            (SCollisionInfo *)&stack0xffffff34,iVar4,(CBoundingBox3D *)local_88);
            if ((((float)local_c8._0_4_ <= 1.0) &&
                (fVar2 = (float)local_c8._0_4_ * local_20, local_c8._0_4_ = fVar2, fVar2 < max_t))
               && (min_t < fVar2)) {
              if (&fStack_a0 != pfStack_14) {
                *pfStack_14 = fStack_a0;
                pfStack_14[1] = fStack_9c;
                pfStack_14[2] = fStack_98;
              }
              this_ptr->collision_actor = pCVar1;
              this_ptr->field11_0x14d148 = iStack_94;
              this_ptr->field12_0x14d14c = local_88._0_4_;
              fStack_3c = ray_target->x - ray_origin->x;
              fStack_38 = ray_target->y - ray_origin->y;
              fStack_54 = fStack_3c * fVar2;
              fStack_34 = ray_target->z - ray_origin->z;
              fStack_50 = fStack_38 * fVar2;
              local_4c.x = fStack_34 * fVar2;
              if (&local_64.y != &fStack_54) {
                local_64.y = fStack_54;
                local_64.z = fStack_50;
                fStack_58 = local_4c.x;
              }
              if ((CVector3f *)(local_88 + 4) != ray_origin) {
                local_88._4_4_ = ray_origin->x;
                local_80 = ray_origin->y;
                local_7c._0_4_ = ray_origin->z;
              }
              if ((CVector3f *)(local_7c + 4) != ray_origin) {
                local_7c._4_4_ = ray_origin->x;
                local_74 = ray_origin->y;
                local_70 = ray_origin->z;
              }
              CStack_30.x = ray_origin->x + local_64.y;
              CStack_30.y = ray_origin->y + local_64.z;
              CStack_30.z = ray_origin->z + fStack_58;
              local_20 = fVar2;
              core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                        ((CBoundingBox3D *)(local_88 + 4),&CStack_30);
              max_t = fVar2;
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        pfStack_14 = (float *)((int)pfStack_14 + 1);
      } while ((int)pfStack_14 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
    pCVar1 = this_ptr->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      iVar4 = (*pCVar1->vtable->getGroundType)(pCVar1);
      this_ptr->ground_type = iVar4;
    }
  }
  return max_t;
}
