// Name: core_twigzomb.cpp_CTwigZombie_archive_FUN_0059fc10
// Address: 0059fc10
// Address Range: [[0059fc10, 005a0195]]
// Convention: __cdecl
// Signature: void __cdecl core_twigzomb_cpp_CTwigZombie_archive_FUN_0059fc10(CTwigZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_twigzomb_cpp_CTwigZombie_archive_FUN_0059fc10(CTwigZombie *this_ptr)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  byte *puVar4;
  char *pcVar5;
  char local_314 [256];
  char local_214 [256];
  char local_114 [256];
  int local_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x10a60,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&this_ptr->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&this_ptr->field_0x2b4,"MotionState");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x11360,"initialPosition");
  if (1 < g_CBasicEnemyClassVersion) {
    if (DAT_007bc038 != 0) {
      puVar4 = &this_ptr->field_0x10af8;
      if (DAT_007bc038 < 2) {
        core_actor_cpp_archiveString_FUN_0040b730(local_214,"AIState");
        unkaddr_0059d350_cpp_FUN_0059d8e0(puVar4,local_214);
        core_actor_cpp_archiveString_FUN_0040b730(local_214,"InitialAIState");
        unkaddr_0059d350_cpp_FUN_0059d990(puVar4,local_214);
      }
      else if (DAT_007bc038 == 2) {
        pcVar2 = (char *)unkaddr_0059d350_cpp_FUN_0059db70(puVar4);
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
        pcVar2 = (char *)unkaddr_0059d350_cpp_FUN_0059db90(puVar4);
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
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x11370,"AlertDistance");
  }
  if (2 < g_CBasicEnemyClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x11374,"GiveupDistance");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x11378,"MadTimer");
  }
  if (3 < g_CBasicEnemyClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x113a4,"PatrolGoal");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x113a8,"PatrolNext");
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x113ac,"PatrolDirection");
  }
  if (4 < g_CBasicEnemyClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x11390,"AnimationState");
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
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x113b4,"FadeDirection");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x113b8,"FadeState")
    ;
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x113bc,"FadeStart");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x113c0,"FadeEnd");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x113c4,"FadeVal");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x113c8,"FadeTime");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x113cc,"FadeTimer");
  }
  if (8 < g_CBasicEnemyClassVersion) {
    puVar4 = &this_ptr->field_0x10af8;
    local_14 = unkaddr_0059d350_cpp_FUN_0059dc70(puVar4);
    core_actor_cpp_archiveInteger_FUN_0040b960(&local_14,"RefStateCount");
    iVar3 = 0;
    if (0 < local_14) {
      do {
        if (DAT_007bc038 != 0) {
          if (DAT_007bc038 < 2) {
            core_actor_cpp_archiveString_FUN_0040b730(local_114,"RefStateIdentifier");
            core_actor_cpp_archiveString_FUN_0040b730(local_314,"RefState");
            unkaddr_0059d350_cpp_FUN_0059d6f0(puVar4,local_114,local_314);
          }
          else if (DAT_007bc038 == 2) {
            pcVar2 = (char *)unkaddr_0059d350_cpp_FUN_0059dc00(puVar4,iVar3);
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
            pcVar2 = (char *)unkaddr_0059d350_cpp_FUN_0059dbe0(puVar4,iVar3);
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
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x11348,"CanBurn");
    return;
  }
  return;
}
