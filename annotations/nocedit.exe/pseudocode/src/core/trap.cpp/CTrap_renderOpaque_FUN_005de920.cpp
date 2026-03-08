// Name: core_trap.cpp_CTrap_renderOpaque_FUN_005de920
// Address: 005de920
// Address Range: [[005de920, 005de99d] [005de9ab, 005de9b0]]
// Convention: __cdecl
// Signature: int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_005de920(CTrap *this_ptr)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_005de920(CTrap *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float animation_frame;
  CBoundingBox3D CStack_28;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&(this_ptr->base).orient.vec,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_28);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    if (this_ptr->wolf_in_trap == (CWerewolf *)0x0) {
      animation_frame = 0.0;
    }
    else {
      animation_frame = 3.0;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,animation_frame,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}
