// Name: core_frankgen.cpp_CFrankenstienMachine_getPropertyList_FUN_004d2500
// Address: 004d2500
// Address Range: [[004d2500, 004d2557]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_getPropertyList_FUN_004d2500(CFrankenstienMachine *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_getPropertyList_FUN_004d2500(CFrankenstienMachine *this_ptr,CActorPropertyList *property_list)

{
  CDemonActor *pCVar1;
  char local_68 [100];
  CActorPropertyValidatorFunc *callback;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  _sprintf(local_68,"Master frame (%0..%g)",(double)2300.0f);
  callback = (CActorPropertyValidatorFunc *)0x0;
  pCVar1 = core_frankgen_cpp_findLeader_FUN_004d2330();
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,local_68,(float *)(pCVar1[1].actor_name + 4),callback);
  return;
}
