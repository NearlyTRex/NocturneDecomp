// Name: core_doc.cpp_FUN_00458320
// Address: 00458320
// Address Range: [[00458320, 00458398]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00458320(int param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_00458320(int param_1)

{
  CAmmoBox *this_ptr;
  
  if (*(int *)(param_1 + 0x25608) != 0) {
    if (*(int *)(param_1 + 0x256a4) != 4) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0
                (g_CEditorToolsPtr,"actionPending = %d\ndoc.cpp line %d");
    }
    this_ptr = (CAmmoBox *)
               core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)(param_1 + 0x25608),g_CAmmoBoxClassInfo.name_hash);
    if (this_ptr != (CAmmoBox *)0x0) {
      core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e670
                (this_ptr,(CInventory *)(param_1 + 0x2437c));
    }
    *(uint *)(param_1 + 0x256a4) = 1;
    *(uint *)(param_1 + 0x25608) = 0;
  }
  return;
}
