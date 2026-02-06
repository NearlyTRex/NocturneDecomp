// Name: core_flame.cpp_CFlame_FUN_004c9c00
// Address: 004c9c00
// Address Range: [[004c9c00, 004c9f1a] [004c9f98, 004ca104]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_FUN_004c9c00(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_FUN_004c9c00(CFlame *this_ptr)

{
  CHero *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar1;
  int iVar2;
  int extraout_EAX;
  uint uVar3;
  double dVar4;
  float in_stack_00000008;
  ulonglong uStack_fc;
  double dStack_f4;
  SCollisionInfo SStack_8c;
  SCollisionInfo SStack_64;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float local_14;
  
  if (((this_ptr->on_event[0] != '\0') && (this_ptr->flame_state == 0)) &&
     (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->on_event), iVar2 != 0)) {
    if ((this_ptr->which_flame != 1) && (this_ptr->which_flame != 3)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      } while (iVar2 < 10);
    }
    this_ptr->unk4[0] = '\x01';
    this_ptr->unk4[1] = '\0';
    this_ptr->unk4[2] = '\0';
    this_ptr->unk4[3] = '\0';
    this_ptr->flame_state = 1;
  }
  if (((this_ptr->off_event[0] != '\0') && (this_ptr->flame_state != 0)) &&
     ((iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (g_CEventListPtr,this_ptr->off_event), iVar2 != 0 &&
      (this_ptr->flame_state = 0, this_ptr->which_flame != 3)))) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
              (g_CFireEffectPtr,&(this_ptr->base).location.position,
               (this_ptr->flame_size).y * (float)0.5,(CVector3f *)0x0,0xffff);
  }
  if (this_ptr->flame_state != 0) {
    *(float *)this_ptr->unk1 = in_stack_00000008 * (float)16 + *(float *)this_ptr->unk1
    ;
    if (0x40ffffff < *(int *)this_ptr->unk1) {
      *(float *)this_ptr->unk1 = *(float *)this_ptr->unk1 + -8.0f;
    }
    (this_ptr->base).orient.pitch = 0.0;
    (this_ptr->base).orient.heading = 0.0;
    (this_ptr->base).orient.bank = 0.0;
    core_flame_cpp_CFlame_FUN_004cad90(this_ptr);
    if (*(int *)(this_ptr->unk4 + 0x10) == 0) {
      if (*(uint *)this_ptr->unk2 != 0) {
        core_sound_cpp_CSound_killSound_FUN_005b3b90(g_CSoundPtr,*(uint *)this_ptr->unk2);
        this_ptr->unk2[0] = '\0';
        this_ptr->unk2[1] = '\0';
        this_ptr->unk2[2] = '\0';
        this_ptr->unk2[3] = '\0';
      }
    }
    else {
      core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,*(uint *)this_ptr->unk2);
      if (extraout_EAX == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.95,1.05);
        sprintf
                  ((char *)((int)&uStack_fc + 4),"torch.wav * %f",SUB84((double)local_14,0),
                   (int)((ulonglong)(double)local_14 >> 0x20));
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        iVar2 = 2;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar2);
        uVar3 = (*((this_ptr->base).vtable._ub)->playSound)
                          (&this_ptr->base,(char *)((int)&uStack_fc + 4));
        *(uint *)this_ptr->unk2 = uVar3;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
    if (this_ptr->burn_hero != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_8c);
      iVar2 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->hasCollision)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&SStack_8c);
      if (iVar2 == 2) {
        this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
        fStack_34 = (this_ptr_00->base).base.location.position.x -
                    (this_ptr->base).location.position.x;
        fStack_30 = (this_ptr_00->base).base.location.position.y -
                    (this_ptr->base).location.position.y;
        fStack_2c = (this_ptr_00->base).base.location.position.z -
                    (this_ptr->base).location.position.z;
        if (((float)-0.5 < fStack_30) && (fStack_30 < (float)SStack_8c.result_ptr)) {
          uStack_fc = (double)CONCAT44(uStack_fc._4_4_,0x4c9e5a);
          dVar4 = round
                            ((double)(((this_ptr->flame_size).x + (this_ptr->flame_size).z) *
                                     (float)0.25));
          fVar1 = (float)SStack_8c.result_ptr + (float)(int)ROUND(dVar4);
          uStack_fc = (double)fVar1;
          if ((ABS(fStack_38) < fVar1) && (ABS(fStack_30) < fVar1)) {
            core_charactr_cpp_CCharacter_FUN_0042b5b0(&this_ptr_00->base);
          }
        }
      }
    }
    if (this_ptr->burn_enemy != 0) {
      if (*(int *)(this_ptr->unk4 + 0xc) < 0) {
        this_ptr->unk4[0xc] = '\0';
        this_ptr->unk4[0xd] = '\0';
        this_ptr->unk4[0xe] = '\0';
        this_ptr->unk4[0xf] = '\0';
      }
      if (*(int *)(g_CDemonSetPtr->unk4 + 0x1f3c) <= *(int *)(this_ptr->unk4 + 0xc)) {
        this_ptr->unk4[0xc] = '\0';
        this_ptr->unk4[0xd] = '\0';
        this_ptr->unk4[0xe] = '\0';
        this_ptr->unk4[0xf] = '\0';
      }
      if (0 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c)) {
        this_ptr_01 = *(CCharacter **)
                       (g_CDemonSetPtr->unk4 + *(int *)(this_ptr->unk4 + 0xc) * 4 + 8000);
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_64);
        iVar2 = (*((this_ptr_01->base).vtable._ub)->hasCollision)(&this_ptr_01->base,&SStack_64);
        if (iVar2 == 2) {
          fStack_28 = (this_ptr_01->base).location.position.x - (this_ptr->base).location.position.x
          ;
          fVar1 = (this_ptr_01->base).location.position.y - (this_ptr->base).location.position.y;
          fStack_20 = (this_ptr_01->base).location.position.z - (this_ptr->base).location.position.z
          ;
          uStack_fc = (double)CONCAT44(uStack_fc._4_4_,0x4ca068);
          fStack_24 = fVar1;
          dVar4 = round
                            ((double)(((this_ptr->flame_size).x + (this_ptr->flame_size).z) *
                                     (float)0.25));
          local_14 = (float)(int)ROUND(dVar4);
          if (((float)-0.5 < fVar1) && (fStack_28 < SStack_64.cylinder_radius)) {
            fStack_18 = (float)(int)local_14;
            fVar1 = (float)SStack_64.result_ptr + fStack_18;
            dStack_f4 = (double)fVar1;
            if ((ABS(fStack_2c) < fVar1) && (ABS(fStack_24) < fVar1)) {
              core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr_01);
            }
          }
        }
        *(int *)(this_ptr->unk4 + 0xc) = *(int *)(this_ptr->unk4 + 0xc) + 1;
        return;
      }
    }
  }
  return;
}
