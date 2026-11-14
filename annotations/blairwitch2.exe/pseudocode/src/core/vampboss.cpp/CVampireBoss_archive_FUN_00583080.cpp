// Name: core_vampboss.cpp_CVampireBoss_archive_FUN_00583080
// Address: 00583080
// Address Range: [[00583080, 00583153]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_archive_FUN_00583080(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_archive_FUN_00583080(CVampireBoss *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  if (1 < g_CVampireBossClassVersion) {
    core_actor_cpp_archiveMotionState_FUN_0040bb60
              (&(this_ptr->base).base.model.base,"@human model motion state" + 1);
    core_actor_cpp_archiveMotionState_FUN_0040bb60
              (&(this_ptr->model).base,"bat model motion state");
  }
  if (2 < g_CVampireBossClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->way_point_0,"wayPoint0");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->way_point_1,"wayPoint1");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->way_point_2,"wayPoint2");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->way_point_3,"wayPoint3");
  }
  if (g_CVampireBossClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->form,&DAT_005edb24);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->morph_t,"morphT");
  return;
}
