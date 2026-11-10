// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_00496520
// Address: 00496520
// Address Range: [[00496520, 0049655c]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00496520(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00496520(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_setup_FUN_004591b0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  (this_ptr->base).base.is_renderable = 1;
  this_ptr->reel_rotation = 0.0;
  this_ptr->prev_dest_state = 0;
  return;
}
