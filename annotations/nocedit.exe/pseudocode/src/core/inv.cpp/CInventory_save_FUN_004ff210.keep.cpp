// Name: core_inv.cpp_CInventory_save_FUN_004ff210
// Address: 004ff210
// MANUAL RECONSTRUCTION
// Address Range: [[004ff210, 004ff3a8]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int current_weapon;
  int iVar2;

  _fprintf(file_handle,"%s{ // Inventory\n",g_PropertyNamePrefix);
  core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
  this_ptr->save_version = 2;
  _fprintf(file_handle,"%s// fileVersion\n",g_PropertyNamePrefix);
  _fprintf(file_handle,"%s%d\n",g_PropertyNamePrefix,this_ptr->save_version);
  _fprintf(file_handle,"%s// itemCount\n",g_PropertyNamePrefix);
  _fprintf(file_handle,"%s%d\n",g_PropertyNamePrefix,this_ptr->item_count);
  current_weapon = -1;
  iVar1 = 0;
  if (0 < this_ptr->item_count) {
    do {
      if (this_ptr->selected_weapon == (CWeapon *)this_ptr->items[iVar1]) {
        current_weapon = iVar1;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->item_count);
  }
  _fprintf(file_handle,"%s// currentWeapon\n",g_PropertyNamePrefix);
  _fprintf(file_handle,"%s%d\n",g_PropertyNamePrefix,current_weapon);
  _fprintf(file_handle,"%s// battery strength\n",g_PropertyNamePrefix);
  _fprintf(file_handle,"%s%f\n",g_PropertyNamePrefix,(double)this_ptr->battery_charge);
  _fprintf(file_handle,"%s// actor name list\n",g_PropertyNamePrefix);
  core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(this_ptr,file_handle);
  iVar2 = 0;
  _fprintf(file_handle,"%s// actor data list\n",g_PropertyNamePrefix);
  if (0 < this_ptr->item_count) {
    do {
      core_actor_cpp_CDemonActor_save_FUN_0040af30(this_ptr->items[iVar2],file_handle);
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->item_count);
  }
  core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
  _fprintf(file_handle,"%s} // End inventory\n",g_PropertyNamePrefix);
  return;
}
