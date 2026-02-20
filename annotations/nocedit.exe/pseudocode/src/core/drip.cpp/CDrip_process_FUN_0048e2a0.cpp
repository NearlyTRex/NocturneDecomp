// Name: core_drip.cpp_CDrip_process_FUN_0048e2a0
// Address: 0048e2a0
// Address Range: [[0048e2a0, 0048e47e] [0048e5f0, 0048e604] [0048e696, 0048e6aa]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_process_FUN_0048e2a0(CDrip *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_process_FUN_0048e2a0(CDrip *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  int iVar2;
  float fVar3;
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
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CLocation *pCStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)this_ptr->unk2 == 0) {
    local_48.x = (this_ptr->home_pos).x;
    local_48.z = (this_ptr->home_pos).z;
    local_48.y = (this_ptr->home_pos).y + -5000.0f;
    core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
              (&g_CDemonRaytraceInstance,&local_54,&this_ptr->home_pos,&local_48);
    this_ptr->unk2[0] = '\x01';
    this_ptr->unk2[1] = '\0';
    this_ptr->unk2[2] = '\0';
    this_ptr->unk2[3] = '\0';
    *(float *)(this_ptr->unk2 + 4) = local_54.y;
  }
  if ((*(uint *)this_ptr->unk1 & 0x7fffffff) == 0) {
    fVar3 = (this_ptr->vel).y - delta_time * (float)32;
    (this_ptr->vel).y = fVar3;
    pCVar1 = (this_ptr->base).vtable._ub;
    (this_ptr->base).location.position.y = fVar3 * delta_time + (this_ptr->base).location.position.y
    ;
    (*pCVar1->getBoundingBox)(&this_ptr->base,&local_78);
    if ((this_ptr->base).location.position.y <
        *(float *)(this_ptr->unk2 + 4) - (local_78.max.y - local_78.min.y) * (float)0.84999999999999998)
    {
      if (this_ptr->unk3 != 0) {
        core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->hit_sound);
      }
      iVar4 = this_ptr->no_rock_flag;
      (this_ptr->base).location.position.y = *(float *)(this_ptr->unk2 + 4);
      if (iVar4 == 0) {
        iVar4 = 0;
        do {
          CStack_60.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          fStack_14 = CStack_60.x;
          CStack_60.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          fStack_14 = CStack_60.y;
          fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          CStack_60.x = CStack_60.x + (this_ptr->base).location.position.x;
          CStack_60.y = CStack_60.y + (this_ptr->base).location.position.y;
          CStack_60.z = fStack_14 + (this_ptr->base).location.position.z;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&CStack_60,0.5,(CVector3f *)0x0,0xffff);
          fStack_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
          fStack_14 = fStack_1c;
          fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
          fVar6 = (float10)fcos((float10)fStack_14);
          fVar7 = (float10)fcos((float10)fStack_1c);
          fVar8 = (float10)fsin((float10)fStack_14);
          fVar9 = (float10)fsin((float10)fStack_1c);
          fStack_18 = (float)fVar7;
          fStack_38 = (float)(fVar9 * (float10)20.0f);
          fStack_3c = (float)(fVar6 * (float10)20.0f * (float10)fStack_18);
          fStack_34 = (float)(fVar8 * (float10)20.0f * (float10)fStack_18);
          core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                    (&CKeyFramedModelInstance_02c9b170);
          iVar4 = iVar4 + 1;
          core_fire_cpp_CFireEffect_createRock_FUN_004c7e60(g_CFireEffectPtr);
        } while (iVar4 < 10);
      }
      (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
      fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      (this_ptr->base).location.position.x =
           fStack_14 * this_ptr->drip_radius + (this_ptr->home_pos).x;
      fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      (this_ptr->base).location.position.z =
           fStack_14 * this_ptr->drip_radius + (this_ptr->home_pos).z;
      (this_ptr->vel).z = 0.0;
      (this_ptr->vel).y = (this_ptr->vel).z;
      (this_ptr->vel).x = (this_ptr->vel).y;
      fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                            (this_ptr->min_auto_drip_time,this_ptr->max_auto_drip_time);
      *(float *)this_ptr->unk1 = fStack_14;
    }
    pCStack_20 = &(this_ptr->base).location;
    iVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar5) break;
      iVar2 = *(int *)((int)g_CDemonSetPtr->characters + iVar4);
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_b4);
      SStack_b4.damage_amount = this_ptr->damage;
      SStack_b4.attacker = &this_ptr->base;
      SStack_b4.wielder = &this_ptr->base;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x114))(iVar2,pCStack_20,0x3f800000,&SStack_b4);
    }
  }
  else if ((this_ptr->auto_drop != 0) &&
          (fVar3 = *(float *)this_ptr->unk1 - delta_time, *(float *)this_ptr->unk1 = fVar3,
          fVar3 < 0.0)) {
    this_ptr->unk1[0] = '\0';
    this_ptr->unk1[1] = '\0';
    this_ptr->unk1[2] = '\0';
    this_ptr->unk1[3] = '\0';
    return;
  }
  return;
}
