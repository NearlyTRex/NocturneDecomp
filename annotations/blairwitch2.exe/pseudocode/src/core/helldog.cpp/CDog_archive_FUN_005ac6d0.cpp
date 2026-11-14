// Name: core_helldog.cpp_CDog_archive_FUN_005ac6d0
// Address: 005ac6d0
// Address Range: [[005ac6d0, 005ac714]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_archive_FUN_005ac6d0(CDog *this_ptr)

#include "nocturne.h"

void __cdecl core_helldog_cpp_CDog_archive_FUN_005ac6d0(CDog *this_ptr)

{
  core_basicene_cpp_CBasicEnemy_archive_FUN_0059fc10(&this_ptr->base);
  if (g_CDogClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->food,&DAT_005f0e7e);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->eat_time,"EatTime");
  return;
}
