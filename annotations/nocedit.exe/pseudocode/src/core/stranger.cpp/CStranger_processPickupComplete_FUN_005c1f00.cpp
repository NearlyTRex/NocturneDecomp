// Name: core_stranger.cpp_CStranger_processPickupComplete_FUN_005c1f00
// Address: 005c1f00
// Address Range: [[005c1f00, 005c1f78]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_005c1f00(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_005c1f00(CStranger *this_ptr)

{
  CAmmoBox *this_ptr_00;
  
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    if (this_ptr->action_pending != 4) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",this_ptr->action_pending,
                 0xd52);
    }
    this_ptr_00 = (CAmmoBox *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash);
    if (this_ptr_00 != (CAmmoBox *)0x0) {
      core_ammobox_cpp_CAmmoBox_addToInventory_FUN_00411700(this_ptr_00,&(this_ptr->base).inventory)
      ;
    }
    this_ptr->action_pending = 1;
    (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  }
  return;
}
