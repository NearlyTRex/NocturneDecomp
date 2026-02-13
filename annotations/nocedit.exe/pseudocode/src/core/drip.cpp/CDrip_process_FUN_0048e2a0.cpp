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
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  byte auStack_a4 [52];
  CDrip *pCStack_70;
  CDrip *pCStack_6c;
  float fStack_60;
  byte local_54 [8];
  float fStack_4c;
  CVector3f local_48 [2];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (*(int *)this_ptr->unk2 == 0) {
    local_48[0].x = (this_ptr->home_pos).x;
    local_48[0].z = (this_ptr->home_pos).z;
    local_48[0].y = (this_ptr->home_pos).y + -5000.0f;
    core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
              (&g_CDemonRaytraceInstance,(CVector3f *)local_54,&this_ptr->home_pos,local_48);
    this_ptr->unk2[0] = '\x01';
    this_ptr->unk2[1] = '\0';
    this_ptr->unk2[2] = '\0';
    this_ptr->unk2[3] = '\0';
    *(uint *)(this_ptr->unk2 + 4) = local_54._4_4_;
  }
  if ((*(uint *)this_ptr->unk1 & 0x7fffffff) == 0) {
    fVar3 = (this_ptr->vel).y - delta_time * (float)32;
    (this_ptr->vel).y = fVar3;
    pCVar1 = (this_ptr->base).vtable._ub;
    (this_ptr->base).location.position.y = fVar3 * delta_time + (this_ptr->base).location.position.y
    ;
    (*pCVar1->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)(auStack_a4 + 0x2c));
    if ((this_ptr->base).location.position.y <
        *(float *)(this_ptr->unk2 + 4) - (fStack_60 - (float)pCStack_6c) * (float)0.84999999999999998) {
      if (this_ptr->unk3 != 0) {
        core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->hit_sound);
      }
      iVar5 = this_ptr->no_rock_flag;
      (this_ptr->base).location.position.y = *(float *)(this_ptr->unk2 + 4);
      if (iVar5 == 0) {
        iVar5 = 0;
        do {
          local_54._4_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          fStack_4c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_48[0].x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_54._4_4_ = (float)local_54._4_4_ + (this_ptr->base).location.position.x;
          fStack_4c = fStack_4c + (this_ptr->base).location.position.y;
          local_48[0].x = local_48[0].x + (this_ptr->base).location.position.z;
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
      (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      (this_ptr->base).location.position.x = fVar3 * this_ptr->drip_radius + (this_ptr->home_pos).x;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      (this_ptr->base).location.position.z = fVar3 * this_ptr->drip_radius + (this_ptr->home_pos).z;
      (this_ptr->vel).z = 0.0;
      (this_ptr->vel).y = (this_ptr->vel).z;
      (this_ptr->vel).x = (this_ptr->vel).y;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                        (this_ptr->min_auto_drip_time,this_ptr->max_auto_drip_time);
      *(float *)this_ptr->unk1 = fVar3;
    }
    iVar6 = 0;
    iVar5 = 0;
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar6) break;
      iVar2 = *(int *)(g_CDemonSetPtr->unk4 + iVar5 + -4);
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_a4);
      auStack_a4._4_4_ = this_ptr->damage;
      pCStack_70 = this_ptr;
      pCStack_6c = this_ptr;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x114))();
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
