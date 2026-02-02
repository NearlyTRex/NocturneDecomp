// Name: core_biggs.cpp_CBiggs_archive_FUN_00418ac0
// Address: 00418ac0
// Address Range: [[00418ac0, 00418b43]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00418ac0(CBiggs *this_ptr)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_archive_FUN_00418ac0(CBiggs *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->morphing,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->morph_timer,"morphTimer");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->unk3 + 0xc2c,"morphEvent");
  return;
}
