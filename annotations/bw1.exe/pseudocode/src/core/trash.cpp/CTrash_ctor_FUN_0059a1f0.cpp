// Name: core_trash.cpp_CTrash_ctor_FUN_0059a1f0
// Address: 0059a1f0
// Address Range: [[0059a1f0, 0059a233]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_0059a1f0(CTrash *this_ptr)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_0059a1f0(CTrash *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CTrashVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00,"question.kfm");
  return (CTrash *)(this_ptr_00[-1].part_visibility_flags + 9);
}
