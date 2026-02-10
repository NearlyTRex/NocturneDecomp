// Name: core_gasmask.cpp_CGasMask_renderOpaque_FUN_004e5da0
// Address: 004e5da0
// Address Range: [[004e5da0, 004e5dfb] [004e5e07, 004e5e1b]]
// Convention: __cdecl
// Signature: int __cdecl core_gasmask_cpp_CGasMask_renderOpaque_FUN_004e5da0(CGasMask *this_ptr)

#include "nocturne.h"

int __cdecl core_gasmask_cpp_CGasMask_renderOpaque_FUN_004e5da0(CGasMask *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&(this_ptr->base).orient.vec,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}
