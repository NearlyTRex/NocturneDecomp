// Name: core_batcreat.cpp_CBatCreature_archive_FUN_00412110
// Address: 00412110
// Address Range: [[00412110, 00412157]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_00412110(CBatCreature *this_ptr)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_archive_FUN_00412110(CBatCreature *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"@speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  return;
}
