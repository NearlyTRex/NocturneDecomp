// Name: core_flame.cpp_CFlame_process_FUN_0048d0c0
// Address: 0048d0c0
// Address Range: [[0048d0c0, 0048d5c4]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_process_FUN_0048d0c0(CFlame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_flame_cpp_CFlame_process_FUN_0048d0c0(CFlame *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CHero *this_ptr_00;
  CEnemy *this_ptr_01;
  float fVar2;
  int iVar3;
  ECollisionType EVar4;
  uint uVar5;
  double dVar6;
  char local_f8 [100];
  SCollisionInfo local_94;
  SCollisionInfo SStack_6c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  int iStack_24;
  float fStack_1c;
  float fStack_18;
  float local_14;
  
  if (((this_ptr->on_event[0] != '\0') && (this_ptr->flame_state == 0)) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,this_ptr->on_event), iVar3 != 0)) {
    if ((this_ptr->which_flame != 1) && (this_ptr->which_flame != 3)) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                  (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).location.position,(CVector3f *)0x0,
                   0x4000,0x10000,1,0xffff);
      } while (iVar3 < 10);
    }
    this_ptr->is_visible = 1;
    this_ptr->flame_state = 1;
  }
  if (((this_ptr->off_event[0] != '\0') && (this_ptr->flame_state != 0)) &&
     ((iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                         (0x01C03A10,this_ptr->off_event), iVar3 != 0 &&
      (this_ptr->flame_state = 0, this_ptr->which_flame != 3)))) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
              (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).location.position,
               (this_ptr->flame_size).y * (float)0.5,(CVector3f *)0x0,0xffff);
  }
  if (this_ptr->flame_state != 0) {
    this_ptr->animation_time = delta_time * (float)16 + this_ptr->animation_time;
    if (0x40ffffff < (int)this_ptr->animation_time) {
      this_ptr->animation_time = this_ptr->animation_time + 1.5997858892824123e-314._0_4_;
    }
    (this_ptr->base).orient.vec.x = 0.0;
    (this_ptr->base).orient.vec.z = 0.0;
    (this_ptr->base).orient.vec.y = 0.0;
    core_flame_cpp_CFlame_updateGlobe_FUN_0048e230(this_ptr);
    if (this_ptr->render_corona == 0) {
      if (this_ptr->sfx_handle != 0) {
        core_sound_cpp_CSound_killSound_FUN_0052ebb0(g_CSound_PTR_005bed68,this_ptr->sfx_handle);
        this_ptr->sfx_handle = 0;
      }
    }
    else {
      iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                        (g_CSound_PTR_005bed68,this_ptr->sfx_handle);
      if (iVar3 == 0) {
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.95,1.05);
        _sprintf(local_f8,"torch.wav * %f",SUB84(__BITCAST_UINT64((double)local_14),0),
                   (int)((ulonglong)(double)local_14 >> 0x20));
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
        iVar3 = 2;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_14,iVar3);
        uVar5 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,local_f8);
        this_ptr->sfx_handle = uVar5;
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      }
    }
    if (this_ptr->burn_hero != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_94);
      EVar4 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getCollisionType)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_94);
      if (EVar4 == COLLISION_TYPE_CYLINDER) {
        this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
        pCVar1 = &(this_ptr->base).location;
        fStack_40 = (this_ptr_00->base).base.location.position.x - (pCVar1->position).x;
        fStack_3c = (this_ptr_00->base).base.location.position.y -
                    (this_ptr->base).location.position.y;
        fStack_38 = (this_ptr_00->base).base.location.position.z -
                    (this_ptr->base).location.position.z;
        if (((float)-0.5 < fStack_3c) && (fStack_3c < local_94.cylinder_radius)) {
          dVar6 = round
                            ((double)(((this_ptr->flame_size).x + (this_ptr->flame_size).z) *
                                     (float)0.25));
          fStack_18 = (float)(int)ROUND(dVar6);
          fStack_1c = (float)(int)fStack_18;
          local_14 = fStack_18;
          if ((ABS(fStack_44) < local_94.cylinder_radius + fStack_1c) &&
             (ABS(fStack_3c) < local_94.cylinder_radius + fStack_1c)) {
            core_charactr_cpp_CCharacter_igniteBone_FUN_00427730
                      (&this_ptr_00->base,&pCVar1->position,0,0,2.0,1);
          }
        }
      }
    }
    if (this_ptr->burn_enemy != 0) {
      if (this_ptr->enemy_burn_index < 0) {
        this_ptr->enemy_burn_index = 0;
      }
      if (g_CDemonSet_PTR_005be368->enemy_count <= this_ptr->enemy_burn_index) {
        this_ptr->enemy_burn_index = 0;
      }
      if (0 < g_CDemonSet_PTR_005be368->enemy_count) {
        this_ptr_01 = g_CDemonSet_PTR_005be368->enemies[this_ptr->enemy_burn_index];
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_6c);
        EVar4 = (*((this_ptr_01->base).base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_01,&SStack_6c);
        if (EVar4 == COLLISION_TYPE_CYLINDER) {
          pCVar1 = &(this_ptr->base).location;
          fStack_38 = (this_ptr_01->base).base.location.position.x - (pCVar1->position).x;
          fVar2 = (this_ptr_01->base).base.location.position.y -
                  (this_ptr->base).location.position.y;
          fStack_30 = (this_ptr_01->base).base.location.position.z -
                      (this_ptr->base).location.position.z;
          fStack_34 = fVar2;
          dVar6 = round
                            ((double)(((this_ptr->flame_size).x + (this_ptr->flame_size).z) *
                                     (float)0.25));
          iStack_24 = (int)ROUND(dVar6);
          if (((float)-0.5 < fVar2) && (fStack_38 < SStack_6c.cylinder_bottom_y)) {
            fStack_28 = (float)iStack_24;
            if ((ABS(fStack_3c) < SStack_6c.cylinder_top_y + fStack_28) &&
               (ABS(fStack_34) < SStack_6c.cylinder_top_y + fStack_28)) {
              fStack_18 = (float)iStack_24;
              core_charactr_cpp_CCharacter_igniteBone_FUN_00427730
                        (&this_ptr_01->base,&pCVar1->position,0,0,2.0,0);
            }
          }
        }
        this_ptr->enemy_burn_index = this_ptr->enemy_burn_index + 1;
        return;
      }
    }
  }
  return;
}
