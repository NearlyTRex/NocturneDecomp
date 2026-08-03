// Name: core_filmreel.cpp_CFilmProjector_archive_FUN_004822c0
// Address: 004822c0
// Address Range: [[004822c0, 00482304]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004822c0(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004822c0(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_archive_FUN_0044bb10(&this_ptr->base);
  if (INT_005b801c < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->key_reel,"keyReel");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->key_event,"keyEvent");
  return;
}
