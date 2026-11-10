// Name: core_moloch.cpp_CMoloch_setup_FUN_00520430
// Address: 00520430
// Address Range: [[00520430, 005204d9]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00520430(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_setup_FUN_00520430(CMoloch *this_ptr)

{
  byte *this_ptr_00;
  char *model_name;
  
  if (this_ptr->in_human_form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
              ((CDeformableModelInstance *)&this_ptr->field_0x158,"moloch_d.dfm");
    model_name = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
              ((CDeformableModelInstance *)&this_ptr->field_0x158,"moloch_h.dfm");
    model_name = "moloch_d.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&this_ptr->field_0x1ffac,model_name);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)&this_ptr->field_0x1ffac);
  this_ptr_00 = &this_ptr->field_0x22424;
  *(uint *)&this_ptr->field_0x2304c = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)this_ptr_00,0,(CDeformableModelInstance *)&this_ptr->field_0x158);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)this_ptr_00,1,(CDeformableModelInstance *)&this_ptr->field_0x1ffac);
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr_00);
  core_hero_cpp_CHero_setup_FUN_004eaa10((CHero *)this_ptr);
  return;
}
