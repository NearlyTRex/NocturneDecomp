// Name: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040f3f0
// Address: 0040f3f0
// Address Range: [[0040f3f0, 0040f47d]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040f3f0(CBackgroundActor *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040f3f0(CBackgroundActor *this_ptr,int layer_flag)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int in_stack_ffffffc8;
  CBoundingBox3D CStack_30;
  uint auStack_18 [4];
  
  bVar4 = 0;
  if ((layer_flag != 0) &&
     ((this_ptr->cast_shadows_flag != 0 ||
      (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                         (g_CDemonRenderer_PTR_0060b280), iVar1 == 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar2 = auStack_18;
    puVar3 = (uint *)&stack0xffffffc8;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_30,in_stack_ffffffc8);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                (&this_ptr->model,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  }
  return;
}
