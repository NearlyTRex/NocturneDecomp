// Name: core_moloch.cpp_FUN_00501480
// Address: 00501480
// Address Range: [[00501480, 00501529]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_00501480(CHero *param_1)

#include "nocturne.h"

void core_moloch_cpp_FUN_00501480(CHero *param_1)

{
  CMorph *this_ptr;
  char *model_name;
  
  if (*(int *)(param_1 + 0x278f4) == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
              ((CDeformableModelInstance *)(param_1 + 0x2b4),"moloch_d.dfm");
    model_name = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
              ((CDeformableModelInstance *)(param_1 + 0x2b4),"moloch_h.dfm");
    model_name = "moloch_d.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(param_1 + 0x25640),model_name);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)(param_1 + 0x2b4));
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)(param_1 + 0x25640));
  this_ptr = (CMorph *)(param_1 + 0x279c8);
  *(uint *)(param_1 + 0x285f0) = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            (this_ptr,0,(CDeformableModelInstance *)(param_1 + 0x2b4));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            (this_ptr,1,(CDeformableModelInstance *)(param_1 + 0x25640));
  core_morph_cpp_CMorph_getReady_FUN_005b71d0(this_ptr);
  core_hero_cpp_FUN_004ce4a0(param_1);
  return;
}
