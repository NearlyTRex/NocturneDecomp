// Name: core_dog1.cpp_CDog_archive_FUN_005ac6d0
// Address: 005ac6d0
// Address Range: [[005ac6d0, 005ac714]]
// Convention: __cdecl
// Signature: void __cdecl core_dog1_cpp_CDog_archive_FUN_005ac6d0(CDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog1_cpp_CDog_archive_FUN_005ac6d0(CDog *this_ptr)

{
  core_twigzomb_cpp_CTwigZombie_archive_FUN_0059fc10((CTwigZombie *)this_ptr);
  if (g_CDogClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x1185c,&DAT_005f0e7e);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x11864,"EatTime");
  return;
}
