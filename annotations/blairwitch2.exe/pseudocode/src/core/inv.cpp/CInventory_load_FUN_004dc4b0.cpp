// Name: core_inv.cpp_CInventory_load_FUN_004dc4b0
// Address: 004dc4b0
// Address Range: [[004dc4b0, 004dc80b]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_load_FUN_004dc4b0(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_load_FUN_004dc4b0(CInventory *this_ptr,_FILE *file_handle)

{
  char cVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  CWeapon *pCVar4;
  int iVar5;
  CInventory *pCVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  byte bVar11;
  byte local_1dc [256];
  uint local_dc [25];
  char local_78 [100];
  int local_14;
  
  bVar11 = 0;
  core_inv_cpp_CInventory_clear_FUN_004da860(this_ptr);
  core_inv_cpp_CInventory_initialize_FUN_004da900(this_ptr);
  _fgets(local_1dc,0xff,file_handle);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005db882,&this_ptr->save_version);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005db886,&this_ptr->item_count);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,&DAT_005db88a,&local_14);
  if (0 < this_ptr->save_version) {
    _fgets(local_1dc,0xff,file_handle);
    _fscanf(file_handle,&DAT_005db88e,this_ptr);
  }
  _fgets(local_1dc,0xff,file_handle);
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      puVar8 = &DAT_00617cd8;
      puVar10 = local_dc;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      puVar8 = &DAT_00617d40;
      pcVar9 = local_78;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
      }
      _fscanf(file_handle," %s \"%[^\"]\"\n",local_dc,local_78);
      if (0x01D182F0->has_inventory_actors == 0) {
        pcVar9 = local_78;
        pCVar3 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c5a0(local_dc);
        pCVar2 = pCVar3;
        do {
          cVar1 = *pcVar9;
          pCVar2->actor_name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pCVar2->actor_name[1] = cVar1;
          pCVar2 = (CDemonActor *)(pCVar2->actor_name + 2);
        } while (cVar1 != '\0');
        pCVar6->items[0] = pCVar3;
      }
      else {
        pCVar2 = core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004fbc00
                           (0x01D182F0,local_78);
        pCVar6->items[0] = pCVar2;
      }
      iVar7 = iVar7 + 1;
      pCVar6 = (CInventory *)&pCVar6->owner;
    } while (iVar7 < this_ptr->item_count);
  }
  _fgets(local_1dc,0xff,file_handle);
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      core_actor_cpp_CDemonActor_load_FUN_0040b1c0(pCVar6->items[0],file_handle);
      iVar7 = iVar7 + 1;
      pCVar6 = (CInventory *)&pCVar6->owner;
    } while (iVar7 < this_ptr->item_count);
  }
  if (1 < this_ptr->save_version) {
    _fgets(local_1dc,0xff,file_handle);
  }
  this_ptr->preserve_items = 0x01D182F0->has_inventory_actors;
  this_ptr->selected_weapons[this_ptr->current_group] = (CWeapon *)0x0;
  if (-1 < local_14) {
    pCVar4 = (CWeapon *)
             core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (this_ptr->items[local_14],g_CWeaponClassInfo.name_hash);
    this_ptr->selected_weapons[this_ptr->current_group] = pCVar4;
    if (this_ptr->selected_weapons[this_ptr->current_group] == (CWeapon *)0x0) {
      _DAT_01d046a0 = "..\\core\\inv.cpp";
      _DAT_01d046a4 = 0x62b;
      core_main_c_FUN_004e4500("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(this_ptr,999);
  return;
}
