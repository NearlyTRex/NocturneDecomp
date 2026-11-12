// Name: core_bwgrndma.cpp_CGrandma_setup_FUN_005a7be0
// Address: 005a7be0
// Address Range: [[005a7be0, 005a7c11]]
// Convention: __cdecl
// Signature: void __cdecl core_bwgrndma_cpp_CGrandma_setup_FUN_005a7be0(CGrandma *this_ptr)

#include "nocturne.h"

void __cdecl core_bwgrndma_cpp_CGrandma_setup_FUN_005a7be0(CGrandma *this_ptr)

{
  int iVar1;
  
  core_basicnpc_cpp_CBasicNPC_setup_FUN_005a4870(&this_ptr->base);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    ((this_ptr->base).base.skeleton,"Bip01 R Hand",1);
  this_ptr->hand_bone = iVar1;
  (this_ptr->base).base.base.base.carry_hands[0].bone_index = iVar1;
  return;
}
