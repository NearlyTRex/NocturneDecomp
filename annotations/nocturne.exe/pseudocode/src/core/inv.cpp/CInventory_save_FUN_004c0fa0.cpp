// Name: core_inv.cpp_CInventory_save_FUN_004c0fa0
// Address: 004c0fa0
// Address Range: [[004c0fa0, 004c1138]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_save_FUN_004c0fa0(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_save_FUN_004c0fa0(CInventory *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  _fprintf(file_handle,"%s{ // Inventory\n");
  core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
  this_ptr->save_version = 2;
  _fprintf(file_handle,"%s// fileVersion\n",&DAT_005acc90);
  _fprintf(file_handle,"%s%d\n",&DAT_005acc90,this_ptr->save_version);
  _fprintf(file_handle,"%s// itemCount\n",&DAT_005acc90);
  _fprintf(file_handle,"%s%d\n",&DAT_005acc90,this_ptr->item_count);
  iVar1 = 0;
  pCVar2 = this_ptr;
  iVar3 = -1;
  if (0 < this_ptr->item_count) {
    do {
      iVar3 = iVar1;
      if (this_ptr->selected_weapon == (CWeapon *)pCVar2->items[0]) break;
      iVar1 = iVar1 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
      iVar3 = -1;
    } while (iVar1 < this_ptr->item_count);
  }
  _fprintf(file_handle,"%s// currentWeapon\n",&DAT_005acc90,iVar3);
  _fprintf(file_handle,"%s%d\n",&DAT_005acc90,iVar3);
  _fprintf(file_handle,"%s// battery strength\n",&DAT_005acc90);
  _fprintf(file_handle,"%s%f\n",&DAT_005acc90,(double)this_ptr->battery_charge);
  _fprintf(file_handle,"%s// actor name list\n");
  core_inv_cpp_CInventory_saveItems_FUN_004c1140(this_ptr,file_handle);
  iVar3 = 0;
  _fprintf(file_handle,"%s// actor data list\n");
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar3 = iVar3 + 1;
      core_actor_cpp_CDemonActor_save_FUN_0040c040(pCVar2->items[0],file_handle);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
  _fprintf(file_handle,"%s} // End inventory\n",&DAT_005acc90);
  return;
}
