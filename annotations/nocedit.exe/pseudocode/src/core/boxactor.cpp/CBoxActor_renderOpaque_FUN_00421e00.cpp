// Name: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_00421e00
// Address: 00421e00
// Address Range: [[00421e00, 00421ebb] [00421ec8, 00421ee6]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_00421e00(CBoxActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_00421e00(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if ((pCVar1->poly_count < 1) ||
     ((iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
      iVar2 == 0 && ((this_ptr->base).is_transparent != 0)))) {
    return 0;
  }
  if ((this_ptr->plot_in_shadow_flag == 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar2 != 0)) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr1,(CVector3i *)&(this_ptr->base).orient.vec,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,(float)this_ptr->unk2,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar2;
}
