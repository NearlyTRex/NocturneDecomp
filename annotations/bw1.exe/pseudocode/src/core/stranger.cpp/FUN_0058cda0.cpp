// Name: core_stranger.cpp_FUN_0058cda0
// Address: 0058cda0
// Address Range: [[0058cda0, 0058ce18]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0058cda0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_FUN_0058cda0(CStranger *this_ptr)

{
  CAmmoBox *this_ptr_00;
  
  if (*(int *)&this_ptr->field_0x1ff78 != 0) {
    if (*(int *)&this_ptr->field_0x1ff5c != 4) {
      shape_edittool_cpp_FUN_00494340
                (g_CEditorToolsPtr,"@actionPending = %d\nstranger.cpp line %d" + 1,
                 *(int *)&this_ptr->field_0x1ff5c,0xdba);
    }
    this_ptr_00 = (CAmmoBox *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)&this_ptr->field_0x1ff78,g_CAmmoBoxClassInfo.name_hash);
    if (this_ptr_00 != (CAmmoBox *)0x0) {
      core_ammobox_cpp_FUN_0040e210(this_ptr_00,(CInventory *)&this_ptr->field_0x1fae8);
    }
    *(uint *)&this_ptr->field_0x1ff5c = 1;
    *(uint *)&this_ptr->field_0x1ff78 = 0;
  }
  return;
}
