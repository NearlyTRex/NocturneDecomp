// Name: core_flame.cpp_CFlame_process_FUN_004b7b90
// Address: 004b7b90
// Address Range: [[004b7b90, 004b80f9]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_process_FUN_004b7b90(CFlame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_CFlame_process_FUN_004b7b90(CFlame *this_ptr,float delta_time)

{
  CEnemy *this_ptr_00;
  int iVar1;
  uint uVar2;
  ECollisionType EVar3;
  CCharacter *this_ptr_01;
  CVector3f *position;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1044 [962];
  char local_110 [100];
  SCollisionInfo local_ac;
  SCollisionInfo SStack_84;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float local_14;
  
  bVar4 = 0;
  if (((this_ptr->on_event[0] != '\0') && (this_ptr->flame_state == 0)) &&
     (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->on_event), iVar1 != 0)) {
    if ((this_ptr->which_flame != FLAME_TYPE_CANDLE) && (this_ptr->which_flame != FLAME_TYPE_NONE))
    {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                  (0x01C57074,&(this_ptr->base).location.position,(CVector3f *)0x0,0x4000,0x10000,
                   1,0xffff);
      } while (iVar1 < 10);
    }
    this_ptr->is_visible = 1;
    this_ptr->flame_state = 1;
  }
  if (((this_ptr->off_event[0] != '\0') && (this_ptr->flame_state != 0)) &&
     ((iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                         (0x01C51D80,this_ptr->off_event), iVar1 != 0 &&
      (this_ptr->flame_state = 0, this_ptr->which_flame != FLAME_TYPE_NONE)))) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
              (0x01C57074,&(this_ptr->base).location.position,
               (this_ptr->flame_size).y * (float)_DAT_005df69f,(CVector3f *)0x0,0xffff);
  }
  if (this_ptr->flame_state != 0) {
    this_ptr->animation_time = delta_time * (float)_DAT_005df6a7 + this_ptr->animation_time;
    if (0x40ffffff < (int)this_ptr->animation_time) {
      this_ptr->animation_time = this_ptr->animation_time + _DAT_005df6af;
    }
    (this_ptr->base).orient.vec.x = 0.0;
    (this_ptr->base).orient.vec.z = 0.0;
    (this_ptr->base).orient.vec.y = 0.0;
    core_flame_cpp_FUN_004b8e40(this_ptr);
    if (this_ptr->render_corona == 0) {
      if (this_ptr->sfx_handle != 0) {
        core_sound_cpp_CSound_killSound_FUN_0057d9d0(0x02C82A60,this_ptr->sfx_handle);
        this_ptr->sfx_handle = 0;
      }
    }
    else {
      iVar1 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(0x02C82A60,this_ptr->sfx_handle);
      if (iVar1 == 0) {
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.95,1.05);
        _sprintf(local_110,"torch.wav * %f");
        sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
        iVar1 = 2;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
        sound_sndmain_cpp_FUN_00572a50((double)local_14,iVar1);
        uVar2 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,local_110);
        this_ptr->sfx_handle = uVar2;
        sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      }
    }
    if (this_ptr->burn_hero != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(&local_ac);
      iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,&local_ac);
      if (iVar1 == 2) {
        iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        afStack_58[2] = *(float *)(iVar1 + 0x20) - (this_ptr->base).location.position.x;
        afStack_58[3] = *(float *)(iVar1 + 0x24) - (this_ptr->base).location.position.y;
        fStack_48 = *(float *)(iVar1 + 0x28) - (this_ptr->base).location.position.z;
        fStack_5c = afStack_58[2];
        afStack_58[(uint)bVar4 * -2] = afStack_58[(uint)bVar4 * -2 + 3];
        afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if (((float)_DAT_005df6b7 < afStack_58[0]) && (afStack_58[0] < local_ac.cylinder_top_y)) {
          fVar5 = ((float10)(this_ptr->flame_size).x + (float10)(this_ptr->flame_size).z) *
                  (float10)_DAT_005df6bf;
          round();
          fStack_20 = (float)(int)ROUND(fVar5);
          fStack_24 = (float)(int)fStack_20;
          local_14 = fStack_20;
          if ((ABS(fStack_5c) < local_ac.cylinder_radius + fStack_24) &&
             (ABS(afStack_58[1]) < local_ac.cylinder_radius + fStack_24)) {
            core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
                      (this_ptr_01,&(this_ptr->base).location.position,0,0,2.0,1);
          }
        }
      }
    }
    if (this_ptr->burn_enemy != 0) {
      if (this_ptr->enemy_burn_index < 0) {
        this_ptr->enemy_burn_index = 0;
      }
      if (g_CDemonSetPtr->enemy_count <= this_ptr->enemy_burn_index) {
        this_ptr->enemy_burn_index = 0;
      }
      if (0 < g_CDemonSetPtr->enemy_count) {
        this_ptr_00 = g_CDemonSetPtr->enemies[this_ptr->enemy_burn_index];
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(&SStack_84);
        EVar3 = (*((this_ptr_00->base).base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_00,&SStack_84);
        if (EVar3 == COLLISION_TYPE_CYLINDER) {
          fStack_44 = (this_ptr_00->base).base.location.position.x -
                      (this_ptr->base).location.position.x;
          fStack_40 = (this_ptr_00->base).base.location.position.y -
                      (this_ptr->base).location.position.y;
          fStack_3c = (this_ptr_00->base).base.location.position.z -
                      (this_ptr->base).location.position.z;
          fStack_38 = fStack_44;
          afStack_58[(uint)bVar4 * -2 + 9] = afStack_58[(uint)bVar4 * -2 + 6];
          afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          fVar6 = ((float10)(this_ptr->flame_size).x + (float10)(this_ptr->flame_size).z) *
                  (float10)_DAT_005df6bf;
          fVar5 = (float10)fStack_34;
          round();
          iStack_1c = (int)ROUND(fVar6);
          if (((float10)_DAT_005df6b7 < fVar5) && (fStack_34 < SStack_84.cylinder_top_y)) {
            fStack_18 = (float)iStack_1c;
            if ((ABS(fStack_38) < SStack_84.cylinder_radius + fStack_18) &&
               (ABS(fStack_30) < SStack_84.cylinder_radius + fStack_18)) {
              local_14 = (float)iStack_1c;
              core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
                        (&this_ptr_00->base,position,0,0,2.0,0);
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
