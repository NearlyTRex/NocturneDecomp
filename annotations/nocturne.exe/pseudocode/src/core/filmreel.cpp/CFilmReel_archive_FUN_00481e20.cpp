// Name: core_filmreel.cpp_CFilmReel_archive_FUN_00481e20
// Address: 00481e20
// Address Range: [[00481e20, 00481e64]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_00481e20(CFilmReel *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_archive_FUN_00481e20(CFilmReel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  if (INT_005b8018 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->movie_name,"movieName");
  return;
}
