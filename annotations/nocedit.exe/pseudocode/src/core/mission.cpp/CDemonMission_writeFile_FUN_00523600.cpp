// Name: core_mission.cpp_CDemonMission_writeFile_FUN_00523600
// Address: 00523600
// Address Range: [[00523600, 0052398f]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission * this_ptr)

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
