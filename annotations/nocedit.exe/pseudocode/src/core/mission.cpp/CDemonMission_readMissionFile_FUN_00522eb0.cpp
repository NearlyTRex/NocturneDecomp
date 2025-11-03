// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
// Address: 00522eb0
// Address Range: [[00522eb0, 00523518]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1913 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_load_FUN_00522d90 (00522d90) at 00522dda [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_00638a9f
//   TerminatedCString s_core_mission_cpp_00638aa6
//   TerminatedCString s_Invalid_mission_version__00638aba
//   TerminatedCString s_core_mission_cpp_00638b16
//   TerminatedCString s_This_mission_uses_actor__00638b2a
//   TerminatedCString s_core_mission_cpp_00638b75
//   TerminatedCString s_No_name_in_mission_00638b89
//   TerminatedCString s_s_00638b9c
//   TerminatedCString s_d_00638ba0
//   TerminatedCString s_s_00638ba4
//   TerminatedCString s_d_00638ba8
//   TerminatedCString s_s_d_00638bac
//   TerminatedCString s_core_mission_cpp_00638bb3
//   TerminatedCString s_Actor_type_s_is_saved_in_00638bc7
//   TerminatedCString s_d_00638c30
//   TerminatedCString s_d_00638c34
//   TerminatedCString s_s_00638c38
//   TerminatedCString s_core_mission_cpp_00638c44
//   TerminatedCString s_Too_many_actors_00638c58
//   TerminatedCString s_core_mission_cpp_00638c68
//   TerminatedCString s_CDemonMission_load_actor_00638c7c
//   TerminatedCString s_core_mission_cpp_00638cb0
//   TerminatedCString s_CDemonMission_load_actor_00638cc4
//   TerminatedCString s_core_mission_cpp_00638cf8
//   TerminatedCString s_CDemonMission_load_actor_00638d0c
//   TerminatedCString s_core_mission_cpp_00638d40
//   TerminatedCString s_CDemonMission_load_actor_00638d54
//   TerminatedCString s_core_mission_cpp_00638d88
//   CGore* g_CGorePtr = 02d83364
//   TerminatedCString s_corrupt_0067d558
//   undefined4 s_upt!_0067d55c
//   undefined4 DAT_0067d5c0
//   undefined4 DAT_0067d5c4
//   undefined4 DAT_0067d628
//   undefined4 DAT_0067d62c
//   CGore g_CGoreInstance
//   undefined4 g_CHeroClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_load_FUN_0040b050
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_actor.cpp_getActorClassByName_FUN_0040c3c0
//   core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
//   core_gore.cpp_FUN_004ed760
//   core_gore.cpp_FUN_004ee1e0
//   core_inv.cpp_CInventory_loadItems_FUN_004ff740
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_FUN_005248e0
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0

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
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  undefined4 in_stack_00000018;
  FILE *in_stack_0000001c;
  CDemonActor *in_stack_00000020;
  FILE *in_stack_00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000030;
  FILE *in_stack_00000034;
  FILE *in_stack_00000038;
  FILE *in_stack_0000003c;
  undefined4 uStack_c4;
  char acStack_c0 [96];
  undefined4 uStack_60;
  char acStack_5c [60];
  undefined1 local_20 [8];
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
        puVar8 = (undefined4 *)&stack0xfffffed0;
        for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *(undefined4 *)pcVar9;
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
    *(undefined4 *)(this_ptr_00->field8_0x890 + this_ptr_00->actorCountMaybe * 4) =
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


