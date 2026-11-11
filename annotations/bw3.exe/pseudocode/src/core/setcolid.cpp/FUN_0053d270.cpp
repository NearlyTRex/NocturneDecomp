// Name: core_setcolid.cpp_FUN_0053d270
// Address: 0053d270
// Address Range: [[0053d270, 0053d761]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_0053d270(CDemonSet *param_1,float param_2,CBoundingBox3D *param_3,float *param_4,float param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float core_setcolid_cpp_FUN_0053d270(CDemonSet *param_1,float param_2,CBoundingBox3D *param_3,float *param_4,float param_5)

{
  CDemonActor *pCVar1;
  float fVar2;
  CDeformableModelInstance *pCVar3;
  EGroundType EVar4;
  ECollisionType EVar5;
  byte bVar6;
  float afStackY_10a0 [987];
  CBoundingBox3D *this_ptr;
  CVector3f *point;
  float fStack_118;
  SCollisionInfo local_114;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int iStack_e0;
  int iStack_d4;
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
  float local_70;
  float local_6c;
  float local_68;
  CVector3f local_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_24;
  int local_20;
  CDemonSet *local_1c;
  CVector3f *local_18;
  float fStack_14;
  
  bVar6 = 0;
  param_1->collision_part_index = -1;
  param_1->collision_bone_index = -1;
  param_1->collision_actor = (CDemonActor *)0x0;
  if (-1 < param_1->ignore_list_count) {
    if (param_5 <= 0.0) {
      return 0.0;
    }
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    local_24 = param_5;
    if (1.0 < param_5) {
      local_24 = 1.0;
    }
    afStack_b4[2] = *param_4 - (param_3->min).x;
    afStack_b4[3] = param_4[1] - (param_3->min).y;
    local_a4 = param_4[2] - (param_3->min).z;
    local_94 = afStack_b4[2] * local_24;
    local_90 = afStack_b4[3] * local_24;
    local_8c = local_a4 * local_24;
    if (&local_d0 != param_3) {
      local_d0.min.x = (param_3->min).x;
      local_d0.min.y = (param_3->min).y;
      local_d0.min.z = (param_3->min).z;
    }
    if ((CBoundingBox3D *)&local_d0.max != param_3) {
      local_d0.max.x = (param_3->min).x;
      local_d0.max.y = (param_3->min).y;
      local_d0.max.z = (param_3->min).z;
    }
    local_7c = (param_3->min).x + local_94;
    local_78 = (param_3->min).y + local_90;
    local_74 = (param_3->min).z + local_8c;
    local_a0 = afStack_b4[2];
    local_9c = afStack_b4[3];
    local_98 = local_a4;
    local_70 = local_94;
    local_6c = local_90;
    local_68 = local_8c;
    local_64.x = local_7c;
    local_64.y = local_78;
    local_64.z = local_74;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(&local_d0,&local_64);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(&local_114);
    local_114.ray_query.ray_type = (param_1->ray_query).ray_type;
    local_114.ray_query.laser_type = (param_1->ray_query).laser_type;
    local_114.ray_query.laser_color.r = (param_1->ray_query).laser_color.r;
    local_114.ray_query.laser_color.g = (param_1->ray_query).laser_color.g;
    local_114.ray_query.laser_color.b = (param_1->ray_query).laser_color.b;
    local_20 = 0;
    if (0 < param_1->collidable_actor_count) {
      local_18 = &param_1->collision_normal;
      local_1c = param_1;
      do {
        pCVar1 = local_1c->collidable_actors[0];
        pCVar3 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_0053d770(param_1,pCVar1);
        if (pCVar3 == (CDeformableModelInstance *)0x0) {
          local_114.deformable_model = pCVar3;
          local_114.keyframed_model = (CKeyFramedModelInstance *)pCVar3;
          EVar5 = (*((pCVar1->vtable)._ub)->getCollisionType)(pCVar1,&local_114);
          if (EVar5 != COLLISION_TYPE_NONE) {
            fStack_118 = (float)core_actor_cpp_FUN_004091b0
                                          (pCVar1,param_3,&local_70,&fStack_ec,&local_114,EVar5,
                                           &local_d0);
            fStack_14 = fStack_118;
            if (((fStack_118 <= 1.0) &&
                (fVar2 = fStack_118 * local_24, fStack_118 = fVar2, fVar2 < param_5)) &&
               (param_2 < fVar2)) {
              if ((CVector3f *)&fStack_ec != local_18) {
                local_18->x = fStack_ec;
                local_18->y = fStack_e8;
                local_18->z = fStack_e4;
              }
              param_1->collision_actor = pCVar1;
              param_1->collision_part_index = iStack_e0;
              param_1->collision_bone_index = iStack_d4;
              local_24 = fVar2;
              afStack_54[2] = *param_4 - (param_3->min).x;
              afStack_54[3] = param_4[1] - (param_3->min).y;
              fStack_44 = param_4[2] - (param_3->min).z;
              fStack_34 = afStack_54[2];
              afStack_54[(uint)bVar6 * -2 + 9] = afStack_54[(uint)bVar6 * -2 + 3];
              afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                   afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
              fStack_b8 = fStack_34 * fVar2;
              afStack_b4[0] = fStack_30 * fVar2;
              afStack_b4[1] = fStack_2c * fVar2;
              fStack_40 = fStack_34 * fVar2;
              afStack_54[(uint)bVar6 * -2 + 6] = afStack_b4[(uint)bVar6 * -2];
              afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                   afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              if (&local_70 != afStack_54 + 5) {
                local_70 = fStack_40;
                local_6c = fStack_3c;
                local_68 = fStack_38;
              }
              if (&local_d0 != param_3) {
                local_d0.min.x = (param_3->min).x;
                local_d0.min.y = (param_3->min).y;
                local_d0.min.z = (param_3->min).z;
              }
              if ((CBoundingBox3D *)&local_d0.max != param_3) {
                local_d0.max.x = (param_3->min).x;
                local_d0.max.y = (param_3->min).y;
                local_d0.max.z = (param_3->min).z;
              }
              point = &CStack_88;
              fStack_58 = (param_3->min).x + local_70;
              afStack_54[0] = (param_3->min).y + local_6c;
              this_ptr = &local_d0;
              afStack_54[1] = (param_3->min).z + local_68;
              CStack_88.x = fStack_58;
              *(float *)((int)&CStack_88 + (uint)bVar6 * -8 + 4) = afStack_54[(uint)bVar6 * -2];
              *(float *)((int)&CStack_88 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                   afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(this_ptr,point);
              param_5 = fVar2;
            }
          }
        }
        local_1c = (CDemonSet *)local_1c->cameras;
        local_20 = local_20 + 1;
      } while (local_20 < param_1->collidable_actor_count);
    }
    pCVar1 = param_1->collision_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      EVar4 = (*((pCVar1->vtable)._ub)->getGroundType)(pCVar1);
      param_1->ground_type = EVar4;
    }
  }
  return param_5;
}
