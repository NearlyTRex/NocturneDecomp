// Name: core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300
// Address: 0040e300
// Address Range: [[0040e300, 0040e324]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300(CActorPropertyList *this_ptr,char *property_name,int *data_ptr)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addGroundType_FUN_0040e300(CActorPropertyList *this_ptr,char *property_name,int *data_ptr)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_GROUND_TYPE,property_name,data_ptr,
                      (CActorPropertyValidatorFunc *)0x0);
  (pCVar1->param1).v_int = 0;
  return pCVar1;
}
