// Name: core_hostage.cpp_CHostage_renderOpaque_FUN_004b6cf0
// Address: 004b6cf0
// Address Range: [[004b6cf0, 004b6d3f]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004b6cf0(CHostage *this_ptr)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004b6cf0(CHostage *this_ptr)

{
  int iVar1;
  SMotion *pSVar2;
  
  if (this_ptr->no_shadows_when_saved != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                      (g_CDemonRenderer_PTR_005ae704);
    if ((iVar1 != 0) && (this_ptr->hostage_state == 4)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(this_ptr->base).base.model.motion_controller);
      if (pSVar2->state_index == 10) {
        return 0;
      }
    }
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)this_ptr);
  return iVar1;
}
