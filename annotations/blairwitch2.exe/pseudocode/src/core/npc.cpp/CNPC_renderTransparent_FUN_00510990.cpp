// Name: core_npc.cpp_CNPC_renderTransparent_FUN_00510990
// Address: 00510990
// Address Range: [[00510990, 005109d3]]
// Convention: __cdecl
// Signature: int __cdecl core_npc_cpp_CNPC_renderTransparent_FUN_00510990(CNPC *this_ptr)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_renderTransparent_FUN_00510990(CNPC *this_ptr)

{
  int iVar1;
  
  if (((*(int *)&(this_ptr->base).field_0x2814 != 0) &&
      (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                         (0x01C38BC0,"heroCanSee"), iVar1 != 0)) &&
     (*(int *)&this_ptr->field_0x24340 == 0)) {
    core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0(&this_ptr->base);
    return (this_ptr->base).was_rendered_opaque;
  }
  return 0;
}
