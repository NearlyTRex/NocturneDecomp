// Name: core_spike.cpp_CSpike_process_FUN_00533210
// Address: 00533210
// Address Range: [[00533210, 00533526]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_process_FUN_00533210(CSpike *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_process_FUN_00533210(CSpike *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  ESpikeState EVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CVector3f *pCVar6;
  float fVar7;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c [2];
  float local_14;
  
  if ((this_ptr->spike_type == SPIKE_TYPE_PERIODIC) || (this_ptr->spike_type == SPIKE_TYPE_RANDOM))
  {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->start_event);
    if (iVar5 != 0) {
      this_ptr->are_we_active = 1;
    }
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->stop_event);
    if (iVar5 == 0) goto LAB_005333e2;
    this_ptr->are_we_active = 0;
LAB_00533279:
    if (this_ptr->spike_state == SPIKE_STATE_RETRACTED) {
      return;
    }
    if (this_ptr->spike_state == SPIKE_STATE_EXTENDED) {
      this_ptr->spike_state = SPIKE_STATE_RETRACTING;
    }
  }
  else {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->extend_event);
    if (iVar5 != 0) {
      this_ptr->are_we_active = 1;
    }
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->retract_event);
    if (iVar5 == 0) {
LAB_005333e2:
      if (this_ptr->are_we_active == 0) goto LAB_00533279;
    }
    else {
      this_ptr->are_we_active = 1;
    }
  }
  fVar7 = this_ptr->wait_timer - delta_time;
  this_ptr->wait_timer = fVar7;
  if (0.0 < fVar7) {
    return;
  }
  EVar2 = this_ptr->spike_state;
  this_ptr->wait_timer = 0.0;
  if (EVar2 == SPIKE_STATE_RETRACTED) {
    this_ptr->spike_state = SPIKE_STATE_EXTENDING;
    this_ptr->param = 0.0;
    goto LAB_005332db;
  }
  if (EVar2 == SPIKE_STATE_EXTENDING) {
    fVar7 = delta_time / this_ptr->extend_time + this_ptr->param;
    this_ptr->param = fVar7;
    if (fVar7 <= 1.0) goto LAB_005332db;
    this_ptr->spike_state = SPIKE_STATE_EXTENDED;
    this_ptr->param = 1.0;
    if (this_ptr->spike_type == SPIKE_TYPE_ONE_SHOT) {
LAB_00533455:
      this_ptr->are_we_active = 0;
      goto LAB_005332db;
    }
    if (this_ptr->spike_type != SPIKE_TYPE_RANDOM) {
      this_ptr->wait_timer = this_ptr->period;
      goto LAB_005332db;
    }
  }
  else {
    if (EVar2 == SPIKE_STATE_EXTENDED) {
      this_ptr->param = 1.0;
      this_ptr->spike_state = SPIKE_STATE_RETRACTING;
      goto LAB_005332db;
    }
    if ((EVar2 != SPIKE_STATE_RETRACTING) ||
       (fVar7 = this_ptr->param - delta_time / this_ptr->retract_time, this_ptr->param = fVar7,
       0.0 <= fVar7)) goto LAB_005332db;
    this_ptr->spike_state = SPIKE_STATE_RETRACTED;
    this_ptr->param = 0.0;
    if (this_ptr->spike_type == SPIKE_TYPE_ONE_SHOT) goto LAB_00533455;
    if (this_ptr->spike_type != SPIKE_TYPE_RANDOM) {
      this_ptr->wait_timer = this_ptr->period;
      goto LAB_005332db;
    }
  }
  fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.75,1.25);
  this_ptr->wait_timer = fVar7 * this_ptr->period;
LAB_005332db:
  pCVar1 = &(this_ptr->base).location;
  local_38 = (pCVar1->position).x;
  local_34 = (this_ptr->base).location.position.y;
  local_30 = (this_ptr->base).location.position.z;
  local_50.z = this_ptr->extend_distance * this_ptr->param;
  local_50.x = 0.0;
  local_50.y = 0.0;
  local_14 = local_50.z;
  pCVar6 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                     (&this_ptr->base,local_2c,&local_50);
  local_44 = (this_ptr->base_position).x + pCVar6->x;
  local_40 = (this_ptr->base_position).y + pCVar6->y;
  local_3c = (this_ptr->base_position).z + pCVar6->z;
  (pCVar1->position).x = local_44;
  (this_ptr->base).location.position.y = local_40;
  (this_ptr->base).location.position.z = local_3c;
  fVar7 = local_38 - (pCVar1->position).x;
  fVar4 = local_34 - (this_ptr->base).location.position.y;
  fVar3 = local_30 - (this_ptr->base).location.position.z;
  if (fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7 <= (float)1.0000000000000001e-05) {
    return;
  }
  core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00533750(this_ptr);
  return;
}
