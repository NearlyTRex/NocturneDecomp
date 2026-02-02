// Name: core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
// Address: 0040e1a0
// Address Range: [[0040e1a0, 0040e1de]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0 (CActorPropertyList *this_ptr,char *property_name,float *data_ptr,float min_value, float max_value,CDemonActor_CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
          (CActorPropertyList *this_ptr,char *property_name,float *data_ptr,float min_value,
          float max_value,CDemonActor_CActorPropertyValidatorFunc *callback)

{
  CActorProperty *pCVar1;
  
  pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_FLOAT,property_name,data_ptr,callback);
  (pCVar1->param1).v_int = 1;
  (pCVar1->param4).v_int = 0x3f800000;
  (pCVar1->param2).v_float = min_value;
  (pCVar1->param3).v_float = max_value;
  return pCVar1;
}
