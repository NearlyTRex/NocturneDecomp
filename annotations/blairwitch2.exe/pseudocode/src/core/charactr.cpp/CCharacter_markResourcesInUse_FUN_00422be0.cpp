// Name: core_charactr.cpp_CCharacter_markResourcesInUse_FUN_00422be0
// Address: 00422be0
// Address Range: [[00422be0, 00422c0a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_markResourcesInUse_FUN_00422be0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_markResourcesInUse_FUN_00422be0(CCharacter *this_ptr)

{
  core_actor_cpp_FUN_00408ac0(this_ptr);
  if ((this_ptr->model).model_name[0] == '\0') {
    return;
  }
  core_skeleton_cpp_markModelInUse_FUN_00549210((this_ptr->model).model_name);
  return;
}
