// Name: core_mission.cpp_CDemonMission_writeFile_FUN_00523600
// Address: 00523600
// Address Range: [[00523600, 0052398f]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission *this_ptr)

{
  int *piVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  int iVar5;
  CInventory *pCVar6;
  int iVar7;
  FILE *in_stack_00000008;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x1ae);
  if (*(int *)(this_ptr->unk4 + 0x338) == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Preparing actors...");
    core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
  }
  this_ptr->mission_version_num = 7;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// mission version, actor version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d,%d\n",this_ptr->mission_version_num,4)
  ;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// Root name of mission\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%s\n",this_ptr->unk2 + 0x38);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// setList\n");
  iVar5 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",this_ptr->set_list);
  if (0 < (int)this_ptr->set_list) {
    pcVar4 = this_ptr->unk3;
    do {
      iVar5 = iVar5 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%s\n",pcVar4);
      pcVar4 = pcVar4 + 0x100;
    } while (iVar5 < (int)this_ptr->set_list);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// actorTypeList\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",g_NumActorClassTypes);
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  iVar5 = 0;
  if (0 < g_NumActorClassTypes) {
    iVar7 = 0;
    do {
      piVar1 = (int *)((int)g_ActorClassRegistrations + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000008,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34));
    } while (iVar5 < g_NumActorClassTypes);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// actor count\n");
  iVar5 = core_mission_cpp_CDemonMission_FUN_00523cc0(this_ptr);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",iVar5);
  iVar5 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// inventory actor count\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,g_CHeroClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      iVar5 = iVar5 + *(int *)(pCVar3[0x176].create_event + 0x38);
    }
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",iVar5);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// actor name list\n");
  pCVar2 = this_ptr->first_actor;
  this_ptr->actorCountMaybe = 0;
  for (; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = pCVar2;
    pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar2);
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%s \"%s\"\n",pcVar4,pCVar3);
    if (1999 < this_ptr->actorCountMaybe) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x1e9;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
    }
    *(CDemonActor **)(this_ptr->unk5 + this_ptr->actorCountMaybe * 4) = pCVar2;
    this_ptr->actorCountMaybe = this_ptr->actorCountMaybe + 1;
  }
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,g_CHeroClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      pCVar6 = (CInventory *)(pCVar3[0x176].create_event + 0x30);
      for (iVar5 = 0; iVar5 < *(int *)(pCVar3[0x176].create_event + 0x38); iVar5 = iVar5 + 1) {
        if (1999 < this_ptr->actorCountMaybe) {
          g_CurrentFilename = "..\\core\\mission.cpp";
          g_CurrentLineNumber = 500;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
        }
        *(CDemonActor **)(this_ptr->unk5 + this_ptr->actorCountMaybe * 4) = pCVar6->items[0];
        pCVar6 = (CInventory *)&pCVar6->owner;
        this_ptr->actorCountMaybe = this_ptr->actorCountMaybe + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004ff3b0
                ((CInventory *)(pCVar3[0x176].create_event + 0x30),in_stack_00000008);
    }
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// actor data list\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    core_actor_cpp_CDemonActor_save_FUN_0040af30(pCVar2,in_stack_00000008);
  }
  core_gore_cpp_FUN_004ee290(g_CGorePtr);
  this_ptr->actorCountMaybe = 0;
  return;
}
