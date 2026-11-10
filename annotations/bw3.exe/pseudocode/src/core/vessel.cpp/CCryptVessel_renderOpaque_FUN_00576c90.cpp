// Name: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_00576c90
// Address: 00576c90
// Address Range: [[00576c90, 00576e02]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_00576c90(CCryptVessel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_00576c90(CCryptVessel *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&(this_ptr->base).location.position);
  pCStack_14 = (CVector3f *)&(this_ptr->base).orient;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,pCStack_14,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_30;
  puVar3 = auStack_48;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_48);
  this_ptr->is_visible = iVar1;
  engine_matrix_c_pop_FUN_0046d080();
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,pCStack_14,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  if ((this_ptr->state == 3) || (this_ptr->timer <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
              (&this_ptr->model,0.0,-1);
  }
  else {
    fVar5 = (float10)_DAT_005d70c7 - (float10)this_ptr->timer * (float10)_DAT_005d70c7;
    round();
    iStack_18 = (int)ROUND(fVar5);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
              (&this_ptr->model,0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
  }
  engine_matrix_c_pop_FUN_0046d080();
  return this_ptr->is_visible;
}
