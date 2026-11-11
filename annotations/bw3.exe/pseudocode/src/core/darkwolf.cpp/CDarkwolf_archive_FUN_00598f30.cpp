// Name: core_darkwolf.cpp_CDarkwolf_archive_FUN_00598f30
// Address: 00598f30
// Address Range: [[00598f30, 00598fad]]
// Convention: __cdecl
// Signature: void __cdecl core_darkwolf_cpp_CDarkwolf_archive_FUN_00598f30(CDarkwolf *this_ptr)

#include "nocturne.h"

void __cdecl core_darkwolf_cpp_CDarkwolf_archive_FUN_00598f30(CDarkwolf *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  if (g_CDarkwolfClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->morph_time,"morphTime");
  return;
}
