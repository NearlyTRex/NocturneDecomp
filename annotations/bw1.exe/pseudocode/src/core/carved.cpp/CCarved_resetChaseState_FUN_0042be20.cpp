// Name: core_carved.cpp_CCarved_resetChaseState_FUN_0042be20
// Address: 0042be20
// Address Range: [[0042be20, 0042bf4b]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_resetChaseState_FUN_0042be20(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_carved_cpp_CCarved_resetChaseState_FUN_0042be20(CCarved *this_ptr)

{
  CCharacter *pCVar1;
  int iVar2;
  int iVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (this_ptr->always_chase_fast == 0) {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 == (CCharacter *)0x0) {
      iVar3 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar2 + 3,iVar3);
      return;
    }
    local_38 = (pCVar1->base).location.position.x - (this_ptr->base).base.base.location.position.x;
    local_34 = (pCVar1->base).location.position.y - (this_ptr->base).base.base.location.position.y;
    local_30 = (pCVar1->base).location.position.z - (this_ptr->base).base.base.location.position.z;
    if (&local_2c != &local_38) {
      local_2c = local_38;
      local_28 = local_34;
      local_24 = local_30;
    }
    local_20 = local_38;
    local_1c = local_34;
    local_18 = local_30;
    if ((_DAT_005fd46c <= SQRT(local_24 * local_24 + local_2c * local_2c + local_28 * local_28)) ||
       (iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3), iVar2 != 1)) {
      iVar2 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
      iVar3 = iVar3 + 7;
    }
    else {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
      iVar3 = iVar3 + 3;
    }
  }
  else {
    iVar2 = 1;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
    iVar3 = iVar3 + 7;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,iVar3,iVar2);
  return;
}
