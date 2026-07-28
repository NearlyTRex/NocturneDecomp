// Name: core_flame.cpp_CFlame_process_FUN_0048d0c0
// Address: 0048d0c0
// Address Range: [[0048d0c0, 0048d5c4]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_process_FUN_0048d0c0(CFlame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_CFlame_process_FUN_0048d0c0(CFlame *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  uint uVar7;
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
                  (0x01C08D04,&(this_ptr->base).location.position,(CVector3f *)0x0,0x4000,0x10000,
                   1,0xffff);
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
              (0x01C08D04,&(this_ptr->base).location.position,
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
        core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,this_ptr->sfx_handle);
        this_ptr->sfx_handle = 0;
      }
    }
    else {
      iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(0x02DC9450,this_ptr->sfx_handle);
      if (iVar3 == 0) {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f733333,0x3f866666)
        ;
        _sprintf(local_f8,"torch.wav * %f",(double)local_14);
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
        iVar3 = 2;
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_14,iVar3);
        uVar4 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,local_f8);
        this_ptr->sfx_handle = uVar4;
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      }
    }
    if (this_ptr->burn_hero != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_94);
      iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x34))(iVar3,&local_94);
      if (iVar3 == 2) {
        iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        pCVar1 = &(this_ptr->base).location;
        fStack_40 = *(float *)(iVar3 + 0x20) - (pCVar1->position).x;
        fStack_3c = *(float *)(iVar3 + 0x24) - (this_ptr->base).location.position.y;
        fStack_38 = *(float *)(iVar3 + 0x28) - (this_ptr->base).location.position.z;
        if (((float)-0.5 < fStack_3c) && (fStack_3c < local_94.cylinder_radius)) {
          dVar6 = round
                            ((double)(((this_ptr->flame_size).x + (this_ptr->flame_size).z) *
                                     (float)0.25));
          fStack_18 = (float)(int)ROUND(dVar6);
          fStack_1c = (float)(int)fStack_18;
          local_14 = fStack_18;
          if ((ABS(fStack_44) < local_94.cylinder_radius + fStack_1c) &&
             (ABS(fStack_3c) < local_94.cylinder_radius + fStack_1c)) {
            core_charactr_cpp_FUN_00427730(iVar3,pCVar1,0,0,0x40000000,1);
          }
        }
      }
    }
    if (this_ptr->burn_enemy != 0) {
      if (this_ptr->enemy_burn_index < 0) {
        this_ptr->enemy_burn_index = 0;
      }
      if (*(int *)(0x01E57284 + 0x150bf4) <= this_ptr->enemy_burn_index) {
        this_ptr->enemy_burn_index = 0;
      }
      if (0 < *(int *)(0x01E57284 + 0x150bf4)) {
        iVar3 = *(int *)(0x01E57284 + 0x150bf8 + this_ptr->enemy_burn_index * 4);
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_6c);
        iVar5 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x34))(iVar3,&SStack_6c);
        if (iVar5 == 2) {
          pCVar1 = &(this_ptr->base).location;
          fStack_38 = *(float *)(iVar3 + 0x20) - (pCVar1->position).x;
          fVar2 = *(float *)(iVar3 + 0x24) - (this_ptr->base).location.position.y;
          fStack_30 = *(float *)(iVar3 + 0x28) - (this_ptr->base).location.position.z;
          uVar7 = 0x48d528;
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
              core_charactr_cpp_FUN_00427730(iVar3,pCVar1,0,0,0x40000000,0,uVar7);
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
