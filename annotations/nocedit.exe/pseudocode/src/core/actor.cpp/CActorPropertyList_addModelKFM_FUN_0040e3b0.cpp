// Name: core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
// Address: 0040e3b0
// Address Range: [[0040e3b0, 0040e3db]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 (CActorPropertyList *this_ptr,char *property_name,CKeyFramedModelInstance *data_ptr, int allow_none)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
          (CActorPropertyList *this_ptr,char *property_name,CKeyFramedModelInstance *data_ptr,
          int allow_none)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_MODEL_KFM,property_name,data_ptr,(void *)0x0);
  pCVar1->auto_update_flag = 1;
  (pCVar1->param1).v_int = allow_none;
  return pCVar1;
}
