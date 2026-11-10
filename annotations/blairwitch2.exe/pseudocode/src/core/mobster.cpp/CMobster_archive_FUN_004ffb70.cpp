// Name: core_mobster.cpp_CMobster_archive_FUN_004ffb70
// Address: 004ffb70
// Address Range: [[004ffb70, 004ffc97]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_archive_FUN_004ffb70(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_archive_FUN_004ffb70(CMobster *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CMobsterClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60
            (&(this_ptr->base).base.model,"motion state");
  if (g_CMobsterClassVersion == 2) {
    core_actor_cpp_archiveClothList_FUN_0040bfd0
              (&(this_ptr->base).base.cloth_list,"clothList");
  }
  if (4 < g_CMobsterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->post_mode,"postMode");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->our_post,"ourPost");
  }
  if (5 < g_CMobsterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->vehicle,"vehicle");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->side_of_car,"sideOfCar");
  }
  if (g_CMobsterClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->hold_pos_flag,"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->hold_pos_condition,"holdPosCond");
  return;
}
