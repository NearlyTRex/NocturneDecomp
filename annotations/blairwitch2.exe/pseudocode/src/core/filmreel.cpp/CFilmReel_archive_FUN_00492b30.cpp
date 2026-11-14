// Name: core_filmreel.cpp_CFilmReel_archive_FUN_00492b30
// Address: 00492b30
// Address Range: [[00492b30, 00492b74]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_00492b30(CFilmReel *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_00492b30(CFilmReel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName");
  if (g_CFilmReelClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->movie_name,"movieName");
  return;
}
