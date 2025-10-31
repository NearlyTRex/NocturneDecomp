// Name: core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80
// Address: 0053bd80
// Address Range: [[0053bd80, 0053c0a7]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a710 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Confirm_new_actor_name_0063b7b6
//   TerminatedCString s_core_msnedit_cpp_0063c732
//   TerminatedCString s_wt_0063c746
//   TerminatedCString s_Can_t_create_temp_file_t_0063c749
//   TerminatedCString s_core_msnedit_cpp_0063c774
//   TerminatedCString s_core_msnedit_cpp_0063c788
//   TerminatedCString s_rt_0063c79c
//   TerminatedCString s_core_msnedit_cpp_0063c79f
//   TerminatedCString s_Can_t_reopen_s_0063c7b3
//   TerminatedCString s_core_msnedit_cpp_0063c7c3
//   TerminatedCString s_core_msnedit_cpp_0063c7d7
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   int g_ConfirmNewActorNames = 0x1
//   TerminatedCString s_DUPACTOR_TMP_006808f8
//   undefined4 s_.TMP_00680900
//   undefined4 s__00680904
//   char[256] g_CharacterClassificationTable
//   undefined4 g_CCharacterClassInfo.name_hash
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_0040b050
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_actor.cpp_CDemonActor_save_FUN_0040af30
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_mission.cpp_FUN_00524660
//   core_msnedit.cpp_FUN_0053d220
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   crt_io.c_deleteFile_FUN_005ff9d0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_DuplicateActorCheckMaybe(undefined4 param_1) */

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
  undefined4 in_stack_00000060;
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
  core_actor_cpp_CDemonActor_FUN_0040b050(this_ptr);
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
        (*((this_ptr->metadata).vtable)->dtor)
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
  (*((this_ptr->metadata).vtable)->setup)(this_ptr);
  (*((this_ptr->metadata).vtable)->onDropped)(this_ptr,(CVector3f *)0x0);
  core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
  return;
}


