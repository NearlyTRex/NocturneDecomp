// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
// Address: 00522eb0
// Address Range: [[00522eb0, 00523518]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission *this_ptr)

{
  char cVar1;
  FILE *pFVar2;
  CDemonMission *this_ptr_00;
  int iVar3;
  CDemonActorType *pCVar4;
  CDemonActor *pCVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  CDemonActor *pCVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  byte bVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  uint in_stack_00000018;
  FILE *in_stack_0000001c;
  CDemonActor *in_stack_00000020;
  FILE *in_stack_00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000030;
  FILE *in_stack_00000034;
  FILE *in_stack_00000038;
  FILE *in_stack_0000003c;
  uint uStack_c4;
  char acStack_c0 [96];
  uint uStack_60;
  char acStack_5c [60];
  byte local_20 [8];
  int local_18;
  
  this_ptr_00 = this_ptr;
  bVar11 = 0;
  core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
  if (in_stack_00000010 == (FILE *)0x0) {
    core_mission_cpp_FUN_005248e0();
  }
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000014,"%d,%d\n",&this_ptr_00->mission_version_num,local_20);
  if (7 < this_ptr_00->mission_version_num) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xe2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",this_ptr_00->mission_version_num,7);
  }
  if (local_18 < 4) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xe5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("This mission uses actor format version %d, which we don't support anymore!",local_18);
  }
  pFVar2 = in_stack_0000001c;
  if (this_ptr_00->mission_version_num < 2) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("No name in mission");
    pFVar2 = in_stack_0000001c;
  }
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0
            ((FILE *)in_stack_00000020,"%s\n",this_ptr_00->field2_0xc + 0x38);
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000028,"%d\n",&this_ptr_00->set_list);
  if (0 < (int)this_ptr_00->set_list) {
    pcVar9 = this_ptr_00->field4_0x148;
    do {
      iVar3 = iVar3 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000002c,"%s\n","%s\n",pcVar9);
      pcVar9 = pcVar9 + 0x100;
    } while (iVar3 < (int)this_ptr_00->set_list);
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0();
  pFVar2 = in_stack_00000030;
  if (2 < this_ptr_00->mission_version_num) {
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
                    /* this is the count of the different actor types (113) */
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000002c,"%d\n",&this_ptr);
    iVar3 = 0;
    if (0 < in_stack_00000008) {
      do {
        pcVar9 = "corrupt!";
        puVar8 = (uint *)&stack0xfffffed0;
        for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *(uint *)pcVar9;
          pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        }
                    /* this reads actorClassName, actorClassType (version num) */
        crt_stdio_c_fscanf_FUN_005fe7c0
                  (in_stack_00000030,"%s %d\n",&stack0xfffffed0,&stack0x0000000c);
        pCVar4 = core_actor_cpp_getActorClassByName_FUN_0040c3c0(&stack0xfffffed4);
        if (pCVar4 != (CDemonActorType *)0x0) {
          if (pCVar4->type_id < (int)in_stack_00000014) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 0x108;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",&stack0xfffffed8);
          }
          *(int *)pCVar4->type_info = in_stack_0000000c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < in_stack_00000008);
    }
  }
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000030);
    pFVar2 = in_stack_00000034;
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
                    /* this looks like it might be getting actorCount */
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000034,"%d\n");
  in_stack_0000000c = 0;
  if (this_ptr_00->mission_version_num < 6) {
    this_ptr_00->field2_0xc[0] = '\0';
    this_ptr_00->field2_0xc[1] = '\0';
    this_ptr_00->field2_0xc[2] = '\0';
    this_ptr_00->field2_0xc[3] = '\0';
    pFVar2 = in_stack_00000038;
  }
  else {
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
                    /* this pulls the inventory actor count */
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000034,"%d\n");
    this_ptr_00->field2_0xc[0] = '\x01';
    this_ptr_00->field2_0xc[1] = '\0';
    this_ptr_00->field2_0xc[2] = '\0';
    this_ptr_00->field2_0xc[3] = '\0';
    pFVar2 = in_stack_00000038;
  }
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  this_ptr_00->actorCountMaybe = 0;
  this_ptr_00->field6_0x54c[0x33c] = '\0';
  this_ptr_00->field6_0x54c[0x33d] = '\0';
  this_ptr_00->field6_0x54c[0x33e] = '\0';
  this_ptr_00->field6_0x54c[0x33f] = '\0';
  in_stack_00000020 = (CDemonActor *)0x0;
  for (; (int)in_stack_0000001c < in_stack_00000008 + in_stack_0000000c;
      in_stack_0000001c = (FILE *)((int)&in_stack_0000001c->_ptr + 1)) {
    puVar8 = &DAT_0067d5c0;
    puVar10 = &uStack_60;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    puVar8 = &DAT_0067d628;
    puVar10 = &uStack_c4;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
                    /* this pulls in the actor className and name fields */
    crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000038,"%s \"%[^\"]\"\n");
    pcVar9 = acStack_c0;
    pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430(acStack_5c);
    pCVar7 = pCVar5;
    do {
      cVar1 = *pcVar9;
      pCVar7->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pCVar7->actor_name[1] = cVar1;
      pCVar7 = (CDemonActor *)(pCVar7->actor_name + 2);
    } while (cVar1 != '\0');
    in_stack_00000020 = pCVar5;
    core_mission_cpp_CDemonMission_FUN_00523b70(this_ptr_00);
    if (in_stack_00000028 == in_stack_00000014) {
      *(CDemonActor **)(this_ptr_00->field6_0x54c + 0x33c) = pCVar5;
    }
                    /* looks like the max actor count is 1999 */
    if (1999 < this_ptr_00->actorCountMaybe) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x135;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
    }
    *(uint *)(this_ptr_00->field8_0x890 + this_ptr_00->actorCountMaybe * 4) =
         in_stack_00000018;
    this_ptr_00->actorCountMaybe = this_ptr_00->actorCountMaybe + 1;
  }
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000038);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  pCVar7 = this_ptr_00->first_actor;
  iVar3 = 0;
  if (0 < in_stack_0000000c) {
    do {
      if (pCVar7 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\mission.cpp";
        g_CurrentLineNumber = 0x142;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040b050(pCVar7,in_stack_00000034);
      iVar3 = iVar3 + 1;
      pCVar7 = pCVar7->next_actor;
    } while (iVar3 < in_stack_00000008);
  }
  if (*(int *)this_ptr_00->field2_0xc != 0) {
    pCVar7 = this_ptr_00->first_actor;
    iVar3 = 0;
    if (0 < in_stack_00000008) {
      do {
        if (pCVar7 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\mission.cpp";
          g_CurrentLineNumber = 0x14e;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #2!");
        }
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar7,g_CHeroClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          core_inv_cpp_CInventory_loadItems_FUN_004ff740
                    ((CInventory *)(pCVar5[0x176].create_event + 0x30));
        }
        iVar3 = iVar3 + 1;
        pCVar7 = pCVar7->next_actor;
      } while (iVar3 < in_stack_00000008);
    }
    this_ptr_00->field2_0xc[0] = '\0';
    this_ptr_00->field2_0xc[1] = '\0';
    this_ptr_00->field2_0xc[2] = '\0';
    this_ptr_00->field2_0xc[3] = '\0';
  }
  if (pCVar7 != (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x155;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #3!");
  }
  if (*(int *)(this_ptr_00->field6_0x54c + 0x33c) != 0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x156;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #4!");
  }
  this_ptr_00->actorCountMaybe = 0;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x15f);
  pFVar2 = in_stack_0000003c;
  if (*(int *)(this_ptr_00->field2_0xc + 0x30) == 0) {
    if (this_ptr_00->mission_version_num < 4) {
      do {
        iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
        if (iVar3 < 0) break;
      } while (iVar3 != 10);
      do {
        iVar3 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000003c);
        if (iVar3 < 0) break;
      } while (iVar3 != 10);
    }
    this_ptr_00->field0_0x0[0] = -1;
    this_ptr_00->field0_0x0[1] = -1;
    this_ptr_00->field0_0x0[2] = -1;
    this_ptr_00->field0_0x0[3] = -1;
    core_gore_cpp_FUN_004ed760();
    if (6 < this_ptr_00->mission_version_num) {
      core_gore_cpp_FUN_004ee1e0();
      return;
    }
  }
  return;
}
