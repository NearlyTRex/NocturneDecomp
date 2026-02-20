// Name: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_005e9750
// Address: 005e9750
// Address Range: [[005e9750, 005e97b3]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005e9750(CCryptVessel *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005e9750(CCryptVessel *this_ptr)

{
  UOrientationVector *position;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_30;
  int iStack_18;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).location.position);
  position = &(this_ptr->base).orient;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&position->vec,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_30);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  this_ptr->is_visible = iVar1;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&position->vec,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  if (this_ptr->state != 3) {
    if (0.0 < (double)this_ptr->timer) {
      iStack_18 = (int)ROUND(ROUND(65535 - (double)this_ptr->timer * 65535));
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,iStack_18);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,0);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->model,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
      goto LAB_005e9875;
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&this_ptr->model,0.0,-1);
LAB_005e9875:
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return this_ptr->is_visible;
}
