// Name: core_filmreel.cpp_CFilmProjector_archive_FUN_004ab9a0
// Address: 004ab9a0
// Address Range: [[004ab9a0, 004ab9e4]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004ab9a0(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004ab9a0(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_archive_FUN_0045d5b0((CActorDestination *)this_ptr);
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x370,"I@keyReel" + 2);
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x374,"keyEvent");
  return;
}
