// Name: core_mimic.cpp_CMimic_renderBackground_FUN_00510910
// Address: 00510910
// Address Range: [[00510910, 005109ab]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_00510910(CMimic *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_00510910(CMimic *this_ptr,int layer_flag)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((this_ptr->base).pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).base.render_active = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_1c);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                (&(this_ptr->base).base.model,-1,0xffffffff,1,0);
      core_cloth_cpp_CCloth_render_FUN_00441800(&this_ptr->cloth,(CDeformableModelInstance *)0x0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  }
  return;
}
