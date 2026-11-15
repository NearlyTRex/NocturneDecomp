// Name: core_flame.cpp_CFlame_process_FUN_004a5b10
// Address: 004a5b10
// Address Range: [[004a5b10, 004a6083]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_process_FUN_004a5b10(CFlame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_CFlame_process_FUN_004a5b10(CFlame *this_ptr,float delta_time)

{
  CCharacter *this_ptr_00;
  CEnemy *this_ptr_01;
  float fVar1;
  int iVar2;
  uint uVar3;
  ECollisionType EVar4;
  byte bVar5;
  double dVar6;
  float afStackY_1040 [960];
  uint uStack_120;
  char local_110 [100];
  SCollisionInfo local_ac;
  SCollisionInfo SStack_84;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float local_14;
  
  bVar5 = 0;
  if (((this_ptr->on_event[0] != '\0') && (this_ptr->flame_state == 0)) &&
     (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,this_ptr->on_event), iVar2 != 0)) {
    if ((this_ptr->which_flame != FLAME_TYPE_CANDLE) && (this_ptr->which_flame != FLAME_TYPE_NONE))
    {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                  (0x01C73654,&(this_ptr->base).location.position,(CVector3f *)0x0,0x4000,0x10000,
                   1,0xffff);
      } while (iVar2 < 10);
    }
    this_ptr->is_visible = 1;
    this_ptr->flame_state = 1;
  }
  if (((this_ptr->off_event[0] != '\0') && (this_ptr->flame_state != 0)) &&
     ((iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                         (0x01C6E360,this_ptr->off_event), iVar2 != 0 &&
      (this_ptr->flame_state = 0, this_ptr->which_flame != FLAME_TYPE_NONE)))) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
              (0x01C73654,&(this_ptr->base).location.position,
               (this_ptr->flame_size).y * (float)_DAT_005c0bb4,(CVector3f *)0x0,0x4000);
  }
  if (this_ptr->flame_state != 0) {
    this_ptr->animation_time = delta_time * (float)_DAT_005c0bbc + this_ptr->animation_time;
    if (0x40ffffff < (int)this_ptr->animation_time) {
      this_ptr->animation_time = this_ptr->animation_time + _DAT_005c0bc4;
    }
    (this_ptr->base).orient.vec.x = 0.0;
    (this_ptr->base).orient.vec.z = 0.0;
    (this_ptr->base).orient.vec.y = 0.0;
    core_flame_cpp_CFlame_updateGlobe_FUN_004a6dd0(this_ptr);
    if (this_ptr->render_corona == 0) {
      if (this_ptr->sfx_handle != 0) {
        core_sound_cpp_CSound_killSound_FUN_00560b00(0x02CF5680,this_ptr->sfx_handle);
        this_ptr->sfx_handle = 0;
      }
    }
    else {
      iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
      if (iVar2 == 0) {
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.95,1.05);
        _sprintf(local_110,"env-torch.wav * %f");
        sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
        iVar2 = 2;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)local_14,iVar2);
        uVar3 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,local_110);
        this_ptr->sfx_handle = uVar3;
        sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      }
    }
    if (this_ptr->burn_hero != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(&local_ac);
      iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x3c))(iVar2,&local_ac);
      if (iVar2 == 2) {
        this_ptr_00 = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        afStack_54[2] =
             (this_ptr_00->base).location.position.x - (this_ptr->base).location.position.x;
        afStack_54[3] =
             (this_ptr_00->base).location.position.y - (this_ptr->base).location.position.y;
        fStack_44 = (this_ptr_00->base).location.position.z - (this_ptr->base).location.position.z;
        fStack_58 = afStack_54[2];
        afStack_54[(uint)bVar5 * -2] = afStack_54[(uint)bVar5 * -2 + 3];
        afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        if (((float)_DAT_005c0bcc < afStack_54[0]) && (afStack_54[0] < local_ac.cylinder_radius)) {
          uStack_120 = 0x4a5d9e;
          dVar6 = round
                            ((double)(((this_ptr->flame_size).x + (this_ptr->flame_size).z) *
                                     (float)_DAT_005c0bd4));
          fStack_20 = (float)(int)ROUND(dVar6);
          fStack_24 = (float)(int)fStack_20;
          local_14 = fStack_20;
          if ((ABS(fStack_5c) < local_ac.cylinder_radius + fStack_24) &&
             (ABS(afStack_54[0]) < local_ac.cylinder_radius + fStack_24)) {
            core_charactr_cpp_CCharacter_igniteBone_FUN_0042fbd0
                      (this_ptr_00,&(this_ptr->base).location.position,0,0,2.0,1,2.0);
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
        this_ptr_01 = g_CDemonSetPtr->enemies[this_ptr->enemy_burn_index];
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(&SStack_84);
        EVar4 = (*((this_ptr_01->base).base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_01,&SStack_84);
        if (EVar4 == COLLISION_TYPE_CYLINDER) {
          fStack_44 = (this_ptr_01->base).base.location.position.x -
                      (this_ptr->base).location.position.x;
          fStack_40 = (this_ptr_01->base).base.location.position.y -
                      (this_ptr->base).location.position.y;
          fStack_3c = (this_ptr_01->base).base.location.position.z -
                      (this_ptr->base).location.position.z;
          fStack_38 = fStack_44;
          afStack_54[(uint)bVar5 * -2 + 8] = afStack_54[(uint)bVar5 * -2 + 5];
          afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
               afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 6];
          fVar1 = fStack_34;
          dVar6 = round
                            ((double)(((this_ptr->flame_size).x + (this_ptr->flame_size).z) *
                                     (float)_DAT_005c0bd4));
          fStack_20 = (float)(int)ROUND(dVar6);
          if (((float)_DAT_005c0bcc < fVar1) && (fStack_38 < SStack_84.cylinder_bottom_y)) {
            fStack_1c = (float)(int)fStack_20;
            SStack_84.cylinder_top_y = SStack_84.cylinder_top_y + fStack_1c;
            uStack_120 = (uint)((ulonglong)(double)SStack_84.cylinder_top_y >> 0x20);
            if ((ABS(fStack_3c) < SStack_84.cylinder_top_y) &&
               (ABS(fStack_34) < SStack_84.cylinder_top_y)) {
              iStack_18 = (int)fStack_20;
              core_charactr_cpp_CCharacter_igniteBone_FUN_0042fbd0
                        (&this_ptr_01->base,&(this_ptr->base).location.position,0,0,2.0,0,2.0);
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
