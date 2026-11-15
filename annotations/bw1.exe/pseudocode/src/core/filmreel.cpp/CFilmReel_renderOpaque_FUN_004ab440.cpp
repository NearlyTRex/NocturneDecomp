// Name: core_filmreel.cpp_CFilmReel_renderOpaque_FUN_004ab440
// Address: 004ab440
// Address Range: [[004ab440, 004ab4bf] [004ab4c1, 004ab4d5]]
// Convention: __cdecl
// Signature: int __cdecl core_filmreel_cpp_CFilmReel_renderOpaque_FUN_004ab440(CFilmReel *this_ptr)

#include "nocturne.h"

int __cdecl core_filmreel_cpp_CFilmReel_renderOpaque_FUN_004ab440(CFilmReel *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  this_ptr_00 = &CStack_34;
  puVar2 = auStack_1c;
  puVar3 = (uint *)&stack0xffffffc4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004207b0(this_ptr_00,in_stack_ffffffc8);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_004839a0();
  return iVar1;
}
