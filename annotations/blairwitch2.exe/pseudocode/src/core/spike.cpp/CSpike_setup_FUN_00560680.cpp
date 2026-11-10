// Name: core_spike.cpp_CSpike_setup_FUN_00560680
// Address: 00560680
// Address Range: [[00560680, 00560755]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_setup_FUN_00560680(CSpike *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_spike_cpp_CSpike_setup_FUN_00560680(CSpike *this_ptr)

{
  byte bVar1;
  float afStackY_1034 [1016];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar1 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  fStack_2c = this_ptr->extend_distance * this_ptr->param;
  uStack_34 = 0;
  uStack_30 = 0;
  fStack_10 = fStack_2c;
  core_actor_cpp_FUN_00408cf0(this_ptr,&stack0xffffffcc);
  fStack_40 = fStack_28;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_4c = *(float *)&(this_ptr->base).field_0x20 - fStack_40;
  fStack_48 = *(float *)&(this_ptr->base).field_0x24 - fStack_3c;
  fStack_44 = *(float *)&(this_ptr->base).field_0x28 - fStack_38;
  fStack_1c = fStack_4c;
  (&stack0xffffffe8)[(uint)bVar1 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&this_ptr->base_position == (CVector3f *)&stack0xffffffe4) {
    this_ptr->wait_timer = 0.0;
    return;
  }
  (this_ptr->base_position).x = fStack_1c;
  (this_ptr->base_position).y = fStack_18;
  (this_ptr->base_position).z = fStack_14;
  this_ptr->wait_timer = 0.0;
  return;
}
