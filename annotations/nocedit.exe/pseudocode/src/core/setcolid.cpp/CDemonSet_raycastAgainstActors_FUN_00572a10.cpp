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
  CVector3f *unaff_EBP;
  SCollisionInfo local_c4;
  CVector3f CStack_9c;
  int iStack_90;
  byte local_88 [12];
  byte local_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  byte auStack_50 [8];
  float local_48;
  float local_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  CDemonSet *local_20;
  float local_1c;
  CVector3f *local_18;
  
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
    CStack_2c.z = max_t;
    if (1.0 < max_t) {
      CStack_2c.z = 1.0;
    }
    local_70 = ray_target->x - ray_origin->x;
    local_6c = ray_target->y - ray_origin->y;
    local_64 = local_70 * CStack_2c.z;
    local_68 = ray_target->z - ray_origin->z;
    local_60 = local_6c * CStack_2c.z;
    local_5c.x = local_68 * CStack_2c.z;
    if ((CVector3f *)local_88 != ray_origin) {
      local_88._0_4_ = ray_origin->x;
      local_88._4_4_ = ray_origin->y;
      local_88._8_4_ = ray_origin->z;
    }
    if ((CVector3f *)local_7c != ray_origin) {
      local_7c._0_4_ = ray_origin->x;
      local_7c._4_4_ = ray_origin->y;
      local_7c._8_4_ = ray_origin->z;
    }
    auStack_50._4_4_ = ray_origin->x + local_64;
    local_48 = ray_origin->y + local_60;
    local_44 = ray_origin->z + local_5c.x;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240
              ((CBoundingBox3D *)local_88,(CVector3f *)(auStack_50 + 4));
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffff34);
    local_c4.ray_type = (int)this_ptr->unk9;
    local_c4.unk1 = this_ptr->unk10;
    local_c4.unk2 = this_ptr->unk11;
    local_1c = 0.0;
    if (0 < *(int *)(this_ptr->unk4 + 0x7d08)) {
      local_18 = &this_ptr->collision_normal;
      local_20 = this_ptr;
      do {
        pCVar1 = *(CDemonActor **)(local_20->unk4 + 0x7d0c);
        pvVar2 = (void *)core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(this_ptr,pCVar1);
        if (pvVar2 == (void *)0x0) {
          local_c4.cylinder_top_y = (float)pvVar2;
          local_c4.cylinder_radius = (float)pvVar2;
          iVar3 = (*((pCVar1->vtable)._ub)->hasCollision)(pCVar1,(SCollisionInfo *)&stack0xffffff34)
          ;
          if (iVar3 != 0) {
            fVar4 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                              (pCVar1,ray_origin,&local_5c,&CStack_9c,&local_c4,iVar3,
                               (CBoundingBox3D *)(local_88 + 8));
            if (((fVar4 <= 1.0) && (fVar4 = fVar4 * local_1c, fVar4 < max_t)) && (min_t < fVar4)) {
              if (&CStack_9c != unaff_EBP) {
                unaff_EBP->x = CStack_9c.x;
                unaff_EBP->y = CStack_9c.y;
                unaff_EBP->z = CStack_9c.z;
              }
              this_ptr->collision_actor = pCVar1;
              this_ptr->unk1 = iStack_90;
              this_ptr->unk2 = local_88._4_4_;
              fStack_38 = ray_target->x - ray_origin->x;
              fStack_34 = ray_target->y - ray_origin->y;
              auStack_50._0_4_ = fStack_38 * fVar4;
              fStack_30 = ray_target->z - ray_origin->z;
              auStack_50._4_4_ = fStack_34 * fVar4;
              local_48 = fStack_30 * fVar4;
              if (&local_5c != (CVector3f *)auStack_50) {
                local_5c.x = (float)auStack_50._0_4_;
                local_5c.y = (float)auStack_50._4_4_;
                local_5c.z = local_48;
              }
              if ((CVector3f *)(local_88 + 8) != ray_origin) {
                local_88._8_4_ = ray_origin->x;
                local_7c._0_4_ = ray_origin->y;
                local_7c._4_4_ = ray_origin->z;
              }
              if ((CVector3f *)(local_7c + 8) != ray_origin) {
                local_7c._8_4_ = ray_origin->x;
                local_70 = ray_origin->y;
                local_6c = ray_origin->z;
              }
              CStack_2c.x = ray_origin->x + local_5c.x;
              CStack_2c.y = ray_origin->y + local_5c.y;
              CStack_2c.z = ray_origin->z + local_5c.z;
              local_1c = fVar4;
              core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                        ((CBoundingBox3D *)(local_88 + 8),&CStack_2c);
              max_t = fVar4;
            }
          }
        }
        local_20 = (CDemonSet *)local_20->cameras;
        local_1c = (float)((int)local_1c + 1);
      } while ((int)local_1c < *(int *)(this_ptr->unk4 + 0x7d08));
    }
    pCVar1 = this_ptr->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      iVar3 = (*((pCVar1->vtable)._ub)->getGroundType)(pCVar1);
      this_ptr->ground_type = iVar3;
    }
  }
  return max_t;
}
