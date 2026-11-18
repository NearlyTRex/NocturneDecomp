// Name: core_doc.cpp_CDoc_processPickupComplete_FUN_00470750
// Address: 00470750
// Address Range: [[00470750, 004707c8]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processPickupComplete_FUN_00470750(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_processPickupComplete_FUN_00470750(CDoc *this_ptr)

{
  int iVar1;
  CAmmoBox *this_ptr_00;
  
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    iVar1 = (this_ptr->base).action_pending;
    if (iVar1 != 4) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340
                (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d",iVar1,0xe77);
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
