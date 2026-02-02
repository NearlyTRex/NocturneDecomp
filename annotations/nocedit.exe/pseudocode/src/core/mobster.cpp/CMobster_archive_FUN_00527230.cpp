// Name: core_mobster.cpp_CMobster_archive_FUN_00527230
// Address: 00527230
// Address Range: [[00527230, 00527357]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_archive_FUN_00527230(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_archive_FUN_00527230(CMobster *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CMobsterClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  if (g_CMobsterClassVersion == 2) {
    core_actor_cpp_archiveClothList_FUN_0040be60
              ((CClothList *)&(this_ptr->base).base.cloth_count,"clothList");
  }
  if (4 < g_CMobsterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->post_mode,"postMode");
    core_actor_cpp_archiveActor_FUN_0040b870((CDemonActor *)&this_ptr->our_post,"ourPost");
  }
  if (5 < g_CMobsterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870((CDemonActor *)&this_ptr->vehicle,"vehicle");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->side_of_car,"sideOfCar");
  }
  if (g_CMobsterClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->hold_pos_flag,"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->hold_pos_condition,"holdPosCond");
  return;
}
