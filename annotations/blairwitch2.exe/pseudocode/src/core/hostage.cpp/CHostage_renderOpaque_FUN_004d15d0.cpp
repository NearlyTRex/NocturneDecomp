// Name: core_hostage.cpp_CHostage_renderOpaque_FUN_004d15d0
// Address: 004d15d0
// Address Range: [[004d15d0, 004d161f]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004d15d0(CHostage *this_ptr)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_renderOpaque_FUN_004d15d0(CHostage *this_ptr)

{
  int iVar1;
  
  if (this_ptr->no_shadows_when_saved != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if ((iVar1 != 0) && (this_ptr->hostage_state == 4)) {
      iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
      if (*(int *)(iVar1 + 0x24) == 10) {
        return 0;
      }
    }
  }
  iVar1 = core_npc_cpp_CNPC_renderOpaque_FUN_00510900(&this_ptr->base);
  return iVar1;
}
