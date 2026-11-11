// Name: core_pryemorp.cpp_CPryeMorph_renderOpaque_FUN_00527970
// Address: 00527970
// Address Range: [[00527970, 00527a51]]
// Convention: __cdecl
// Signature: int __cdecl core_pryemorp_cpp_CPryeMorph_renderOpaque_FUN_00527970(CPryeMorph *this_ptr)

#include "nocturne.h"

int __cdecl core_pryemorp_cpp_CPryeMorph_renderOpaque_FUN_00527970(CPryeMorph *this_ptr)

{
  CMorph *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((this_ptr->morph_time <= 1.0) && ((this_ptr->base).base.render_active == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
    if (iVar1 != 0) {
      if (ABS(this_ptr->morph_time) != 0.0) {
        this_ptr_00 = &this_ptr->morph;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90
                  (this_ptr_00,0,&(this_ptr->base).base.model,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90
                  (this_ptr_00,1,(CDeformableModelInstance *)(this_ptr->target_actor + 1),0);
        core_morph_cpp_CMorph_render_FUN_004fb0e0(this_ptr_00,this_ptr->morph_time);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
        return iVar1;
      }
      core_charactr_cpp_FUN_0042d8e0(this_ptr);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
