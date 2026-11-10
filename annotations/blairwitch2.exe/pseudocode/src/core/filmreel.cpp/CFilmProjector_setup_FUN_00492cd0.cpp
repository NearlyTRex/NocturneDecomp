// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_00492cd0
// Address: 00492cd0
// Address Range: [[00492cd0, 00492d0c]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00492cd0(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00492cd0(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_setup_FUN_00447100(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  *(uint *)&(this_ptr->base).base.field_0xf8 = 1;
  this_ptr->reel_rotation = 0.0;
  this_ptr->prev_dest_state = 0;
  return;
}
