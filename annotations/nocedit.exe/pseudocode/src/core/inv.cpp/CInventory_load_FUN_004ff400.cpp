// Name: core_inv.cpp_CInventory_load_FUN_004ff400
// Address: 004ff400
// Address Range: [[004ff400, 004ff735]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_load_FUN_004ff400(CInventory * this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_load_FUN_004ff400(CInventory *this_ptr)

{
  char cVar1;
  uint extraout_EAX;
  CDemonActor *pCVar2;
  CWeapon *pCVar3;
  int iVar4;
  FILE *pFVar5;
  CInventory *pCVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  CDemonActor *pCVar11;
  byte bVar12;
  CInventory *in_stack_00000008;
  FILE *in_stack_00000010;
  int in_stack_00000020;
  int in_stack_00000028;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000034;
  CInventory *in_stack_00000038;
  FILE *in_stack_0000003c;
  char acStack_b0 [4];
  uint auStack_ac [24];
  char acStack_4c [60];
  
  bVar12 = 0;
  core_inv_cpp_CInventory_clear_FUN_004fd0e0(this_ptr);
  core_inv_cpp_CInventory_initialize_FUN_004fd190(in_stack_00000008);
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe2c,0xff,in_stack_00000010);
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe30,0xff,in_stack_00000010);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe38,0xff,in_stack_00000010);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe40,0xff,in_stack_00000010);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  if (0 < *(int *)(in_stack_00000028 + 0x32c)) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe48,0xff,in_stack_0000002c);
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000002c,"%f\n");
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe50,0xff,in_stack_00000034);
  iVar7 = 0;
  pFVar5 = in_stack_00000034;
  if (0 < (int)in_stack_00000034->_link) {
    do {
      puVar8 = &DAT_0067ce48;
      puVar10 = auStack_ac;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      puVar8 = &DAT_0067ceb0;
      pcVar9 = acStack_4c + 4;
      for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar9 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
      }
      crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)in_stack_00000038," %s \"%[^\"]\"\n");
      if (*(int *)g_CDemonMissionPtr->field2_0xc == 0) {
        pcVar9 = acStack_4c;
        pCVar2 = core_actor_cpp_createActorByName_FUN_0040c430(acStack_b0);
        pCVar11 = pCVar2;
        do {
          cVar1 = *pcVar9;
          pCVar11->actor_name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pCVar11->actor_name[1] = cVar1;
          pCVar11 = (CDemonActor *)(pCVar11->actor_name + 2);
        } while (cVar1 != '\0');
        pFVar5->_flag = (uint)pCVar2;
      }
      else {
        core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(g_CDemonMissionPtr);
        pFVar5->_flag = extraout_EAX;
      }
      iVar7 = iVar7 + 1;
      pFVar5 = (FILE *)&pFVar5->_cnt;
    } while (iVar7 < (int)in_stack_00000034->_link);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe54,0xff,(FILE *)in_stack_00000038);
  iVar7 = 0;
  pCVar6 = in_stack_00000038;
  if (0 < in_stack_00000038->item_count) {
    do {
      core_actor_cpp_CDemonActor_load_FUN_0040b050(pCVar6->items[0],in_stack_0000003c);
      iVar7 = iVar7 + 1;
      pCVar6 = (CInventory *)&pCVar6->owner;
    } while (iVar7 < in_stack_00000038->item_count);
  }
  if (1 < in_stack_00000038->save_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe58,0xff,in_stack_0000003c);
  }
  iVar7 = *(int *)g_CDemonMissionPtr->field2_0xc;
  in_stack_00000038->selected_weapon = (CWeapon *)0x0;
  in_stack_00000038->preserve_items = iVar7;
  if (-1 < in_stack_00000020) {
    pCVar3 = (CWeapon *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000038->items[in_stack_00000020],g_CWeaponClassInfo.name_hash);
    in_stack_00000038->selected_weapon = pCVar3;
    if (in_stack_00000038->selected_weapon == (CWeapon *)0x0) {
      g_CurrentFilename = "..\\core\\inv.cpp";
      g_CurrentLineNumber = 0x54b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::load - Can't find your weapon");
    }
  }
  core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(in_stack_00000038);
  return;
}
