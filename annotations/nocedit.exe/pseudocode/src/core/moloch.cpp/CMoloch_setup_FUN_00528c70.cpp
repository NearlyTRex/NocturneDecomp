// Name: core_moloch.cpp_CMoloch_setup_FUN_00528c70
// Address: 00528c70
// Address Range: [[00528c70, 00528d19]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00528c70(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00528c70(CMoloch *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CMorph *this_ptr_00;
  char *model_name;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (this_ptr->in_human_form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"moloch_d.dfm");
    model_name = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,"moloch_h.dfm");
    model_name = "moloch_d.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(&this_ptr->model,model_name);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&this_ptr->model);
  this_ptr_00 = &this_ptr->morph;
  (this_ptr->morph).rescale_enabled = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_00,0,pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(this_ptr_00,1,&this_ptr->model);
  core_morph_cpp_CMorph_getReady_FUN_0052b680(this_ptr_00);
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  return;
}
