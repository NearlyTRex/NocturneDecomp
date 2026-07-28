// Name: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
// Address: 0050ffe0
// Address Range: [[0050ffe0, 005103e6]]
// Convention: unknown
// Signature: float core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(CDemonSet *param_1,float param_2,CBoundingBox3D *param_3,float *param_4,float param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(CDemonSet *param_1,float param_2,CBoundingBox3D *param_3,float *param_4,float param_5)

{
  float fVar1;
  CWayPoint *actor;
  int iVar2;
  char (*pacVar3) [40];
  CDeformableModelInstance *pCVar4;
  uint uVar5;
  ECollisionType EVar6;
  SCollisionInfo local_cc;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_8c;
  CBoundingBox3D local_88;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f local_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  float local_24;
  CDemonSet *local_20;
  int local_1c;
  char *local_18;
  float fStack_14;
  
  pacVar3 = param_1->lights[199].filter_names;
  *(char *)((int)(pacVar3 + 0x13) + 0x1c) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x1d) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x1e) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x1f) = -1;
  pacVar3 = param_1->lights[199].filter_names;
  *(char *)((int)(pacVar3 + 0x13) + 0x20) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x21) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x22) = -1;
  *(char *)((int)(pacVar3 + 0x13) + 0x23) = -1;
  fVar1 = param_1->vdir_boxes[0xeb].rotation_matrix.m[1].z;
  pacVar3 = param_1->lights[199].filter_names;
  *(char *)((int)(pacVar3 + 0x13) + 0x18) = '\0';
  *(char *)((int)(pacVar3 + 0x13) + 0x19) = '\0';
  *(char *)((int)(pacVar3 + 0x13) + 0x1a) = '\0';
  *(char *)((int)(pacVar3 + 0x13) + 0x1b) = '\0';
  if (-1 < (int)fVar1) {
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
    local_70 = *param_4 - (param_3->min).x;
    local_6c = param_4[1] - (param_3->min).y;
    local_64 = local_70 * local_24;
    local_68 = param_4[2] - (param_3->min).z;
    local_60 = local_6c * local_24;
    local_5c = local_68 * local_24;
    if (&local_88 != param_3) {
      local_88.min.x = (param_3->min).x;
      local_88.min.y = (param_3->min).y;
      local_88.min.z = (param_3->min).z;
    }
    if ((CBoundingBox3D *)&local_88.max != param_3) {
      local_88.max.x = (param_3->min).x;
      local_88.max.y = (param_3->min).y;
      local_88.max.z = (param_3->min).z;
    }
    local_4c.x = (param_3->min).x + local_64;
    local_4c.y = (param_3->min).y + local_60;
    local_4c.z = (param_3->min).z + local_5c;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&local_88,&local_4c);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_cc);
    local_cc.ray_query.ray_type = (int)param_1->vdir_boxes[0xeb].rotation_matrix.m[0].x;
    local_cc.ray_query.laser_type = (int)param_1->vdir_boxes[0xeb].rotation_matrix.m[0].y;
    local_cc.ray_query.laser_color.r = (int)param_1->vdir_boxes[0xeb].rotation_matrix.m[0].z;
    local_cc.ray_query.laser_color.g = (int)param_1->vdir_boxes[0xeb].rotation_matrix.m[1].x;
    local_cc.ray_query.laser_color.b = (int)param_1->vdir_boxes[0xeb].rotation_matrix.m[1].y;
    local_1c = 0;
    if (0 < (int)param_1->waypoints[0x6d6]) {
      local_18 = param_1->lights[199].filter_names[0x12] + 0x24;
      local_20 = param_1;
      do {
        actor = local_20->waypoints[0x6d7];
        pCVar4 = (CDeformableModelInstance *)
                 core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0
                           (param_1,(CDemonActor *)actor);
        if (pCVar4 == (CDeformableModelInstance *)0x0) {
          local_cc.deformable_model = pCVar4;
          local_cc.keyframed_model = (CKeyFramedModelInstance *)pCVar4;
          EVar6 = (*((actor->base).base.vtable._ub)->getCollisionType)
                            ((CDemonActor *)actor,&local_cc);
          if (EVar6 != COLLISION_TYPE_NONE) {
            fStack_14 = (float)core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740
                                         (actor,param_3,&local_64,&uStack_a4,&local_cc,EVar6,
                                          &local_88);
            if (((fStack_14 <= 1.0) && (fVar1 = fStack_14 * local_24, fVar1 < param_5)) &&
               (param_2 < fVar1)) {
              if ((char *)&uStack_a4 != local_18) {
                *(uint *)local_18 = uStack_a4;
                *(uint *)(local_18 + 4) = uStack_a0;
                *(uint *)(local_18 + 8) = uStack_9c;
              }
              *(CWayPoint **)(param_1->lights[199].filter_names[0x13] + 0x18) = actor;
              *(uint *)(param_1->lights[199].filter_names[0x13] + 0x1c) = uStack_98;
              *(uint *)(param_1->lights[199].filter_names[0x13] + 0x20) = uStack_8c;
              fStack_40 = *param_4 - (param_3->min).x;
              fStack_3c = param_4[1] - (param_3->min).y;
              fStack_58 = fStack_40 * fVar1;
              fStack_38 = param_4[2] - (param_3->min).z;
              fStack_54 = fStack_3c * fVar1;
              fStack_50 = fStack_38 * fVar1;
              if (&local_64 != &fStack_58) {
                local_64 = fStack_58;
                local_60 = fStack_54;
                local_5c = fStack_50;
              }
              if (&local_88 != param_3) {
                local_88.min.x = (param_3->min).x;
                local_88.min.y = (param_3->min).y;
                local_88.min.z = (param_3->min).z;
              }
              if ((CBoundingBox3D *)&local_88.max != param_3) {
                local_88.max.x = (param_3->min).x;
                local_88.max.y = (param_3->min).y;
                local_88.max.z = (param_3->min).z;
              }
              CStack_34.x = (param_3->min).x + local_64;
              CStack_34.y = (param_3->min).y + local_60;
              CStack_34.z = (param_3->min).z + local_5c;
              local_24 = fVar1;
              core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&local_88,&CStack_34);
              param_5 = fVar1;
            }
          }
        }
        local_20 = (CDemonSet *)local_20->cameras;
        local_1c = local_1c + 1;
      } while (local_1c < (int)param_1->waypoints[0x6d6]);
    }
    iVar2 = *(int *)(param_1->lights[199].filter_names[0x13] + 0x18);
    if (iVar2 != 0) {
      uVar5 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x3c))(iVar2);
      *(uint *)(param_1->lights[199].filter_names[0x13] + 8) = uVar5;
    }
  }
  return param_5;
}
