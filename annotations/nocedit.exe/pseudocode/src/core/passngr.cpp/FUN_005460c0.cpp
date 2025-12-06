// Name: core_passngr.cpp_FUN_005460c0
// Address: 005460c0
// Address Range: [[005460c0, 0054618d]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_005460c0()

#include "nocturne.h"

/* Signature: byte actors_npc_passenger.cpp_FUN_005460c0(uint param_1) */

int core_passngr_cpp_FUN_005460c0(void)

{
  CMorphModel *this_ptr;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  CMorphModel *pCStack_18;
  CMorphModel *pCStack_14;
  
  if ((*(float *)(in_stack_00000004[2].cloth_data + 0x5d60) <= 1.0) &&
     (*(int *)in_stack_00000004->field2_0x240c == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base_actor);
    this_ptr_00 = (*((in_stack_00000004->base_actor).vtable)->getBoundingBox)
                            (&in_stack_00000004->base_actor,(CBoundingBox3D *)&pCStack_18);
    pCStack_14 = (CMorphModel *)0x54610a;
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      if ((*(uint *)(in_stack_00000004[2].cloth_data + 0x5d60) & 0x7fffffff) != 0) {
        pCStack_14 = (CMorphModel *)0x0;
        this_ptr = (CMorphModel *)(in_stack_00000004[2].cloth_data + 0x5134);
        pCStack_18 = this_ptr;
        core_morph_cpp_FUN_0052b600();
        pCStack_18 = (CMorphModel *)0x54616a;
        pCStack_14 = this_ptr;
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_CMorphModel_FUN_0052bae0(this_ptr);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base_actor);
        return iVar1;
      }
      core_charactr_cpp_CCharacter_FUN_00429aa0(in_stack_00000004);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base_actor);
    return iVar1;
  }
  return 0;
}
