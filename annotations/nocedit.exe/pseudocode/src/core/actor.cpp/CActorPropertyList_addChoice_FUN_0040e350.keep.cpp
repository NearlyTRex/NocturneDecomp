// Name: core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
// Address: 0040e350
// MANUAL RECONSTRUCTION
// Address Range: [[0040e350, 0040e3ac]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList *this_ptr,char *property_name,CDemonActor **data_ptr,int default_index ,char *choices,CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList *this_ptr,char *property_name,CDemonActor **data_ptr,int default_index ,char *choices,CActorPropertyValidatorFunc *callback)

{
  CActorProperty *pCVar2;

  pCVar2 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_CHOICE,property_name,data_ptr,callback);
  if (choices == (char *)0x0) {
    choices = &s_EmptyChar_00614464;
  }
  strcpy(pCVar2->string2,choices);
  (pCVar2->param1).v_int = default_index;
  return pCVar2;
}
