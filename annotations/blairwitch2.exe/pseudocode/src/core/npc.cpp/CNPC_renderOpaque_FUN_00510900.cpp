// Name: core_npc.cpp_CNPC_renderOpaque_FUN_00510900
// Address: 00510900
// Address Range: [[00510900, 0051098f]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_renderOpaque_FUN_00510900(CNPC *this_ptr)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_renderOpaque_FUN_00510900(CNPC *this_ptr)

{
  int iVar1;
  
  if (this_ptr->pool_me == 0) {
    if ((this_ptr->base).is_spectral == 0) {
      iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0(&this_ptr->base);
      return iVar1;
    }
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if (iVar1 != 0) {
      iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,"heroCanSee");
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (((this_ptr->base).is_spectral != 0) && (g_CGamePtr->goggles_active != 0)) {
      iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
      if (iVar1 == 1) {
        iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0(&this_ptr->base);
        return iVar1;
      }
    }
  }
  return 0;
}
