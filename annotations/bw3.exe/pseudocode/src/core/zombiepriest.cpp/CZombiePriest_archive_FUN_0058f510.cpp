// Name: core_zombiepriest.cpp_CZombiePriest_archive_FUN_0058f510
// Address: 0058f510
// Address Range: [[0058f510, 0058f602]]
// Convention: __cdecl
// Signature: void __cdecl core_zombiepriest_cpp_CZombiePriest_archive_FUN_0058f510(CZombiePriest *this_ptr)

#include "nocturne.h"

void __cdecl core_zombiepriest_cpp_CZombiePriest_archive_FUN_0058f510(CZombiePriest *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (g_CZombiePriestClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            (&(this_ptr->base).base.model.base,"motion state");
  if (g_CZombiePriestClassVersion == 2) {
    core_actor_cpp_archiveClothList_FUN_0040bf20
              (&(this_ptr->base).base.cloth_list,"clothList");
  }
  if (4 < g_CZombiePriestClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->post_mode,"postMode");
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->our_post,"ourPost");
  }
  if (g_CZombiePriestClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->hold_pos_flag,"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->hold_pos_condition,"holdPosCond");
  return;
}
