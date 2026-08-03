// Name: core_vampboss.cpp_CVampireBoss_archive_FUN_0054dc70
// Address: 0054dc70
// Address Range: [[0054dc70, 0054dd43]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_archive_FUN_0054dc70(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_archive_FUN_0054dc70(CVampireBoss *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  if (1 < INT_005c1188) {
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&(this_ptr->base).base.model.motion_controller,"human model motion state");
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&(this_ptr->model).motion_controller,"bat model motion state");
  }
  if (2 < INT_005c1188) {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->way_point_0,"wayPoint0");
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->way_point_1,"wayPoint1");
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->way_point_2,"wayPoint2");
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->way_point_3,"wayPoint3");
  }
  if (INT_005c1188 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->form,"form");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->morph_t,"morphT");
  return;
}
