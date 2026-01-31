// Name: core_hostage.cpp_CHostage_renderOpaque_FUN_004f4b40
// Address: 004f4b40
// Address Range: [[004f4b40, 004f4b8f]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004f4b40(CHostage *this_ptr)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004f4b40(CHostage *this_ptr)

{
  int iVar1;
  SMotion *pSVar2;
  
  if (this_ptr->no_shadows_when_saved != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if ((iVar1 != 0) && (this_ptr->hostage_state == 4)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (pSVar2->state_index == 10) {
        return 0;
      }
    }
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  return iVar1;
}
