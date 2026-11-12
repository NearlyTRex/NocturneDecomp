// Name: core_goggles.cpp_CGoggles_renderOpaque_FUN_0059c100
// Address: 0059c100
// Address Range: [[0059c100, 0059c193]]
// Convention: __cdecl
// Signature: int __cdecl core_goggles_cpp_CGoggles_renderOpaque_FUN_0059c100(CGoggles *this_ptr)

#include "nocturne.h"

int __cdecl core_goggles_cpp_CGoggles_renderOpaque_FUN_0059c100(CGoggles *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_24;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_3c);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  return iVar1;
}
