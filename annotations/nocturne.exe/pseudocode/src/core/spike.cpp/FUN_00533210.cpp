// Name: core_spike.cpp_FUN_00533210
// Address: 00533210
// Address Range: [[00533210, 00533526]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_00533210(CSpike *param_1,float param_2)

#include "nocturne.h"

void core_spike_cpp_FUN_00533210(CSpike *param_1,float param_2)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  float fVar6;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c [2];
  float local_14;
  
  if ((param_1->spike_type == 0) || (param_1->spike_type == 1)) {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->start_event);
    if (iVar4 != 0) {
      param_1->are_we_active = 1;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->stop_event);
    if (iVar4 == 0) goto LAB_005333e2;
    param_1->are_we_active = 0;
LAB_00533279:
    if (param_1->spike_state == 0) {
      return;
    }
    if (param_1->spike_state == 2) {
      param_1->spike_state = 3;
    }
  }
  else {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->extend_event);
    if (iVar4 != 0) {
      param_1->are_we_active = 1;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->retract_event);
    if (iVar4 == 0) {
LAB_005333e2:
      if (param_1->are_we_active == 0) goto LAB_00533279;
    }
    else {
      param_1->are_we_active = 1;
    }
  }
  fVar6 = param_1->wait_timer - param_2;
  param_1->wait_timer = fVar6;
  if (0.0 < fVar6) {
    return;
  }
  iVar4 = param_1->spike_state;
  param_1->wait_timer = 0.0;
  if (iVar4 == 0) {
    param_1->spike_state = 1;
    param_1->param = 0.0;
    goto LAB_005332db;
  }
  if (iVar4 == 1) {
    fVar6 = param_2 / param_1->extend_time + param_1->param;
    param_1->param = fVar6;
    if (fVar6 <= 1.0) goto LAB_005332db;
    param_1->spike_state = 2;
    param_1->param = 1.0;
    if (param_1->spike_type == 2) {
LAB_00533455:
      param_1->are_we_active = 0;
      goto LAB_005332db;
    }
    if (param_1->spike_type != 1) {
      param_1->wait_timer = param_1->period;
      goto LAB_005332db;
    }
  }
  else {
    if (iVar4 == 2) {
      param_1->param = 1.0;
      param_1->spike_state = 3;
      goto LAB_005332db;
    }
    if ((iVar4 != 3) ||
       (fVar6 = param_1->param - param_2 / param_1->retract_time, param_1->param = fVar6,
       0.0 <= fVar6)) goto LAB_005332db;
    param_1->spike_state = 0;
    param_1->param = 0.0;
    if (param_1->spike_type == 2) goto LAB_00533455;
    if (param_1->spike_type != 1) {
      param_1->wait_timer = param_1->period;
      goto LAB_005332db;
    }
  }
  fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.75,1.25);
  param_1->wait_timer = fVar6 * param_1->period;
LAB_005332db:
  pCVar1 = &(param_1->base).location;
  local_38 = (pCVar1->position).x;
  local_34 = (param_1->base).location.position.y;
  local_30 = (param_1->base).location.position.z;
  local_50.z = param_1->extend_distance * param_1->param;
  local_50.x = 0.0;
  local_50.y = 0.0;
  local_14 = local_50.z;
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                     (&param_1->base,local_2c,&local_50);
  local_44 = (param_1->base_position).x + pCVar5->x;
  local_40 = (param_1->base_position).y + pCVar5->y;
  local_3c = (param_1->base_position).z + pCVar5->z;
  (pCVar1->position).x = local_44;
  (param_1->base).location.position.y = local_40;
  (param_1->base).location.position.z = local_3c;
  fVar6 = local_38 - (pCVar1->position).x;
  fVar3 = local_34 - (param_1->base).location.position.y;
  fVar2 = local_30 - (param_1->base).location.position.z;
  if (fVar2 * fVar2 + fVar3 * fVar3 + fVar6 * fVar6 <= (float)1.0000000000000001e-05) {
    return;
  }
  core_spike_cpp_FUN_00533750(param_1);
  return;
}
