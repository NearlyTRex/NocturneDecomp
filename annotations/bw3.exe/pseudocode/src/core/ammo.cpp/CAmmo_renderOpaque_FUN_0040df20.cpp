// Name: core_ammo.cpp_CAmmo_renderOpaque_FUN_0040df20
// Address: 0040df20
// Address Range: [[0040df20, 0040dfbd]]
// Convention: __cdecl
// Signature: int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_0040df20(CAmmo *this_ptr)

#include "nocturne.h"

int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_0040df20(CAmmo *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  uint auStack_40 [6];
  uint auStack_28 [6];
  int iStack_10;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_28;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_40);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    return 0;
  }
  fVar5 = (float10)this_ptr->anim_frame;
  round();
  iStack_10 = (int)ROUND(fVar5);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            (&this_ptr->model,(float)iStack_10,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
  return iVar1;
}
