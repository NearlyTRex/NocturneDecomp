// Name: core_inv.cpp_CInventory_load_FUN_004c1190
// Address: 004c1190
// Address Range: [[004c1190, 004c14c5]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_load_FUN_004c1190(CInventory *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_load_FUN_004c1190(CInventory *this_ptr,_FILE *file_handle)

{
  char cVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  CWeapon *pCVar4;
  int iVar5;
  CInventory *pCVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  byte bVar11;
  char local_1dc [256];
  int local_dc [25];
  uint local_78;
  int local_14;
  
  bVar11 = 0;
  core_inv_cpp_CInventory_clear_FUN_004bee80(this_ptr);
  core_inv_cpp_CInventory_initialize_FUN_004bef10(this_ptr);
  _fgets(local_1dc,0xff,file_handle);
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  _fgets(local_1dc,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  if (0 < this_ptr->save_version) {
    _fgets(local_1dc,0xff,file_handle);
    _fscanf(file_handle,"%f\n");
  }
  _fgets(local_1dc,0xff,file_handle);
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      piVar8 = &INT_005bab68;
      piVar10 = local_dc;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
      piVar8 = &INT_005babd0;
      piVar10 = &local_78;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
      _fscanf(file_handle," %s \"%[^\"]\"\n");
      if (0x01CC9450->has_inventory_actors == 0) {
        pcVar9 = (char *)&local_78;
        pCVar3 = core_actor_cpp_createActorByName_FUN_0040d540((char *)local_dc);
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
        pCVar2 = core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640
                           (0x01CC9450,(char *)&local_78);
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
      core_actor_cpp_CDemonActor_load_FUN_0040c160(pCVar6->items[0],file_handle);
      iVar7 = iVar7 + 1;
      pCVar6 = (CInventory *)&pCVar6->owner;
    } while (iVar7 < this_ptr->item_count);
  }
  if (1 < this_ptr->save_version) {
    _fgets(local_1dc,0xff,file_handle);
  }
  iVar7 = 0x01CC9450->has_inventory_actors;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  this_ptr->preserve_items = iVar7;
  if (-1 < local_14) {
    pCVar4 = (CWeapon *)
             core_actor_cpp_castToClassHash_FUN_0040d890
                       (this_ptr->items[local_14],g_CWeaponActorType_02ddf970.name_hash);
    this_ptr->selected_weapon = pCVar4;
    if (this_ptr->selected_weapon == (CWeapon *)0x0) {
      PTR_01cc4800 = "..\\core\\inv.cpp";
      INT_01cc4804 = 0x54b;
      core_main_c_FUN_004c8440("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90(this_ptr,999);
  return;
}
