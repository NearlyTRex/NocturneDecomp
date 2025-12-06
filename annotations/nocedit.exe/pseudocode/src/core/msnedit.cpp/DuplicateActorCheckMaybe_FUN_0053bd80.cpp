// Name: core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80
// Address: 0053bd80
// Address Range: [[0053bd80, 0053c0a7]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_DuplicateActorCheckMaybe(uint param_1) */

void core_msnedit_cpp_DuplicateActorCheckMaybe_FUN_0053bd80(void)

{
  char cVar1;
  FILE *pFVar2;
  char *pcVar3;
  CDemonActor *this_ptr;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonActor *pCVar6;
  int iVar8;
  uint uVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  byte bVar11;
  int in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000014;
  CDemonMission *in_stack_00000030;
  CDemonMission *in_stack_00000034;
  CDemonMission *in_stack_00000038;
  uint in_stack_00000060;
  uint in_stack_ffffff90;
  uint in_stack_ffffff94;
  uint in_stack_ffffff98;
  uint in_stack_ffffff9c;
  uint in_stack_ffffffa0;
  uint in_stack_ffffffa4;
  uint in_stack_ffffffa8;
  char acStack_1c [4];
  char acStack_18 [4];
  char cStack_14;
  float *pfVar7;
  
  bVar11 = 0;
  if (*(int *)(in_stack_00000004 + 0x28) == 0) {
    return;
  }
  acStack_1c = (char  [4])"DUPACTOR.TMP"._4_4_;
  acStack_18 = (char  [4])"DUPACTOR.TMP"._8_4_;
  cStack_14 = "DUPACTOR.TMP"[0xc];
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_1c,(char *)0x0,"wt","..\\core\\msnedit.cpp",0x965);
  if (pFVar2 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create temp file to replicate actor!");
    return;
  }
  core_actor_cpp_CDemonActor_save_FUN_0040af30(*(CDemonActor **)(in_stack_0000000c + 0x28),pFVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\msnedit.cpp",0x96b);
  pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                     (*(CDemonActor **)(in_stack_00000014 + 0x28));
  this_ptr = core_actor_cpp_createActorByName_FUN_0040c430(pcVar3);
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (&stack0xfffffff8,(char *)0x0,"rt","..\\core\\msnedit.cpp",0x973);
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0x974;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't reopen %s",&stack0xfffffffc);
  }
  core_actor_cpp_CDemonActor_load_FUN_0040b050(this_ptr,pFVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\msnedit.cpp",0x976);
  crt_io_c_deleteFile_FUN_005ff9d0(&stack0x00000008);
  pcVar10 = &stack0xffffff88;
  pcVar3 = *(char **)(in_stack_00000030->field2_0xc + 0x1c);
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
  pcVar3 = &stack0xffffff88;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar11 * -2 + 1;
  } while (cVar1 != '\0');
  iVar8 = ~uVar9 - 1;
  while ((iVar4 = iVar8, 0 < iVar8 &&
         (iVar4 = iVar8 + -1,
         (g_CharacterClassificationTable[(byte)((&stack0xffffff87)[iVar8] + 1)] & 0x20U) != 0))) {
    (&stack0xffffff87)[iVar8] = 0;
    iVar8 = iVar4;
  }
  if (iVar4 < 1) {
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000030);
  }
  else {
    core_mission_cpp_FUN_00524660();
  }
  if (g_ConfirmNewActorNames != 0) {
    pcVar3 = &stack0xfffffff0;
    pCVar5 = this_ptr;
    do {
      cVar1 = pCVar5->actor_name[0];
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pCVar5->actor_name[1];
      pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    do {
      iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Confirm new actor name",&stack0xfffffff0,0x1e,1
                        );
      if (iVar8 == 0) {
        g_CurrentDebugLine = 0x994;
        g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
        if (this_ptr == (CDemonActor *)0x0) {
          g_CurrentDebugLine = 0x994;
          return;
        }
        (*this_ptr->vtable->dtor)
                  (this_ptr,2,in_stack_ffffff90,in_stack_ffffff94,in_stack_ffffff98,
                   in_stack_ffffff9c,in_stack_ffffffa0,in_stack_ffffffa4,in_stack_ffffffa8);
        return;
      }
      iVar8 = core_msnedit_cpp_FUN_0053d220(g_CDemonMissionPtr);
    } while (iVar8 == 0);
    pcVar3 = &stack0xfffffff8;
    pCVar5 = this_ptr;
    do {
      cVar1 = *pcVar3;
      pCVar5->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pCVar5->actor_name[1] = cVar1;
      pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
    } while (cVar1 != '\0');
  }
  core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000034);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000038);
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr,g_CCharacterClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    pCVar6 = pCVar5;
    do {
      pfVar7 = &(pCVar6->orient_matrix).m[0].z;
      pCVar6[0x1b].field7_0x6c = 0;
      pCVar6 = (CDemonActor *)pfVar7;
    } while (pfVar7 != (float *)(pCVar5->create_event + 0x10));
  }
  (*this_ptr->vtable->setup)(this_ptr);
  (*this_ptr->vtable->onDropped)(this_ptr,(CVector3f *)0x0);
  core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
  return;
}
