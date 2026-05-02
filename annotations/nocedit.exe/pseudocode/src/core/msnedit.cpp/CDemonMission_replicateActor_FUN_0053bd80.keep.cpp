// Name: core_msnedit.cpp_CDemonMission_replicateActor_FUN_0053bd80
// Address: 0053bd80
// MANUAL RECONSTRUCTION
// Address Range: [[0053bd80, 0053c0a7] [03fc5aea, 03fc5b0a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_replicateActor_FUN_0053bd80(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_replicateActor_FUN_0053bd80(CDemonMission *this_ptr)

{
  char cVar2;
  _FILE *p_Var2;
  char *class_name;
  CDemonActor *this_ptr_00;
  _FILE *file_handle;
  int iVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  int iVar7;
  int iVar4;
  uint uVar8;
  CDemonActor *pCVar6;
  char *pcVar9;
  char *pcVar7;
  byte bVar10;
  char local_a4 [100];
  char local_40 [32];
  char local_20 [16];
  char cVar1;
  
  bVar10 = 0;
  pcVar9 = local_a4;
  if (this_ptr->selected_actor == (CDemonActor *)0x0) {
    return;
  }
  strcpy(local_20, "DUPACTOR.TMP");
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_20,(char *)0x0,"wt","..\\core\\msnedit.cpp",0x965);
  if (p_Var2 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create temp file to replicate actor!");
    return;
  }
  core_actor_cpp_CDemonActor_save_FUN_0040af30(this_ptr->selected_actor,p_Var2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\msnedit.cpp",0x96b);
  class_name = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr->selected_actor);
  this_ptr_00 = core_actor_cpp_createActorByName_FUN_0040c430(class_name);
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (local_20,(char *)0x0,"rt","..\\core\\msnedit.cpp",0x973);
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0x974;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't reopen %s",local_20);
  }
  core_actor_cpp_CDemonActor_load_FUN_0040b050(this_ptr_00,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\msnedit.cpp",0x976);
  remove(local_20);
  pCVar6 = this_ptr->selected_actor;
  do {
    cVar1 = pCVar6->actor_name[0];
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pCVar6->actor_name[1];
    pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  uVar8 = 0xffffffff;
  pcVar7 = local_a4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar10 * -2 + 1;
  } while (cVar2 != '\0');
  iVar4 = ~uVar8 - 1;
  while ((iVar3 = iVar4, 0 < iVar4 &&
         (iVar3 = iVar4 + -1,
         (g_CharacterClassificationTable[(byte)(local_a4[iVar4 + -1] + 1)] & 0x20) != 0))) {
    local_a4[iVar4 + -1] = '\0';
    iVar4 = iVar3;
  }
  if (iVar3 < 1) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,this_ptr_00);
  }
  else {
    core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_00524660
              (this_ptr,this_ptr_00->actor_name,local_a4);
  }
  if (g_ConfirmNewActorNames != 0) {
    pcVar7 = local_40;
    pCVar6 = this_ptr_00;
    do {
      cVar2 = pCVar6->actor_name[0];
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pCVar6->actor_name[1];
      pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
    do {
      iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Confirm new actor name",local_40,0x1e,1);
      if (iVar7 == 0) {
        g_CurrentDebugLine = 0x994;
        g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
        if (this_ptr_00 == (CDemonActor *)0x0) {
          g_CurrentDebugLine = 0x994;
          return;
        }
        (*((this_ptr_00->vtable)._ub)->dtor)(this_ptr_00,2);
        return;
      }
      iVar4 = core_msnedit_cpp_CDemonMission_validateNewActorName_FUN_0053d220
                        (g_CDemonMissionPtr,this_ptr_00->actor_name,local_40);
    } while (iVar4 == 0);
    pcVar7 = local_40;
    pCVar6 = this_ptr_00;
    do {
      cVar2 = *pcVar7;
      pCVar6->actor_name[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pCVar6->actor_name[1] = cVar2;
      pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
    } while (cVar2 != '\0');
  }
  core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,this_ptr_00);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  pCVar4 = (CCharacter *)
           core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr_00,g_CCharacterClassInfo.name_hash);
  if (pCVar4 != (CCharacter *)0x0) {
    pCVar5 = &pCVar4->base;
    do {
      pCVar5 = (CDemonActor *)&(pCVar5->orient_matrix).m[0].z;
      pCVar5[0x1b].direction_hint = 0;
      pCVar5 = pCVar5;
    } while (pCVar5 != (CDemonActor *)((pCVar4->base).create_event + 0x10));
  }
  (*((this_ptr_00->vtable)._ub)->setup)(this_ptr_00);
  (*((this_ptr_00->vtable)._ub)->onDropped)(this_ptr_00,(CVector3f *)0x0);
  core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,this_ptr_00);
  return;
}
