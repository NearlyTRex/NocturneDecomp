// Name: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_004194b0
// Address: 004194b0
// Address Range: [[004194b0, 004195a3] [004195c0, 004195cb] [004195ec, 00419607]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_004194b0(CBodyPart *this_ptr)

{
  SBodyPartModel *pSVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CVector3i *position;
  CBoundingBox3D local_20;
  SBodyPartModel *pSStack_8;
  
  if (this_ptr->render_in_background < 2) {
    g_CDemonSetPtr->disable_directional_lighting = this_ptr->dont_use_normals;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    this_ptr->is_visible = iVar2;
    if (iVar2 != 0) {
      if ((this_ptr->transparent_geometry_flag == 0) ||
         (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
         iVar2 != 0)) {
        core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00419340(this_ptr,-1);
      }
      iVar2 = 0;
      if (0 < this_ptr->attached_model_count) {
        pSStack_8 = this_ptr->attached_models;
        pSVar1 = this_ptr->attached_models;
        position = &this_ptr->attached_models[0].position;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr2,position,&pSStack_8[iVar2].scale);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    (&pSVar1->model,0.0,-1);
          iVar2 = iVar2 + 1;
          position = (CVector3i *)&position[0x21].z;
          pSVar1 = (SBodyPartModel *)(&pSVar1->model + 1);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        } while (iVar2 < this_ptr->attached_model_count);
      }
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    g_CDemonSetPtr->disable_directional_lighting = 0;
    return this_ptr->is_visible;
  }
  if ((this_ptr->is_visible != 0) && (0 < this_ptr->fire_count)) {
    return 1;
  }
  return 0;
}
