// Name: core_prye.cpp_FUN_00520d20
// Address: 00520d20
// Address Range: [[00520d20, 00520d98]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00520d20(int param_1)

#include "nocturne.h"

void core_prye_cpp_FUN_00520d20(int param_1)

{
  CAmmoBox *this_ptr;
  
  if (*(int *)(param_1 + 0x20b98) != 0) {
    if (*(int *)(param_1 + 0x20b64) != 4) {
      shape_edittool_cpp_FUN_0047cee0
                (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,
                 *(int *)(param_1 + 0x20b64),0x108a);
    }
    this_ptr = (CAmmoBox *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(CDemonActor **)(param_1 + 0x20b98),g_CAmmoBoxClassInfo.name_hash);
    if (this_ptr != (CAmmoBox *)0x0) {
      core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e720
                (this_ptr,(CInventory *)(param_1 + 0x206e8));
    }
    *(uint *)(param_1 + 0x20b64) = 1;
    *(uint *)(param_1 + 0x20b98) = 0;
  }
  return;
}
