// Name: core_batcreat.cpp_CBatCreature_archive_FUN_004124a0
// Address: 004124a0
// Address Range: [[004124a0, 004124e7]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_004124a0(CBatCreature *this_ptr)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_004124a0(CBatCreature *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"@speed" + 1);
  pCVar1 = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(pCVar1,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
  return;
}
