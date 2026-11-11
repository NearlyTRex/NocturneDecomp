// Name: core_hostage.cpp_CHostage_renderOpaque_FUN_004ed800
// Address: 004ed800
// Address Range: [[004ed800, 004ed84f]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004ed800(CHostage *this_ptr)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004ed800(CHostage *this_ptr)

{
  int iVar1;
  SMotion *pSVar2;
  
  if (this_ptr->no_shadows_when_saved != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if ((iVar1 != 0) && (this_ptr->hostage_state == 4)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         (&(this_ptr->base).base.model.base);
      if (pSVar2->state_index == 10) {
        return 0;
      }
    }
  }
  iVar1 = core_npc_cpp_CNPC_renderOpaque_FUN_00531b10(&this_ptr->base);
  return iVar1;
}
