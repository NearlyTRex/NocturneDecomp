// Name: core_spike.cpp_CSpike_process_FUN_00560760
// Address: 00560760
// Address Range: [[00560760, 00560a8d]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_process_FUN_00560760(CSpike *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spike_cpp_CSpike_process_FUN_00560760(CSpike *this_ptr,float delta_time)

{
  byte *puVar1;
  ESpikeState EVar2;
  int iVar3;
  float fVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1050 [1016];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  uint uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_14;
  
  bVar6 = 0;
  if ((this_ptr->spike_type == SPIKE_TYPE_PERIODIC) || (this_ptr->spike_type == SPIKE_TYPE_RANDOM))
  {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->start_event);
    if (iVar3 != 0) {
      this_ptr->are_we_active = 1;
    }
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->stop_event);
    if (iVar3 == 0) goto LAB_00560949;
    this_ptr->are_we_active = 0;
LAB_005607c9:
    if (this_ptr->spike_state == SPIKE_STATE_RETRACTED) {
      return;
    }
    if (this_ptr->spike_state == SPIKE_STATE_EXTENDED) {
      this_ptr->spike_state = SPIKE_STATE_RETRACTING;
    }
  }
  else {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->extend_event);
    if (iVar3 != 0) {
      this_ptr->are_we_active = 1;
    }
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->retract_event);
    if (iVar3 == 0) {
LAB_00560949:
      if (this_ptr->are_we_active == 0) goto LAB_005607c9;
    }
    else {
      this_ptr->are_we_active = 1;
    }
  }
  fVar4 = this_ptr->wait_timer - delta_time;
  this_ptr->wait_timer = fVar4;
  if (0.0 < fVar4) {
    return;
  }
  EVar2 = this_ptr->spike_state;
  this_ptr->wait_timer = 0.0;
  if (EVar2 == SPIKE_STATE_RETRACTED) {
    this_ptr->spike_state = SPIKE_STATE_EXTENDING;
    this_ptr->param = 0.0;
    goto LAB_0056082b;
  }
  if (EVar2 == SPIKE_STATE_EXTENDING) {
    fVar4 = delta_time / this_ptr->extend_time + this_ptr->param;
    this_ptr->param = fVar4;
    if (fVar4 <= 1.0) goto LAB_0056082b;
    this_ptr->spike_state = SPIKE_STATE_EXTENDED;
    this_ptr->param = 1.0;
    if (this_ptr->spike_type == SPIKE_TYPE_ONE_SHOT) {
LAB_005609bc:
      this_ptr->are_we_active = 0;
      goto LAB_0056082b;
    }
    if (this_ptr->spike_type != SPIKE_TYPE_RANDOM) {
      this_ptr->wait_timer = this_ptr->period;
      goto LAB_0056082b;
    }
  }
  else {
    if (EVar2 == SPIKE_STATE_EXTENDED) {
      this_ptr->param = 1.0;
      this_ptr->spike_state = SPIKE_STATE_RETRACTING;
      goto LAB_0056082b;
    }
    if ((EVar2 != SPIKE_STATE_RETRACTING) ||
       (fVar4 = this_ptr->param - delta_time / this_ptr->retract_time, this_ptr->param = fVar4,
       0.0 <= fVar4)) goto LAB_0056082b;
    this_ptr->spike_state = SPIKE_STATE_RETRACTED;
    this_ptr->param = 0.0;
    if (this_ptr->spike_type == SPIKE_TYPE_ONE_SHOT) goto LAB_005609bc;
    if (this_ptr->spike_type != SPIKE_TYPE_RANDOM) {
      this_ptr->wait_timer = this_ptr->period;
      goto LAB_0056082b;
    }
  }
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.75,1.25);
  this_ptr->wait_timer = fVar4 * this_ptr->period;
LAB_0056082b:
  puVar5 = (uint *)((int)this_ptr + (uint)bVar6 * -8 + 0x24);
  fStack_50 = *(float *)&(this_ptr->base).field_0x20;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8) = *puVar5;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       puVar5[(uint)bVar6 * -2 + 1];
  fStack_30 = this_ptr->extend_distance * this_ptr->param;
  uStack_38 = 0;
  uStack_34 = 0;
  fStack_14 = fStack_30;
  core_actor_cpp_FUN_00408cf0(this_ptr,&stack0xffffffc8);
  fStack_68 = fStack_44;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_2c = (this_ptr->base_position).x + fStack_68;
  fStack_28 = (this_ptr->base_position).y + fStack_64;
  fStack_24 = (this_ptr->base_position).z + fStack_60;
  fStack_5c = fStack_2c;
  *(float *)((int)&stack0xffffffa8 + (uint)bVar6 * -8) =
       (&stack0xffffffd8)[(uint)bVar6 * 0xfffffffe];
  *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar1 = &(this_ptr->base).field_0x20;
  *(float *)puVar1 = fStack_5c;
  fVar4 = fStack_50 - *(float *)puVar1;
  *(uint *)&(this_ptr->base).field_0x24 = uStack_58;
  fStack_4c = fStack_4c - *(float *)&(this_ptr->base).field_0x24;
  *(uint *)&(this_ptr->base).field_0x28 = uStack_54;
  fStack_48 = fStack_48 - *(float *)&(this_ptr->base).field_0x28;
  if (fStack_48 * fStack_48 + fStack_4c * fStack_4c + fVar4 * fVar4 <= (float)_DAT_005eb00c) {
    return;
  }
  core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0(this_ptr);
  return;
}
