// Name: core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
// Address: 0040e4d0
// Address Range: [[0040e4d0, 0040e4f4]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_MOTION,property_name,data_ptr,(CActorPropertyValidatorFunc *)0x0
                     );
  pCVar1->auto_update_flag = 1;
  return pCVar1;
}
