// Name: core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
// Address: 0042f240
// Address Range: [[0042f240, 0042f31f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_38 [6];
  uint local_20 [6];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iVar1 == 0) {
    this_ptr->was_rendered_opaque = 0;
  }
  if (this_ptr->render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar3 = local_38;
    puVar4 = local_20;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(local_20);
    if (iVar1 != 0) {
      this_ptr->was_rendered_opaque = 1;
      core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(this_ptr);
      if (_DAT_01d39d34 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
        if (iVar2 == 0) {
          core_motion_cpp_FUN_005254b0(&(this_ptr->model).base,&this_ptr->base);
          (*((this_ptr->base).vtable._ub)->renderTargetPoints)(&this_ptr->base);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    return iVar1;
  }
  return 0;
}
