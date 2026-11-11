// Name: core_stranger.cpp_CStranger_processPickupComplete_FUN_0058cda0
// Address: 0058cda0
// Address Range: [[0058cda0, 0058ce18]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0058cda0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0058cda0(CStranger *this_ptr)

{
  int iVar1;
  CAmmoBox *this_ptr_00;
  
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    iVar1 = (this_ptr->base).action_pending;
    if (iVar1 != 4) {
      shape_edittool_cpp_FUN_00494340
                (g_CEditorToolsPtr,"@actionPending = %d\nstranger.cpp line %d" + 1,iVar1,0xdba);
    }
    this_ptr_00 = (CAmmoBox *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash);
    if (this_ptr_00 != (CAmmoBox *)0x0) {
      core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e210(this_ptr_00,&(this_ptr->base).inventory)
      ;
    }
    (this_ptr->base).action_pending = 1;
    (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  }
  return;
}
