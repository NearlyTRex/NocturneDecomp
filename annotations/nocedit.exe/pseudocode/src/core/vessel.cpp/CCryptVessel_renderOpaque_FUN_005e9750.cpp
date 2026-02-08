// Name: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_005e9750
// Address: 005e9750
// Address Range: [[005e9750, 005e97b3]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005e9750(CCryptVessel *this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005e9750(CCryptVessel *this_ptr)

{
  COrientation *position;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  double dVar2;
  double local_30 [3];
  int iStack_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).location.position);
  position = &(this_ptr->base).orient;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)position,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)local_30);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  this_ptr->unk6 = iVar1;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  if (this_ptr->unk6 == 0) {
    return this_ptr->unk6;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)position,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  if ((this_ptr->state == 3) || (local_30[0] = (double)this_ptr->timer, local_30[0] <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
  else {
    dVar2 = round(65535 - local_30[0] * 65535);
    iStack_14 = (int)ROUND(dVar2);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,iStack_14);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return this_ptr->unk6;
}
