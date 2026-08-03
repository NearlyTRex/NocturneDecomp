// Name: core_trap.cpp_CTrap_renderOpaque_FUN_00546ab0
// Address: 00546ab0
// Address Range: [[00546ab0, 00546b44]]
// Convention: __cdecl
// Signature: int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_00546ab0(CTrap *this_ptr)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_00546ab0(CTrap *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float animation_frame;
  CBoundingBox3D local_28;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_28);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 != 0) {
    if (this_ptr->wolf_in_trap == (CWerewolf *)0x0) {
      animation_frame = 0.0;
    }
    else {
      animation_frame = 3.0;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,animation_frame,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return iVar1;
}
