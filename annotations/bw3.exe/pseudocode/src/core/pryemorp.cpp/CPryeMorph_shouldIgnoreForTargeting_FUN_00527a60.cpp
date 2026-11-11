// Name: core_pryemorp.cpp_CPryeMorph_shouldIgnoreForTargeting_FUN_00527a60
// Address: 00527a60
// Address Range: [[00527a60, 00527a82]]
// Convention: __cdecl
// Signature: int __cdecl core_pryemorp_cpp_CPryeMorph_shouldIgnoreForTargeting_FUN_00527a60(CPryeMorph *this_ptr)

#include "nocturne.h"

int __cdecl core_pryemorp_cpp_CPryeMorph_shouldIgnoreForTargeting_FUN_00527a60(CPryeMorph *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  return (uint)(pSVar1->state_index == 0x92);
}
