// Name: core_shadow.cpp_CShadow_renderOpaque_FUN_0055fbf0
// Address: 0055fbf0
// Address Range: [[0055fbf0, 0055fc5c]]
// Convention: __cdecl
// Signature: int __cdecl core_shadow_cpp_CShadow_renderOpaque_FUN_0055fbf0(CShadow *this_ptr)

#include "nocturne.h"

int __cdecl core_shadow_cpp_CShadow_renderOpaque_FUN_0055fbf0(CShadow *this_ptr)

{
  int iVar1;
  
  if ((*(int *)&this_ptr->field_0xc2fc == 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar1 != 0)
     ) {
    return 0;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar1 != 0) &&
     (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"heroCanSee"), iVar1 == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  return iVar1;
}
