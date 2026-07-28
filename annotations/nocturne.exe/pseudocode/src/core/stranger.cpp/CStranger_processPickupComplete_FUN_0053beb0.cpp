// Name: core_stranger.cpp_CStranger_processPickupComplete_FUN_0053beb0
// Address: 0053beb0
// Address Range: [[0053beb0, 0053bf28]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0053beb0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0053beb0(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    if (this_ptr->action_pending != 4) {
      shape_edittool_cpp_FUN_0046fb40
                (0x01BCD074,"actionPending = %d\nstranger.cpp line %d",this_ptr->action_pending,0xd49);
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                       ((this_ptr->base).object_to_pick_up,g_CAmmoBoxActorType_007641f8.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) {
      core_ammobox_cpp_FUN_0040f1a0(pCVar1,&(this_ptr->base).inventory);
    }
    this_ptr->action_pending = 1;
    (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  }
  return;
}
