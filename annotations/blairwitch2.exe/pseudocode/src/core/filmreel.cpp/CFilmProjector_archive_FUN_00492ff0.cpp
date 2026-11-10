// Name: core_filmreel.cpp_CFilmProjector_archive_FUN_00492ff0
// Address: 00492ff0
// Address Range: [[00492ff0, 00493034]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_00492ff0(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_00492ff0(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_archive_FUN_00447450(&this_ptr->base);
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->key_reel,"I@keyReel" + 2);
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->key_event,"keyEvent");
  return;
}
