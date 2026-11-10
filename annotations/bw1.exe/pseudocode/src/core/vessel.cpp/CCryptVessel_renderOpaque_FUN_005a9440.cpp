// Name: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_005a9440
// Address: 005a9440
// Address Range: [[005a9440, 005a95b2]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005a9440(CCryptVessel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005a9440(CCryptVessel *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  uint auStack_48 [6];
  uint auStack_30 [6];
  int iStack_18;
  CVector3f *pCStack_14;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&(this_ptr->base).location.position);
  pCStack_14 = (CVector3f *)&(this_ptr->base).orient;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,pCStack_14,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_30;
  puVar3 = auStack_48;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_48);
  this_ptr->is_visible = iVar1;
  engine_matrix_c_pop_FUN_004839a0();
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,pCStack_14,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  if ((this_ptr->state == 3) || (this_ptr->timer <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&this_ptr->model,0.0,-1);
  }
  else {
    fVar5 = (float10)_DAT_005f915e - (float10)this_ptr->timer * (float10)_DAT_005f915e;
    round();
    iStack_18 = (int)ROUND(fVar5);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&this_ptr->model,0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
  }
  engine_matrix_c_pop_FUN_004839a0();
  return this_ptr->is_visible;
}
