// Name: core_bird.cpp_CBird_renderOpaque_FUN_0040fe90
// Address: 0040fe90
// Address Range: [[0040fe90, 0040ff22]]
// Convention: __cdecl
// Signature: int __cdecl core_bird_cpp_CBird_renderOpaque_FUN_0040fe90(CBird *this_ptr)

#include "nocturne.h"

int __cdecl core_bird_cpp_CBird_renderOpaque_FUN_0040fe90(CBird *this_ptr)

{
  int iVar1;
  
  if (this_ptr->pool_me == 0) {
    if ((this_ptr->base).is_spectral == 0) {
      iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220(&this_ptr->base);
      return iVar1;
    }
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if ((iVar1 != 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,"heroCanSee"), iVar1 == 0)) {
      return 0;
    }
    if ((((this_ptr->base).is_spectral != 0) && (g_CGamePtr->goggles_active != 0)) &&
       (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2), iVar1 == 1)) {
      iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220(&this_ptr->base);
      return iVar1;
    }
  }
  return 0;
}
