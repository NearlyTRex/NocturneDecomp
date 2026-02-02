// Name: core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
// Address: 0040e4a0
// Address Range: [[0040e4a0, 0040e4cb]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 (CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr, int allow_none)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
          (CActorPropertyList *this_ptr,char *property_name,CDeformableModelInstance *data_ptr,
          int allow_none)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_MODEL_DFM,property_name,data_ptr,(void *)0x0);
  pCVar1->auto_update_flag = 1;
  (pCVar1->param1).v_int = allow_none;
  return pCVar1;
}
