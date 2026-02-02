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
  char *pcVar3;
  CDemonActor *this_ptr_00;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  byte bVar11;
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
  float *pfVar7;
  
  bVar11 = 0;
  pcVar10 = &stack0xffffff5c;
  if (*(int *)(this_ptr->unk2 + 0x1c) == 0) {
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
  core_actor_cpp_CDemonActor_save_FUN_0040af30(*(CDemonActor **)(this_ptr->unk2 + 0x1c),p_Var2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\msnedit.cpp",0x96b);
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                     (*(CDemonActor **)(this_ptr->unk2 + 0x1c));
  this_ptr_00 = core_actor_cpp_createActorByName_FUN_0040c430(pcVar3);
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
  pcVar3 = *(char **)(this_ptr->unk2 + 0x1c);
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  uVar9 = 0xffffffff;
  pcVar10 = &stack0xffffff5c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  iVar8 = ~uVar9 - 1;
  while ((iVar4 = iVar8, 0 < iVar8 &&
         (iVar4 = iVar8 + -1,
         (g_CharacterClassificationTable[(byte)((&stack0xffffff5b)[iVar8] + 1)] & 0x20) != 0))) {
    (&stack0xffffff5b)[iVar8] = 0;
    iVar8 = iVar4;
  }
  if (iVar4 < 1) {
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(this_ptr);
  }
  else {
    core_mission_cpp_CDemonMission_FUN_00524660(this_ptr);
  }
  if (g_ConfirmNewActorNames != 0) {
    pcVar10 = local_40;
    pCVar5 = this_ptr_00;
    do {
      cVar1 = pCVar5->actor_name[0];
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pCVar5->actor_name[1];
      pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    do {
      iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Confirm new actor name",local_40,0x1e,1);
      if (iVar8 == 0) {
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
      iVar8 = core_msnedit_cpp_CDemonMission_FUN_0053d220(g_CDemonMissionPtr);
    } while (iVar8 == 0);
    pcVar10 = local_40;
    pCVar5 = this_ptr_00;
    do {
      cVar1 = *pcVar10;
      pCVar5->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pCVar5->actor_name[1] = cVar1;
      pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
    } while (cVar1 != '\0');
  }
  core_mission_cpp_CDemonMission_FUN_00523b70(this_ptr);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr_00,g_CCharacterClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    pCVar6 = pCVar5;
    do {
      pfVar7 = &(pCVar6->orient_matrix).m[0].z;
      pCVar6[0x1b].unk1 = 0;
      pCVar6 = (CDemonActor *)pfVar7;
    } while (pfVar7 != (float *)(pCVar5->create_event + 0x10));
  }
  (*((this_ptr_00->vtable)._ub)->setup)(this_ptr_00);
  (*((this_ptr_00->vtable)._ub)->onDropped)(this_ptr_00,(CVector3f *)0x0);
  core_msnedit_cpp_CDemonMission_FUN_0053c140(param_4,(int)this_ptr_00);
  return;
}
