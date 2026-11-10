// Name: core_pendulum.cpp_CPendulum_renderOpaque_FUN_00515e40
// Address: 00515e40
// Address Range: [[00515e40, 00515ebe]]
// Convention: __cdecl
// Signature: int __cdecl core_pendulum_cpp_CPendulum_renderOpaque_FUN_00515e40(CPendulum *this_ptr)

#include "nocturne.h"

int __cdecl core_pendulum_cpp_CPendulum_renderOpaque_FUN_00515e40(CPendulum *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_3c;
  puVar3 = auStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_24);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(&this_ptr->model,0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return iVar1;
}
