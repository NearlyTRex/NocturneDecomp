// Name: core_filmreel.cpp_CFilmReel_archive_FUN_004be8a0
// Address: 004be8a0
// Address Range: [[004be8a0, 004be8e4]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_004be8a0(CFilmReel *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_004be8a0(CFilmReel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  if (g_CFilmReelClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->movie_name,"movieName");
  return;
}
