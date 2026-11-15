// Name: core_prye.cpp_CPrye_processPickupComplete_FUN_00520d20
// Address: 00520d20
// Address Range: [[00520d20, 00520d98]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_processPickupComplete_FUN_00520d20(CPrye *this_ptr)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_processPickupComplete_FUN_00520d20(CPrye *this_ptr)

{
  int iVar1;
  CAmmoBox *this_ptr_00;
  
  if ((this_ptr->base).object_to_pick_up != (CDemonActor *)0x0) {
    iVar1 = (this_ptr->base).action_pending;
    if (iVar1 != 4) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0047cee0
                (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,iVar1,0x108a);
    }
    this_ptr_00 = (CAmmoBox *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash);
    if (this_ptr_00 != (CAmmoBox *)0x0) {
      core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e720(this_ptr_00,&(this_ptr->base).inventory)
      ;
    }
    (this_ptr->base).action_pending = 1;
    (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  }
  return;
}
