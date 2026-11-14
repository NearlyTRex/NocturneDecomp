// Name: core_filmreel.cpp_CFilmReel_archive_FUN_00496380
// Address: 00496380
// Address Range: [[00496380, 004963c4]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_00496380(CFilmReel *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_00496380(CFilmReel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"modelName");
  if (g_CFilmReelClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->movie_name,"movieName");
  return;
}
