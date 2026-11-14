// Name: core_shadow.cpp_CShadow_renderOpaque_FUN_0053e640
// Address: 0053e640
// Address Range: [[0053e640, 0053e6bf]]
// Convention: __cdecl
// Signature: int __cdecl core_shadow_cpp_CShadow_renderOpaque_FUN_0053e640(CShadow *this_ptr)

#include "nocturne.h"

int __cdecl core_shadow_cpp_CShadow_renderOpaque_FUN_0053e640(CShadow *this_ptr)

{
  int iVar1;
  
  if ((((this_ptr->is_opaque != 0) ||
       (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar1 == 0)) &&
      ((iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar1 == 0 ||
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,"heroCanSee"), iVar1 != 0)))) &&
     ((g_CGamePtr->goggles_active == 0 ||
      (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2), iVar1 == 1)))) {
    iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
    return iVar1;
  }
  return 0;
}
