// Name: core_filmreel.cpp_CFilmReel_archive_FUN_004ab4e0
// Address: 004ab4e0
// Address Range: [[004ab4e0, 004ab524]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_004ab4e0(CFilmReel *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_004ab4e0(CFilmReel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(&this_ptr->model,"modelName");
  if (g_CFilmReelClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->movie_name,"movieName");
  return;
}
