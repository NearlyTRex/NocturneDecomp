// Name: core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0
// Address: 0040e2d0
// Address Range: [[0040e2d0, 0040e2f4]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList *this_ptr,char *property_name,void *data_ptr)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList *this_ptr,char *property_name,void *data_ptr)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_SOUND,property_name,data_ptr,(CActorPropertyValidatorFunc *)0x0)
  ;
  (pCVar1->param1).v_int = 0;
  return pCVar1;
}
