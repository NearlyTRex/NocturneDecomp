// Name: core_bird.cpp_CBird_renderOpaque_FUN_00415690
// Address: 00415690
// Address Range: [[00415690, 00415722]]
// Convention: __cdecl
// Signature: int __cdecl core_bird_cpp_CBird_renderOpaque_FUN_00415690(CBird *this_ptr)

#include "nocturne.h"

int __cdecl core_bird_cpp_CBird_renderOpaque_FUN_00415690(CBird *this_ptr)

{
  int iVar1;
  
  if (this_ptr->pool_me == 0) {
    if ((this_ptr->base).is_spectral == 0) {
      iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240(&this_ptr->base);
      return iVar1;
    }
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if ((iVar1 != 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,"heroCanSee"), iVar1 == 0)) {
      return 0;
    }
    if ((((this_ptr->base).is_spectral != 0) && (g_CGamePtr->goggles_active != 0)) &&
       (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2), iVar1 == 1)) {
      iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240(&this_ptr->base);
      return iVar1;
    }
  }
  return 0;
}
