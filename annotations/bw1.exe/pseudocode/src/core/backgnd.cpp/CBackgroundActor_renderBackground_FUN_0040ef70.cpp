// Name: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ef70
// Address: 0040ef70
// Address Range: [[0040ef70, 0040effd]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ef70(CBackgroundActor *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ef70(CBackgroundActor *this_ptr,int layer_flag)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  if ((layer_flag != 0) &&
     ((*(int *)&this_ptr->field_0x158 != 0 ||
      (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar1 == 0
      )))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar2 = auStack_20;
    puVar3 = auStack_38;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_38);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                (&this_ptr->model,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  }
  return;
}
