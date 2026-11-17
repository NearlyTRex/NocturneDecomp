// Name: core_carved.cpp_CCarved_resetChaseState_FUN_00429090
// Address: 00429090
// Address Range: [[00429090, 004291e3]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_resetChaseState_FUN_00429090(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_carved_cpp_CCarved_resetChaseState_FUN_00429090(CCarved *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1014 [1012];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  if (this_ptr->always_chase_fast == 0) {
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar3 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&this_ptr_00->base,iVar2 + 3,iVar3);
      return;
    }
    local_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                         (&this_ptr_00->base);
    if (local_14 <= (float)0.90000000000000002) {
      return;
    }
    pCVar1 = (this_ptr->base).victim;
    local_20 = (pCVar1->base).location.position.x - (this_ptr->base).base.base.location.position.x;
    local_1c = (pCVar1->base).location.position.y - (this_ptr->base).base.base.location.position.y;
    local_18 = (pCVar1->base).location.position.z - (this_ptr->base).base.base.location.position.z;
    local_2c = local_20;
    (&stack0xffffffd8)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&stack0xffffffc8 != &stack0xffffffd4) {
      local_38 = local_2c;
      local_34 = local_28;
      local_30 = local_24;
    }
    if ((5.0f <= SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34))
       || (iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3), iVar2 != 1)) {
      iVar2 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      iVar3 = iVar3 + 7;
    }
    else {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      iVar3 = iVar3 + 3;
    }
  }
  else {
    iVar2 = 1;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
    iVar3 = iVar3 + 7;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,iVar3,iVar2);
  return;
}
