// Name: core_crate.cpp_CCrate_renderOpaque_FUN_00445fa0
// Address: 00445fa0
// Address Range: [[00445fa0, 0044601f] [00446021, 00446035]]
// Convention: __cdecl
// Signature: int __cdecl core_crate_cpp_CCrate_renderOpaque_FUN_00445fa0(CCrate *this_ptr)

#include "nocturne.h"

int __cdecl core_crate_cpp_CCrate_renderOpaque_FUN_00445fa0(CCrate *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CBoundingBox3D *this_ptr_00;
  int in_stack_ffffffc8;
  CBoundingBox3D CStack_34;
  uint auStack_1c [4];
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  this_ptr_00 = &CStack_34;
  puVar2 = auStack_1c;
  puVar3 = (uint *)&stack0xffffffc4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(this_ptr_00,in_stack_ffffffc8);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_0046d080();
  return iVar1;
}
