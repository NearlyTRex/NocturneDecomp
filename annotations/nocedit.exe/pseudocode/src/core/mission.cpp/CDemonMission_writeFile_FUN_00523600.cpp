// Name: core_mission.cpp_CDemonMission_writeFile_FUN_00523600
// Address: 00523600
// Address Range: [[00523600, 0052398f]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0de0 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_save_FUN_00522e30 (00522e30) at 00522e67 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_00638e50
//   TerminatedCString s_Preparing_actors_00638e64
//   TerminatedCString s_mission_version_actor_ve_00638e78
//   TerminatedCString s_d_d_00638e9b
//   TerminatedCString s_Root_name_of_mission_00638ea2
//   TerminatedCString s_s_00638ebb
//   TerminatedCString s_setList_00638ebf
//   TerminatedCString s_d_00638ecb
//   TerminatedCString s_s_00638ecf
//   TerminatedCString s_actorTypeList_00638ed3
//   TerminatedCString s_d_00638ee5
//   TerminatedCString s_s_d_00638ee9
//   TerminatedCString s_actor_count_00638ef0
//   TerminatedCString s_d_00638f00
//   TerminatedCString s_inventory_actor_count_00638f04
//   TerminatedCString s_d_00638f1e
//   TerminatedCString s_actor_name_list_00638f22
//   TerminatedCString s_s_s_00638f36
//   TerminatedCString s_core_mission_cpp_00638f3f
//   TerminatedCString s_Too_many_actors_00638f53
//   TerminatedCString s_core_mission_cpp_00638f63
//   TerminatedCString s_Too_many_actors_00638f77
//   TerminatedCString s_actor_data_list_00638f87
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGore* g_CGorePtr = 02d83364
//   int g_NumActorClassTypes
//   CDemonActorType*[200] g_ActorClassRegistrations
//   undefined4 g_ActorClassRegistrations[1]
//   CEditorTools g_CEditorToolsPtr
//   CGore g_CGoreInstance
//   undefined4 g_CHeroClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_actor.cpp_CDemonActor_save_FUN_0040af30
//   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   core_gore.cpp_FUN_004ee290
//   core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00523cc0
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CInventory *pCVar3;
  char *pcStack00000010;
  FILE *in_stack_00000014;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000030;
  CDemonActor *pCVar4;
  FILE *in_stack_00000038;
  FILE *in_stack_00000040;
  FILE *in_stack_00000044;
  FILE *in_stack_00000048;
  FILE *in_stack_0000004c;
  FILE *in_stack_00000050;
  FILE *in_stack_00000054;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x1ae);
  if (*(int *)(this_ptr->field6_0x54c + 0x338) == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Preparing actors...");
    core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
  }
  this_ptr->mission_version_num = 7;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// mission version, actor version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"%d,%d\n",this_ptr->mission_version_num,4)
  ;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// Root name of mission\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"// setList\n");
  iVar2 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"%d\n");
  if (0 < (int)this_ptr->set_list) {
    do {
      iVar2 = iVar2 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000002c,"%s\n");
    } while (iVar2 < (int)this_ptr->set_list);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000002c,"// actorTypeList\n");
  pcStack00000010 = (char *)g_NumActorClassTypes;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000030,"%d\n");
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  iVar2 = 0;
  if (0 < g_NumActorClassTypes) {
    do {
      pcStack00000010 = "%s %d\n";
      iVar2 = iVar2 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000038,"%s %d\n");
    } while (iVar2 < g_NumActorClassTypes);
  }
  pcStack00000010 = (char *)0x52376f;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000038,"// actor count\n");
  core_mission_cpp_CDemonMission_FUN_00523cc0(this_ptr);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000040,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000044,"// inventory actor count\n");
  for (pCVar4 = this_ptr->first_actor; pCVar4 != (CDemonActor *)0x0; pCVar4 = pCVar4->next_actor) {
    core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,g_CHeroClassInfo.name_hash);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"// actor name list\n");
  pCVar4 = this_ptr->first_actor;
  this_ptr->actorCountMaybe = 0;
  for (; pCVar4 != (CDemonActor *)0x0; pCVar4 = pCVar4->next_actor) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar4);
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000048,"%s \"%s\"\n");
    if (1999 < this_ptr->actorCountMaybe) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x1e9;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
    }
    *(CDemonActor **)(this_ptr->field8_0x890 + this_ptr->actorCountMaybe * 4) = pCVar4;
    this_ptr->actorCountMaybe = this_ptr->actorCountMaybe + 1;
  }
  for (pCVar4 = this_ptr->first_actor; pCVar4 != (CDemonActor *)0x0; pCVar4 = pCVar4->next_actor) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,g_CHeroClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) {
      pCVar3 = (CInventory *)(pCVar1[0x176].create_event + 0x30);
      for (iVar2 = 0; iVar2 < *(int *)(pCVar1[0x176].create_event + 0x38); iVar2 = iVar2 + 1) {
        if (1999 < this_ptr->actorCountMaybe) {
          g_CurrentFilename = "..\\core\\mission.cpp";
          g_CurrentLineNumber = 500;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
        }
        *(CDemonActor **)(this_ptr->field8_0x890 + this_ptr->actorCountMaybe * 4) = pCVar3->items[0]
        ;
        pCVar3 = (CInventory *)&pCVar3->owner;
        this_ptr->actorCountMaybe = this_ptr->actorCountMaybe + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004ff3b0
                ((CInventory *)(pCVar1[0x176].create_event + 0x30),in_stack_0000004c);
    }
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000050,"// actor data list\n");
  for (pCVar4 = this_ptr->first_actor; pCVar4 != (CDemonActor *)0x0; pCVar4 = pCVar4->next_actor) {
    core_actor_cpp_CDemonActor_save_FUN_0040af30(pCVar4,in_stack_00000054);
  }
  core_gore_cpp_FUN_004ee290(g_CGorePtr);
  this_ptr->actorCountMaybe = 0;
  return;
}


