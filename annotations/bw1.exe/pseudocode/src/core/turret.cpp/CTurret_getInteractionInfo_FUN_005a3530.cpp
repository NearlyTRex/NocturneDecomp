// Name: core_turret.cpp_CTurret_getInteractionInfo_FUN_005a3530
// Address: 005a3530
// Address Range: [[005a3530, 005a3598]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_getInteractionInfo_FUN_005a3530(CTurret *this_ptr,SInteractionInfo *interaction_info)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_getInteractionInfo_FUN_005a3530(CTurret *this_ptr,SInteractionInfo *interaction_info)

{
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_00409d20
            ((CDemonActor *)this_ptr,interaction_info);
  if (this_ptr->can_manual_aim == 0) {
    return;
  }
  *(uint *)interaction_info = 1;
  pCVar2 = this_ptr->user;
  *(uint *)(interaction_info + 0x10) = 0x40c90fdb;
  *(uint *)(interaction_info + 0x14) = 0xc0c90fdb;
  *(CDemonActor **)(interaction_info + 4) = pCVar2;
  fVar3 = 0xBF060A92;
  *(float *)(interaction_info + 0x18) = 0x3F9C61AA - (this_ptr->base).base.orient.vec.x;
  fVar1 = (this_ptr->base).base.orient.vec.x;
  *(uint *)(interaction_info + 8) = 0xc0800000;
  *(float *)(interaction_info + 0x1c) = fVar3 - fVar1;
  *(uint *)(interaction_info + 0xc) = 0;
  return;
}
