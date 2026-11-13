// Name: core_fire.cpp_CFireEffect_preloadTossAssets_FUN_004a4340
// Address: 004a4340
// Address Range: [[004a4340, 004a44b0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_preloadTossAssets_FUN_004a4340(CFireEffect *this_ptr,int toss_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_preloadTossAssets_FUN_004a4340(CFireEffect *this_ptr,int toss_type)

{
  CKeyFramedModelInstance CStack_180;
  
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&CStack_180);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00
            ((CDeformableModelInstance *)&stack0xffffdadc);
  if (toss_type == 1) {
    core_fire_cpp_CFireEffect_preloadRingAssets_FUN_004a42c0(this_ptr,1);
    sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_bindevil.wav");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              ((CKeyFramedModelInstance *)(CStack_180.part_visibility_flags + 2),
               "bindingstone.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)(CStack_180.part_visibility_flags + 2));
    core_charactr_cpp_FUN_0042f280();
  }
  else if (toss_type == 2) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&CStack_180,"scarabstone.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&CStack_180);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(&CStack_180,(char *)0x5c0a94);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&CStack_180);
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
              ((CDeformableModelInstance *)&stack0xffffdadc,(char *)0x5c0a9f);
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
              ((CDeformableModelInstance *)&stack0xffffdadc);
    sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_disease_loop.wav");
    sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_disease_munch.wav");
    core_fire_cpp_CFireEffect_preloadExplosionStyle_FUN_004a42f0(this_ptr,3);
    sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_disease.wav");
  }
  else if (toss_type == 3) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (&CStack_180,"rainvial.kfm");
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&CStack_180);
  }
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
            ((CDeformableModelInstance *)&stack0xffffdadc,0);
  return;
}
