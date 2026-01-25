// Name: core_mimic.cpp_FUN_005208b0
// Address: 005208b0
// Address Range: [[005208b0, 0052092d]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_005208b0()

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_FUN_005208b0(uint param_1, uint param_2)
    */

void core_mimic_cpp_FUN_005208b0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000004[0x8d].create_event + 0x38) != 0) {
    if (in_stack_00000008 != 0) {
      in_stack_00000004[0x1a].field21_0x11c = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe4);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                ((CDeformableModelInstance *)(in_stack_00000004 + 1),-1,0xffffffff,1,0);
      core_cloth_cpp_FUN_0043bae0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  }
  return;
}
