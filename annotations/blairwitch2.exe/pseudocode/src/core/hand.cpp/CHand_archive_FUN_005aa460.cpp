// Name: core_hand.cpp_CHand_archive_FUN_005aa460
// Address: 005aa460
// Address Range: [[005aa460, 005aa490]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_archive_FUN_005aa460(CHand *this_ptr)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_archive_FUN_005aa460(CHand *this_ptr)

{
  core_twigzomb_cpp_CTwigZombie_archive_FUN_0059fc10((CTwigZombie *)this_ptr);
  if (g_CHandClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x11860,"SleepTime");
  return;
}