// Assembly code:
// 00523600: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_writeFile_FUN_00523600
// 00523601: PUSH ESI
// 00523602: PUSH EDI
// 00523603: PUSH EBP
// 00523604: SUB ESP,0x4
// 00523607: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0052360b: PUSH 0x1ae
// 00523610: PUSH 0x638e50
//   XREF to: 00638e50 (DATA)
// 00523615: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 0052361a: MOV EDX,dword ptr [EBX + 0x884]
// 00523620: ADD ESP,0x8
// 00523623: TEST EDX,EDX
// 00523625: JNZ 0x00523644
//   XREF to: 00523644 (CONDITIONAL_JUMP)
// 00523627: PUSH 0x638e64
//   XREF to: 00638e64 (DATA)
// 0052362c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00523632: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00523633: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00523638: ADD ESP,0x8
// 0052363b: PUSH EBX
// 0052363c: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 00523641: ADD ESP,0x4
// 00523644: PUSH 0x638e78
//   Label: LAB_00523644
//   XREF to: 00638e78 (DATA)
// 00523649: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0052364d: PUSH ESI
// 0052364e: MOV dword ptr [EBX + 0x8],0x7
// 00523655: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052365a: ADD ESP,0x8
// 0052365d: PUSH 0x4
// 0052365f: MOV EDI,dword ptr [EBX + 0x8]
// 00523662: PUSH EDI
// 00523663: PUSH 0x638e9b
//   XREF to: 00638e9b (DATA)
// 00523668: PUSH ESI
// 00523669: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052366e: ADD ESP,0x10
// 00523671: PUSH 0x638ea2
//   XREF to: 00638ea2 (DATA)
// 00523676: PUSH ESI
// 00523677: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052367c: ADD ESP,0x8
// 0052367f: LEA EAX,[EBX + 0x44]
// 00523682: PUSH EAX
// 00523683: PUSH 0x638ebb
//   XREF to: 00638ebb (DATA)
// 00523688: PUSH ESI
// 00523689: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052368e: ADD ESP,0xc
// 00523691: PUSH 0x638ebf
//   XREF to: 00638ebf (DATA)
// 00523696: PUSH ESI
// 00523697: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052369c: ADD ESP,0x8
// 0052369f: MOV EBP,ESI
// 005236a1: MOV ESI,dword ptr [EBX + 0x144]
// 005236a7: PUSH ESI
// 005236a8: PUSH 0x638ecb
//   XREF to: 00638ecb (DATA)
// 005236ad: MOV EDI,EBP
// 005236af: PUSH EDI
// 005236b0: XOR ESI,ESI
// 005236b2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005236b7: MOV EBP,dword ptr [EBX + 0x144]
// 005236bd: ADD ESP,0xc
// 005236c0: TEST EBP,EBP
// 005236c2: JLE 0x005236f0
//   XREF to: 005236f0 (CONDITIONAL_JUMP)
// 005236c4: LEA EDI,[EBX + 0x148]
// 005236ca: PUSH EDI
//   Label: LAB_005236ca
// 005236cb: PUSH 0x638ecf
//   XREF to: 00638ecf (DATA)
// 005236d0: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005236d4: PUSH EAX
// 005236d5: INC ESI
// 005236d6: ADD EDI,0x100
// 005236dc: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005236e1: MOV EDX,dword ptr [EBX + 0x144]
// 005236e7: ADD ESP,0xc
// 005236ea: CMP ESI,EDX
// 005236ec: JL 0x005236ca
//   XREF to: 005236ca (CONDITIONAL_JUMP)
// 005236ee: MOV EAX,EAX
// 005236f0: PUSH 0x638ed3
//   Label: LAB_005236f0
//   XREF to: 00638ed3 (DATA)
// 005236f5: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005236f9: PUSH ECX
// 005236fa: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005236ff: ADD ESP,0x8
// 00523702: MOV ESI,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 00523708: PUSH ESI
// 00523709: PUSH 0x638ee5
//   XREF to: 00638ee5 (DATA)
// 0052370e: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00523712: PUSH EDI
// 00523713: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00523718: ADD ESP,0xc
// 0052371b: CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)
// 00523720: MOV EBP,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 00523726: XOR ESI,ESI
// 00523728: TEST EBP,EBP
// 0052372a: JLE 0x00523760
//   XREF to: 00523760 (CONDITIONAL_JUMP)
// 0052372c: XOR EDI,EDI
// 0052372e: MOV EAX,dword ptr [EDI + 0x822048]
//   Label: LAB_0052372e
//   XREF to: 00822048 (READ)
//   XREF to: 0082204c (READ)
// 00523734: MOV EDX,dword ptr [EAX + 0x34]
// 00523737: PUSH EDX
// 00523738: PUSH EAX
// 00523739: PUSH 0x638ee9
//   XREF to: 00638ee9 (DATA)
// 0052373e: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00523742: PUSH ECX
// 00523743: ADD EDI,0x4
// 00523746: INC ESI
// 00523747: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052374c: MOV EBP,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 00523752: ADD ESP,0x10
// 00523755: CMP ESI,EBP
// 00523757: JL 0x0052372e
//   XREF to: 0052372e (CONDITIONAL_JUMP)
// 00523759: LEA EAX,[EAX]
// 0052375f: NOP
// 00523760: PUSH 0x638ef0
//   Label: LAB_00523760
//   XREF to: 00638ef0 (DATA)
// 00523765: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00523769: PUSH EAX
// 0052376a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052376f: ADD ESP,0x8
// 00523772: PUSH EBX
// 00523773: CALL core_mission.cpp_CDemonMission_FUN_00523cc0
//   XREF to: 00523cc0 (UNCONDITIONAL_CALL)
// 00523778: ADD ESP,0x4
// 0052377b: PUSH EAX
// 0052377c: PUSH 0x638f00
//   XREF to: 00638f00 (DATA)
// 00523781: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00523785: PUSH EDX
// 00523786: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052378b: ADD ESP,0xc
// 0052378e: PUSH 0x638f04
//   XREF to: 00638f04 (DATA)
// 00523793: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00523797: PUSH ECX
// 00523798: XOR EDI,EDI
// 0052379a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0052379f: MOV ESI,dword ptr [EBX + 0x548]
// 005237a5: ADD ESP,0x8
// 005237a8: TEST ESI,ESI
// 005237aa: JZ 0x005237d2
//   XREF to: 005237d2 (CONDITIONAL_JUMP)
// 005237ac: MOV EBP,dword ptr [0x02db880c]
//   Label: LAB_005237ac
//   XREF to: 02db880c (READ)
// 005237b2: PUSH EBP
// 005237b3: PUSH ESI
// 005237b4: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005237b9: ADD ESP,0x8
// 005237bc: TEST EAX,EAX
// 005237be: JZ 0x005237c8
//   XREF to: 005237c8 (CONDITIONAL_JUMP)
// 005237c0: MOV EAX,dword ptr [EAX + 0x1f740]
// 005237c6: ADD EDI,EAX
// 005237c8: MOV ESI,dword ptr [ESI + 0x14c]
//   Label: LAB_005237c8
// 005237ce: TEST ESI,ESI
// 005237d0: JNZ 0x005237ac
//   XREF to: 005237ac (CONDITIONAL_JUMP)
// 005237d2: PUSH EDI
//   Label: LAB_005237d2
// 005237d3: PUSH 0x638f1e
//   XREF to: 00638f1e (DATA)
// 005237d8: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005237dc: PUSH ESI
// 005237dd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005237e2: ADD ESP,0xc
// 005237e5: PUSH 0x638f22
//   XREF to: 00638f22 (DATA)
// 005237ea: PUSH ESI
// 005237eb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005237f0: ADD ESP,0x8
// 005237f3: MOV ESI,dword ptr [EBX + 0x548]
// 005237f9: MOV dword ptr [EBX + 0x88c],0x0
// 00523803: TEST ESI,ESI
// 00523805: JZ 0x00523871
//   XREF to: 00523871 (CONDITIONAL_JUMP)
// 00523807: MOV EBP,0x638f3f
//   XREF to: 00638f3f (DATA)
// 0052380c: PUSH ESI
//   Label: LAB_0052380c
// 0052380d: PUSH ESI
// 0052380e: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 00523813: ADD ESP,0x4
// 00523816: PUSH EAX
// 00523817: PUSH 0x638f36
//   XREF to: 00638f36 (DATA)
// 0052381c: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00523820: PUSH ECX
// 00523821: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00523826: MOV EDI,dword ptr [EBX + 0x88c]
// 0052382c: ADD ESP,0x10
// 0052382f: CMP EDI,0x7d0
// 00523835: JL 0x00523854
//   XREF to: 00523854 (CONDITIONAL_JUMP)
// 00523837: MOV EAX,0x1e9
// 0052383c: PUSH 0x638f53
//   XREF to: 00638f53 (DATA)
// 00523841: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00523847: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052384c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00523851: ADD ESP,0x4
// 00523854: MOV EAX,dword ptr [EBX + 0x88c]
//   Label: LAB_00523854
// 0052385a: MOV dword ptr [EBX + EAX*0x4 + 0x890],ESI
// 00523861: INC dword ptr [EBX + 0x88c]
// 00523867: MOV ESI,dword ptr [ESI + 0x14c]
// 0052386d: TEST ESI,ESI
// 0052386f: JNZ 0x0052380c
//   XREF to: 0052380c (CONDITIONAL_JUMP)
// 00523871: MOV EAX,dword ptr [EBX + 0x548]
//   Label: LAB_00523871
// 00523877: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0052387a: TEST EAX,EAX
// 0052387c: JZ 0x005238ee
//   XREF to: 005238ee (CONDITIONAL_JUMP)
// 0052387e: MOV ESI,dword ptr [0x02db880c]
//   Label: LAB_0052387e
//   XREF to: 02db880c (READ)
// 00523884: PUSH ESI
// 00523885: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00523889: PUSH EDI
// 0052388a: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0052388f: ADD ESP,0x8
// 00523892: TEST EAX,EAX
// 00523894: JZ 0x005238de
//   XREF to: 005238de (CONDITIONAL_JUMP)
// 00523896: LEA EBP,[EAX + 0x1f738]
// 0052389c: XOR EDI,EDI
// 0052389e: MOV ESI,EBP
// 005238a0: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_005238a0
// 005238a3: CMP EDI,EAX
// 005238a5: JGE 0x0052397d
//   XREF to: 0052397d (CONDITIONAL_JUMP)
// 005238ab: CMP dword ptr [EBX + 0x88c],0x7d0
// 005238b5: JGE 0x00523956
//   XREF to: 00523956 (CONDITIONAL_JUMP)
// 005238bb: MOV EDX,dword ptr [EBX + 0x88c]
//   Label: LAB_005238bb
// 005238c1: MOV EAX,dword ptr [ESI + 0xc]
// 005238c4: MOV dword ptr [EBX + EDX*0x4 + 0x890],EAX
// 005238cb: MOV EDX,dword ptr [EBX + 0x88c]
// 005238d1: ADD ESI,0x4
// 005238d4: INC EDX
// 005238d5: INC EDI
// 005238d6: MOV dword ptr [EBX + 0x88c],EDX
// 005238dc: JMP 0x005238a0
//   XREF to: 005238a0 (UNCONDITIONAL_JUMP)
// 005238de: MOV EAX,dword ptr [ESP]
//   Label: LAB_005238de
//   XREF to: Stack[-0x14] (DATA)
// 005238e1: MOV EAX,dword ptr [EAX + 0x14c]
// 005238e7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 005238ea: TEST EAX,EAX
// 005238ec: JNZ 0x0052387e
//   XREF to: 0052387e (CONDITIONAL_JUMP)
// 005238ee: PUSH 0x638f87
//   Label: LAB_005238ee
//   XREF to: 00638f87 (DATA)
// 005238f3: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005238f7: PUSH ECX
// 005238f8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005238fd: MOV ESI,dword ptr [EBX + 0x548]
// 00523903: ADD ESP,0x8
// 00523906: TEST ESI,ESI
// 00523908: JZ 0x00523930
//   XREF to: 00523930 (CONDITIONAL_JUMP)
// 0052390a: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052390e: PUSH EBP
//   Label: LAB_0052390e
// 0052390f: PUSH ESI
// 00523910: CALL core_actor.cpp_CDemonActor_save_FUN_0040af30
//   XREF to: 0040af30 (UNCONDITIONAL_CALL)
// 00523915: MOV ESI,dword ptr [ESI + 0x14c]
// 0052391b: ADD ESP,0x8
// 0052391e: TEST ESI,ESI
// 00523920: JNZ 0x0052390e
//   XREF to: 0052390e (CONDITIONAL_JUMP)
// 00523922: LEA EAX,[EAX]
// 00523928: LEA EDX,[EDX]
// 0052392e: MOV EAX,EAX
// 00523930: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_00523930
//   XREF to: Stack[0x8] (READ)
// 00523934: PUSH ECX
// 00523935: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 0052393b: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 0052393c: CALL core_gore.cpp_FUN_004ee290
//   XREF to: 004ee290 (UNCONDITIONAL_CALL)
// 00523941: ADD ESP,0x8
// 00523944: MOV dword ptr [EBX + 0x88c],0x0
// 0052394e: ADD ESP,0x4
// 00523951: POP EBP
// 00523952: POP EDI
// 00523953: POP ESI
// 00523954: POP EBX
// 00523955: RET
// 00523956: MOV ECX,0x638f63
//   Label: LAB_00523956
//   XREF to: 00638f63 (PARAM)
// 0052395b: MOV EAX,0x1f4
// 00523960: PUSH 0x638f77
//   XREF to: 00638f77 (DATA)
// 00523965: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052396b: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00523970: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00523975: ADD ESP,0x4
// 00523978: JMP 0x005238bb
//   XREF to: 005238bb (UNCONDITIONAL_JUMP)
// 0052397d: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0052397d
//   XREF to: Stack[0x8] (READ)
// 00523981: PUSH EAX
// 00523982: PUSH EBP
// 00523983: CALL core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
//   XREF to: 004ff3b0 (UNCONDITIONAL_CALL)
// 00523988: ADD ESP,0x8
// 0052398b: JMP 0x005238de
//   XREF to: 005238de (UNCONDITIONAL_JUMP)
