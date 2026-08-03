// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_00481fd0
// Address: 00481fd0
// Address Range: [[00481fd0, 0048200c]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00481fd0(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00481fd0(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_setup_FUN_0044b810(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  (this_ptr->base).base.is_renderable = 1;
  this_ptr->reel_rotation = 0.0;
  this_ptr->prev_dest_state = 0;
  return;
}
