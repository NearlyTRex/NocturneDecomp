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
  void *pvVar2;
  int iVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  byte local_c0 [32];
  void *pvStack_a0;
  void *pvStack_9c;
  void *pvStack_98;
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
  void **ppvStack_14;
  
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
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffff38);
    local_c0._0_4_ = this_ptr->field60_0x15f684;
    local_c0._4_4_ = this_ptr->field61_0x15f688;
    local_c0._8_4_ = this_ptr->field62_0x15f68c;
    local_c0._12_4_ = this_ptr->field63_0x15f690;
    ppvStack_14 = (void **)0x0;
    if (0 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08)) {
      local_18 = this_ptr;
      do {
        pCVar1 = *(CDemonActor **)(local_18->field19_0x14f0a0 + 0x7d0c);
        pvVar2 = (void *)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,pCVar1);
        if (pvVar2 == (void *)0x0) {
          pvStack_a0 = pvVar2;
          pvStack_9c = pvVar2;
          iVar3 = (*pCVar1->vtable->hasCollision)(pCVar1,(SCollisionInfo *)local_c0);
          if (iVar3 != 0) {
            fVar4 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                              (pCVar1,ray_origin,&local_64,(CVector3f *)(local_c0 + 0x1c),
                               (SCollisionInfo *)&stack0xffffff34,iVar3,(CBoundingBox3D *)local_88);
            if (((fVar4 <= 1.0) && (fVar4 = fVar4 * local_20, fVar4 < max_t)) && (min_t < fVar4)) {
              if (&pvStack_a0 != ppvStack_14) {
                *ppvStack_14 = pvStack_a0;
                ppvStack_14[1] = pvStack_9c;
                ppvStack_14[2] = pvStack_98;
              }
              this_ptr->collision_actor = pCVar1;
              this_ptr->field11_0x14d148 = iStack_94;
              this_ptr->field12_0x14d14c = local_88._0_4_;
              fStack_3c = ray_target->x - ray_origin->x;
              fStack_38 = ray_target->y - ray_origin->y;
              fStack_54 = fStack_3c * fVar4;
              fStack_34 = ray_target->z - ray_origin->z;
              fStack_50 = fStack_38 * fVar4;
              local_4c.x = fStack_34 * fVar4;
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
              local_20 = fVar4;
              core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                        ((CBoundingBox3D *)(local_88 + 4),&CStack_30);
              max_t = fVar4;
            }
          }
        }
        local_18 = (CDemonSet *)local_18->cameras;
        ppvStack_14 = (void **)((int)ppvStack_14 + 1);
      } while ((int)ppvStack_14 < *(int *)(this_ptr->field19_0x14f0a0 + 0x7d08));
    }
    pCVar1 = this_ptr->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      iVar3 = (*pCVar1->vtable->getGroundType)(pCVar1);
      this_ptr->ground_type = iVar3;
    }
  }
  return max_t;
}
