// Name: core_stranger.cpp_FUN_0056a160
// Address: 0056a160
// Address Range: [[0056a160, 0056a1d8]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0056a160(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_FUN_0056a160(CStranger *this_ptr)

{
  CAmmoBox *this_ptr_00;
  
  if (*(int *)&this_ptr->field_0x25608 != 0) {
    if (this_ptr->action_pending != 4) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                (g_CEditorToolsPtr,"@actionPending = %d\nstranger.cpp line %d" + 1);
    }
    this_ptr_00 = (CAmmoBox *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)&this_ptr->field_0x25608,g_CAmmoBoxClassInfo.name_hash);
    if (this_ptr_00 != (CAmmoBox *)0x0) {
      core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e670
                (this_ptr_00,(CInventory *)&this_ptr->field_0x2437c);
    }
    this_ptr->action_pending = 1;
    *(uint *)&this_ptr->field_0x25608 = 0;
  }
  return;
}
