// Name: core_passngr.cpp_FUN_005460c0
// Address: 005460c0
// Address Range: [[005460c0, 0054618d]]
// Convention: __cdecl
// Signature: int __cdecl core_passngr_cpp_FUN_005460c0(void)

#include "nocturne.h"

/* Signature: byte actors_npc_passenger.cpp_FUN_005460c0(uint param_1) */

int __cdecl core_passngr_cpp_FUN_005460c0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CCharacter *in_stack_00000004;
  CBoundingBox3D local_1c;
  
  if ((*(float *)(in_stack_00000004[2].cloth_data + 0x5d60) <= 1.0) &&
     (*(int *)in_stack_00000004->unk1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base);
    this_ptr = (*((in_stack_00000004->base).vtable._ub)->getBoundingBox)
                         (&in_stack_00000004->base,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iVar1 != 0) {
      if ((*(uint *)(in_stack_00000004[2].cloth_data + 0x5d60) & 0x7fffffff) != 0) {
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_CMorphModel_FUN_0052bae0
                  ((CMorphModel *)(in_stack_00000004[2].cloth_data + 0x5134));
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base);
        return iVar1;
      }
      core_charactr_cpp_CCharacter_FUN_00429aa0(in_stack_00000004);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base);
    return iVar1;
  }
  return 0;
}
