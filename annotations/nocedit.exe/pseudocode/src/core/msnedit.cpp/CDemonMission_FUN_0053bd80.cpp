// Name: core_msnedit.cpp_CDemonMission_FUN_0053bd80
// Address: 0053bd80
// Address Range: [[0053bd80, 0053c0a7]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053bd80 (CDemonMission *this_ptr,int param_2,int param_3,CDemonMission *param_4)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_FUN_0053bd80
          (CDemonMission *this_ptr,int param_2,int param_3,CDemonMission *param_4)

{
  char cVar1;
  _FILE *p_Var2;
  char *class_name;
  CDemonActor *this_ptr_00;
  int iVar3;
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  uint in_stack_ffffff5c;
  uint in_stack_ffffff60;
  uint in_stack_ffffff64;
  uint in_stack_ffffff68;
  uint in_stack_ffffff6c;
  uint in_stack_ffffff70;
  uint in_stack_ffffff74;
  char local_40 [32];
  char local_20 [4];
  char acStack_1c [4];
  char acStack_18 [4];
  char cStack_14;
  float *pfVar6;
  
  bVar10 = 0;
  pcVar9 = &stack0xffffff5c;
  if (this_ptr->selected_actor == (CDemonActor *)0x0) {
    return;
  }
  local_20 = (char  [4])"DUPACTOR.TMP"._0_4_;
  acStack_1c = (char  [4])"DUPACTOR.TMP"._4_4_;
  acStack_18 = (char  [4])"DUPACTOR.TMP"._8_4_;
  cStack_14 = "DUPACTOR.TMP"[0xc];
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
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (local_20,(char *)0x0,"rt","..\\core\\msnedit.cpp",0x973);
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0x974;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't reopen %s",local_20);
  }
  core_actor_cpp_CDemonActor_load_FUN_0040b050(this_ptr_00,p_Var2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\msnedit.cpp",0x976);
  remove(local_20);
  pCVar4 = this_ptr->selected_actor;
  do {
    cVar1 = pCVar4->actor_name[0];
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar4->actor_name[1];
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  uVar8 = 0xffffffff;
  pcVar9 = &stack0xffffff5c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  iVar7 = ~uVar8 - 1;
  while ((iVar3 = iVar7, 0 < iVar7 &&
         (iVar3 = iVar7 + -1,
         (g_CharacterClassificationTable[(byte)((&stack0xffffff5b)[iVar7] + 1)] & 0x20) != 0))) {
    (&stack0xffffff5b)[iVar7] = 0;
    iVar7 = iVar3;
  }
  if (iVar3 < 1) {
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,this_ptr_00);
  }
  else {
    core_mission_cpp_CDemonMission_generateUniqueActorName_FUN_00524660
              (this_ptr,this_ptr_00->actor_name,&stack0xffffff5c);
  }
  if (g_ConfirmNewActorNames != 0) {
    pcVar9 = local_40;
    pCVar4 = this_ptr_00;
    do {
      cVar1 = pCVar4->actor_name[0];
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pCVar4->actor_name[1];
      pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
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
        (*((this_ptr_00->vtable)._ub)->dtor)
                  (this_ptr_00,2,in_stack_ffffff5c,in_stack_ffffff60,in_stack_ffffff64,
                   in_stack_ffffff68,in_stack_ffffff6c,in_stack_ffffff70,in_stack_ffffff74);
        return;
      }
      iVar7 = core_msnedit_cpp_CDemonMission_FUN_0053d220(g_CDemonMissionPtr);
    } while (iVar7 == 0);
    pcVar9 = local_40;
    pCVar4 = this_ptr_00;
    do {
      cVar1 = *pcVar9;
      pCVar4->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pCVar4->actor_name[1] = cVar1;
      pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
    } while (cVar1 != '\0');
  }
  core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,this_ptr_00);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  pCVar4 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr_00,g_CCharacterClassInfo.name_hash);
  if (pCVar4 != (CDemonActor *)0x0) {
    pCVar5 = pCVar4;
    do {
      pfVar6 = &(pCVar5->orient_matrix).m[0].z;
      pCVar5[0x1b].unk1 = 0;
      pCVar5 = (CDemonActor *)pfVar6;
    } while (pfVar6 != (float *)(pCVar4->create_event + 0x10));
  }
  (*((this_ptr_00->vtable)._ub)->setup)(this_ptr_00);
  (*((this_ptr_00->vtable)._ub)->onDropped)(this_ptr_00,(CVector3f *)0x0);
  core_msnedit_cpp_CDemonMission_FUN_0053c140(param_4,(int)this_ptr_00);
  return;
}
