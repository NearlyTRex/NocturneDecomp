// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
// Address: 00522eb0
// Address Range: [[00522eb0, 00523518]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission *this_ptr)

{
  char cVar1;
  int iVar2;
  CDemonActorType *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CDemonActor *pCVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  FILE *in_stack_00000008;
  int in_stack_0000000c;
  char local_158 [100];
  char local_f4 [100];
  char local_90 [100];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CDemonActor *local_18;
  int local_14;
  
  bVar10 = 0;
  core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
  if (in_stack_0000000c == 0) {
    core_mission_cpp_FUN_005248e0();
  }
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%d,%d\n",&this_ptr->mission_version_num,&local_2c);
  if (7 < this_ptr->mission_version_num) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xe2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",this_ptr->mission_version_num,7);
  }
  if (local_2c < 4) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xe5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if (this_ptr->mission_version_num < 2) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("No name in mission");
  }
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%s\n",this_ptr->unk2 + 0x38);
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&this_ptr->set_list);
  if (0 < (int)this_ptr->set_list) {
    pcVar8 = this_ptr->unk3;
    do {
      iVar2 = iVar2 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%s\n",pcVar8);
      pcVar8 = pcVar8 + 0x100;
    } while (iVar2 < (int)this_ptr->set_list);
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0();
  if (2 < this_ptr->mission_version_num) {
    do {
      iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
                    /* this is the count of the different actor types (113) */
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&local_20);
    iVar2 = 0;
    if (0 < local_20) {
      do {
        pcVar8 = "corrupt!";
        pcVar9 = local_158;
        for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pcVar9 = *(uint *)pcVar8;
          pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
          pcVar9 = (char *)((int)pcVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
                    /* this reads actorClassName, actorClassType (version num) */
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%s %d\n",local_158,&local_1c);
        pCVar3 = core_actor_cpp_getActorClassByName_FUN_0040c3c0(local_158);
        if (pCVar3 != (CDemonActorType *)0x0) {
          if (pCVar3->type_id < local_1c) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 0x108;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",local_158,local_1c,pCVar3->type_id);
          }
          *(int *)pCVar3->type_info = local_1c;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_20);
    }
  }
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
                    /* this looks like it might be getting actorCount */
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&local_28);
  local_24 = 0;
  if (this_ptr->mission_version_num < 6) {
    this_ptr->unk2[0] = '\0';
    this_ptr->unk2[1] = '\0';
    this_ptr->unk2[2] = '\0';
    this_ptr->unk2[3] = '\0';
  }
  else {
    do {
      iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
                    /* this pulls the inventory actor count */
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&local_24);
    this_ptr->unk2[0] = '\x01';
    this_ptr->unk2[1] = '\0';
    this_ptr->unk2[2] = '\0';
    this_ptr->unk2[3] = '\0';
  }
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  this_ptr->actorCountMaybe = 0;
  this_ptr->unk4[0x33c] = '\0';
  this_ptr->unk4[0x33d] = '\0';
  this_ptr->unk4[0x33e] = '\0';
  this_ptr->unk4[0x33f] = '\0';
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    puVar7 = &DAT_0067d5c0;
    pcVar8 = local_90;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
    }
    puVar7 = &DAT_0067d628;
    pcVar8 = local_f4;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
    }
                    /* this pulls in the actor className and name fields */
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%s \"%[^\"]\"\n",local_90,local_f4);
    pcVar8 = local_f4;
    pCVar4 = core_actor_cpp_createActorByName_FUN_0040c430(local_90);
    local_18 = pCVar4;
    pCVar6 = pCVar4;
    do {
      cVar1 = *pcVar8;
      pCVar6->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pCVar6->actor_name[1] = cVar1;
      pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
    } while (cVar1 != '\0');
    core_mission_cpp_CDemonMission_FUN_00523b70(this_ptr);
    if (local_14 == local_28) {
      *(CDemonActor **)(this_ptr->unk4 + 0x33c) = pCVar4;
    }
                    /* looks like the max actor count is 1999 */
    if (1999 < this_ptr->actorCountMaybe) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x135;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
    }
    *(CDemonActor **)(this_ptr->unk5 + this_ptr->actorCountMaybe * 4) = local_18;
    local_14 = local_14 + 1;
    this_ptr->actorCountMaybe = this_ptr->actorCountMaybe + 1;
  }
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  pCVar6 = this_ptr->first_actor;
  iVar2 = 0;
  if (0 < local_28) {
    do {
      if (pCVar6 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\mission.cpp";
        g_CurrentLineNumber = 0x142;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040b050(pCVar6,in_stack_00000008);
      iVar2 = iVar2 + 1;
      pCVar6 = pCVar6->next_actor;
    } while (iVar2 < local_28);
  }
  if (*(int *)this_ptr->unk2 != 0) {
    pCVar6 = this_ptr->first_actor;
    iVar2 = 0;
    if (0 < local_28) {
      do {
        if (pCVar6 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\mission.cpp";
          g_CurrentLineNumber = 0x14e;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #2!");
        }
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar6,g_CHeroClassInfo.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          core_inv_cpp_CInventory_loadItems_FUN_004ff740
                    ((CInventory *)(pCVar4[0x176].create_event + 0x30));
        }
        iVar2 = iVar2 + 1;
        pCVar6 = pCVar6->next_actor;
      } while (iVar2 < local_28);
    }
    this_ptr->unk2[0] = '\0';
    this_ptr->unk2[1] = '\0';
    this_ptr->unk2[2] = '\0';
    this_ptr->unk2[3] = '\0';
  }
  if (pCVar6 != (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x155;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #3!");
  }
  if (*(int *)(this_ptr->unk4 + 0x33c) != 0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x156;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #4!");
  }
  this_ptr->actorCountMaybe = 0;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x15f);
  if (*(int *)(this_ptr->unk2 + 0x30) == 0) {
    if (this_ptr->mission_version_num < 4) {
      do {
        iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      do {
        iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
    }
    this_ptr->unk1[0] = -1;
    this_ptr->unk1[1] = -1;
    this_ptr->unk1[2] = -1;
    this_ptr->unk1[3] = -1;
    core_gore_cpp_FUN_004ed760();
    if (6 < this_ptr->mission_version_num) {
      core_gore_cpp_FUN_004ee1e0();
      return;
    }
  }
  return;
}
