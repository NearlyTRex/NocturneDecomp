// Name: core_moloch.cpp_CMoloch_setup_FUN_00528c70
// Address: 00528c70
// Address Range: [[00528c70, 00528d19]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00528c70(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00528c70(CMoloch *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  char *model_name;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  if (this_ptr->in_human_form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (this_ptr_00,"moloch_d.dfm");
    model_name = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (this_ptr_00,"moloch_h.dfm");
    model_name = "moloch_d.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)this_ptr->unk1,model_name);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&(this_ptr->base).base.model);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            ((CDeformableModelInstance *)this_ptr->unk1);
  this_ptr->unk2[0xc28] = '\0';
  this_ptr->unk2[0xc29] = '\0';
  this_ptr->unk2[0xc2a] = '\0';
  this_ptr->unk2[0xc2b] = '\0';
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_FUN_0052b430();
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)this_ptr->unk2);
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  return;
}
