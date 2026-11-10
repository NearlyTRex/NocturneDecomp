// Name: core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041f9f0
// Address: 0041f9f0
// Address Range: [[0041f9f0, 0041fb20]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041f9f0(CBoxActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041f9f0(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  if (0 < pCVar1->poly_count) {
    if (0.0 <= *(float *)&this_ptr->field_0x6dc) {
      fVar6 = ((float10)*(float *)&this_ptr->field_0x6dc / (float10)*(float *)&this_ptr->field_0x6e0
              ) * (float10)_DAT_005b7505;
      round();
      *(int *)&this_ptr->field_0x6e4 = (int)ROUND(fVar6);
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (0x01BDD7E4,&(this_ptr->base).location.position);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (0x01BDD7E4,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar3 = auStack_38;
    puVar4 = auStack_20;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = core_box_cpp_FUN_0041daf0(auStack_20);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (DAT_005f2afc,*(int *)&this_ptr->field_0x6e4);
    if (*(int *)&this_ptr->field_0x5fc != 0) {
      g_CDemonSetPtr->disable_directional_lighting = 1;
    }
    if (iVar2 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                (&this_ptr->model,this_ptr->anim_frame,-1);
    }
    if (*(int *)&this_ptr->field_0x5fc != 0) {
      g_CDemonSetPtr->disable_directional_lighting = 0;
    }
    engine_matrix_c_pop_FUN_0046d080();
    return iVar2;
  }
  return 0;
}
