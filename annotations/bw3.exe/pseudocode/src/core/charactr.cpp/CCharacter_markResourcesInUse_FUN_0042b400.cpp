// Name: core_charactr.cpp_CCharacter_markResourcesInUse_FUN_0042b400
// Address: 0042b400
// Address Range: [[0042b400, 0042b42a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_markResourcesInUse_FUN_0042b400(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_markResourcesInUse_FUN_0042b400(CCharacter *this_ptr)

{
  core_actor_cpp_FUN_004088d0(this_ptr);
  if ((this_ptr->model).model_name[0] == '\0') {
    return;
  }
  core_skeleton_cpp_FUN_00550450((this_ptr->model).model_name);
  return;
}
