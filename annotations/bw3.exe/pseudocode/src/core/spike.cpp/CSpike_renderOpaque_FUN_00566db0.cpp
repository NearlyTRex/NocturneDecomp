// Name: core_spike.cpp_CSpike_renderOpaque_FUN_00566db0
// Address: 00566db0
// Address Range: [[00566db0, 00566e2e]]
// Convention: __cdecl
// Signature: int __cdecl core_spike_cpp_CSpike_renderOpaque_FUN_00566db0(CSpike *this_ptr)

#include "nocturne.h"

int __cdecl core_spike_cpp_CSpike_renderOpaque_FUN_00566db0(CSpike *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = auStack_3c;
  puVar3 = auStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_24);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(&this_ptr->model,0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
  return iVar1;
}
