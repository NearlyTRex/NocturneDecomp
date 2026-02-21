// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_004beb00
// Address: 004beb00
// Address Range: [[004beb00, 004beb3c]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_004beb00(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_004beb00(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_setup_FUN_0046f970(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  (this_ptr->base).base.is_renderable = 1;
  this_ptr->reel_rotation = 0.0;
  this_ptr->prev_dest_state = 0;
  return;
}
