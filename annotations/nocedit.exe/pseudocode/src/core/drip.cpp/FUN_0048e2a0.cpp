// Name: core_drip.cpp_FUN_0048e2a0
// Address: 0048e2a0
// Address Range: [[0048e2a0, 0048e47e] [0048e5f0, 0048e604] [0048e696, 0048e6aa]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048e2a0()

#include "nocturne.h"

/* Signature: byte actors_other_drip.cpp_FUN_0048e2a0(uint param_1, uint param_2)
    */

void core_drip_cpp_FUN_0048e2a0(void)

{
  CVector3f *ray_start;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  byte auStack_a4 [52];
  CDemonActor *pCStack_70;
  CDemonActor *pCStack_6c;
  float fStack_60;
  byte local_54 [8];
  float fStack_4c;
  CVector3f local_48 [2];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (in_stack_00000004[2].orient_matrix.m[0].x == 0.0) {
    ray_start = in_stack_00000004[2].orient_matrix.m + 1;
    local_48[0].x = ray_start->x;
    local_48[0].z = in_stack_00000004[2].orient_matrix.m[1].z;
    local_48[0].y = in_stack_00000004[2].orient_matrix.m[1].y + -5000.0f;
    core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
              (&g_CDemonRaytraceInstance,(CVector3f *)local_54,ray_start,local_48);
    in_stack_00000004[2].orient_matrix.m[0].x = 1.4013e-45;
    in_stack_00000004[2].orient_matrix.m[0].y = (float)local_54._4_4_;
  }
  if ((in_stack_00000004[2].location.area_id & 0x7fffffffU) == 0) {
    fVar3 = in_stack_00000004[2].orient_matrix.m[2].y - in_stack_00000008 * (float)32;
    in_stack_00000004[2].orient_matrix.m[2].y = fVar3;
    pCVar1 = (in_stack_00000004->vtable)._ub;
    (in_stack_00000004->location).position.y =
         fVar3 * in_stack_00000008 + (in_stack_00000004->location).position.y;
    (*pCVar1->getBoundingBox)(in_stack_00000004,(CBoundingBox3D *)(auStack_a4 + 0x2c));
    if ((in_stack_00000004->location).position.y <
        in_stack_00000004[2].orient_matrix.m[0].y -
        (fStack_60 - (float)pCStack_6c) * (float)0.84999999999999998) {
      if (*(int *)(in_stack_00000004[2].create_event + 0x10) != 0) {
        core_set_cpp_CDemonSet_FUN_00570fa0(g_CDemonSetPtr);
        (*((in_stack_00000004->vtable)._ub)->playSound)
                  (in_stack_00000004,(char *)&in_stack_00000004[2].health);
      }
      iVar5 = *(int *)(in_stack_00000004[2].create_event + 0xc);
      (in_stack_00000004->location).position.y = in_stack_00000004[2].orient_matrix.m[0].y;
      if (iVar5 == 0) {
        iVar5 = 0;
        do {
          local_54._4_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          fStack_4c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_48[0].x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_54._4_4_ = (float)local_54._4_4_ + (in_stack_00000004->location).position.x;
          fStack_4c = fStack_4c + (in_stack_00000004->location).position.y;
          local_48[0].x = local_48[0].x + (in_stack_00000004->location).position.z;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,(CVector3f *)(local_54 + 4),0.5,(CVector3f *)0x0,0xffff);
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
          fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
          fVar7 = (float10)fcos((float10)fVar4);
          fVar8 = (float10)fcos((float10)fVar3);
          fVar9 = (float10)fsin((float10)fVar4);
          fVar10 = (float10)fsin((float10)fVar3);
          fStack_28 = (float)(fVar10 * (float10)20.0f);
          fStack_2c = (float)(fVar7 * (float10)20.0f * (float10)(float)fVar8);
          fStack_24 = (float)(fVar9 * (float10)20.0f * (float10)(float)fVar8);
          core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&DAT_02c9b170);
          iVar5 = iVar5 + 1;
          core_fire_cpp_CFireEffect_FUN_004c7e60(g_CFireEffectPtr);
        } while (iVar5 < 10);
      }
      (in_stack_00000004->location).position.y = in_stack_00000004[2].orient_matrix.m[1].y;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      (in_stack_00000004->location).position.x =
           fVar3 * in_stack_00000004[2].orient.heading + in_stack_00000004[2].orient_matrix.m[1].x;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      (in_stack_00000004->location).position.z =
           fVar3 * in_stack_00000004[2].orient.heading + in_stack_00000004[2].orient_matrix.m[1].z;
      in_stack_00000004[2].orient_matrix.m[2].z = 0.0;
      in_stack_00000004[2].orient_matrix.m[2].y = in_stack_00000004[2].orient_matrix.m[2].z;
      in_stack_00000004[2].orient_matrix.m[2].x = in_stack_00000004[2].orient_matrix.m[2].y;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                        (in_stack_00000004[2].orient.pitch,in_stack_00000004[2].orient.bank);
      in_stack_00000004[2].location.area_id = (int)fVar3;
    }
    iVar6 = 0;
    iVar5 = 0;
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar6) break;
      iVar2 = *(int *)(g_CDemonSetPtr->unk4 + iVar5 + -4);
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_a4);
      auStack_a4._4_4_ = in_stack_00000004[2].runtime_state;
      pCStack_70 = in_stack_00000004;
      pCStack_6c = in_stack_00000004;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x114))();
    }
  }
  else if ((in_stack_00000004[2].location.position.z != 0.0) &&
          (in_stack_00000008 = (float)in_stack_00000004[2].location.area_id - in_stack_00000008,
          in_stack_00000004[2].location.area_id = (int)in_stack_00000008, in_stack_00000008 < 0.0))
  {
    in_stack_00000004[2].location.area_id = 0;
    return;
  }
  return;
}
