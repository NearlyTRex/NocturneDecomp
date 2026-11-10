// Name: core_flame.cpp_CFlame_process_FUN_0049f2e0
// Address: 0049f2e0
// Address Range: [[0049f2e0, 0049f849]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_process_FUN_0049f2e0(CFlame *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flame_cpp_CFlame_process_FUN_0049f2e0(CFlame *this_ptr,float delta_time)

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
  byte local_ac [28];
  float fStack_90;
  byte auStack_84 [28];
  float fStack_68;
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
     (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,this_ptr->on_event), iVar1 != 0)) {
    if ((this_ptr->which_flame != FLAME_TYPE_CANDLE) && (this_ptr->which_flame != FLAME_TYPE_NONE))
    {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                  (0x01C3DEB4,(CVector3f *)&(this_ptr->base).field_0x20,(CVector3f *)0x0,0x4000,
                   0x10000,1,0xffff);
      } while (iVar1 < 10);
    }
    this_ptr->is_visible = 1;
    this_ptr->flame_state = 1;
  }
  if (((this_ptr->off_event[0] != '\0') && (this_ptr->flame_state != 0)) &&
     ((iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                         (0x01C38BC0,this_ptr->off_event), iVar1 != 0 &&
      (this_ptr->flame_state = 0, this_ptr->which_flame != FLAME_TYPE_NONE)))) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
              (0x01C3DEB4,(CVector3f *)&(this_ptr->base).field_0x20,
               (this_ptr->flame_size).y * (float)_DAT_005d585d,(CVector3f *)0x0,0xffff);
  }
  if (this_ptr->flame_state != 0) {
    this_ptr->animation_time = delta_time * (float)_DAT_005d5865 + this_ptr->animation_time;
    if (0x40ffffff < (int)this_ptr->animation_time) {
      this_ptr->animation_time = this_ptr->animation_time + _DAT_005d586d;
    }
    (this_ptr->base).orient.vec.x = 0.0;
    (this_ptr->base).orient.vec.z = 0.0;
    (this_ptr->base).orient.vec.y = 0.0;
    core_flame_cpp_FUN_004a0590(this_ptr);
    if (this_ptr->render_corona == 0) {
      if (this_ptr->sfx_handle != 0) {
        core_sound_cpp_CSound_killSound_FUN_0055af80(0x0264B290,this_ptr->sfx_handle);
        this_ptr->sfx_handle = 0;
      }
    }
    else {
      iVar1 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(0x0264B290,this_ptr->sfx_handle);
      if (iVar1 == 0) {
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.95,1.05);
        _sprintf(local_110,"torch.wav * %f");
        sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
        iVar1 = 2;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)local_14,iVar1);
        uVar2 = (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,local_110);
        this_ptr->sfx_handle = uVar2;
        sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      }
    }
    if (this_ptr->burn_hero != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)local_ac);
      iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x44))(iVar1,local_ac);
      if (iVar1 == 2) {
        iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        afStack_58[2] = *(float *)(iVar1 + 0x20) - *(float *)&(this_ptr->base).field_0x20;
        afStack_58[3] = *(float *)(iVar1 + 0x24) - *(float *)&(this_ptr->base).field_0x24;
        fStack_48 = *(float *)(iVar1 + 0x28) - *(float *)&(this_ptr->base).field_0x28;
        fStack_5c = afStack_58[2];
        afStack_58[(uint)bVar4 * -2] = afStack_58[(uint)bVar4 * -2 + 3];
        afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if (((float)_DAT_005d5875 < afStack_58[0]) && (afStack_58[0] < (float)local_ac._24_4_)) {
          fVar5 = ((float10)(this_ptr->flame_size).x + (float10)(this_ptr->flame_size).z) *
                  (float10)_DAT_005d587d;
          round();
          fStack_20 = (float)(int)ROUND(fVar5);
          fStack_24 = (float)(int)fStack_20;
          local_14 = fStack_20;
          if ((ABS(fStack_5c) < fStack_90 + fStack_24) &&
             (ABS(afStack_58[1]) < fStack_90 + fStack_24)) {
            core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
                      (this_ptr_01,(CVector3f *)&(this_ptr->base).field_0x20,0,0,2.0,1);
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
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)auStack_84);
        EVar3 = (*((this_ptr_00->base).base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_00,(SCollisionInfo *)auStack_84);
        if (EVar3 == COLLISION_TYPE_CYLINDER) {
          fStack_44 = *(float *)&(this_ptr_00->base).base.field_0x20 -
                      *(float *)&(this_ptr->base).field_0x20;
          fStack_40 = *(float *)&(this_ptr_00->base).base.field_0x24 -
                      *(float *)&(this_ptr->base).field_0x24;
          fStack_3c = *(float *)&(this_ptr_00->base).base.field_0x28 -
                      *(float *)&(this_ptr->base).field_0x28;
          fStack_38 = fStack_44;
          afStack_58[(uint)bVar4 * -2 + 9] = afStack_58[(uint)bVar4 * -2 + 6];
          afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          fVar6 = ((float10)(this_ptr->flame_size).x + (float10)(this_ptr->flame_size).z) *
                  (float10)_DAT_005d587d;
          fVar5 = (float10)fStack_34;
          round();
          iStack_1c = (int)ROUND(fVar6);
          if (((float10)_DAT_005d5875 < fVar5) && (fStack_34 < (float)auStack_84._24_4_)) {
            fStack_18 = (float)iStack_1c;
            if ((ABS(fStack_38) < fStack_68 + fStack_18) && (ABS(fStack_30) < fStack_68 + fStack_18)
               ) {
              local_14 = (float)iStack_1c;
              core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
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
