// Name: core_flame.cpp_FUN_004c9c00
// Address: 004c9c00
// Address Range: [[004c9c00, 004c9f1a] [004c9f98, 004ca104]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004c9c00()

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004c9c00(uint param_1, uint param_2)
    */

void core_flame_cpp_FUN_004c9c00(void)

{
  CHero *this_ptr;
  CCharacter *this_ptr_00;
  float fVar1;
  int iVar2;
  int extraout_EAX;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  double dVar5;
  int in_stack_00000004;
  float in_stack_00000008;
  ulonglong uStack_fc;
  SCollisionInfo local_94;
  SCollisionInfo SStack_6c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float local_14;
  
  if (((*(char *)(in_stack_00000004 + 0x1b8) != '\0') && (*(int *)(in_stack_00000004 + 0x1b4) == 0))
     && (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,(char *)(in_stack_00000004 + 0x1b8)), iVar2 != 0)) {
    if ((*(int *)(in_stack_00000004 + 0x1a8) != 1) && (*(int *)(in_stack_00000004 + 0x1a8) != 3)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      } while (iVar2 < 10);
    }
    *(uint *)(in_stack_00000004 + 0x290) = 1;
    *(uint *)(in_stack_00000004 + 0x1b4) = 1;
  }
  if (((*(char *)(in_stack_00000004 + 0x21c) != '\0') && (*(int *)(in_stack_00000004 + 0x1b4) != 0))
     && ((iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                            (g_CEventListPtr,(char *)(in_stack_00000004 + 0x21c)), iVar2 != 0 &&
         (*(uint *)(in_stack_00000004 + 0x1b4) = 0, *(int *)(in_stack_00000004 + 0x1a8) != 3))
        )) {
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
              (g_CFireEffectPtr,(CVector3f *)(in_stack_00000004 + 0x20),
               *(float *)(in_stack_00000004 + 0x15c) * (float)0.5,(CVector3f *)0x0,
               0xffff);
  }
  if (*(int *)(in_stack_00000004 + 0x1b4) != 0) {
    *(float *)(in_stack_00000004 + 0x164) =
         in_stack_00000008 * (float)16 + *(float *)(in_stack_00000004 + 0x164);
    if (0x40ffffff < *(int *)(in_stack_00000004 + 0x164)) {
      *(float *)(in_stack_00000004 + 0x164) = *(float *)(in_stack_00000004 + 0x164) + -8f
      ;
    }
    *(uint *)(in_stack_00000004 + 0x30) = 0;
    *(uint *)(in_stack_00000004 + 0x38) = 0;
    *(uint *)(in_stack_00000004 + 0x34) = 0;
    core_flamecan_cpp_FUN_004cad90();
    if (*(int *)(in_stack_00000004 + 0x2a0) == 0) {
      if (*(uint *)(in_stack_00000004 + 0x1b0) != 0) {
        core_sound_cpp_CSound_killSound_FUN_005b3b90
                  (g_CSoundPtr,*(uint *)(in_stack_00000004 + 0x1b0));
        *(uint *)(in_stack_00000004 + 0x1b0) = 0;
      }
    }
    else {
      core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                (g_CSoundPtr,*(uint *)(in_stack_00000004 + 0x1b0));
      if (extraout_EAX == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.95,1.05);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  ((char *)((int)&uStack_fc + 4),"torch.wav * %f",SUB84 /* extract 2-byte value */((double)local_14,0),
                   (int)((ulonglong)(double)local_14 >> 0x20));
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        iVar2 = 2;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar2);
        uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
        *(uint *)(in_stack_00000004 + 0x1b0) = uVar3;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
    if (*(int *)(in_stack_00000004 + 0x288) != 0) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_94);
      iVar2 = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->hasCollision)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_94);
      if (iVar2 == 2) {
        this_ptr = g_HeroActors[g_LocalHeroIndex];
        fStack_3c = (this_ptr->base_character).base_actor.location.position.x -
                    *(float *)(in_stack_00000004 + 0x20);
        fStack_38 = (this_ptr->base_character).base_actor.location.position.y -
                    *(float *)(in_stack_00000004 + 0x24);
        fStack_34 = (this_ptr->base_character).base_actor.location.position.z -
                    *(float *)(in_stack_00000004 + 0x28);
        if (((float)-0.5 < fStack_38) && (fStack_38 < (float)local_94.result_ptr)) {
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)((*(float *)(in_stack_00000004 + 0x158) +
                                      *(float *)(in_stack_00000004 + 0x160)) *
                                     (float)0.25));
          local_14 = (float)(int)ROUND(dVar5);
          fStack_18 = (float)(int)local_14;
          if ((ABS(fStack_40) < (float)local_94.result_ptr + fStack_18) &&
             (ABS(fStack_38) < (float)local_94.result_ptr + fStack_18)) {
            core_charactr_cpp_CCharacter_FUN_0042b5b0(&this_ptr->base_character);
          }
        }
      }
    }
    if (*(int *)(in_stack_00000004 + 0x28c) != 0) {
      if (*(int *)(in_stack_00000004 + 0x29c) < 0) {
        *(uint *)(in_stack_00000004 + 0x29c) = 0;
      }
      if (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) <= *(int *)(in_stack_00000004 + 0x29c)
         ) {
        *(uint *)(in_stack_00000004 + 0x29c) = 0;
      }
      if (0 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c)) {
        this_ptr_00 = *(CCharacter **)
                       (g_CDemonSetPtr->field19_0x14f0a0 +
                       *(int *)(in_stack_00000004 + 0x29c) * 4 + 8000);
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_6c);
        iVar2 = (*((this_ptr_00->base_actor).vtable)->hasCollision)
                          (&this_ptr_00->base_actor,&SStack_6c);
        if (iVar2 == 2) {
          fStack_30 = (this_ptr_00->base_actor).location.position.x -
                      *(float *)(in_stack_00000004 + 0x20);
          fStack_2c = (this_ptr_00->base_actor).location.position.y -
                      *(float *)(in_stack_00000004 + 0x24);
          fStack_28 = (this_ptr_00->base_actor).location.position.z -
                      *(float *)(in_stack_00000004 + 0x28);
          fVar4 = (float10)fStack_2c;
          dVar5 = crt_math_c_round_FUN_005fe6b0
                            ((double)((*(float *)(in_stack_00000004 + 0x158) +
                                      *(float *)(in_stack_00000004 + 0x160)) *
                                     (float)0.25));
          iStack_1c = (int)ROUND(dVar5);
          if (((float10)-0.5 < fVar4) && (fStack_30 < SStack_6c.cylinder_radius)) {
            fStack_20 = (float)iStack_1c;
            fVar1 = (float)SStack_6c.result_ptr + fStack_20;
            uStack_fc = (double)fVar1;
            if ((ABS(fStack_34) < fVar1) && (ABS(fStack_2c) < fVar1)) {
              core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr_00);
            }
          }
        }
        *(int *)(in_stack_00000004 + 0x29c) = *(int *)(in_stack_00000004 + 0x29c) + 1;
        return;
      }
    }
  }
  return;
}
