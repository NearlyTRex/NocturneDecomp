// Name: core_spike.cpp_CSpike_process_FUN_005b8410
// Address: 005b8410
// Address Range: [[005b8410, 005b8672] [005b868f, 005b8726]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_process_FUN_005b8410(CSpike *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_process_FUN_005b8410(CSpike *this_ptr,float delta_time)

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
  
  if ((this_ptr->spike_type == 0) || (this_ptr->spike_type == 1)) {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->start_event);
    if (iVar4 != 0) {
      this_ptr->are_we_active = 1;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->stop_event);
    if (iVar4 == 0) goto LAB_005b85e2;
    this_ptr->are_we_active = 0;
LAB_005b8479:
    if (this_ptr->spike_state == 0) {
      return;
    }
    if (this_ptr->spike_state == 2) {
      this_ptr->spike_state = 3;
    }
  }
  else {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->extend_event);
    if (iVar4 != 0) {
      this_ptr->are_we_active = 1;
    }
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->retract_event);
    if (iVar4 == 0) {
LAB_005b85e2:
      if (this_ptr->are_we_active == 0) goto LAB_005b8479;
    }
    else {
      this_ptr->are_we_active = 1;
    }
  }
  fVar6 = this_ptr->wait_timer - delta_time;
  this_ptr->wait_timer = fVar6;
  if (0.0 < fVar6) {
    return;
  }
  iVar4 = this_ptr->spike_state;
  this_ptr->wait_timer = 0.0;
  if (iVar4 == 0) {
    this_ptr->spike_state = 1;
    this_ptr->param = 0.0;
    goto LAB_005b84db;
  }
  if (iVar4 == 1) {
    fVar6 = delta_time / this_ptr->extend_time + this_ptr->param;
    this_ptr->param = fVar6;
    if (fVar6 <= 1.0) goto LAB_005b84db;
    this_ptr->spike_state = 2;
    this_ptr->param = 1.0;
    if (this_ptr->spike_type == 2) {
LAB_005b8655:
      this_ptr->are_we_active = 0;
      goto LAB_005b84db;
    }
    if (this_ptr->spike_type != 1) {
      this_ptr->wait_timer = this_ptr->period;
      goto LAB_005b84db;
    }
  }
  else {
    if (iVar4 == 2) {
      this_ptr->param = 1.0;
      this_ptr->spike_state = 3;
      goto LAB_005b84db;
    }
    if ((iVar4 != 3) ||
       (fVar6 = this_ptr->param - delta_time / this_ptr->retract_time, this_ptr->param = fVar6,
       0.0 <= fVar6)) goto LAB_005b84db;
    this_ptr->spike_state = 0;
    this_ptr->param = 0.0;
    if (this_ptr->spike_type == 2) goto LAB_005b8655;
    if (this_ptr->spike_type != 1) {
      this_ptr->wait_timer = this_ptr->period;
      goto LAB_005b84db;
    }
  }
  fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.75,1.25);
  this_ptr->wait_timer = fVar6 * this_ptr->period;
LAB_005b84db:
  pCVar1 = &(this_ptr->base).location;
  local_38 = (pCVar1->position).x;
  local_34 = (this_ptr->base).location.position.y;
  local_30 = (this_ptr->base).location.position.z;
  local_50.z = this_ptr->extend_distance * this_ptr->param;
  local_50.x = 0.0;
  local_50.y = 0.0;
  local_14 = local_50.z;
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (&this_ptr->base,local_2c,&local_50);
  local_44 = (this_ptr->base_position).x + pCVar5->x;
  local_40 = (this_ptr->base_position).y + pCVar5->y;
  local_3c = (this_ptr->base_position).z + pCVar5->z;
  (pCVar1->position).x = local_44;
  (this_ptr->base).location.position.y = local_40;
  (this_ptr->base).location.position.z = local_3c;
  fVar6 = local_38 - (pCVar1->position).x;
  fVar3 = local_34 - (this_ptr->base).location.position.y;
  fVar2 = local_30 - (this_ptr->base).location.position.z;
  if (fVar2 * fVar2 + fVar3 * fVar3 + fVar6 * fVar6 <= (float)1.0000000000000001e-05) {
    return;
  }
  core_spike_cpp_CSpike_FUN_005b8950(this_ptr);
  return;
}
