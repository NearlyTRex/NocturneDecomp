// Name: core_biggs.cpp_CBiggs_setup_FUN_00418680
// Address: 00418680
// Address Range: [[00418680, 004186f7]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00418680(CBiggs *this_ptr)

#include "nocturne.h"

void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00418680(CBiggs *this_ptr)

{
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&(this_ptr->base).base.model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_morph_cpp_FUN_0052b430();
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  core_morph_cpp_FUN_0052b470();
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)this_ptr->unk3);
  this_ptr->morphing = 0;
  this_ptr->morph_timer = 0.0;
  return;
}
