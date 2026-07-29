// Name: core_moloch.cpp_CMoloch_setup_FUN_004dda70
// Address: 004dda70
// Address Range: [[004dda70, 004ddb19]]
// Convention: unknown
// Signature: void core_moloch_cpp_CMoloch_setup_FUN_004dda70(CHero *param_1)

#include "nocturne.h"

void core_moloch_cpp_CMoloch_setup_FUN_004dda70(CHero *param_1)

{
  CDeformableModelInstance *pCVar1;
  CBoundingBox3D *this_ptr;
  char *model_name;
  
  pCVar1 = &(param_1->base).model;
  if (param_1[1].base.model.part_data.visibility_flags[9] == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"moloch_d.dfm");
    model_name = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(pCVar1,"moloch_h.dfm");
    model_name = "moloch_d.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(param_1 + 1),model_name);
  pCVar1 = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
            ((CDeformableModelInstance *)(param_1 + 1));
  this_ptr = &param_1[1].base.model.bounding_box;
  param_1[1].base.fires[6].offset.y = 0.0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170((CMorph *)this_ptr,0,pCVar1);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            ((CMorph *)this_ptr,1,(CDeformableModelInstance *)(param_1 + 1));
  core_morph_cpp_CMorph_getReady_FUN_004e03c0((CMorph *)this_ptr);
  core_hero_cpp_FUN_004b48d0(param_1);
  return;
}
