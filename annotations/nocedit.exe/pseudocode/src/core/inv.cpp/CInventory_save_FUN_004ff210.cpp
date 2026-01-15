// Name: core_inv.cpp_CInventory_save_FUN_004ff210
// Address: 004ff210
// Address Range: [[004ff210, 004ff3a8]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_save_FUN_004ff210(CInventory * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory *this_ptr,FILE *file_handle)

{
  int iVar1;
  CInventory *pCVar2;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s{ // Inventory\n");
  core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
  this_ptr->save_version = 2;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// fileVersion\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n",g_PropertyNamePrefix);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// itemCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n",g_PropertyNamePrefix);
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      if (this_ptr->selected_weapon == (CWeapon *)pCVar2->items[0]) break;
      iVar1 = iVar1 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// currentWeapon\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n",g_PropertyNamePrefix);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// battery strength\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%s%f\n",g_PropertyNamePrefix,(double)this_ptr->battery_charge);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// actor name list\n");
  core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(this_ptr,file_handle);
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s// actor data list\n");
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = iVar1 + 1;
      core_actor_cpp_CDemonActor_save_FUN_0040af30(pCVar2->items[0],file_handle);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s} // End inventory\n");
  return;
}
