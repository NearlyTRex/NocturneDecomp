// Name: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_00550210
// Address: 00550210
// Address Range: [[00550210, 00550367]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_00550210(CCryptVessel *this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_00550210(CCryptVessel *this_ptr)

{
  UOrientationVector *position;
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  double dVar2;
  byte auStack_34 [28];
  int iStack_18;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->base).location.position);
  position = &(this_ptr->base).orient;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&position->vec,(CVector3f *)0x0);
  this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)(auStack_34 + 4));
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
  this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
  this_ptr->is_visible = iVar1;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(this_ptr_00);
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&position->vec,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  if ((this_ptr->state == 3) ||
     (auStack_34._0_8_ = (ulonglong)this_ptr->timer, (double)auStack_34._0_8_ <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,-1);
  }
  else {
    dVar2 = round
                      (65535 - (double)auStack_34._0_8_ * 65535);
    iStack_18 = (int)ROUND(dVar2);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
              (g_CDemonRenderer_PTR_005ae704,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
              (g_CDemonRenderer_PTR_005ae704);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return this_ptr->is_visible;
}
