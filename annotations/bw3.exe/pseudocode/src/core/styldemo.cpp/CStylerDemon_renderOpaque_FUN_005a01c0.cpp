// Name: core_styldemo.cpp_CStylerDemon_renderOpaque_FUN_005a01c0
// Address: 005a01c0
// Address Range: [[005a01c0, 005a02a1]]
// Convention: __cdecl
// Signature: int __cdecl core_styldemo_cpp_CStylerDemon_renderOpaque_FUN_005a01c0(CStylerDemon *this_ptr)

#include "nocturne.h"

int __cdecl core_styldemo_cpp_CStylerDemon_renderOpaque_FUN_005a01c0(CStylerDemon *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((*(float *)&this_ptr->field_0xdc98 <= 1.0) && (*(int *)&this_ptr->field_0x24fc == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
    if (iVar1 != 0) {
      if ((*(uint *)&this_ptr->field_0xdc98 & 0x7fffffff) != 0) {
        this_ptr_00 = &this_ptr->field_0xd064;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90
                  ((CMorph *)this_ptr_00,0,(CDeformableModelInstance *)&this_ptr->field_0x158,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90
                  ((CMorph *)this_ptr_00,1,
                   (CDeformableModelInstance *)(*(int *)&this_ptr->field_0xd060 + 0x158),0);
        core_morph_cpp_CMorph_render_FUN_004fb0e0
                  ((CMorph *)this_ptr_00,*(float *)&this_ptr->field_0xdc98);
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
