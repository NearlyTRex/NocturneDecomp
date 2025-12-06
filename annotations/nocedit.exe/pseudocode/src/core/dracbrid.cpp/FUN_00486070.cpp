// Name: core_dracbrid.cpp_FUN_00486070
// Address: 00486070
// Address Range: [[00486070, 004862ec]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486070()

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_00486070(uint param_1, uint
   param_2) */

void core_dracbrid_cpp_FUN_00486070(void)

{
  float fVar1;
  bool bVar2;
  CVector3f *input_local_point;
  SMotion *pSVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CDeformableModelInstance *pCVar5;
  CDeformableModelInstance *this_ptr;
  CVector3f aCStack_28 [2];
  
  bVar2 = false;
  if (*(int *)((int)in_stack_00000008 + 0x28) == 7) {
    iVar4 = 0;
    *(float *)((int)in_stack_00000008 + 4) =
         *(float *)((int)in_stack_00000008 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xffffffd0,
               (CVector3f *)((int)in_stack_00000008 + 0x1c));
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar4 < 5);
    bVar2 = true;
  }
  if (*(int *)((int)in_stack_00000008 + 0x30) == 0x68) {
    bVar2 = true;
  }
  if (*(int *)((int)in_stack_00000008 + 0x30) == 0x6c) {
    input_local_point =
         core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                   (&in_stack_00000004->model,(CVector3f *)&stack0xffffffc8,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,aCStack_28,input_local_point);
    core_charactr_cpp_CCharacter_FUN_0042b5b0(in_stack_00000004);
  }
  core_dracbrid_cpp_ShotThruHeart_FUN_00486020();
  fVar1 = in_stack_00000004->hit_points - *(float *)((int)in_stack_00000008 + 4);
  pCVar5 = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (fVar1 <= 0.0) {
    in_stack_00000004->hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar5->motion_controller);
    iVar4 = pSVar3->state_index;
    if ((((iVar4 != 0x11) && (iVar4 != 0x10)) && (iVar4 != 10)) && (iVar4 != 7)) {
      if (bVar2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,7,1);
        (*((in_stack_00000004->base_actor).vtable)->playAmbientSound)
                  (&in_stack_00000004->base_actor,"bride-launch.wav");
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,10,1);
      }
    }
    iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
    if (iVar4 != 0) {
      aCStack_28[0].x = 2.0;
      core_dracbrid_cpp_FUN_004864c0();
      aCStack_28[0].y = in_stack_00000008;
      aCStack_28[0].x = (float)in_stack_00000004;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
    goto LAB_0048616e;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar5->motion_controller);
  iVar4 = pSVar3->state_index;
  if (((iVar4 == 8) || (iVar4 == 9)) || (iVar4 == 2)) {
    this_ptr = (CDeformableModelInstance *)&DAT_00000001;
    pCVar5 = (CDeformableModelInstance *)&DAT_00000001;
LAB_00486225:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)0x486231,(int)pCVar5,(int)this_ptr);
  }
  else if (((iVar4 == 0) || (iVar4 == 0xe)) ||
          (((iVar4 == 0x13 || (((iVar4 == 0xc || (iVar4 == 0x12)) || (iVar4 == 0x14)))) ||
           (iVar4 == 0x15)))) {
    this_ptr = (CDeformableModelInstance *)&DAT_00000002;
    pCVar5 = (CDeformableModelInstance *)0x0;
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar4 == 0) {
      this_ptr = (CDeformableModelInstance *)&DAT_00000004;
      pCVar5 = &in_stack_00000004->model;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar5->motion_controller,4,1)
      ;
    }
    if (iVar4 == 1) {
      this_ptr = &in_stack_00000004->model;
      pCVar5 = (CDeformableModelInstance *)0x4862ba;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,5,1);
    }
    if (iVar4 == 2) goto LAB_00486225;
  }
  iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.4);
  if (iVar4 != 0) {
    aCStack_28[0].x = 2.0;
    core_dracbrid_cpp_FUN_004864c0();
    aCStack_28[0].y = in_stack_00000008;
    aCStack_28[0].x = (float)in_stack_00000004;
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
LAB_0048616e:
  aCStack_28[0].x = in_stack_00000008;
  core_enemy_cpp_FUN_004a9f10();
  return;
}
