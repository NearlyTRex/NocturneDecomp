// Name: core_inv.cpp_FUN_004f95b0
// Address: 004f95b0
// Address Range: [[004f95b0, 004f9748]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004f95b0(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_FUN_004f95b0(CInventory *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  FUN_005c03c0(file_handle,"%s{ // Inventory\n");
  core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
  *(uint *)(this_ptr + 0x334) = 2;
  FUN_005c03c0(file_handle,"%s// fileVersion\n",&DAT_006106c0);
  FUN_005c03c0
            (file_handle,"%s%d\n",&DAT_006106c0,*(uint *)(this_ptr + 0x334));
  FUN_005c03c0(file_handle,"%s// itemCount\n",&DAT_006106c0);
  FUN_005c03c0
            (file_handle,"%s%d\n",&DAT_006106c0,*(uint *)(this_ptr + 0x10));
  iVar1 = 0;
  pCVar2 = this_ptr;
  iVar3 = -1;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar3 = iVar1;
      if (*(int *)(this_ptr + 0x338) == *(int *)(pCVar2 + 0x14)) break;
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 4;
      iVar3 = -1;
    } while (iVar1 < *(int *)(this_ptr + 0x10));
  }
  FUN_005c03c0(file_handle,"%s// currentWeapon\n",&DAT_006106c0,iVar3);
  FUN_005c03c0(file_handle,"%s%d\n",&DAT_006106c0,iVar3);
  FUN_005c03c0(file_handle,"%s// battery strength\n",&DAT_006106c0);
  FUN_005c03c0(file_handle,"%s%f\n",&DAT_006106c0,(double)*(float *)this_ptr);
  FUN_005c03c0(file_handle,"%s// actor name list\n");
  core_inv_cpp_CInventory_saveItems_FUN_004f9750(this_ptr,file_handle);
  iVar3 = 0;
  FUN_005c03c0(file_handle,"%s// actor data list\n");
  pCVar2 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar3 = iVar3 + 1;
      core_actor_cpp_CDemonActor_save_FUN_0040adb0(*(CDemonActor **)(pCVar2 + 0x14),file_handle);
      pCVar2 = pCVar2 + 4;
    } while (iVar3 < *(int *)(this_ptr + 0x10));
  }
  core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
  FUN_005c03c0(file_handle,"%s} // End inventory\n",&DAT_006106c0);
  return;
}
