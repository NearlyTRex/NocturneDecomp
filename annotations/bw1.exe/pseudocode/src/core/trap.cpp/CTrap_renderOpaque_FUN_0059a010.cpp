// Name: core_trap.cpp_CTrap_renderOpaque_FUN_0059a010
// Address: 0059a010
// Address Range: [[0059a010, 0059a0b6]]
// Convention: __cdecl
// Signature: int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_0059a010(CTrap *this_ptr)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_renderOpaque_FUN_0059a010(CTrap *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float animation_frame;
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_28;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_40);
  if (iVar1 != 0) {
    if (this_ptr->wolf_in_trap == (CWerewolf *)0x0) {
      animation_frame = 0.0;
    }
    else {
      animation_frame = 3.0;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&this_ptr->model,animation_frame,-1);
  }
  engine_matrix_c_pop_FUN_004839a0();
  return iVar1;
}
