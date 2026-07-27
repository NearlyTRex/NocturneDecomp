// Name: core_moloch.cpp_CMoloch_setup_FUN_004dda70
// Address: 004dda70
// Address Range: [[004dda70, 004ddb19]]
// Convention: unknown
// Signature: void core_moloch_cpp_CMoloch_setup_FUN_004dda70(int param_1)

#include "nocturne.h"

void core_moloch_cpp_CMoloch_setup_FUN_004dda70(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x21cf0) == 0) {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
              (param_1 + 0x150,"moloch_d.dfm");
    pcVar2 = "moloch_h.dfm";
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
              (param_1 + 0x150,"moloch_h.dfm");
    pcVar2 = "moloch_d.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(param_1 + 0x1fa3c,pcVar2);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x150);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(param_1 + 0x1fa3c);
  iVar1 = param_1 + 0x21dc4;
  *(uint *)(param_1 + 0x229ec) = 0;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(iVar1,0,param_1 + 0x150);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(iVar1,1,param_1 + 0x1fa3c);
  core_morph_cpp_CMorph_getReady_FUN_004e03c0(iVar1);
  core_hero_cpp_FUN_004b48d0(param_1);
  return;
}
