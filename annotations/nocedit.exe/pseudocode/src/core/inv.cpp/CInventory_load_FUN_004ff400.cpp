// Name: core_inv.cpp_CInventory_load_FUN_004ff400
// Address: 004ff400
// Address Range: [[004ff400, 004ff735]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_load_FUN_004ff400(CInventory * this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_load_FUN_004ff400(CInventory *this_ptr)

{
  char cVar1;
  CDemonActor *extraout_EAX;
  CDemonActor *pCVar2;
  CWeapon *pCVar3;
  int iVar4;
  CInventory *pCVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  CDemonActor *pCVar9;
  byte bVar10;
  FILE *in_stack_00000008;
  char local_1dc [256];
  char local_dc [100];
  char local_78 [100];
  int local_14;
  
  bVar10 = 0;
  core_inv_cpp_CInventory_clear_FUN_004fd0e0(this_ptr);
  core_inv_cpp_CInventory_initialize_FUN_004fd190(this_ptr);
  crt_stdio_c_fgets_FUN_005fefd0(local_1dc,0xff,in_stack_00000008);
  crt_stdio_c_fgets_FUN_005fefd0(local_1dc,0xff,in_stack_00000008);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&this_ptr->save_version);
  crt_stdio_c_fgets_FUN_005fefd0(local_1dc,0xff,in_stack_00000008);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&this_ptr->item_count);
  crt_stdio_c_fgets_FUN_005fefd0(local_1dc,0xff,in_stack_00000008);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&local_14);
  if (0 < this_ptr->save_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_1dc,0xff,in_stack_00000008);
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%f\n",this_ptr);
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_1dc,0xff,in_stack_00000008);
  iVar6 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      puVar7 = &DAT_0067ce48;
      pcVar8 = local_dc;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
      }
      puVar7 = &DAT_0067ceb0;
      pcVar8 = local_78;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008," %s \"%[^\"]\"\n",local_dc,local_78);
      if (*(int *)g_CDemonMissionPtr->unk2 == 0) {
        pcVar8 = local_78;
        pCVar2 = core_actor_cpp_createActorByName_FUN_0040c430(local_dc);
        pCVar9 = pCVar2;
        do {
          cVar1 = *pcVar8;
          pCVar9->actor_name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pCVar9->actor_name[1] = cVar1;
          pCVar9 = (CDemonActor *)(pCVar9->actor_name + 2);
        } while (cVar1 != '\0');
        pCVar5->items[0] = pCVar2;
      }
      else {
        core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(g_CDemonMissionPtr);
        pCVar5->items[0] = extraout_EAX;
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CInventory *)&pCVar5->owner;
    } while (iVar6 < this_ptr->item_count);
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_1dc,0xff,in_stack_00000008);
  iVar6 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      core_actor_cpp_CDemonActor_load_FUN_0040b050(pCVar5->items[0],in_stack_00000008);
      iVar6 = iVar6 + 1;
      pCVar5 = (CInventory *)&pCVar5->owner;
    } while (iVar6 < this_ptr->item_count);
  }
  if (1 < this_ptr->save_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_1dc,0xff,in_stack_00000008);
  }
  iVar6 = *(int *)g_CDemonMissionPtr->unk2;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  this_ptr->preserve_items = iVar6;
  if (-1 < local_14) {
    pCVar3 = (CWeapon *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->items[local_14],g_CWeaponClassInfo.name_hash);
    this_ptr->selected_weapon = pCVar3;
    if (this_ptr->selected_weapon == (CWeapon *)0x0) {
      g_CurrentFilename = "..\\core\\inv.cpp";
      g_CurrentLineNumber = 0x54b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr);
  return;
}
