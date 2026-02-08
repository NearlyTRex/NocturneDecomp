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
  this_ptr->unk[0x68] = '\0';
  this_ptr->unk[0x69] = '\0';
  this_ptr->unk[0x6a] = '\0';
  this_ptr->unk[0x6b] = '\0';
  this_ptr->unk[0x6c] = '\0';
  this_ptr->unk[0x6d] = '\0';
  this_ptr->unk[0x6e] = '\0';
  this_ptr->unk[0x6f] = '\0';
  return;
}
