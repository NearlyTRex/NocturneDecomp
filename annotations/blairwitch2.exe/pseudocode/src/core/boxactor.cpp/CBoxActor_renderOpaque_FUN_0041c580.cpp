// Name: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041c580
// Address: 0041c580
// Address Range: [[0041c580, 0041c680]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041c580(CBoxActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041c580(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  int unaff_EDI;
  uint *puVar4;
  byte bVar5;
  uint auStack_30 [4];
  uint local_20 [6];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  if ((pCVar1->poly_count < 1) ||
     ((iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                         (g_CDemonRenderer_PTR_0060b280), iVar2 == 0 &&
      ((this_ptr->base).is_transparent != 0)))) {
    return 0;
  }
  if ((this_ptr->plot_in_shadow_flag == 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                        (g_CDemonRenderer_PTR_0060b280), iVar2 != 0)) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b27c,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (g_CDemonRenderer_PTR_0060b27c,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = auStack_30;
  puVar4 = local_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840
                    ((CBoundingBox3D *)(local_20 + 2),unaff_EDI);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&this_ptr->model,this_ptr->anim_frame,-1);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  return iVar2;
}
