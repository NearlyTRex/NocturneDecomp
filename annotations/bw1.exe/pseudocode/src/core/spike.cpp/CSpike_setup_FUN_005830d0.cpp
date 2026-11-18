// Name: core_spike.cpp_CSpike_setup_FUN_005830d0
// Address: 005830d0
// Address Range: [[005830d0, 005831a5]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_setup_FUN_005830d0(CSpike *this_ptr)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_setup_FUN_005830d0(CSpike *this_ptr)

{
  byte bVar1;
  float afStackY_1034 [1016];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float afStack_18 [3];
  
  bVar1 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  CStack_34.z = this_ptr->extend_distance * this_ptr->param;
  CStack_34.x = 0.0;
  CStack_34.y = 0.0;
  afStack_18[2] = CStack_34.z;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&this_ptr->base,&CStack_34,&CStack_28);
  fStack_40 = CStack_28.x;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  fStack_4c = (this_ptr->base).location.position.x - fStack_40;
  fStack_48 = (this_ptr->base).location.position.y - fStack_3c;
  fStack_44 = (this_ptr->base).location.position.z - fStack_38;
  fStack_1c = fStack_4c;
  afStack_18[(uint)bVar1 * -2] = *(float *)((int)&stack0xffffffb8 + (uint)bVar1 * -8);
  afStack_18[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&this_ptr->base_position == (CVector3f *)&fStack_1c) {
    this_ptr->wait_timer = 0.0;
    return;
  }
  (this_ptr->base_position).x = fStack_1c;
  (this_ptr->base_position).y = afStack_18[0];
  (this_ptr->base_position).z = afStack_18[1];
  this_ptr->wait_timer = 0.0;
  return;
}
