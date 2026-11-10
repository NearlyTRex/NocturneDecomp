// Name: core_trash.cpp_CTrash_renderOpaque_FUN_0059ad40
// Address: 0059ad40
// Address Range: [[0059ad40, 0059ae1a]]
// Convention: __cdecl
// Signature: int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_0059ad40(CTrash *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_trash_cpp_CTrash_renderOpaque_FUN_0059ad40(CTrash *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1010 [1000];
  CVector3f *translation;
  uint auStack_4c [6];
  uint uStack_34;
  float fStack_30;
  uint uStack_2c;
  float fStack_28;
  float afStack_24 [2];
  CVector3f CStack_1c;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = (uint *)&stack0xffffff9c;
  puVar3 = auStack_4c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_4c);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    return 0;
  }
  fStack_30 = this_ptr->collision_radius;
  uStack_34 = 0;
  uStack_2c = 0;
  core_actor_cpp_FUN_00408b00(this_ptr,&uStack_34);
  translation = &CStack_1c;
  CStack_1c.x = fStack_28;
  *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)afStack_24 + (uint)bVar4 * 0xfffffff8);
  *(float *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_24[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&DAT_02c8af28,translation);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(&this_ptr->model,0.0,-1);
  engine_matrix_c_pop_FUN_004839a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return iVar1;
}
