// Name: core_filmreel.cpp_CFilmProjector_archive_FUN_004bede0
// Address: 004bede0
// Address Range: [[004bede0, 004bee24]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004bede0(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004bede0(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_archive_FUN_0046fdb0(&this_ptr->base);
  if (g_CFilmProjectorClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b870((CDemonActor *)&this_ptr->key_reel,"keyReel");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->key_event,"keyEvent");
  return;
}
