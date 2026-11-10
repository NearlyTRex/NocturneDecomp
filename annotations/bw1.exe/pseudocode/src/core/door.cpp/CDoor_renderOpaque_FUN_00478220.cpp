// Name: core_door.cpp_CDoor_renderOpaque_FUN_00478220
// Address: 00478220
// Address Range: [[00478220, 004782fb]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_00478220(CDoor *this_ptr)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_00478220(CDoor *this_ptr)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  CBoundingBox3D *in_stack_ffffff98;
  uint auStack_58 [2];
  float afStack_50 [2];
  byte auStack_48 [24];
  uint auStack_30 [2];
  CBoundingBox3D CStack_28;
  
  bVar7 = 0;
  if (2 < (int)this_ptr->one_shot) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  pfVar3 = &CStack_28.max.y;
  pfVar5 = afStack_50;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_004207b0(auStack_48);
  if (iVar2 != 0) {
    if (this_ptr->plot_as_box_in_shadow != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
      if (iVar1 != 0) {
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff98);
        puVar4 = auStack_58;
        puVar6 = auStack_30;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        core_box_cpp_FUN_00421670(&CStack_28);
        goto LAB_004782c3;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              (&this_ptr->model,0.0,-1);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    return iVar2;
  }
LAB_004782c3:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return iVar2;
}
