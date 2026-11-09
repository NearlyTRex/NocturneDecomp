// Name: core_biggs.cpp_FUN_00414ab0
// Address: 00414ab0
// Address Range: [[00414ab0, 00414b27]]
// Convention: unknown
// Signature: void core_biggs_cpp_FUN_00414ab0(CEnemy *param_1)

#include "nocturne.h"

void core_biggs_cpp_FUN_00414ab0(CEnemy *param_1)

{
  byte *this_ptr;
  CKeyFramedModel *model_ptr;
  int frame_index;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)(param_1 + 1));
  this_ptr = &param_1[1].field_0x184;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x158);
  frame_index = 0;
  model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                        ((CKeyFramedModelInstance *)(param_1 + 1));
  core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_00523100
            ((CMorph *)this_ptr,1,model_ptr,frame_index);
  core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr);
  *(uint *)&param_1[1].field_0x17c = 0;
  *(uint *)&param_1[1].field_0x180 = 0;
  return;
}
