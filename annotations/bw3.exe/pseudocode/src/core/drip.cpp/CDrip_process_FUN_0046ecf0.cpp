// Name: core_drip.cpp_CDrip_process_FUN_0046ecf0
// Address: 0046ecf0
// Address Range: [[0046ecf0, 0046f13a]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_process_FUN_0046ecf0(CDrip *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_drip_cpp_CDrip_process_FUN_0046ecf0(CDrip *this_ptr,float delta_time)

{
  CLocation *position;
  CDemonActor_vtable *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  CKeyFramedModel *model_ptr;
  int iVar5;
  CDemonActor **ppCVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_1054 [988];
  CBoundingBox3D *in_stack_ffffff28;
  SDamageInfo SStack_c8;
  uint auStack_84 [3];
  float fStack_78;
  float fStack_6c;
  float afStack_68 [5];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_38;
  CVector3f aCStack_2c [2];
  
  bVar9 = 0;
  if (this_ptr->is_ground_cached == 0) {
    fStack_54 = (this_ptr->home_pos).x;
    fStack_4c = (this_ptr->home_pos).z;
    fStack_50 = (this_ptr->home_pos).y + _DAT_005bc791;
    core_dtrace_cpp_FUN_00473bc0(&g_CDemonRaytraceInstance,&this_ptr->home_pos,afStack_68 + 5);
    afStack_68[2] = fStack_6c;
    afStack_68[(uint)bVar9 * -2 + 3] = afStack_68[(uint)bVar9 * -2];
    afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    this_ptr->is_ground_cached = 1;
    this_ptr->ground_y = afStack_68[3];
  }
  if (ABS(this_ptr->drip_timer) == 0.0) {
    fVar3 = (this_ptr->vel).y - delta_time * (float)_DAT_005bc795;
    (this_ptr->vel).y = fVar3;
    pCVar1 = (this_ptr->base).vtable._ub;
    (this_ptr->base).location.position.y = fVar3 * delta_time + (this_ptr->base).location.position.y
    ;
    (*pCVar1->getBoundingBox)(&this_ptr->base,in_stack_ffffff28);
    ppCVar6 = &SStack_c8.attacker;
    puVar7 = auStack_84;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *ppCVar6;
      ppCVar6 = ppCVar6 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    if ((this_ptr->base).location.position.y <
        this_ptr->ground_y - (fStack_6c - fStack_78) * (float)_DAT_005bc79d) {
      if (this_ptr->is_visible != 0) {
        core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->hit_sound);
      }
      iVar5 = this_ptr->no_rock_flag;
      (this_ptr->base).location.position.y = this_ptr->ground_y;
      if (iVar5 == 0) {
        position = &(this_ptr->base).location;
        iVar5 = 0;
        do {
          aCStack_2c[0].x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.5,0.5);
          aCStack_2c[0].y = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.5,0.5);
          aCStack_2c[0].z = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.5,0.5);
          aCStack_2c[0].x = aCStack_2c[0].x + (position->position).x;
          aCStack_2c[0].y = aCStack_2c[0].y + (this_ptr->base).location.position.y;
          aCStack_2c[0].z = aCStack_2c[0].z + (this_ptr->base).location.position.z;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                    (0x01C73654,aCStack_2c,0.5,(CVector3f *)0x0,0x4000);
          fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.7853982,1.5707964);
          fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
          fVar10 = (float10)fcos((float10)fVar4);
          fVar11 = (float10)fcos((float10)fVar3);
          fVar12 = (float10)fsin((float10)fVar4);
          fVar13 = (float10)fsin((float10)fVar3);
          CStack_38.y = (float)(fVar13 * (float10)_DAT_005bc7a5);
          CStack_38.x = (float)(fVar10 * (float10)_DAT_005bc7a5 * (float10)(float)fVar11);
          CStack_38.z = (float)(fVar12 * (float10)_DAT_005bc7a5 * (float10)(float)fVar11);
          model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                                ((CKeyFramedModelInstance *)0x1c0b3dc);
          iVar5 = iVar5 + 1;
          core_fire_cpp_CFireEffect_createRock_FUN_004a28e0
                    (0x01C73654,&position->position,&CStack_38,model_ptr);
        } while (iVar5 < 10);
      }
      (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
      (this_ptr->base).location.position.x = fVar3 * this_ptr->drip_radius + (this_ptr->home_pos).x;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
      (this_ptr->base).location.position.z = fVar3 * this_ptr->drip_radius + (this_ptr->home_pos).z;
      (this_ptr->vel).z = 0.0;
      (this_ptr->vel).y = (this_ptr->vel).z;
      (this_ptr->vel).x = (this_ptr->vel).y;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                        (this_ptr->min_auto_drip_time,this_ptr->max_auto_drip_time);
      this_ptr->drip_timer = fVar3;
    }
    iVar5 = 0;
    iVar8 = 0;
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar5) break;
      iVar2 = *(int *)((int)g_CDemonSetPtr->characters + iVar8);
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_c8);
      SStack_c8.damage_amount = this_ptr->damage;
      SStack_c8.attacker = &this_ptr->base;
      SStack_c8.wielder = &this_ptr->base;
      iVar8 = iVar8 + 4;
      iVar5 = iVar5 + 1;
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x100))
                (iVar2,&(this_ptr->base).location,0x3f800000,&SStack_c8);
    }
  }
  else if ((this_ptr->auto_drop != 0) &&
          (fVar3 = this_ptr->drip_timer - delta_time, this_ptr->drip_timer = fVar3, fVar3 < 0.0)) {
    this_ptr->drip_timer = 0.0;
    return;
  }
  return;
}
