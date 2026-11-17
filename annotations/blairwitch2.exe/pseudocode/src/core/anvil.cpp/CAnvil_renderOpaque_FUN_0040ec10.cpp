// Name: core_anvil.cpp_CAnvil_renderOpaque_FUN_0040ec10
// Address: 0040ec10
// Address Range: [[0040ec10, 0040ecb1]]
// Convention: __cdecl
// Signature: int __cdecl core_anvil_cpp_CAnvil_renderOpaque_FUN_0040ec10(CAnvil *this_ptr)

#include "nocturne.h"

int __cdecl core_anvil_cpp_CAnvil_renderOpaque_FUN_0040ec10(CAnvil *this_ptr)

{
  int iVar1;
  uint *puVar2;
  int unaff_EDI;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [2];
  CBoundingBox3D CStack_2c;
  uint auStack_14 [4];
  
  bVar4 = 0;
  if (this_ptr->triggered == 0) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b280,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (g_CDemonRenderer_PTR_0060b280,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_14;
  puVar3 = auStack_34;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_2c,unaff_EDI);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  return iVar1;
}
