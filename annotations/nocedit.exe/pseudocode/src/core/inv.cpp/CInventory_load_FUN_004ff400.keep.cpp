// Name: core_inv.cpp_CInventory_load_FUN_004ff400
// Address: 004ff400
// MANUAL RECONSTRUCTION
// Address Range: [[004ff400, 004ff735]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_load_FUN_004ff400(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_load_FUN_004ff400(CInventory *this_ptr,_FILE *file_handle)

{
  char cVar2;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  CWeapon *pCVar4;
  int iVar5;
  int iVar3;
  CInventory *pCVar6;
  CInventory *pCVar5;
  int iVar7;
  char *pcVar6;
  uint *puVar8;
  char *pcVar9;
  char *pcVar7;
  CDemonActor *pCVar8;
  byte bVar10;
  char local_1dc [256];
  char local_dc [100];
  char local_78 [100];
  int local_14;
  char cVar1;
  
  bVar10 = 0;
  core_inv_cpp_CInventory_clear_FUN_004fd0e0(this_ptr);
  core_inv_cpp_CInventory_initialize_FUN_004fd190(this_ptr);
  _fgets(local_1dc,0xff,file_handle);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&this_ptr->save_version);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&this_ptr->item_count);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,"%d\n",&local_14);
  if (0 < this_ptr->save_version) {
    _fgets(local_1dc,0xff,file_handle);
    _fscanf(file_handle,"%f\n",&this_ptr->battery_charge);
  }
  _fgets(local_1dc,0xff,file_handle);
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pcVar6 = g_DefaultInventoryKey;
      pcVar7 = local_dc;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pcVar7 = *(uint *)pcVar6;
        pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
        pcVar7 = pcVar7 + (uint)bVar10 * -8 + 4;
      }
      puVar8 = (uint *)g_DefaultInventoryValue;
      pcVar6 = local_78;
      for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        *(uint *)pcVar6 = *puVar8;
        puVar8 = puVar8;
        pcVar6 = pcVar6 + (uint)bVar10 * -8 + 4;
      }
      _fscanf(file_handle," %s \"%[^\"]\"\n",local_dc,local_78);
      if (g_CDemonMissionPtr->has_inventory_actors == 0) {
        pcVar9 = local_78;
        pCVar3 = core_actor_cpp_createActorByName_FUN_0040c430(local_dc);
        pCVar8 = pCVar3;
        do {
          cVar1 = *pcVar9;
          pCVar8->actor_name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar2 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pCVar8->actor_name[1] = cVar2;
          pCVar8 = (CDemonActor *)(pCVar8->actor_name + 2);
        } while (cVar2 != '\0');
        pCVar6->items[0] = pCVar3;
      }
      else {
        pCVar2 = core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
                           (g_CDemonMissionPtr,local_78);
        pCVar6->items[0] = pCVar2;
      }
      iVar7 = iVar7 + 1;
      pCVar6 = (CInventory *)&pCVar6->owner;
    } while (iVar7 < this_ptr->item_count);
  }
  _fgets(local_1dc,0xff,file_handle);
  iVar3 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      core_actor_cpp_CDemonActor_load_FUN_0040b050(pCVar5->items[0],file_handle);
      iVar3 = iVar3 + 1;
      pCVar5 = (CInventory *)&pCVar5->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  if (1 < this_ptr->save_version) {
    _fgets(local_1dc,0xff,file_handle);
  }
  iVar3 = g_CDemonMissionPtr->has_inventory_actors;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  this_ptr->preserve_items = iVar3;
  if (-1 < local_14) {
    pCVar4 = (CWeapon *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->items[local_14],g_CWeaponClassInfo.name_hash);
    this_ptr->selected_weapon = pCVar4;
    if (this_ptr->selected_weapon == (CWeapon *)0x0) {
      g_CurrentFilename = "..\\core\\inv.cpp";
      g_CurrentLineNumber = 0x54b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr,999);
  return;
}
