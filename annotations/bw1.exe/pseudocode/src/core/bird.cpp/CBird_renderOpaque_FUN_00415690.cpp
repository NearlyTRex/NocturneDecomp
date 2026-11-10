// Name: core_bird.cpp_CBird_renderOpaque_FUN_00415690
// Address: 00415690
// Address Range: [[00415690, 00415722]]
// Convention: __cdecl
// Signature: int __cdecl core_bird_cpp_CBird_renderOpaque_FUN_00415690(CBird *this_ptr)

#include "nocturne.h"

int __cdecl core_bird_cpp_CBird_renderOpaque_FUN_00415690(CBird *this_ptr)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x1fab0 == 0) {
    if (*(int *)&this_ptr->field_0x27a8 == 0) {
      iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
      return iVar1;
    }
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if ((iVar1 != 0) &&
       (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,"heroCanSee"), iVar1 == 0)) {
      return 0;
    }
    if (((*(int *)&this_ptr->field_0x27a8 != 0) && (*(int *)&g_CGamePtr->field_0x25c != 0)) &&
       (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2), iVar1 == 1)) {
      iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
      return iVar1;
    }
  }
  return 0;
}
