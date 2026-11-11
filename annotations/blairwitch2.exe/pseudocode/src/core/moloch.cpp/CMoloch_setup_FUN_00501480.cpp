// Name: core_moloch.cpp_CMoloch_setup_FUN_00501480
// Address: 00501480
// Address Range: [[00501480, 00501529]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00501480(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00501480(CMoloch *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CMorph *this_ptr_00;
  char *model_name;
  
  pCVar1 = &(this_ptr->base).base.model;
  if (this_ptr->in_human_form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(pCVar1,"moloch_d.dfm");
    model_name = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(pCVar1,"moloch_h.dfm");
    model_name = "moloch_d.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(&this_ptr->model,model_name);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&this_ptr->model);
  this_ptr_00 = &this_ptr->morph;
  (this_ptr->morph).rescale_enabled = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_00,0,pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_00,1,&this_ptr->model);
  core_morph_cpp_CMorph_getReady_FUN_005b71d0(this_ptr_00);
  core_hero_cpp_CHero_setup_FUN_004ce4a0(&this_ptr->base);
  return;
}
