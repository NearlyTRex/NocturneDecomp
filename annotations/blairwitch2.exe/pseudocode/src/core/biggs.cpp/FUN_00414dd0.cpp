// Name: core_biggs.cpp_FUN_00414dd0
// Address: 00414dd0
// Address Range: [[00414dd0, 00414e47]]
// Convention: unknown
// Signature: void core_biggs_cpp_FUN_00414dd0(CEnemy *param_1)

#include "nocturne.h"

void core_biggs_cpp_FUN_00414dd0(CEnemy *param_1)

{
  byte *this_ptr;
  CKeyFramedModel *model_ptr;
  int frame_index;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  this_ptr = &param_1[1].field_0x184;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x2b4);
  frame_index = 0;
  model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                        ((CKeyFramedModelInstance *)(param_1 + 1));
  core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0
            ((CMorph *)this_ptr,1,model_ptr,frame_index);
  core_morph_cpp_CMorph_getReady_FUN_005b71d0((CMorph *)this_ptr);
  *(uint *)&param_1[1].field_0x17c = 0;
  *(uint *)&param_1[1].field_0x180 = 0;
  return;
}
