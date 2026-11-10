// Name: core_fire.cpp_FUN_004a4340
// Address: 004a4340
// Address Range: [[004a4340, 004a44b0]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a4340(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_fire_cpp_FUN_004a4340(uint param_1,int param_2)

{
  CDeformableModelInstance CStack_2524;
  CKeyFramedModelInstance CStack_180;
  
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&CStack_180);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00(&CStack_2524);
  if (param_2 == 1) {
    core_fire_cpp_FUN_004a42c0(param_1,1);
    sound_sndmain_cpp_FUN_00556230("wp_bindevil.wav");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&CStack_180,"bindingstone.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&CStack_180);
    core_charactr_cpp_FUN_0042f280(0);
  }
  else if (param_2 == 2) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&CStack_180,"scarabstone.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&CStack_180);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(&CStack_180,(char *)0x5c0a94);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&CStack_180);
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0(&CStack_2524,(char *)0x5c0a9f);
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(&CStack_2524);
    sound_sndmain_cpp_FUN_00556230("wp_disease_loop.wav");
    sound_sndmain_cpp_FUN_00556230("wp_disease_munch.wav");
    core_fire_cpp_FUN_004a42f0(param_1,3);
    sound_sndmain_cpp_FUN_00556230("wp_disease.wav");
  }
  else if (param_2 == 3) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&CStack_180,"rainvial.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&CStack_180);
  }
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80(&CStack_2524,0);
  return;
}
