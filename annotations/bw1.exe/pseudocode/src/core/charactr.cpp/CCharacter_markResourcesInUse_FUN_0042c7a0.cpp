// Name: core_charactr.cpp_CCharacter_markResourcesInUse_FUN_0042c7a0
// Address: 0042c7a0
// Address Range: [[0042c7a0, 0042c7ca]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_markResourcesInUse_FUN_0042c7a0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_markResourcesInUse_FUN_0042c7a0(CCharacter *this_ptr)

{
  core_actor_cpp_FUN_00408890(this_ptr);
  if ((this_ptr->model).model_name[0] == '\0') {
    return;
  }
  core_skeleton_cpp_FUN_0056b8c0((this_ptr->model).model_name);
  return;
}
