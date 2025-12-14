// Name: core_inv.cpp_CInventory_clear_FUN_004fd0e0
// Address: 004fd0e0
// Address Range: [[004fd0e0, 004fd180]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_clear_FUN_004fd0e0(CInventory * this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004fd155) */

void __cdecl core_inv_cpp_CInventory_clear_FUN_004fd0e0(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  iVar1 = this_ptr->item_count;
  while (0 < iVar1) {
    core_inv_cpp_CInventory_removeItem_FUN_004fea70
              (this_ptr,this_ptr->items[0],(uint)(this_ptr->preserve_items == 0));
    iVar1 = this_ptr->item_count;
  }
  this_ptr->selected_item = (CDemonActor *)0x0;
  this_ptr->preserve_items = 0;
  this_ptr_00 = this_ptr->ammo_ptr;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  if (this_ptr_00 == (CAmmo *)0x0) {
    return;
  }
  g_CurrentDebugFilename = "..\\core\\inv.cpp";
  g_CurrentDebugLine = 0x102;
  (*((this_ptr_00->base_actor).vtable)->dtor)
            (&this_ptr_00->base_actor,2,unaff_EBX,unaff_retaddr,(uint)this_ptr,in_stack_00000008,
             in_stack_0000000c,in_stack_00000010,in_stack_00000014);
  this_ptr->ammo_ptr = (CAmmo *)0x0;
  return;
}
