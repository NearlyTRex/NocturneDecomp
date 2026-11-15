// Name: core_trash.cpp_CTrash_renderOpaque_FUN_00577480
// Address: 00577480
// Address Range: [[00577480, 0057755a]]
// Convention: __cdecl
// Signature: int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_00577480(CTrash *this_ptr)

#include "nocturne.h"

int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_00577480(CTrash *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1010 [1000];
  CVector3f *translation;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = (uint *)&stack0xffffff9c;
  puVar3 = (uint *)&stack0xffffffb4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(&stack0xffffffb4);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return 0;
  }
  CStack_34.y = this_ptr->collision_radius;
  CStack_34.x = 0.0;
  CStack_34.z = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30
            (&this_ptr->base,&CStack_34,&CStack_28);
  translation = &CStack_1c;
  CStack_1c.x = CStack_28.x;
  *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&DAT_0265370c,translation);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(&this_ptr->model,0.0,-1);
  engine_drender_cpp_pop_FUN_0046b4a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return iVar1;
}
