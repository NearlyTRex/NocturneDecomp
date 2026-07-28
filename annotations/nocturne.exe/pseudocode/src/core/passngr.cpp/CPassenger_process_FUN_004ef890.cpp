// Name: core_passngr.cpp_CPassenger_process_FUN_004ef890
// Address: 004ef890
// Address Range: [[004ef890, 004efa56]]
// Convention: unknown
// Signature: void core_passngr_cpp_CPassenger_process_FUN_004ef890(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_passngr_cpp_CPassenger_process_FUN_004ef890(CCharacter *param_1,float param_2)

{
  CLocation *pCVar1;
  int iVar2;
  CDemonActor *actor;
  float fVar3;
  CFlame *pCVar4;
  CDemonMission *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  float *pfVar8;
  float local_20;
  byte local_1c [12];
  
  if (1.0 <= *(float *)(param_1[2].flames[0x20].off_event + 0x38)) {
    return;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->model).motion_controller);
  iVar2 = pSVar6->state_index;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    if ((iVar2 == 2) &&
       ((fVar3 = param_2 / _DAT_005a1068 + *(float *)(param_1[2].flames[0x20].off_event + 0x38),
        *(float *)(param_1[2].flames[0x20].off_event + 0x38) = fVar3, 1.0 <= fVar3 &&
        (actor = *(CDemonActor **)(param_1[2].flames[0x1c].base.create_event + 0x14),
        actor != (CDemonActor *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,actor);
      pCVar5 = 0x01CC9450;
      pCVar4 = param_1[2].flames + 0x1c;
      (pCVar4->base).create_event[0x14] = '\0';
      (pCVar4->base).create_event[0x15] = '\0';
      (pCVar4->base).create_event[0x16] = '\0';
      (pCVar4->base).create_event[0x17] = '\0';
      core_mission_cpp_FUN_004d9110(pCVar5,param_1,1);
    }
  }
  else {
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1[2].flames[0x1b].off_event + 0xc);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->model).motion_controller,1,1);
      if (*(char *)&param_1[2].flames[0x1c].base.location.position.z != '\0') {
        (*((param_1->base).vtable._ub)->playSound)
                  (&param_1->base,(char *)&param_1[2].flames[0x1c].base.location.position.z);
        *(byte *)&param_1[2].flames[0x1c].base.location.position.z = 0;
      }
    }
  }
  local_20 = param_2;
  (param_1->model).accumulated_root_motion.z = 0.0;
  (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
  (param_1->model).accumulated_root_motion.x = (param_1->model).accumulated_root_motion.y;
  while (0.0 < local_20) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(param_1->model).motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar7);
  }
  if (iVar2 != 0) {
    pfVar8 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (param_1,local_1c,&(param_1->model).accumulated_root_motion);
    pCVar1 = &(param_1->base).location;
    (pCVar1->position).x = *pfVar8 + (pCVar1->position).x;
    (param_1->base).location.position.y = pfVar8[1] + (param_1->base).location.position.y;
    (param_1->base).location.position.z = pfVar8[2] + (param_1->base).location.position.z;
    iVar2 = *(int *)(param_1[2].flames[0x1c].base.create_event + 0x14);
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x20) = (pCVar1->position).x;
      *(float *)(iVar2 + 0x24) = (param_1->base).location.position.y;
      *(float *)(iVar2 + 0x28) = (param_1->base).location.position.z;
      *(int *)(iVar2 + 0x2c) = (param_1->base).location.area_id;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&param_1->model);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
