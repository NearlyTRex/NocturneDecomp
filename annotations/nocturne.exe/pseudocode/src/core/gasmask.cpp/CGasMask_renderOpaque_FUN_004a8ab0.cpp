// Name: core_gasmask.cpp_CGasMask_renderOpaque_FUN_004a8ab0
// Address: 004a8ab0
// Address Range: [[004a8ab0, 004a8b2f]]
// Convention: __cdecl
// Signature: int __cdecl core_gasmask_cpp_CGasMask_renderOpaque_FUN_004a8ab0(CGasMask *this_ptr)

#include "nocturne.h"

int __cdecl core_gasmask_cpp_CGasMask_renderOpaque_FUN_004a8ab0(CGasMask *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_20;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_20);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return iVar1;
}
