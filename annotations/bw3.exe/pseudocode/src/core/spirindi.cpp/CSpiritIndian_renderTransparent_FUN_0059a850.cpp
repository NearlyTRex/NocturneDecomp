// Name: core_spirindi.cpp_CSpiritIndian_renderTransparent_FUN_0059a850
// Address: 0059a850
// Address Range: [[0059a850, 0059a893]]
// Convention: __cdecl
// Signature: int __cdecl core_spirindi_cpp_CSpiritIndian_renderTransparent_FUN_0059a850(CSpiritIndian *this_ptr)

#include "nocturne.h"

int __cdecl core_spirindi_cpp_CSpiritIndian_renderTransparent_FUN_0059a850(CSpiritIndian *this_ptr)

{
  int iVar1;
  
  if ((((this_ptr->base).base.is_spectral != 0) &&
      (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                         (0x01C6E360,"?heroCanSee" + 1), iVar1 != 0)) &&
     (this_ptr->pool_me == 0)) {
    core_npc_cpp_CNPC_renderTransparent_FUN_005095f0(&this_ptr->base);
    return (this_ptr->base).base.was_rendered_opaque;
  }
  return 0;
}
