// Name: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041ea00
// Address: 0041ea00
// Address Range: [[0041ea00, 0041eaec]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041ea00(CBoxActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041ea00(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D local_20;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  if ((pCVar1->poly_count < 1) ||
     ((iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                         (g_CDemonRenderer_PTR_005ae704), iVar2 == 0 &&
      ((this_ptr->base).is_transparent != 0)))) {
    return 0;
  }
  if ((this_ptr->plot_in_shadow_flag == 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                        (g_CDemonRenderer_PTR_005ae704), iVar2 != 0)) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            ((CDemonRenderer *)PTR_DAT_005ae700,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            ((CDemonRenderer *)PTR_DAT_005ae700,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,this_ptr->anim_frame,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0((CDemonRenderer *)PTR_DAT_005ae700);
  return iVar2;
}
