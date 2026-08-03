// Name: core_backgnd.cpp_CBackgroundActor_archive_FUN_00410040
// Address: 00410040
// Address Range: [[00410040, 00410098]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_archive_FUN_00410040(CBackgroundActor *this_ptr)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_archive_FUN_00410040(CBackgroundActor *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->collide_with_me,"collideWithMe");
  if (g_INT_005acf20 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->ground_type,"groundType");
  return;
}
