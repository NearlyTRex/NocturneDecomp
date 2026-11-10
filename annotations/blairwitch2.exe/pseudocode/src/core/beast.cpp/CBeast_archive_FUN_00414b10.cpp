// Name: core_beast.cpp_CBeast_archive_FUN_00414b10
// Address: 00414b10
// Address Range: [[00414b10, 00414b57]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_archive_FUN_00414b10(CBeast *this_ptr)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_archive_FUN_00414b10(CBeast *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  return;
}
