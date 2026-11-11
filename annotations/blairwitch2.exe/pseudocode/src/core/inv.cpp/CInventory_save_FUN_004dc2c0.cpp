// Name: core_inv.cpp_CInventory_save_FUN_004dc2c0
// Address: 004dc2c0
// Address Range: [[004dc2c0, 004dc458]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_save_FUN_004dc2c0(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_save_FUN_004dc2c0(CInventory *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  FUN_005b8010(file_handle,"%s{ // Inventory\n");
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
  this_ptr->save_version = 2;
  FUN_005b8010(file_handle,"%s// fileVersion\n",&DAT_00609590);
  FUN_005b8010(file_handle,"%s%d\n",&DAT_00609590,this_ptr->save_version);
  FUN_005b8010(file_handle,"%s// itemCount\n",&DAT_00609590);
  FUN_005b8010(file_handle,"%s%d\n",&DAT_00609590,this_ptr->item_count);
  iVar1 = 0;
  iVar3 = -1;
  if (0 < this_ptr->item_count) {
    pCVar2 = this_ptr;
    do {
      iVar3 = iVar1;
      if (this_ptr->selected_weapons[this_ptr->current_group] == (CWeapon *)pCVar2->items[0]) break;
      iVar1 = iVar1 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
      iVar3 = -1;
    } while (iVar1 < this_ptr->item_count);
  }
  FUN_005b8010(file_handle,"%s// currentWeapon\n",&DAT_00609590,iVar3);
  FUN_005b8010(file_handle,"%s%d\n",&DAT_00609590,iVar3);
  FUN_005b8010(file_handle,"%s// battery strength\n",&DAT_00609590);
  FUN_005b8010
            (file_handle,"%s%f\n",&DAT_00609590,(double)this_ptr->battery_charge);
  FUN_005b8010(file_handle,"%s// actor name list\n");
  core_inv_cpp_CInventory_saveItems_FUN_004dc460(this_ptr,file_handle);
  iVar3 = 0;
  FUN_005b8010(file_handle,"%s// actor data list\n");
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar3 = iVar3 + 1;
      core_actor_cpp_CDemonActor_save_FUN_0040b0a0(pCVar2->items[0],file_handle);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
  FUN_005b8010(file_handle,"%s} // End inventory\n",&DAT_00609590);
  return;
}
