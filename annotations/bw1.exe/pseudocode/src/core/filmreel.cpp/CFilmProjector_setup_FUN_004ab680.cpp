// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_004ab680
// Address: 004ab680
// Address Range: [[004ab680, 004ab6bc]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_004ab680(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_004ab680(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_setup_FUN_0045d260(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  (this_ptr->base).base.is_renderable = 1;
  this_ptr->reel_rotation = 0.0;
  this_ptr->prev_dest_state = 0;
  return;
}
