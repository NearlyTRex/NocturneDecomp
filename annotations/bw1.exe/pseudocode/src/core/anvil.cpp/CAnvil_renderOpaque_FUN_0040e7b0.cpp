// Name: core_anvil.cpp_CAnvil_renderOpaque_FUN_0040e7b0
// Address: 0040e7b0
// Address Range: [[0040e7b0, 0040e851]]
// Convention: __cdecl
// Signature: int __cdecl core_anvil_cpp_CAnvil_renderOpaque_FUN_0040e7b0(CAnvil *this_ptr)

#include "nocturne.h"

int __cdecl core_anvil_cpp_CAnvil_renderOpaque_FUN_0040e7b0(CAnvil *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (this_ptr->triggered == 0) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_1c;
  puVar3 = auStack_34;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_34);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_004839a0();
  return iVar1;
}
