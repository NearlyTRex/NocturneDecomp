// Name: core_bodypart.cpp_FUN_004161a0
// Address: 004161a0
// Address Range: [[004161a0, 004162f7]]
// Convention: unknown
// Signature: int core_bodypart_cpp_FUN_004161a0(CBodyPart *param_1)

#include "nocturne.h"

int core_bodypart_cpp_FUN_004161a0(CBodyPart *param_1)

{
  SBodyPartModel *pSVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  CVector3f *position;
  CBoundingBox3D local_20;
  SBodyPartModel *pSStack_8;
  
  if (param_1->render_in_background < 2) {
    *(int *)(0x01E57284 + 0x15a8a0) = param_1->dont_use_normals;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    this_ptr = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_20);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
    param_1->is_visible = iVar2;
    if (iVar2 != 0) {
      if ((param_1->transparent_geometry_flag == 0) ||
         (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
         iVar2 != 0)) {
        core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(param_1,-1);
      }
      iVar2 = 0;
      if (0 < param_1->attached_model_count) {
        pSStack_8 = param_1->attached_models;
        pSVar1 = param_1->attached_models;
        position = &param_1->attached_models[0].position;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,position,&pSStack_8[iVar2].scale);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                    (&pSVar1->model,0.0,-1);
          iVar2 = iVar2 + 1;
          position = (CVector3f *)&position[0x21].z;
          pSVar1 = (SBodyPartModel *)(&pSVar1->model + 1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
        } while (iVar2 < param_1->attached_model_count);
      }
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    *(uint *)(0x01E57284 + 0x15a8a0) = 0;
    return param_1->is_visible;
  }
  if ((param_1->is_visible != 0) && (0 < param_1->fire_count)) {
    return 1;
  }
  return 0;
}
