// Name: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_00585810
// Address: 00585810
// Address Range: [[00585810, 00585982]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_00585810(CCryptVessel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_vessel_cpp_CCryptVessel_renderOpaque_FUN_00585810(CCryptVessel *this_ptr)

{
  int iVar1;
  uint *puVar2;
  CVector3f *unaff_EDI;
  double *pdVar3;
  byte bVar4;
  double dVar5;
  int in_stack_ffffffb4;
  double dStack_48;
  CBoundingBox3D CStack_40;
  uint auStack_28 [5];
  UOrientationVector *pUStack_14;
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&(this_ptr->base).location.position);
  pUStack_14 = &(this_ptr->base).orient;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&pUStack_14->vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_28;
  pdVar3 = &dStack_48;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pdVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pdVar3 = (double *)((int)pdVar3 + (uint)bVar4 * -8 + 4);
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_40,in_stack_ffffffb4);
  this_ptr->is_visible = iVar1;
  engine_drender_cpp_pop_FUN_0046b4a0();
  if (this_ptr->is_visible == 0) {
    return this_ptr->is_visible;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,unaff_EDI,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  if ((this_ptr->state == 3) || (dStack_48 = (double)this_ptr->timer, dStack_48 <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&this_ptr->model,0.0,-1);
  }
  else {
    dVar5 = round(_DAT_005ede02 - dStack_48 * _DAT_005ede02);
    pUStack_14 = (UOrientationVector *)(int)ROUND(dVar5);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,(int)pUStack_14);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&this_ptr->model,0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  return this_ptr->is_visible;
}
