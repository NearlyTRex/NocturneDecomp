// Name: core_drip.cpp_FUN_00462300
// Address: 00462300
// Address Range: [[00462300, 0046270a]]
// Convention: unknown
// Signature: void core_drip_cpp_FUN_00462300(CDemonActor *param_1,float param_2)

#include "nocturne.h"

void core_drip_cpp_FUN_00462300(CDemonActor *param_1,float param_2)

{
  float *ray_start;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  float fVar3;
  CKeyFramedModel *model_ptr;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  SDamageInfo SStack_b4;
  CBoundingBox3D local_78;
  CVector3f CStack_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f aCStack_3c [2];
  CLocation *pCStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1[2].orient_matrix.m[0].z == 0.0) {
    ray_start = &param_1[2].orient_matrix.m[1].z;
    local_48.x = *ray_start;
    local_48.z = param_1[2].orient_matrix.m[2].y;
    local_48.y = param_1[2].orient_matrix.m[2].x + -5000.0f;
    core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00467930
              ((CDemonRaytrace *)&DAT_01fba938,&local_54,(CVector3f *)ray_start,&local_48);
    param_1[2].orient_matrix.m[0].z = 1.4013e-45;
    param_1[2].orient_matrix.m[1].x = local_54.y;
  }
  if (ABS(param_1[2].orient.vec.y) == 0.0) {
    fVar3 = (float)param_1[2].runtime_state - param_2 * (float)32;
    param_1[2].runtime_state = (int)fVar3;
    pCVar1 = (param_1->vtable)._ub;
    (param_1->location).position.y = fVar3 * param_2 + (param_1->location).position.y;
    (*pCVar1->getBoundingBox)(param_1,&local_78);
    if ((param_1->location).position.y <
        param_1[2].orient_matrix.m[1].x - (local_78.max.y - local_78.min.y) * (float)0.84999999999999998
       ) {
      if (*(int *)(param_1[2].create_event + 0x18) != 0) {
        core_set_cpp_FUN_0050e660(0x01E57284,0x42c80000,0,0,0x3f800000);
        (*((param_1->vtable)._ub)->playSound)(param_1,(char *)&param_1[2].direction_hint);
      }
      iVar4 = *(int *)(param_1[2].create_event + 0x14);
      (param_1->location).position.y = param_1[2].orient_matrix.m[1].x;
      if (iVar4 == 0) {
        iVar4 = 0;
        do {
          CStack_60.x = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                         (0xbf000000,0x3f000000);
          fStack_14 = CStack_60.x;
          CStack_60.y = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                         (0xbf000000,0x3f000000);
          fStack_14 = CStack_60.y;
          fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0xbf000000,0x3f000000);
          CStack_60.x = CStack_60.x + (param_1->location).position.x;
          CStack_60.y = CStack_60.y + (param_1->location).position.y;
          CStack_60.z = fStack_14 + (param_1->location).position.z;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,&CStack_60,0.5,(CVector3f *)0x0,0xffff);
          fStack_1c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0x3f490fdb,0x3fc90fdb);
          fStack_14 = fStack_1c;
          fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40c90fdb);
          fVar6 = (float10)fcos((float10)fStack_14);
          fVar7 = (float10)fcos((float10)fStack_1c);
          fVar8 = (float10)fsin((float10)fStack_14);
          fVar9 = (float10)fsin((float10)fStack_1c);
          fStack_18 = (float)fVar7;
          aCStack_3c[0].y = (float)(fVar9 * (float10)20.0f);
          aCStack_3c[0].x = (float)(fVar6 * (float10)20.0f * (float10)fStack_18);
          aCStack_3c[0].z = (float)(fVar8 * (float10)20.0f * (float10)fStack_18);
          model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                                ((CKeyFramedModelInstance *)0x1b7b330);
          iVar4 = iVar4 + 1;
          core_fire_cpp_CFireEffect_createRock_FUN_0048b320
                    (0x01C08D04,&(param_1->location).position,aCStack_3c,model_ptr);
        } while (iVar4 < 10);
      }
      (param_1->location).position.y = param_1[2].orient_matrix.m[2].x;
      fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
      (param_1->location).position.x =
           fStack_14 * param_1[2].orient_matrix.m[0].y + param_1[2].orient_matrix.m[1].z;
      fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
      (param_1->location).position.z =
           fStack_14 * param_1[2].orient_matrix.m[0].y + param_1[2].orient_matrix.m[2].y;
      param_1[2].health = 0;
      param_1[2].runtime_state = param_1[2].health;
      param_1[2].orient_matrix.m[2].z = (float)param_1[2].runtime_state;
      fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                   (param_1[2].orient.vec.z,param_1[2].orient_matrix.m[0].x);
      param_1[2].orient.vec.y = fStack_14;
    }
    pCStack_20 = &param_1->location;
    iVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar5) break;
      iVar2 = *(int *)(iVar4 + 0x14ecb4 + 0x01E57284);
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_b4);
      SStack_b4.damage_amount = (float)param_1[2].validation_magic;
      SStack_b4.attacker = param_1;
      SStack_b4.wielder = param_1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      (**(code **)(*(int *)(iVar2 + 0x14c) + 0xf8))(iVar2,pCStack_20,0x3f800000,&SStack_b4);
    }
  }
  else if ((param_1[2].orient.vec.x != 0.0) &&
          (param_2 = param_1[2].orient.vec.y - param_2, param_1[2].orient.vec.y = param_2,
          param_2 < 0.0)) {
    param_1[2].orient.vec.y = 0.0;
    return;
  }
  return;
}
