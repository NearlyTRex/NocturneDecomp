// Name: core_trash.cpp_CTrash_ctor_FUN_005deb70
// Address: 005deb70
// Address Range: [[005deb70, 005debb3]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_005deb70(CTrash *this_ptr)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_005deb70(CTrash *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CTrashVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  return (CTrash *)(this_ptr_00[-1].part_visibility_flags + 9);
}
