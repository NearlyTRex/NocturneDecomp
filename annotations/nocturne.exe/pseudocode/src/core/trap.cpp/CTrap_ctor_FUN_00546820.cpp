// Name: core_trap.cpp_CTrap_ctor_FUN_00546820
// Address: 00546820
// Address Range: [[00546820, 0054686d]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_00546820(CTrap *this_ptr)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_00546820(CTrap *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CTrapVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"beartrap.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  return (CTrap *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
