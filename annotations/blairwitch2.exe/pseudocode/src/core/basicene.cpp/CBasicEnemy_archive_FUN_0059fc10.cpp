// Name: core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
// Address: 0059fc10
// Address Range: [[0059fc10, 005a0195]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy *this_ptr)

{
  char cVar1;
  char *pcVar2;
  CDeformableModelInstance *model_ptr;
  int iVar3;
  SStateMachine *pSVar4;
  char *pcVar5;
  char local_314 [256];
  char local_214 [256];
  char local_114 [256];
  int local_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&model_ptr->base,"MotionState");
  core_actor_cpp_archiveVector_FUN_0040b4b0
            (&(this_ptr->initial_location).position,"initialPosition");
  if (1 < g_CBasicEnemyClassVersion) {
    if (DAT_007bc038 != 0) {
      pSVar4 = &this_ptr->state_machine;
      if (DAT_007bc038 < 2) {
        core_actor_cpp_archiveString_FUN_0040b730(local_214,"AIState");
        core_muzzle_cpp_FUN_0059d8e0(pSVar4,local_214);
        core_actor_cpp_archiveString_FUN_0040b730(local_214,"InitialAIState");
        core_muzzle_cpp_FUN_0059d990(pSVar4,local_214);
      }
      else if (DAT_007bc038 == 2) {
        pcVar2 = (char *)core_muzzle_cpp_FUN_0059db70(pSVar4);
        pcVar5 = local_214;
        do {
          cVar1 = *pcVar2;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        core_actor_cpp_archiveString_FUN_0040b730(local_214,"AIState");
        pcVar2 = (char *)core_muzzle_cpp_FUN_0059db90(pSVar4);
        pcVar5 = local_214;
        do {
          cVar1 = *pcVar2;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        core_actor_cpp_archiveString_FUN_0040b730(local_214,"InitialAIState");
      }
    }
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->alert_distance,"AlertDistance");
  }
  if (2 < g_CBasicEnemyClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->giveup_distance,"GiveupDistance");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->mad_timer,"MadTimer");
  }
  if (3 < g_CBasicEnemyClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->patrol_goal,"PatrolGoal");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->patrol_next,"PatrolNext");
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->patrol_direction,"PatrolDirection");
  }
  if (4 < g_CBasicEnemyClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->animation_state,"AnimationState")
    ;
  }
  if ((5 < g_CBasicEnemyClassVersion) && (DAT_007bc038 != 0)) {
    if (DAT_007bc038 < 2) {
      core_actor_cpp_archiveString_FUN_0040b730(local_214,"Dummy");
    }
    else if (DAT_007bc038 == 2) {
      pcVar2 = &DAT_005efa99;
      pcVar5 = local_214;
      do {
        cVar1 = *pcVar2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      core_actor_cpp_archiveString_FUN_0040b730(local_214,"Dummy");
    }
  }
  if ((6 < g_CBasicEnemyClassVersion) && (DAT_007bc038 != 0)) {
    if (DAT_007bc038 < 2) {
      core_actor_cpp_archiveString_FUN_0040b730(local_214,"Dummy1");
    }
    else if (DAT_007bc038 == 2) {
      pcVar2 = "DummyVal";
      pcVar5 = local_214;
      do {
        cVar1 = *pcVar2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      core_actor_cpp_archiveString_FUN_0040b730(local_214,"Dummy1");
    }
  }
  if (7 < g_CBasicEnemyClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->fade_direction,"FadeDirection");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->fade_state,"FadeState");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fade_start,"FadeStart");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fade_end,"FadeEnd");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fade_val,"FadeVal");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fade_time,"FadeTime");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fade_timer,"FadeTimer");
  }
  if (8 < g_CBasicEnemyClassVersion) {
    pSVar4 = &this_ptr->state_machine;
    local_14 = core_muzzle_cpp_FUN_0059dc70(pSVar4);
    core_actor_cpp_archiveInteger_FUN_0040b960(&local_14,"RefStateCount");
    iVar3 = 0;
    if (0 < local_14) {
      do {
        if (DAT_007bc038 != 0) {
          if (DAT_007bc038 < 2) {
            core_actor_cpp_archiveString_FUN_0040b730(local_114,"RefStateIdentifier");
            core_actor_cpp_archiveString_FUN_0040b730(local_314,"RefState");
            core_muzzle_cpp_FUN_0059d6f0(pSVar4,local_114,local_314);
          }
          else if (DAT_007bc038 == 2) {
            pcVar2 = (char *)core_muzzle_cpp_FUN_0059dc00(pSVar4,iVar3);
            pcVar5 = local_114;
            do {
              cVar1 = *pcVar2;
              *pcVar5 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar5[1] = cVar1;
              pcVar5 = pcVar5 + 2;
            } while (cVar1 != '\0');
            pcVar2 = (char *)core_muzzle_cpp_FUN_0059dbe0(pSVar4,iVar3);
            pcVar5 = local_314;
            do {
              cVar1 = *pcVar2;
              *pcVar5 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar5[1] = cVar1;
              pcVar5 = pcVar5 + 2;
            } while (cVar1 != '\0');
            core_actor_cpp_archiveString_FUN_0040b730(local_114,"RefStateIdentifier");
            core_actor_cpp_archiveString_FUN_0040b730(local_314,"RefState");
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_14);
    }
  }
  if (9 < g_CBasicEnemyClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->can_burn,"CanBurn");
    return;
  }
  return;
}
