// Name: core_trap.cpp_CTrap_ctor_FUN_0056cd00
// Address: 0056cd00
// Address Range: [[0056cd00, 0056cd4d]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_0056cd00(CTrap *this_ptr)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_0056cd00(CTrap *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CTrapVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (this_ptr_00,"beartrap.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  return (CTrap *)(this_ptr_00[-1].part_visibility_flags + 9);
}
