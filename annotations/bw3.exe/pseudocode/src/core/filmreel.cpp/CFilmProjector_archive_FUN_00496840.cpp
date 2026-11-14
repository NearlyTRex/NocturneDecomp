// Name: core_filmreel.cpp_CFilmProjector_archive_FUN_00496840
// Address: 00496840
// Address Range: [[00496840, 00496884]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_00496840(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_00496840(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_archive_FUN_00459500(&this_ptr->base);
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->key_reel,"I@keyReel" + 2);
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->key_event,"keyEvent");
  return;
}
