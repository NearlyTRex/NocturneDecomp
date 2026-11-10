// Name: core_marquee.cpp_CMarquee_renderOpaque_FUN_00506c10
// Address: 00506c10
// Address Range: [[00506c10, 00506c8d]]
// Convention: __cdecl
// Signature: int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_00506c10(CMarquee *this_ptr)

#include "nocturne.h"

int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_00506c10(CMarquee *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_1c;
  puVar3 = auStack_34;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_34);
  this_ptr->is_visible = iVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return this_ptr->is_visible;
}
