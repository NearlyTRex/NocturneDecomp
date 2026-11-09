// Name: core_moloch.cpp_FUN_00520430
// Address: 00520430
// Address Range: [[00520430, 005204d9]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_00520430(CHero *param_1)

#include "nocturne.h"

void core_moloch_cpp_FUN_00520430(CHero *param_1)

{
  CMorph *this_ptr;
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x22350) == 0) {
    core_skeleton_cpp_FUN_00569f50(param_1 + 0x158,"moloch_d.dfm");
    pcVar1 = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_FUN_00569f50(param_1 + 0x158,"moloch_h.dfm");
    pcVar1 = "moloch_d.dfm";
  }
  core_skeleton_cpp_FUN_00569f50(param_1 + 0x1ffac,pcVar1);
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)(param_1 + 0x158));
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)(param_1 + 0x1ffac));
  this_ptr = (CMorph *)(param_1 + 0x22424);
  *(uint *)(param_1 + 0x2304c) = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            (this_ptr,0,(CDeformableModelInstance *)(param_1 + 0x158));
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            (this_ptr,1,(CDeformableModelInstance *)(param_1 + 0x1ffac));
  core_morph_cpp_CMorph_getReady_FUN_00523310(this_ptr);
  core_hero_cpp_FUN_004eaa10(param_1);
  return;
}
