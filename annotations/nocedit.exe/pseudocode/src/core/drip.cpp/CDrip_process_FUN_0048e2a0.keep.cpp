// Name: core_drip.cpp_CDrip_process_FUN_0048e2a0
// Address: 0048e2a0
// MANUAL RECONSTRUCTION
// Address Range: [[0048e2a0, 0048e47e] [0048e5f0, 0048e604] [0048e696, 0048e6aa]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_process_FUN_0048e2a0(CDrip *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_process_FUN_0048e2a0(CDrip *this_ptr,float delta_time)

{
  CLocation *position_00;
  float fVar1;
  float fVar2;
  CKeyFramedModel *model_ptr;
  int iVar4;
  int iVar5;
  int iVar3;
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
  float fVar3;
  CDemonActor_vtable *pCVar1;
  CCharacter *pCVar2;
  
  if (this_ptr->is_ground_cached == 0) {
    local_48.x = (this_ptr->home_pos).x;
    local_48.z = (this_ptr->home_pos).z;
    local_48.y = (this_ptr->home_pos).y + -5000.0f;
    core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
              (&g_CDemonRaytraceInstance,&local_54,&this_ptr->home_pos,&local_48);
    this_ptr->is_ground_cached = 1;
    this_ptr->ground_y = local_54.y;
  }
  if (ABS(this_ptr->drip_timer) == 0.0) {
    fVar1 = (this_ptr->vel).y - delta_time * (float)32;
    (this_ptr->vel).y = fVar1;
    pCVar1 = (this_ptr->base).vtable._ub;
    (this_ptr->base).location.position.y = fVar1 * delta_time + (this_ptr->base).location.position.y
    ;
    (*pCVar1->getBoundingBox)(&this_ptr->base,&local_78);
    if ((this_ptr->base).location.position.y <
        this_ptr->ground_y - (local_78.max.y - local_78.min.y) * (float)0.84999999999999998) {
      if (this_ptr->is_visible != 0) {
        core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->hit_sound);
      }
      iVar3 = this_ptr->no_rock_flag;
      (this_ptr->base).location.position.y = this_ptr->ground_y;
      if (iVar3 == 0) {
        position_00 = &(this_ptr->base).location;
        iVar3 = 0;
        do {
          CStack_60.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.5,0.5);
          CStack_60.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.5,0.5);
          fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.5,0.5);
          CStack_60.x = CStack_60.x + (position_00->position).x;
          CStack_60.y = CStack_60.y + (this_ptr->base).location.position.y;
          CStack_60.z = fVar1 + (this_ptr->base).location.position.z;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&CStack_60,0.5,(CVector3f *)0x0,0xffff);
          fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.7853982,1.5707964);
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
          fVar6 = (float10)fcos((float10)fVar2);
          fVar7 = (float10)fcos((float10)fVar1);
          fVar8 = (float10)fsin((float10)fVar2);
          fVar9 = (float10)fsin((float10)fVar1);
          aCStack_3c[0].y = (float)(fVar9 * (float10)20.0f);
          aCStack_3c[0].x = (float)(fVar6 * (float10)20.0f * (float10)(float)fVar7);
          aCStack_3c[0].z = (float)(fVar8 * (float10)20.0f * (float10)(float)fVar7);
          model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                                (&CKeyFramedModelInstance_02c9b170);
          iVar3 = iVar3 + 1;
          core_fire_cpp_CFireEffect_createRock_FUN_004c7e60
                    (g_CFireEffectPtr,&position_00->position,aCStack_3c,model_ptr);
        } while (iVar3 < 10);
      }
      (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
      fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
      (this_ptr->base).location.position.x = fVar1 * this_ptr->drip_radius + (this_ptr->home_pos).x;
      fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
      (this_ptr->base).location.position.z = fVar1 * this_ptr->drip_radius + (this_ptr->home_pos).z;
      (this_ptr->vel).z = 0.0;
      (this_ptr->vel).y = (this_ptr->vel).z;
      (this_ptr->vel).x = (this_ptr->vel).y;
      fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                        (this_ptr->min_auto_drip_time,this_ptr->max_auto_drip_time);
      this_ptr->drip_timer = fVar1;
    }
    iVar5 = 0;
    iVar4 = 0;
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar5) break;
      pCVar2 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iVar4);
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_b4);
      SStack_b4.damage_amount = this_ptr->damage;
      SStack_b4.attacker = &this_ptr->base;
      SStack_b4.wielder = &this_ptr->base;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      (*(((pCVar2->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                (pCVar2,&(this_ptr->base).location.position,1.0f,&SStack_b4);
    }
  }
  else if ((this_ptr->auto_drop != 0) &&
          (fVar3 = this_ptr->drip_timer - delta_time, this_ptr->drip_timer = fVar3, fVar3 < 0.0)) {
    this_ptr->drip_timer = 0.0;
    return;
  }
  return;
}
