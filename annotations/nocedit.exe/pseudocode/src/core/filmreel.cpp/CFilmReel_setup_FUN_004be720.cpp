// Name: core_filmreel.cpp_CFilmReel_setup_FUN_004be720
// Address: 004be720
// Address Range: [[004be720, 004be72d]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_setup_FUN_004be720(CFilmReel *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_setup_FUN_004be720(CFilmReel *this_ptr)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D CStack_24;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_24);
  fVar1 = (CStack_24.max.x - CStack_24.min.x) * (float)0.5;
  fVar2 = (CStack_24.max.z - CStack_24.min.z) * (float)0.5;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  this_ptr->pickup_radius = fVar2;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
