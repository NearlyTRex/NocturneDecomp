// Name: core_trash.cpp_CTrash_ctor_FUN_005deb70
// Address: 005deb70
// Address Range: [[005deb70, 005debb3]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_005deb70(CTrash *this_ptr)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_CTrash_ctor_FUN_005deb70(CTrash *this_ptr)

{
  CTrash *pCVar1;
  CTrash_ptr_344 this_ptr_00;
  
  pCVar1 = (CTrash *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CTrashVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"question.kfm");
  return ADJ(this_ptr_00);
}
