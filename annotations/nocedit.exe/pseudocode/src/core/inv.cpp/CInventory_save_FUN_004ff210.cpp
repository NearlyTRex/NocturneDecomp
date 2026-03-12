// Name: core_inv.cpp_CInventory_save_FUN_004ff210
// Address: 004ff210
// Address Range: [[004ff210, 004ff3a8]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_save_FUN_004ff210(CInventory *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CInventory *pCVar2;
  CInventory *pCVar1;
  int iVar2;
  
  _fprintf(file_handle,"%s{ // Inventory\n");
  core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
  this_ptr->save_version = 2;
  _fprintf(file_handle,"%s// fileVersion\n");
  _fprintf(file_handle,"%s%d\n",g_PropertyNamePrefix);
  _fprintf(file_handle,"%s// itemCount\n");
  _fprintf(file_handle,"%s%d\n",g_PropertyNamePrefix);
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      if (this_ptr->selected_weapon == (CWeapon *)pCVar2->items[0]) break;
      iVar1 = iVar1 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  _fprintf(file_handle,"%s// currentWeapon\n");
  _fprintf(file_handle,"%s%d\n",g_PropertyNamePrefix);
  _fprintf(file_handle,"%s// battery strength\n");
  _fprintf(file_handle,"%s%f\n",g_PropertyNamePrefix,(double)this_ptr->battery_charge);
  _fprintf(file_handle,"%s// actor name list\n");
  core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(this_ptr,file_handle);
  iVar2 = 0;
  _fprintf(file_handle,"%s// actor data list\n");
  pCVar1 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_CDemonActor_save_FUN_0040af30(pCVar1->items[0],file_handle);
      pCVar1 = (CInventory *)&pCVar1->owner;
    } while (iVar2 < this_ptr->item_count);
  }
  core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
  _fprintf(file_handle,"%s} // End inventory\n");
  return;
}
