// Name: core_lever.cpp_CLever_ctor_FUN_004c6040
// Address: 004c6040
// Address Range: [[004c6040, 004c6101]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_004c6040(CLever *this_ptr)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_004c6040(CLever *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  core_event_cpp_FUN_00481620((CRuleList *)(this_ptr_00[1].model_name + 0xd4));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CLeverVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"glever.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  *(byte *)(this_ptr_00[1].part_visibility_flags + 3) = 0;
  *(byte *)(this_ptr_00[1].part_visibility_flags + 0x1c) = 0;
  this_ptr_00[1].model_name[0x5c] = '\0';
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].model_name[0xc0] = '\x01';
  this_ptr_00[1].model_name[0xc1] = '\0';
  this_ptr_00[1].model_name[0xc2] = '\0';
  this_ptr_00[1].model_name[0xc3] = '\0';
  this_ptr_00[1].model_name[0xc4] = '\0';
  this_ptr_00[1].model_name[0xc5] = '\0';
  this_ptr_00[1].model_name[0xc6] = '\0';
  this_ptr_00[1].model_name[199] = '\0';
  this_ptr_00[1].model_name[200] = '\x17';
  this_ptr_00[1].model_name[0xc9] = '\0';
  this_ptr_00[1].model_name[0xca] = '\0';
  this_ptr_00[1].model_name[0xcb] = '\0';
  this_ptr_00[1].model_name[0xcc] = '\0';
  this_ptr_00[1].model_name[0xcd] = '\0';
  this_ptr_00[1].model_name[0xce] = '\0';
  this_ptr_00[1].model_name[0xcf] = '\0';
  this_ptr_00[1].model_name[0xd0] = '\0';
  this_ptr_00[1].model_name[0xd1] = '\0';
  this_ptr_00[1].model_name[0xd2] = '\0';
  this_ptr_00[1].model_name[0xd3] = '\0';
  this_ptr_00[4].model_name[0x4c] = '\x02';
  this_ptr_00[4].model_name[0x4d] = '\0';
  this_ptr_00[4].model_name[0x4e] = '\0';
  this_ptr_00[4].model_name[0x4f] = '\0';
  this_ptr_00[4].model_name[0x50] = '\x01';
  this_ptr_00[4].model_name[0x51] = '\0';
  this_ptr_00[4].model_name[0x52] = '\0';
  this_ptr_00[4].model_name[0x53] = '\0';
  return (CLever *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
