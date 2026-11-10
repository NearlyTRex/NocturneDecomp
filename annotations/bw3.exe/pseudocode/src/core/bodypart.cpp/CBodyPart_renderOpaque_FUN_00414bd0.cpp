// Name: core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00414bd0
// Address: 00414bd0
// Address Range: [[00414bd0, 00414d37]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_00414bd0(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_renderOpaque_FUN_00414bd0(CBodyPart *this_ptr)

{
  SBodyPartModel *pSVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  CVector3f *euler_angles;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  SBodyPartModel *pSStack_8;
  
  bVar5 = 0;
  if (this_ptr->render_in_background < 2) {
    g_CDemonSetPtr->disable_directional_lighting = this_ptr->dont_use_normals;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar3 = auStack_38;
    puVar4 = auStack_20;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = core_box_cpp_FUN_0041daf0(auStack_20);
    this_ptr->is_visible = iVar2;
    if (iVar2 != 0) {
      if ((this_ptr->transparent_geometry_flag == 0) ||
         (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc),
         iVar2 != 0)) {
        core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00414a60(this_ptr,-1);
      }
      iVar2 = 0;
      if (0 < this_ptr->attached_model_count) {
        pSStack_8 = this_ptr->attached_models;
        pSVar1 = this_ptr->attached_models;
        euler_angles = (CVector3f *)&this_ptr->attached_models[0].field_0xc;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                    (DAT_005f2afc,euler_angles,(CVector3f *)(pSStack_8 + iVar2));
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                    ((CKeyFramedModelInstance *)&pSVar1->field_0x18,0.0,-1);
          iVar2 = iVar2 + 1;
          euler_angles = (CVector3f *)&euler_angles[0x21].z;
          pSVar1 = (SBodyPartModel *)(&pSVar1->field_0x18 + 0x17c);
          engine_matrix_c_pop_FUN_0046d080();
        } while (iVar2 < this_ptr->attached_model_count);
      }
    }
    engine_matrix_c_pop_FUN_0046d080();
    g_CDemonSetPtr->disable_directional_lighting = 0;
    return this_ptr->is_visible;
  }
  if ((this_ptr->is_visible != 0) && (0 < this_ptr->fire_count)) {
    return 1;
  }
  return 0;
}
