// Name: core_flamecan.cpp_CFlameCan_renderOpaque_FUN_004cb4c0
// Address: 004cb4c0
// Address Range: [[004cb4c0, 004cb521] [004cb52d, 004cb541]]
// Convention: __cdecl
// Signature: int __cdecl core_flamecan_cpp_CFlameCan_renderOpaque_FUN_004cb4c0(CFlameCan *this_ptr)

#include "nocturne.h"

int __cdecl core_flamecan_cpp_CFlameCan_renderOpaque_FUN_004cb4c0(CFlameCan *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D CStack_20;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&(this_ptr->base).orient.vec,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_20);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  this_ptr->unk = iVar1;
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}