// Assembly code:
// 0053bd80: PUSH EBX
//   Label: core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80
// 0053bd81: PUSH ESI
// 0053bd82: PUSH EDI
// 0053bd83: PUSH EBP
// 0053bd84: SUB ESP,0x94
// 0053bd8a: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 0053bd91: CMP dword ptr [EAX + 0x28],0x0
// 0053bd95: JNZ 0x0053bda2
//   XREF to: 0053bda2 (CONDITIONAL_JUMP)
// 0053bd97: ADD ESP,0x94
//   Label: LAB_0053bd97
// 0053bd9d: POP EBP
// 0053bd9e: POP EDI
// 0053bd9f: POP ESI
// 0053bda0: POP EBX
// 0053bda1: RET
// 0053bda2: LEA EDI,[ESP + 0x84]
//   Label: LAB_0053bda2
//   XREF to: Stack[-0x20] (DATA)
// 0053bda9: MOV ESI,0x6808f8
//   XREF to: 006808f8 (DATA)
// 0053bdae: MOVSD ES:EDI,ESI
//   XREF to: 006808f8 (READ)
// 0053bdaf: MOVSD ES:EDI,ESI
//   XREF to: 006808fc (READ)
// 0053bdb0: MOVSD ES:EDI,ESI
//   XREF to: 00680900 (READ)
// 0053bdb1: MOVSB ES:EDI,ESI
//   XREF to: 00680904 (READ)
// 0053bdb2: CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)
// 0053bdb7: PUSH 0x965
// 0053bdbc: PUSH 0x63c732
//   XREF to: 0063c732 (DATA)
// 0053bdc1: PUSH 0x63c746
//   XREF to: 0063c746 (DATA)
// 0053bdc6: PUSH 0x0
// 0053bdc8: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x20] (DATA)
// 0053bdcf: PUSH EAX
// 0053bdd0: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0053bdd5: MOV EBX,EAX
// 0053bdd7: ADD ESP,0x14
// 0053bdda: TEST EAX,EAX
// 0053bddc: JZ 0x0053bfba
//   XREF to: 0053bfba (CONDITIONAL_JUMP)
// 0053bde2: PUSH EAX
// 0053bde3: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 0053bdea: MOV ECX,dword ptr [EAX + 0x28]
// 0053bded: PUSH ECX
// 0053bdee: CALL core_actor.cpp_CDemonActor_save_FUN_0040af30
//   XREF to: 0040af30 (UNCONDITIONAL_CALL)
// 0053bdf3: ADD ESP,0x8
// 0053bdf6: PUSH 0x96b
// 0053bdfb: PUSH 0x63c774
//   XREF to: 0063c774 (DATA)
// 0053be00: PUSH EBX
// 0053be01: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0053be06: ADD ESP,0xc
// 0053be09: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 0053be10: MOV EBX,dword ptr [EAX + 0x28]
// 0053be13: PUSH EBX
// 0053be14: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 0053be19: ADD ESP,0x4
// 0053be1c: PUSH EAX
// 0053be1d: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 0053be22: ADD ESP,0x4
// 0053be25: PUSH 0x973
// 0053be2a: PUSH 0x63c788
//   XREF to: 0063c788 (DATA)
// 0053be2f: PUSH 0x63c79c
//   XREF to: 0063c79c (DATA)
// 0053be34: PUSH 0x0
// 0053be36: MOV EBP,EAX
// 0053be38: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x20] (DATA)
// 0053be3f: PUSH EAX
// 0053be40: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0053be45: ADD ESP,0x14
// 0053be48: MOV EBX,EAX
// 0053be4a: TEST EAX,EAX
// 0053be4c: JNZ 0x0053be79
//   XREF to: 0053be79 (CONDITIONAL_JUMP)
// 0053be4e: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x20] (DATA)
// 0053be55: PUSH EAX
// 0053be56: MOV ESI,0x63c79f
//   XREF to: 0063c79f (DATA)
// 0053be5b: MOV EDI,0x974
// 0053be60: PUSH 0x63c7b3
//   XREF to: 0063c7b3 (DATA)
// 0053be65: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0053be6b: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0053be71: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053be76: ADD ESP,0x8
// 0053be79: PUSH EBX
//   Label: LAB_0053be79
// 0053be7a: PUSH EBP
// 0053be7b: CALL core_actor.cpp_CDemonActor_FUN_0040b050
//   XREF to: 0040b050 (UNCONDITIONAL_CALL)
// 0053be80: ADD ESP,0x8
// 0053be83: PUSH 0x976
// 0053be88: PUSH 0x63c7c3
//   XREF to: 0063c7c3 (DATA)
// 0053be8d: PUSH EBX
// 0053be8e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0053be93: ADD ESP,0xc
// 0053be96: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x20] (DATA)
// 0053be9d: PUSH EAX
// 0053be9e: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0053bea3: ADD ESP,0x4
// 0053bea6: MOV ESI,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 0053bead: MOV EDI,ESP
// 0053beaf: MOV ESI,dword ptr [ESI + 0x28]
// 0053beb2: PUSH EDI
// 0053beb3: MOV AL,byte ptr [ESI]
//   Label: LAB_0053beb3
// 0053beb5: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xa4] (DATA)
// 0053beb7: CMP AL,0x0
// 0053beb9: JZ 0x0053becb
//   XREF to: 0053becb (CONDITIONAL_JUMP)
// 0053bebb: MOV AL,byte ptr [ESI + 0x1]
// 0053bebe: ADD ESI,0x2
// 0053bec1: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xa3] (WRITE)
// 0053bec4: ADD EDI,0x2
// 0053bec7: CMP AL,0x0
// 0053bec9: JNZ 0x0053beb3
//   XREF to: 0053beb3 (CONDITIONAL_JUMP)
// 0053becb: POP EDI
//   Label: LAB_0053becb
// 0053becc: MOV EDI,ESP
// 0053bece: SUB ECX,ECX
// 0053bed0: DEC ECX
// 0053bed1: XOR EAX,EAX
// 0053bed3: SCASB.REPNE ES:EDI
// 0053bed5: NOT ECX
// 0053bed7: DEC ECX
// 0053bed8: MOV EAX,ECX
// 0053beda: TEST ECX,ECX
// 0053bedc: JLE 0x0053befd
//   XREF to: 0053befd (CONDITIONAL_JUMP)
// 0053bede: MOV DL,byte ptr [ESP + EAX*0x1 + -0x1]
//   Label: LAB_0053bede
//   XREF to: Stack[-0xa4] (DATA)
// 0053bee2: DEC EAX
// 0053bee3: INC DL
// 0053bee5: AND EDX,0xff
// 0053beeb: TEST byte ptr [EDX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 0053bef2: JZ 0x0053befd
//   XREF to: 0053befd (CONDITIONAL_JUMP)
// 0053bef4: XOR DL,DL
// 0053bef6: MOV byte ptr [ESP + EAX*0x1],DL
//   XREF to: Stack[-0xa4] (DATA)
// 0053bef9: TEST EAX,EAX
// 0053befb: JG 0x0053bede
//   XREF to: 0053bede (CONDITIONAL_JUMP)
// 0053befd: TEST EAX,EAX
//   Label: LAB_0053befd
// 0053beff: JLE 0x0053bfd9
//   XREF to: 0053bfd9 (CONDITIONAL_JUMP)
// 0053bf05: MOV EAX,ESP
// 0053bf07: PUSH EAX
// 0053bf08: PUSH EBP
// 0053bf09: MOV EDX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x4] (READ)
// 0053bf10: PUSH EDX
// 0053bf11: CALL core_mission.cpp_FUN_00524660
//   XREF to: 00524660 (UNCONDITIONAL_CALL)
// 0053bf16: ADD ESP,0xc
// 0053bf19: MOV ECX,dword ptr [0x00680814]
//   Label: LAB_0053bf19
//   XREF to: 00680814 (READ)
// 0053bf1f: MOV EBX,EBP
// 0053bf21: TEST ECX,ECX
// 0053bf23: JNZ 0x0053bfef
//   XREF to: 0053bfef (CONDITIONAL_JUMP)
// 0053bf29: PUSH EBP
//   Label: LAB_0053bf29
// 0053bf2a: MOV ECX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 0053bf31: PUSH ECX
// 0053bf32: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 0053bf37: ADD ESP,0x8
// 0053bf3a: MOV EBX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 0053bf41: PUSH EBX
// 0053bf42: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053bf47: ADD ESP,0x4
// 0053bf4a: MOV ESI,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0053bf50: PUSH ESI
// 0053bf51: PUSH EBP
// 0053bf52: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0053bf57: MOV EDX,EAX
// 0053bf59: ADD ESP,0x8
// 0053bf5c: TEST EAX,EAX
// 0053bf5e: JZ 0x0053bf80
//   XREF to: 0053bf80 (CONDITIONAL_JUMP)
// 0053bf60: LEA EDX,[EAX + 0x88]
// 0053bf66: ADD EAX,0x44
//   Label: LAB_0053bf66
// 0053bf69: MOV dword ptr [EAX + 0x2470],0x0
// 0053bf73: CMP EAX,EDX
// 0053bf75: JNZ 0x0053bf66
//   XREF to: 0053bf66 (CONDITIONAL_JUMP)
// 0053bf77: LEA EAX,[EAX]
// 0053bf7d: LEA EDX,[EDX]
// 0053bf80: PUSH EBP
//   Label: LAB_0053bf80
// 0053bf81: MOV EAX,dword ptr [EBP + 0x154]
// 0053bf87: CALL dword ptr [EAX]
// 0053bf89: ADD ESP,0x4
// 0053bf8c: PUSH 0x0
// 0053bf8e: MOV EAX,dword ptr [EBP + 0x154]
// 0053bf94: PUSH EBP
// 0053bf95: CALL dword ptr [EAX + 0x84]
// 0053bf9b: ADD ESP,0x8
// 0053bf9e: PUSH EBP
// 0053bf9f: MOV EDI,dword ptr [ESP + 0xac]
// 0053bfa6: PUSH EDI
// 0053bfa7: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053bfac: ADD ESP,0x8
// 0053bfaf: ADD ESP,0x94
// 0053bfb5: POP EBP
// 0053bfb6: POP EDI
// 0053bfb7: POP ESI
// 0053bfb8: POP EBX
// 0053bfb9: RET
// 0053bfba: PUSH 0x63c749
//   Label: LAB_0053bfba
//   XREF to: 0063c749 (DATA)
// 0053bfbf: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053bfc5: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0053bfc6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053bfcb: ADD ESP,0x8
// 0053bfce: ADD ESP,0x94
// 0053bfd4: POP EBP
// 0053bfd5: POP EDI
// 0053bfd6: POP ESI
// 0053bfd7: POP EBX
// 0053bfd8: RET
// 0053bfd9: PUSH EBP
//   Label: LAB_0053bfd9
// 0053bfda: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 0053bfe1: PUSH EAX
// 0053bfe2: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 0053bfe7: ADD ESP,0x8
// 0053bfea: JMP 0x0053bf19
//   XREF to: 0053bf19 (UNCONDITIONAL_JUMP)
// 0053bfef: LEA EDI,[ESP + 0x64]
//   Label: LAB_0053bfef
//   XREF to: Stack[-0x40] (DATA)
// 0053bff3: MOV ESI,EBP
// 0053bff5: PUSH EDI
// 0053bff6: MOV AL,byte ptr [ESI]
//   Label: LAB_0053bff6
// 0053bff8: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x40] (DATA)
// 0053bffa: CMP AL,0x0
// 0053bffc: JZ 0x0053c00e
//   XREF to: 0053c00e (CONDITIONAL_JUMP)
// 0053bffe: MOV AL,byte ptr [ESI + 0x1]
// 0053c001: ADD ESI,0x2
// 0053c004: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x3f] (WRITE)
// 0053c007: ADD EDI,0x2
// 0053c00a: CMP AL,0x0
// 0053c00c: JNZ 0x0053bff6
//   XREF to: 0053bff6 (CONDITIONAL_JUMP)
// 0053c00e: POP EDI
//   Label: LAB_0053c00e
// 0053c00f: PUSH 0x1
//   Label: LAB_0053c00f
// 0053c011: PUSH 0x1e
// 0053c013: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x40] (DATA)
// 0053c017: PUSH EAX
// 0053c018: PUSH 0x63b7b6
//   XREF to: 0063b7b6 (DATA)
// 0053c01d: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053c023: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053c024: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0053c029: ADD ESP,0x14
// 0053c02c: TEST EAX,EAX
// 0053c02e: JNZ 0x0053c06a
//   XREF to: 0053c06a (CONDITIONAL_JUMP)
// 0053c030: MOV EAX,0x994
// 0053c035: MOV EDI,0x63c7d7
//   XREF to: 0063c7d7 (DATA)
// 0053c03a: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 0053c03f: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 0053c045: TEST EBP,EBP
// 0053c047: JZ 0x0053bd97
//   XREF to: 0053bd97 (CONDITIONAL_JUMP)
// 0053c04d: PUSH 0x2
// 0053c04f: MOV EAX,dword ptr [EBP + 0x154]
// 0053c055: PUSH EBP
// 0053c056: CALL dword ptr [EAX + 0xe4]
// 0053c05c: ADD ESP,0x8
// 0053c05f: ADD ESP,0x94
// 0053c065: POP EBP
// 0053c066: POP EDI
// 0053c067: POP ESI
// 0053c068: POP EBX
// 0053c069: RET
// 0053c06a: LEA EAX,[ESP + 0x64]
//   Label: LAB_0053c06a
//   XREF to: Stack[-0x40] (DATA)
// 0053c06e: PUSH EAX
// 0053c06f: PUSH EBX
// 0053c070: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0053c076: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 0053c077: CALL core_msnedit.cpp_FUN_0053d220
//   XREF to: 0053d220 (UNCONDITIONAL_CALL)
// 0053c07c: ADD ESP,0xc
// 0053c07f: TEST EAX,EAX
// 0053c081: JZ 0x0053c00f
//   XREF to: 0053c00f (CONDITIONAL_JUMP)
// 0053c083: LEA ESI,[ESP + 0x64]
//   XREF to: Stack[-0x40] (DATA)
// 0053c087: MOV EDI,EBX
// 0053c089: PUSH EDI
// 0053c08a: MOV AL,byte ptr [ESI]
//   Label: LAB_0053c08a
//   XREF to: Stack[-0x40] (DATA)
// 0053c08c: MOV byte ptr [EDI],AL
// 0053c08e: CMP AL,0x0
// 0053c090: JZ 0x0053c0a2
//   XREF to: 0053c0a2 (CONDITIONAL_JUMP)
// 0053c092: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x3f] (READ)
// 0053c095: ADD ESI,0x2
// 0053c098: MOV byte ptr [EDI + 0x1],AL
// 0053c09b: ADD EDI,0x2
// 0053c09e: CMP AL,0x0
// 0053c0a0: JNZ 0x0053c08a
//   XREF to: 0053c08a (CONDITIONAL_JUMP)
// 0053c0a2: POP EDI
//   Label: LAB_0053c0a2
// 0053c0a3: JMP 0x0053bf29
//   XREF to: 0053bf29 (UNCONDITIONAL_JUMP)
