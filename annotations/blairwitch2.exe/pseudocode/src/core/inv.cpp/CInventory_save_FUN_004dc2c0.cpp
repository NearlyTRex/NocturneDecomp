// Name: core_inv.cpp_CInventory_save_FUN_004dc2c0
// Address: 004dc2c0
// Address Range: [[004dc2c0, 004dc458]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_save_FUN_004dc2c0(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_save_FUN_004dc2c0(CInventory *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  CInventory *pCVar3;
  
  FUN_005b8010(file_handle,"%s{ // Inventory\n");
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
  *(uint *)(this_ptr + 0x334) = 2;
  FUN_005b8010(file_handle,"%s// fileVersion\n",&DAT_00609590);
  FUN_005b8010
            (file_handle,"%s%d\n",&DAT_00609590,*(uint *)(this_ptr + 0x334));
  FUN_005b8010(file_handle,"%s// itemCount\n",&DAT_00609590);
  FUN_005b8010
            (file_handle,"%s%d\n",&DAT_00609590,*(uint *)(this_ptr + 0x10));
  iVar1 = 0;
  iVar2 = -1;
  if (0 < *(int *)(this_ptr + 0x10)) {
    pCVar3 = this_ptr;
    do {
      iVar2 = iVar1;
      if (*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610) == *(int *)(pCVar3 + 0x14))
      break;
      iVar1 = iVar1 + 1;
      pCVar3 = pCVar3 + 4;
      iVar2 = -1;
    } while (iVar1 < *(int *)(this_ptr + 0x10));
  }
  FUN_005b8010(file_handle,"%s// currentWeapon\n",&DAT_00609590,iVar2);
  FUN_005b8010(file_handle,"%s%d\n",&DAT_00609590,iVar2);
  FUN_005b8010(file_handle,"%s// battery strength\n",&DAT_00609590);
  FUN_005b8010(file_handle,"%s%f\n",&DAT_00609590,(double)*(float *)this_ptr);
  FUN_005b8010(file_handle,"%s// actor name list\n");
  core_inv_cpp_CInventory_saveItems_FUN_004dc460(this_ptr,file_handle);
  iVar2 = 0;
  FUN_005b8010(file_handle,"%s// actor data list\n");
  pCVar3 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_CDemonActor_save_FUN_0040b0a0(*(CDemonActor **)(pCVar3 + 0x14),file_handle);
      pCVar3 = pCVar3 + 4;
    } while (iVar2 < *(int *)(this_ptr + 0x10));
  }
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
  FUN_005b8010(file_handle,"%s} // End inventory\n",&DAT_00609590);
  return;
}
