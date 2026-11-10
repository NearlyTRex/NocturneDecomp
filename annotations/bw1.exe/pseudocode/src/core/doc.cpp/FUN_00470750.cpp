// Name: core_doc.cpp_FUN_00470750
// Address: 00470750
// Address Range: [[00470750, 004707c8]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00470750(int param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_00470750(int param_1)

{
  CAmmoBox *this_ptr;
  
  if (*(int *)(param_1 + 0x1ff78) != 0) {
    if (*(int *)(param_1 + 0x1ff5c) != 4) {
      shape_edittool_cpp_FUN_00494340
                (g_CEditorToolsPtr,"?actionPending = %d\ndoc.cpp line %d" + 1,
                 *(int *)(param_1 + 0x1ff5c),0xe77);
    }
    this_ptr = (CAmmoBox *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(uint *)(param_1 + 0x1ff78),g_CAmmoBoxClassInfo.name_hash);
    if (this_ptr != (CAmmoBox *)0x0) {
      core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e210
                (this_ptr,(CInventory *)(param_1 + 0x1fae8));
    }
    *(uint *)(param_1 + 0x1ff5c) = 1;
    *(uint *)(param_1 + 0x1ff78) = 0;
  }
  return;
}