// Assembly code:
// 00522eb0: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
// 00522eb1: PUSH ESI
// 00522eb2: PUSH EDI
// 00522eb3: PUSH EBP
// 00522eb4: SUB ESP,0x148
// 00522eba: MOV EBX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[0x4] (READ)
// 00522ec1: PUSH EBX
// 00522ec2: CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
//   XREF to: 00522d30 (UNCONDITIONAL_CALL)
// 00522ec7: ADD ESP,0x4
// 00522eca: CMP dword ptr [ESP + 0x164],0x0
//   XREF to: Stack[0xc] (READ)
// 00522ed2: JZ 0x005233b8
//   XREF to: 005233b8 (CONDITIONAL_JUMP)
// 00522ed8: MOV ESI,dword ptr [ESP + 0x160]
//   Label: LAB_00522ed8
//   XREF to: Stack[0x8] (READ)
// 00522edf: PUSH ESI
//   Label: LAB_00522edf
// 00522ee0: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00522ee5: ADD ESP,0x4
// 00522ee8: TEST EAX,EAX
// 00522eea: JL 0x00522ef1
//   XREF to: 00522ef1 (CONDITIONAL_JUMP)
// 00522eec: CMP EAX,0xa
// 00522eef: JNZ 0x00522edf
//   XREF to: 00522edf (CONDITIONAL_JUMP)
// 00522ef1: LEA EAX,[ESP + 0x12c]
//   Label: LAB_00522ef1
//   XREF to: Stack[-0x2c] (DATA)
// 00522ef8: PUSH EAX
// 00522ef9: LEA EAX,[EBX + 0x8]
// 00522efc: PUSH EAX
// 00522efd: PUSH 0x638a9f
//   XREF to: 00638a9f (DATA)
// 00522f02: MOV ECX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[0x8] (READ)
// 00522f09: PUSH ECX
// 00522f0a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00522f0f: MOV ESI,dword ptr [EBX + 0x8]
// 00522f12: ADD ESP,0x10
// 00522f15: CMP ESI,0x7
// 00522f18: JLE 0x00522f40
//   XREF to: 00522f40 (CONDITIONAL_JUMP)
// 00522f1a: PUSH 0x7
// 00522f1c: PUSH ESI
// 00522f1d: MOV EDI,0x638aa6
//   XREF to: 00638aa6 (DATA)
// 00522f22: MOV EBP,0xe2
// 00522f27: PUSH 0x638aba
//   XREF to: 00638aba (DATA)
// 00522f2c: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00522f32: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00522f38: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00522f3d: ADD ESP,0xc
// 00522f40: MOV EDX,dword ptr [ESP + 0x12c]
//   Label: LAB_00522f40
//   XREF to: Stack[-0x2c] (READ)
// 00522f47: CMP EDX,0x4
// 00522f4a: JGE 0x00522f70
//   XREF to: 00522f70 (CONDITIONAL_JUMP)
// 00522f4c: PUSH EDX
// 00522f4d: MOV ECX,0x638b16
//   XREF to: 00638b16 (PARAM)
// 00522f52: MOV ESI,0xe5
// 00522f57: PUSH 0x638b2a
//   XREF to: 00638b2a (DATA)
// 00522f5c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00522f62: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00522f68: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00522f6d: ADD ESP,0x8
// 00522f70: CMP dword ptr [EBX + 0x8],0x2
//   Label: LAB_00522f70
// 00522f74: JL 0x005233c6
//   XREF to: 005233c6 (CONDITIONAL_JUMP)
// 00522f7a: MOV ESI,dword ptr [ESP + 0x160]
//   Label: LAB_00522f7a
//   XREF to: Stack[0x8] (READ)
// 00522f81: PUSH ESI
//   Label: LAB_00522f81
// 00522f82: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00522f87: ADD ESP,0x4
// 00522f8a: TEST EAX,EAX
// 00522f8c: JL 0x00522f93
//   XREF to: 00522f93 (CONDITIONAL_JUMP)
// 00522f8e: CMP EAX,0xa
// 00522f91: JNZ 0x00522f81
//   XREF to: 00522f81 (CONDITIONAL_JUMP)
// 00522f93: LEA EAX,[EBX + 0x44]
//   Label: LAB_00522f93
// 00522f96: PUSH EAX
// 00522f97: PUSH 0x638b9c
//   XREF to: 00638b9c (DATA)
// 00522f9c: MOV ECX,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x8] (READ)
// 00522fa3: PUSH ECX
// 00522fa4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00522fa9: ADD ESP,0xc
// 00522fac: MOV ESI,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x8] (READ)
// 00522fb3: PUSH ESI
//   Label: LAB_00522fb3
// 00522fb4: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00522fb9: ADD ESP,0x4
// 00522fbc: TEST EAX,EAX
// 00522fbe: JL 0x00522fc5
//   XREF to: 00522fc5 (CONDITIONAL_JUMP)
// 00522fc0: CMP EAX,0xa
// 00522fc3: JNZ 0x00522fb3
//   XREF to: 00522fb3 (CONDITIONAL_JUMP)
// 00522fc5: LEA EAX,[EBX + 0x144]
//   Label: LAB_00522fc5
// 00522fcb: PUSH EAX
// 00522fcc: PUSH 0x638ba0
//   XREF to: 00638ba0 (DATA)
// 00522fd1: MOV ESI,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x8] (READ)
// 00522fd8: PUSH ESI
// 00522fd9: XOR EBP,EBP
// 00522fdb: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00522fe0: MOV EDI,dword ptr [EBX + 0x144]
// 00522fe6: ADD ESP,0xc
// 00522fe9: TEST EDI,EDI
// 00522feb: JLE 0x00523020
//   XREF to: 00523020 (CONDITIONAL_JUMP)
// 00522fed: LEA ESI,[EBX + 0x148]
// 00522ff3: PUSH ESI
//   Label: LAB_00522ff3
// 00522ff4: PUSH 0x638ba4
//   XREF to: 00638ba4 (DATA)
// 00522ff9: MOV EAX,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x8] (READ)
// 00523000: PUSH EAX
// 00523001: INC EBP
// 00523002: ADD ESI,0x100
// 00523008: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052300d: MOV EDX,dword ptr [EBX + 0x144]
// 00523013: ADD ESP,0xc
// 00523016: CMP EBP,EDX
// 00523018: JL 0x00522ff3
//   XREF to: 00522ff3 (CONDITIONAL_JUMP)
// 0052301a: LEA EAX,[EAX]
// 00523020: CALL core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
//   Label: LAB_00523020
//   XREF to: 0040c7f0 (UNCONDITIONAL_CALL)
// 00523025: CMP dword ptr [EBX + 0x8],0x3
// 00523029: JL 0x00523115
//   XREF to: 00523115 (CONDITIONAL_JUMP)
// 0052302f: MOV ESI,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x8] (READ)
// 00523036: PUSH ESI
//   Label: LAB_00523036
// 00523037: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052303c: ADD ESP,0x4
// 0052303f: TEST EAX,EAX
// 00523041: JL 0x00523048
//   XREF to: 00523048 (CONDITIONAL_JUMP)
// 00523043: CMP EAX,0xa
// 00523046: JNZ 0x00523036
//   XREF to: 00523036 (CONDITIONAL_JUMP)
// 00523048: LEA EAX,[ESP + 0x138]
//   Label: LAB_00523048
//   XREF to: Stack[-0x20] (DATA)
// 0052304f: PUSH EAX
// 00523050: PUSH 0x638ba8
//   XREF to: 00638ba8 (DATA)
// 00523055: MOV ESI,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x8] (READ)
// 0052305c: PUSH ESI
// 0052305d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00523062: ADD ESP,0xc
// 00523065: MOV EDI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x20] (READ)
// 0052306c: XOR EBP,EBP
// 0052306e: TEST EDI,EDI
// 00523070: JLE 0x00523115
//   XREF to: 00523115 (CONDITIONAL_JUMP)
// 00523076: LEA EAX,[ESP + 0x13c]
//   Label: LAB_00523076
//   XREF to: Stack[-0x1c] (DATA)
// 0052307d: PUSH EAX
// 0052307e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x158] (DATA)
// 00523082: PUSH EAX
// 00523083: MOV ECX,0x19
// 00523088: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x158] (DATA)
// 0052308c: PUSH 0x638bac
//   XREF to: 00638bac (DATA)
// 00523091: MOV EDX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[0x8] (READ)
// 00523098: MOV ESI,0x67d558
//   XREF to: 0067d558 (DATA)
// 0052309d: PUSH EDX
// 0052309e: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067d558 (READ)
//   XREF to: 0067d55c (READ)
// 005230a0: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005230a5: ADD ESP,0x10
// 005230a8: MOV EAX,ESP
// 005230aa: PUSH EAX
// 005230ab: CALL core_actor.cpp_getActorClassByName_FUN_0040c3c0
//   XREF to: 0040c3c0 (UNCONDITIONAL_CALL)
// 005230b0: MOV ESI,EAX
// 005230b2: ADD ESP,0x4
// 005230b5: MOV EDI,EAX
// 005230b7: TEST EAX,EAX
// 005230b9: JZ 0x00523105
//   XREF to: 00523105 (CONDITIONAL_JUMP)
// 005230bb: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x1c] (READ)
// 005230c2: MOV ECX,dword ptr [ESI + 0x34]
// 005230c5: CMP EAX,ECX
// 005230c7: JLE 0x005230f9
//   XREF to: 005230f9 (CONDITIONAL_JUMP)
// 005230c9: PUSH ECX
// 005230ca: MOV ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x1c] (READ)
// 005230d1: MOV EAX,0x638bb3
//   XREF to: 00638bb3 (DATA)
// 005230d6: PUSH ESI
// 005230d7: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005230dc: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x158] (DATA)
// 005230e0: PUSH EAX
// 005230e1: MOV EDX,0x108
// 005230e6: PUSH 0x638bc7
//   XREF to: 00638bc7 (DATA)
// 005230eb: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005230f1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005230f6: ADD ESP,0x10
// 005230f9: MOV ESI,dword ptr [EDI + 0x30]
//   Label: LAB_005230f9
// 005230fc: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x1c] (READ)
// 00523103: MOV dword ptr [ESI],EAX
// 00523105: MOV EAX,dword ptr [ESP + 0x138]
//   Label: LAB_00523105
//   XREF to: Stack[-0x20] (READ)
// 0052310c: INC EBP
// 0052310d: CMP EBP,EAX
// 0052310f: JL 0x00523076
//   XREF to: 00523076 (CONDITIONAL_JUMP)
// 00523115: MOV ESI,dword ptr [ESP + 0x160]
//   Label: LAB_00523115
//   XREF to: Stack[0x8] (READ)
// 0052311c: PUSH ESI
//   Label: LAB_0052311c
// 0052311d: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00523122: ADD ESP,0x4
// 00523125: TEST EAX,EAX
// 00523127: JL 0x0052312e
//   XREF to: 0052312e (CONDITIONAL_JUMP)
// 00523129: CMP EAX,0xa
// 0052312c: JNZ 0x0052311c
//   XREF to: 0052311c (CONDITIONAL_JUMP)
// 0052312e: LEA EAX,[ESP + 0x130]
//   Label: LAB_0052312e
//   XREF to: Stack[-0x28] (DATA)
// 00523135: PUSH EAX
// 00523136: PUSH 0x638c30
//   XREF to: 00638c30 (DATA)
// 0052313b: MOV EDI,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x8] (READ)
// 00523142: PUSH EDI
// 00523143: XOR EBP,EBP
// 00523145: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052314a: ADD ESP,0xc
// 0052314d: MOV dword ptr [ESP + 0x134],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00523154: CMP dword ptr [EBX + 0x8],0x6
// 00523158: JL 0x005233ed
//   XREF to: 005233ed (CONDITIONAL_JUMP)
// 0052315e: MOV ESI,EDI
// 00523160: PUSH ESI
//   Label: LAB_00523160
// 00523161: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00523166: ADD ESP,0x4
// 00523169: TEST EAX,EAX
// 0052316b: JL 0x00523172
//   XREF to: 00523172 (CONDITIONAL_JUMP)
// 0052316d: CMP EAX,0xa
// 00523170: JNZ 0x00523160
//   XREF to: 00523160 (CONDITIONAL_JUMP)
// 00523172: LEA EAX,[ESP + 0x134]
//   Label: LAB_00523172
//   XREF to: Stack[-0x24] (DATA)
// 00523179: PUSH EAX
// 0052317a: PUSH 0x638c34
//   XREF to: 00638c34 (DATA)
// 0052317f: MOV EDX,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x8] (READ)
// 00523186: PUSH EDX
// 00523187: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052318c: ADD ESP,0xc
// 0052318f: MOV dword ptr [EBX + 0xc],0x1
// 00523196: MOV ESI,dword ptr [ESP + 0x160]
//   Label: LAB_00523196
//   XREF to: Stack[0x8] (READ)
// 0052319d: PUSH ESI
//   Label: LAB_0052319d
// 0052319e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005231a3: ADD ESP,0x4
// 005231a6: TEST EAX,EAX
// 005231a8: JL 0x005231af
//   XREF to: 005231af (CONDITIONAL_JUMP)
// 005231aa: CMP EAX,0xa
// 005231ad: JNZ 0x0052319d
//   XREF to: 0052319d (CONDITIONAL_JUMP)
// 005231af: MOV dword ptr [EBX + 0x88c],0x0
//   Label: LAB_005231af
// 005231b9: XOR ECX,ECX
// 005231bb: MOV dword ptr [EBX + 0x888],0x0
// 005231c5: MOV dword ptr [ESP + 0x144],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005231cc: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_005231cc
//   XREF to: Stack[-0x28] (READ)
// 005231d3: MOV ESI,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x24] (READ)
// 005231da: MOV EDI,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x14] (READ)
// 005231e1: ADD EAX,ESI
// 005231e3: CMP EAX,EDI
// 005231e5: JG 0x005233f5
//   XREF to: 005233f5 (CONDITIONAL_JUMP)
// 005231eb: MOV ESI,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x8] (READ)
// 005231f2: PUSH ESI
//   Label: LAB_005231f2
// 005231f3: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005231f8: ADD ESP,0x4
// 005231fb: TEST EAX,EAX
// 005231fd: JL 0x00523204
//   XREF to: 00523204 (CONDITIONAL_JUMP)
// 005231ff: CMP EAX,0xa
// 00523202: JNZ 0x005231f2
//   XREF to: 005231f2 (CONDITIONAL_JUMP)
// 00523204: MOV EDX,dword ptr [ESP + 0x130]
//   Label: LAB_00523204
//   XREF to: Stack[-0x28] (READ)
// 0052320b: MOV ESI,dword ptr [EBX + 0x548]
// 00523211: XOR EBP,EBP
// 00523213: TEST EDX,EDX
// 00523215: JLE 0x00523261
//   XREF to: 00523261 (CONDITIONAL_JUMP)
// 00523217: TEST ESI,ESI
//   Label: LAB_00523217
// 00523219: JNZ 0x0052323e
//   XREF to: 0052323e (CONDITIONAL_JUMP)
// 0052321b: MOV EDX,0x638c68
//   XREF to: 00638c68 (PARAM)
// 00523220: MOV ECX,0x142
// 00523225: PUSH 0x638c7c
//   XREF to: 00638c7c (DATA)
// 0052322a: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00523230: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00523236: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052323b: ADD ESP,0x4
// 0052323e: MOV ECX,dword ptr [ESP + 0x160]
//   Label: LAB_0052323e
//   XREF to: Stack[0x8] (READ)
// 00523245: PUSH ECX
// 00523246: PUSH ESI
// 00523247: CALL core_actor.cpp_CDemonActor_load_FUN_0040b050
//   XREF to: 0040b050 (UNCONDITIONAL_CALL)
// 0052324c: ADD ESP,0x8
// 0052324f: INC EBP
// 00523250: MOV EDI,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 00523257: MOV ESI,dword ptr [ESI + 0x14c]
// 0052325d: CMP EBP,EDI
// 0052325f: JL 0x00523217
//   XREF to: 00523217 (CONDITIONAL_JUMP)
// 00523261: CMP dword ptr [EBX + 0xc],0x0
//   Label: LAB_00523261
// 00523265: JZ 0x005232df
//   XREF to: 005232df (CONDITIONAL_JUMP)
// 0052326b: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 00523272: MOV ESI,dword ptr [EBX + 0x548]
// 00523278: XOR EBP,EBP
// 0052327a: TEST EAX,EAX
// 0052327c: JLE 0x005232d8
//   XREF to: 005232d8 (CONDITIONAL_JUMP)
// 0052327e: TEST ESI,ESI
//   Label: LAB_0052327e
// 00523280: JNZ 0x005232a4
//   XREF to: 005232a4 (CONDITIONAL_JUMP)
// 00523282: MOV EAX,0x638cb0
//   XREF to: 00638cb0 (PARAM)
// 00523287: MOV EDX,0x14e
// 0052328c: PUSH 0x638cc4
//   XREF to: 00638cc4 (DATA)
// 00523291: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00523296: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0052329c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005232a1: ADD ESP,0x4
// 005232a4: MOV ECX,dword ptr [0x02db880c]
//   Label: LAB_005232a4
//   XREF to: 02db880c (READ)
// 005232aa: PUSH ECX
// 005232ab: PUSH ESI
// 005232ac: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005232b1: ADD ESP,0x8
// 005232b4: TEST EAX,EAX
// 005232b6: JZ 0x005232c6
//   XREF to: 005232c6 (CONDITIONAL_JUMP)
// 005232b8: ADD EAX,0x1f738
// 005232bd: PUSH EAX
// 005232be: CALL core_inv.cpp_CInventory_loadItems_FUN_004ff740
//   XREF to: 004ff740 (UNCONDITIONAL_CALL)
// 005232c3: ADD ESP,0x4
// 005232c6: MOV EDI,dword ptr [ESP + 0x130]
//   Label: LAB_005232c6
//   XREF to: Stack[-0x28] (READ)
// 005232cd: INC EBP
// 005232ce: MOV ESI,dword ptr [ESI + 0x14c]
// 005232d4: CMP EBP,EDI
// 005232d6: JL 0x0052327e
//   XREF to: 0052327e (CONDITIONAL_JUMP)
// 005232d8: MOV dword ptr [EBX + 0xc],0x0
//   Label: LAB_005232d8
// 005232df: TEST ESI,ESI
//   Label: LAB_005232df
// 005232e1: JZ 0x00523306
//   XREF to: 00523306 (CONDITIONAL_JUMP)
// 005232e3: MOV ESI,0x638cf8
//   XREF to: 00638cf8 (DATA)
// 005232e8: MOV EDI,0x155
// 005232ed: PUSH 0x638d0c
//   XREF to: 00638d0c (DATA)
// 005232f2: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005232f8: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005232fe: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00523303: ADD ESP,0x4
// 00523306: CMP dword ptr [EBX + 0x888],0x0
//   Label: LAB_00523306
// 0052330d: JZ 0x00523331
//   XREF to: 00523331 (CONDITIONAL_JUMP)
// 0052330f: MOV EAX,0x638d40
//   XREF to: 00638d40 (PARAM)
// 00523314: MOV EDX,0x156
// 00523319: PUSH 0x638d54
//   XREF to: 00638d54 (DATA)
// 0052331e: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00523323: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00523329: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052332e: ADD ESP,0x4
// 00523331: PUSH 0x15f
//   Label: LAB_00523331
// 00523336: PUSH 0x638d88
//   XREF to: 00638d88 (DATA)
// 0052333b: MOV dword ptr [EBX + 0x88c],0x0
// 00523345: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 0052334a: MOV ECX,dword ptr [EBX + 0x3c]
// 0052334d: ADD ESP,0x8
// 00523350: TEST ECX,ECX
// 00523352: JNZ 0x005233ad
//   XREF to: 005233ad (CONDITIONAL_JUMP)
// 00523354: CMP dword ptr [EBX + 0x8],0x4
// 00523358: JGE 0x0052338c
//   XREF to: 0052338c (CONDITIONAL_JUMP)
// 0052335a: MOV ESI,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x8] (READ)
// 00523361: PUSH ESI
//   Label: LAB_00523361
// 00523362: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00523367: ADD ESP,0x4
// 0052336a: TEST EAX,EAX
// 0052336c: JL 0x00523373
//   XREF to: 00523373 (CONDITIONAL_JUMP)
// 0052336e: CMP EAX,0xa
// 00523371: JNZ 0x00523361
//   XREF to: 00523361 (CONDITIONAL_JUMP)
// 00523373: MOV ESI,dword ptr [ESP + 0x160]
//   Label: LAB_00523373
//   XREF to: Stack[0x8] (READ)
// 0052337a: PUSH ESI
//   Label: LAB_0052337a
// 0052337b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00523380: ADD ESP,0x4
// 00523383: TEST EAX,EAX
// 00523385: JL 0x0052338c
//   XREF to: 0052338c (CONDITIONAL_JUMP)
// 00523387: CMP EAX,0xa
// 0052338a: JNZ 0x0052337a
//   XREF to: 0052337a (CONDITIONAL_JUMP)
// 0052338c: MOV EDI,dword ptr [0x0067b9a0]
//   Label: LAB_0052338c
//   XREF to: 0067b9a0 (READ)
// 00523392: PUSH EDI
//   XREF to: 02d83364 (DATA)
// 00523393: MOV dword ptr [EBX],0xffffffff
// 00523399: CALL core_gore.cpp_FUN_004ed760
//   XREF to: 004ed760 (UNCONDITIONAL_CALL)
// 0052339e: MOV EBP,dword ptr [EBX + 0x8]
// 005233a1: ADD ESP,0x4
// 005233a4: CMP EBP,0x7
// 005233a7: JGE 0x005234f7
//   XREF to: 005234f7 (CONDITIONAL_JUMP)
// 005233ad: ADD ESP,0x148
//   Label: LAB_005233ad
// 005233b3: POP EBP
// 005233b4: POP EDI
// 005233b5: POP ESI
// 005233b6: POP EBX
// 005233b7: RET
// 005233b8: PUSH EBX
//   Label: LAB_005233b8
// 005233b9: CALL core_mission.cpp_FUN_005248e0
//   XREF to: 005248e0 (UNCONDITIONAL_CALL)
// 005233be: ADD ESP,0x4
// 005233c1: JMP 0x00522ed8
//   XREF to: 00522ed8 (UNCONDITIONAL_JUMP)
// 005233c6: MOV EAX,0x638b75
//   Label: LAB_005233c6
//   XREF to: 00638b75 (PARAM)
// 005233cb: MOV EDX,0xea
// 005233d0: PUSH 0x638b89
//   XREF to: 00638b89 (DATA)
// 005233d5: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005233da: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005233e0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005233e5: ADD ESP,0x4
// 005233e8: JMP 0x00522f7a
//   XREF to: 00522f7a (UNCONDITIONAL_JUMP)
// 005233ed: MOV dword ptr [EBX + 0xc],EBP
//   Label: LAB_005233ed
// 005233f0: JMP 0x00523196
//   XREF to: 00523196 (UNCONDITIONAL_JUMP)
// 005233f5: MOV ECX,0x19
//   Label: LAB_005233f5
// 005233fa: LEA EDI,[ESP + 0xc8]
//   XREF to: Stack[-0x90] (DATA)
// 00523401: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0xf4] (DATA)
// 00523405: MOV ESI,0x67d5c0
//   XREF to: 0067d5c0 (DATA)
// 0052340a: PUSH EAX
// 0052340b: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x90] (DATA)
// 00523412: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067d5c0 (READ)
//   XREF to: 0067d5c4 (READ)
// 00523414: PUSH EAX
// 00523415: MOV EBP,dword ptr [ESP + 0x168]
//   XREF to: Stack[0x8] (READ)
// 0052341c: MOV ECX,0x19
// 00523421: PUSH 0x638c38
//   XREF to: 00638c38 (DATA)
// 00523426: LEA EDI,[ESP + 0x70]
//   XREF to: Stack[-0xf4] (DATA)
// 0052342a: MOV ESI,0x67d628
//   XREF to: 0067d628 (DATA)
// 0052342f: PUSH EBP
// 00523430: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067d628 (READ)
//   XREF to: 0067d62c (READ)
// 00523432: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00523437: ADD ESP,0x10
// 0052343a: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0x90] (DATA)
// 00523441: PUSH EAX
// 00523442: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0xf4] (DATA)
// 00523446: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 0052344b: MOV EBP,EAX
// 0052344d: ADD ESP,0x4
// 00523450: MOV EDI,EAX
// 00523452: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00523459: PUSH EDI
// 0052345a: MOV AL,byte ptr [ESI]
//   Label: LAB_0052345a
//   XREF to: Stack[-0xf4] (DATA)
// 0052345c: MOV byte ptr [EDI],AL
// 0052345e: CMP AL,0x0
// 00523460: JZ 0x00523472
//   XREF to: 00523472 (CONDITIONAL_JUMP)
// 00523462: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xf3] (READ)
// 00523465: ADD ESI,0x2
// 00523468: MOV byte ptr [EDI + 0x1],AL
// 0052346b: ADD EDI,0x2
// 0052346e: CMP AL,0x0
// 00523470: JNZ 0x0052345a
//   XREF to: 0052345a (CONDITIONAL_JUMP)
// 00523472: POP EDI
//   Label: LAB_00523472
// 00523473: PUSH EBP
// 00523474: PUSH EBX
// 00523475: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 0052347a: ADD ESP,0x8
// 0052347d: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x14] (READ)
// 00523484: CMP EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 0052348b: JNZ 0x00523493
//   XREF to: 00523493 (CONDITIONAL_JUMP)
// 0052348d: MOV dword ptr [EBX + 0x888],EBP
// 00523493: CMP dword ptr [EBX + 0x88c],0x7d0
//   Label: LAB_00523493
// 0052349d: JL 0x005234c2
//   XREF to: 005234c2 (CONDITIONAL_JUMP)
// 0052349f: MOV ESI,0x638c44
//   XREF to: 00638c44 (DATA)
// 005234a4: MOV EDI,0x135
// 005234a9: PUSH 0x638c58
//   XREF to: 00638c58 (DATA)
// 005234ae: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005234b4: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005234ba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005234bf: ADD ESP,0x4
// 005234c2: MOV EAX,dword ptr [EBX + 0x88c]
//   Label: LAB_005234c2
// 005234c8: MOV ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x18] (READ)
// 005234cf: MOV dword ptr [EBX + EAX*0x4 + 0x890],ESI
// 005234d6: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x14] (READ)
// 005234dd: MOV EBP,dword ptr [EBX + 0x88c]
// 005234e3: INC EAX
// 005234e4: INC EBP
// 005234e5: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005234ec: MOV dword ptr [EBX + 0x88c],EBP
// 005234f2: JMP 0x005231cc
//   XREF to: 005231cc (UNCONDITIONAL_JUMP)
// 005234f7: MOV EAX,dword ptr [ESP + 0x160]
//   Label: LAB_005234f7
//   XREF to: Stack[0x8] (READ)
// 005234fe: PUSH EAX
// 005234ff: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 00523505: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 00523506: CALL core_gore.cpp_FUN_004ee1e0
//   XREF to: 004ee1e0 (UNCONDITIONAL_CALL)
// 0052350b: ADD ESP,0x8
// 0052350e: ADD ESP,0x148
// 00523514: POP EBP
// 00523515: POP EDI
// 00523516: POP ESI
// 00523517: POP EBX
// 00523518: RET
