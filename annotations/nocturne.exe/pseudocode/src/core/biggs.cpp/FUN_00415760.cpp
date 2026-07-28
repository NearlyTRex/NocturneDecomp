// Name: core_biggs.cpp_FUN_00415760
// Address: 00415760
// Address Range: [[00415760, 0041586e]]
// Convention: unknown
// Signature: int core_biggs_cpp_FUN_00415760(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_biggs_cpp_FUN_00415760(CCharacter *param_1)

{
  float *this_ptr;
  float fVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CKeyFramedModel *model_ptr;
  int iVar3;
  int part_index;
  CBoundingBox3D local_20;
  
  if (param_1->render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
  this_ptr_00 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_20);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar2 != 0) {
    fVar1 = param_1[1].model.transformed_vertices[9].x;
    param_1->was_rendered_opaque = 1;
    if (fVar1 == 0.0) {
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
    }
    else {
      this_ptr = &param_1[1].model.transformed_vertices[9].z;
      core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                ((CMorph *)this_ptr,0,&param_1->model,0);
      part_index = 0;
      iVar3 = 0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                            ((CKeyFramedModelInstance *)(param_1[1].base.create_event + 0x20));
      core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
                ((CMorph *)this_ptr,1,model_ptr,iVar3,part_index);
      core_morph_cpp_CMorph_render_FUN_004e0820
                ((CMorph *)this_ptr,param_1[1].model.transformed_vertices[9].y / 4.0f);
    }
    if (_DAT_01cd4318 != 0) {
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_render_FUN_004e22b0
                  (&(param_1->model).motion_controller,&param_1->base);
        (*((param_1->base).vtable._ub)->renderTargetPoints)(&param_1->base);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
  return iVar2;
}
