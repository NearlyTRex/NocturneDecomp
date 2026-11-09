// Name: core_lever.cpp_CLever_ctor_FUN_004e0100
// Address: 004e0100
// Address Range: [[004e0100, 004e01c1]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_004e0100(CLever *this_ptr)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_CLever_ctor_FUN_004e0100(CLever *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  core_event_cpp_CRuleList_clear_FUN_00495b40((CRuleList *)&this_ptr_00[1].field_0x14c);
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CLeverVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (this_ptr_00,"lightswitch.kfm");
  *(uint *)&this_ptr_00[1].field_0x4 = 0;
  this_ptr_00[1].field_0xc = 0;
  this_ptr_00[1].field_0x70 = 0;
  this_ptr_00[1].field_0xd4 = 0;
  *(uint *)&this_ptr_00[1].field_0x8 = 0;
  *(uint *)&this_ptr_00[1].field_0x138 = 1;
  *(uint *)&this_ptr_00[1].field_0x13c = 0;
  *(uint *)&this_ptr_00[1].field_0x140 = 0x17;
  *(uint *)&this_ptr_00[1].field_0x144 = 0;
  *(uint *)&this_ptr_00[1].field_0x148 = 0;
  *(uint *)&this_ptr_00[4].field_0xc4 = 2;
  *(uint *)&this_ptr_00[4].field_0xc8 = 1;
  return (CLever *)&this_ptr_00[-1].field_0x24;
}
