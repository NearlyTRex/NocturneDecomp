// Name: core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670
// Address: 0040e670
// Address Range: [[0040e670, 0040e699]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670 (CActorPropertyList *this_ptr,char *property_name, CActorPropertyDisplayFunc *display_callback,CActorPropertyActionFunc *action_callback)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
          (CActorPropertyList *this_ptr,char *property_name,
          CActorPropertyDisplayFunc *display_callback,CActorPropertyActionFunc *action_callback)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_ACTION,property_name,(void *)0x0,
                      (CActorPropertyValidatorFunc *)0x0);
  (pCVar1->data).v_string_ptr = (char *)display_callback;
  (pCVar1->callback).v_action_func = action_callback;
  return pCVar1;
}
