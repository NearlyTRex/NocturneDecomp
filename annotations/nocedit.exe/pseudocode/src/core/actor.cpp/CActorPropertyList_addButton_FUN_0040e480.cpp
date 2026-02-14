// Name: core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480
// Address: 0040e480
// Address Range: [[0040e480, 0040e49d]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480(CActorPropertyList *this_ptr,char *property_name,char *data_ptr)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480(CActorPropertyList *this_ptr,char *property_name,char *data_ptr)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_BUTTON,property_name,data_ptr,(CActorPropertyValidatorFunc *)0x0
                     );
  return pCVar1;
}
