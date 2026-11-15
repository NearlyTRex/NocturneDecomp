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
  double dVar5;
  CBoundingBox3D *this_ptr_00;
  int in_stack_ffffffc4;
  CBoundingBox3D CStack_38;
  uint auStack_20 [5];
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  this_ptr_00 = &CStack_38;
  puVar2 = auStack_20;
  puVar3 = (uint *)&stack0xffffffc0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(this_ptr_00,in_stack_ffffffc4);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    return 0;
  }
  dVar5 = round((double)this_ptr->anim_frame);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            (&this_ptr->model,(float)(int)ROUND(dVar5),-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
  return iVar1;
}
