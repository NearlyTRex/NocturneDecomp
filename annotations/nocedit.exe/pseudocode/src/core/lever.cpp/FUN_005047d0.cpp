// Name: core_lever.cpp_FUN_005047d0
// Address: 005047d0
// Address Range: [[005047d0, 00504891]]
// Convention: __cdecl
// Signature: CLever * core_lever.cpp_FUN_005047d0(CLever * this_ptr)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_FUN_005047d0(CLever *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  core_event_cpp_FUN_004b1670();
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_lever_cpp_FUN_00660914;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"glever.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  *(byte *)(this_ptr_00[1].part_visibility_flags + 3) = 0;
  *(byte *)(this_ptr_00[1].part_visibility_flags + 0x1c) = 0;
  this_ptr_00[1].model_name[0x5c] = '\0';
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].animation_state[0x5c] = '\x01';
  this_ptr_00[1].animation_state[0x5d] = '\0';
  this_ptr_00[1].animation_state[0x5e] = '\0';
  this_ptr_00[1].animation_state[0x5f] = '\0';
  this_ptr_00[1].animation_state[0x60] = '\0';
  this_ptr_00[1].animation_state[0x61] = '\0';
  this_ptr_00[1].animation_state[0x62] = '\0';
  this_ptr_00[1].animation_state[99] = '\0';
  this_ptr_00[1].animation_state[100] = '\x17';
  this_ptr_00[1].animation_state[0x65] = '\0';
  this_ptr_00[1].animation_state[0x66] = '\0';
  this_ptr_00[1].animation_state[0x67] = '\0';
  this_ptr_00[1].animation_state[0x68] = '\0';
  this_ptr_00[1].animation_state[0x69] = '\0';
  this_ptr_00[1].animation_state[0x6a] = '\0';
  this_ptr_00[1].animation_state[0x6b] = '\0';
  this_ptr_00[1].animation_state[0x6c] = '\0';
  this_ptr_00[1].animation_state[0x6d] = '\0';
  this_ptr_00[1].animation_state[0x6e] = '\0';
  this_ptr_00[1].animation_state[0x6f] = '\0';
  this_ptr_00[4].model_name[0x4c] = '\x02';
  this_ptr_00[4].model_name[0x4d] = '\0';
  this_ptr_00[4].model_name[0x4e] = '\0';
  this_ptr_00[4].model_name[0x4f] = '\0';
  this_ptr_00[4].model_name[0x50] = '\x01';
  this_ptr_00[4].model_name[0x51] = '\0';
  this_ptr_00[4].model_name[0x52] = '\0';
  this_ptr_00[4].model_name[0x53] = '\0';
  return (CLever *)(this_ptr_00[-1].part_visibility_flags + 9);
}
