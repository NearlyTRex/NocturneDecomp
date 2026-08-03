// Name: core_mobster.cpp_CMobster_archive_FUN_004dc180
// Address: 004dc180
// Address Range: [[004dc180, 004dc2a7]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_archive_FUN_004dc180(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_archive_FUN_004dc180(CMobster *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(this_ptr->base).base.model,"modelName");
  if (g_INT_005bb124 < 4) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  if (g_INT_005bb124 == 2) {
    core_actor_cpp_archiveClothList_FUN_0040cf70
              (&(this_ptr->base).base.cloth_list,"clothList");
  }
  if (4 < g_INT_005bb124) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->post_mode,"postMode");
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->our_post,"ourPost");
  }
  if (5 < g_INT_005bb124) {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->vehicle,"vehicle");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->side_of_car,"sideOfCar");
  }
  if (g_INT_005bb124 < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->hold_pos_flag,"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->hold_pos_condition,"holdPosCond");
  return;
}
