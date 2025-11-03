// Name: core_msnedit.cpp_FUN_0053b9f0
// Address: 0053b9f0
// Address Range: [[0053b9f0, 0053bc79]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053b9f0()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a6b3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Confirm_new_actor_name_0063b7b6
//   TerminatedCString s_Choose_type_of_actor_to__0063c6d0
//   TerminatedCString s_C_s_0063c6ef
//   TerminatedCString s_core_msnedit_cpp_0063c6f3
//   TerminatedCString s_core_msnedit_cpp_0063c707
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   undefined4 DAT_00680648
//   int g_ConfirmNewActorNames = 0x1
//   int g_NumActorClassTypes
//   CDemonActorType*[200] g_ActorClassRegistrations
//   undefined4 g_ActorClassRegistrations[1]
//   CEditorTools g_CEditorToolsPtr
//   int g_CurrentDebugLine
//   CDemonMission g_CDemonMissionInstance
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_msnedit.cpp_FUN_00535c60
//   core_msnedit.cpp_FUN_0053d220
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053b9f0(undefined4 param_1) */

void core_msnedit_cpp_FUN_0053b9f0(void)

{
  char cVar1;
  CDemonActor *this_ptr;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *pCVar4;
  int iVar5;
  char *pcVar6;
  CDemonMission *in_stack_0000001c;
  CDemonMission *in_stack_00000038;
  CDemonMission *in_stack_0000003c;
  undefined4 in_stack_00000080;
  CStrList_vtable *pCStack_43c;
  uint in_stack_fffffbec;
  uint in_stack_fffffbf0;
  uint in_stack_fffffbf4;
  uint in_stack_fffffbf8;
  uint in_stack_fffffbfc;
  uint in_stack_fffffc00;
  uint in_stack_fffffc04;
  CDemonActor *in_stack_fffffc38;
  uint in_stack_fffffc3c;
  char **in_stack_fffffc40;
  CStrList_vtable *in_stack_fffffc44;
  uint in_stack_fffffc48;
  uint in_stack_fffffc4c;
  uint in_stack_fffffc50;
  char acStack_90 [4];
  char acStack_8c [120];
  char acStack_14 [4];
  
  iVar3 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffbb8);
  if (0 < g_NumActorClassTypes) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar5) + 0x2c) != 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffbbc,
                   (char *)(*(int *)((int)g_ActorClassRegistrations + iVar5) + 1));
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffffbbc);
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffbc0,"Choose type of actor to create",DAT_00680648,
                     0);
  if (-1 < iVar3) {
    DAT_00680648 = iVar3;
    pCStack_43c = (CStrList_vtable *)
                  shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)&pCStack_43c,iVar3);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_90,"C%s");
    pCStack_43c = (CStrList_vtable *)0x53baa0;
    this_ptr = core_actor_cpp_createActorByName_FUN_0040c430(acStack_8c);
    pCStack_43c = (CStrList_vtable *)0x53bab5;
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_0000001c);
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    (this_ptr->location).area_id = *(int *)in_stack_0000001c->field0_0x0;
    pfVar2 = (float *)core_msnedit_cpp_FUN_00535c60();
    (this_ptr->location).position.x = *pfVar2;
    (this_ptr->location).position.y = pfVar2[1];
    (this_ptr->location).position.z = pfVar2[2];
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    if (g_ConfirmNewActorNames != 0) {
      pcVar6 = acStack_14;
      pCVar4 = this_ptr;
      do {
        cVar1 = pCVar4->actor_name[0];
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pCVar4->actor_name[1];
        pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      do {
        iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Confirm new actor name",acStack_14,0x1e,1);
        if (iVar3 == 0) {
          g_CurrentDebugLine = 0x8ff;
          g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
          if (this_ptr != (CDemonActor *)0x0) {
            (*this_ptr->vtable->dtor)
                      (this_ptr,2,(uint)in_stack_fffffc38,in_stack_fffffc3c,(uint)in_stack_fffffc40,
                       (uint)in_stack_fffffc44,in_stack_fffffc48,in_stack_fffffc4c,in_stack_fffffc50
                      );
          }
          goto LAB_0053bc0f;
        }
        iVar3 = core_msnedit_cpp_FUN_0053d220(g_CDemonMissionPtr);
      } while (iVar3 == 0);
      pcVar6 = &stack0x00000048;
      pCVar4 = this_ptr;
      do {
        cVar1 = *pcVar6;
        pCVar4->actor_name[0] = cVar1;
        in_stack_fffffc38 = this_ptr;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pCVar4->actor_name[1] = cVar1;
        pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
      } while (cVar1 != '\0');
    }
    iVar3 = (*this_ptr->vtable->initializeInEditor)(this_ptr);
    if (iVar3 == 0) {
      g_CurrentDebugLine = 0x906;
      g_CurrentDebugFilename = "..\\core\\msnedit.cpp";
      (*this_ptr->vtable->dtor)
                (this_ptr,2,in_stack_fffffbec,in_stack_fffffbf0,in_stack_fffffbf4,in_stack_fffffbf8,
                 in_stack_fffffbfc,in_stack_fffffc00,in_stack_fffffc04);
    }
    else {
      core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000038);
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_0000003c);
      (*this_ptr->vtable->setup)(this_ptr);
      core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
    }
  }
LAB_0053bc0f:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc38,0,(uint)in_stack_fffffc38,in_stack_fffffc3c,
             (uint)in_stack_fffffc40,(uint)in_stack_fffffc44,in_stack_fffffc48);
  return;
}


// Assembly code:
// 0053b9f0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053b9f0
// 0053b9f1: PUSH ESI
// 0053b9f2: PUSH EDI
// 0053b9f3: PUSH EBP
// 0053b9f4: SUB ESP,0x438
// 0053b9fa: MOV EAX,ESP
// 0053b9fc: PUSH EAX
// 0053b9fd: XOR ESI,ESI
// 0053b9ff: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053ba04: MOV EDX,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 0053ba0a: ADD ESP,0x4
// 0053ba0d: TEST EDX,EDX
// 0053ba0f: JLE 0x0053ba3c
//   XREF to: 0053ba3c (CONDITIONAL_JUMP)
// 0053ba11: XOR EDI,EDI
// 0053ba13: MOV EAX,dword ptr [EDI + 0x822048]
//   Label: LAB_0053ba13
//   XREF to: 00822048 (READ)
//   XREF to: 0082204c (READ)
// 0053ba19: CMP dword ptr [EAX + 0x2c],0x0
// 0053ba1d: JZ 0x0053ba2e
//   XREF to: 0053ba2e (CONDITIONAL_JUMP)
// 0053ba1f: INC EAX
// 0053ba20: PUSH EAX
// 0053ba21: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x448] (DATA)
// 0053ba25: PUSH EAX
// 0053ba26: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053ba2b: ADD ESP,0x8
// 0053ba2e: MOV ECX,dword ptr [0x00822044]
//   Label: LAB_0053ba2e
//   XREF to: 00822044 (READ)
// 0053ba34: INC ESI
// 0053ba35: ADD EDI,0x4
// 0053ba38: CMP ESI,ECX
// 0053ba3a: JL 0x0053ba13
//   XREF to: 0053ba13 (CONDITIONAL_JUMP)
// 0053ba3c: MOV EAX,ESP
//   Label: LAB_0053ba3c
// 0053ba3e: PUSH EAX
// 0053ba3f: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053ba44: ADD ESP,0x4
// 0053ba47: PUSH 0x0
// 0053ba49: MOV EBX,dword ptr [0x00680648]
//   XREF to: 00680648 (READ)
// 0053ba4f: PUSH EBX
// 0053ba50: PUSH 0x63c6d0
//   XREF to: 0063c6d0 (DATA)
// 0053ba55: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x448] (DATA)
// 0053ba59: PUSH EAX
// 0053ba5a: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053ba5f: ADD ESP,0x10
// 0053ba62: TEST EAX,EAX
// 0053ba64: JL 0x0053bc0f
//   XREF to: 0053bc0f (CONDITIONAL_JUMP)
// 0053ba6a: PUSH EAX
// 0053ba6b: MOV [0x00680648],EAX
//   XREF to: 00680648 (WRITE)
// 0053ba70: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x448] (DATA)
// 0053ba74: PUSH EAX
// 0053ba75: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053ba7a: ADD ESP,0x8
// 0053ba7d: PUSH EAX
// 0053ba7e: PUSH 0x63c6ef
//   XREF to: 0063c6ef (DATA)
// 0053ba83: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0xa0] (DATA)
// 0053ba8a: PUSH EAX
// 0053ba8b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053ba90: ADD ESP,0xc
// 0053ba93: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0xa0] (DATA)
// 0053ba9a: PUSH EAX
// 0053ba9b: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 0053baa0: ADD ESP,0x4
// 0053baa3: PUSH EAX
// 0053baa4: MOV EDI,dword ptr [ESP + 0x450]
//   XREF to: Stack[0x4] (READ)
// 0053baab: PUSH EDI
// 0053baac: MOV ESI,EAX
// 0053baae: MOV EBP,EAX
// 0053bab0: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 0053bab5: ADD ESP,0x8
// 0053bab8: PUSH 0x1
// 0053baba: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053babf: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0053bac4: MOV EAX,dword ptr [EDI]
// 0053bac6: MOV dword ptr [ESI + 0x2c],EAX
// 0053bac9: MOV EDX,dword ptr [EDI + 0x18]
// 0053bacc: MOV ECX,dword ptr [EDI + 0x20]
// 0053bacf: ADD EDX,ECX
// 0053bad1: MOV EAX,EDX
// 0053bad3: SAR EDX,0x1f
// 0053bad6: SUB EAX,EDX
// 0053bad8: SAR EAX,0x1
// 0053bada: MOV EBX,dword ptr [EDI + 0x1c]
// 0053badd: MOV EDX,dword ptr [EDI + 0x14]
// 0053bae0: ADD ESP,0x8
// 0053bae3: ADD EDX,EBX
// 0053bae5: PUSH EAX
// 0053bae6: MOV EAX,EDX
// 0053bae8: SAR EDX,0x1f
// 0053baeb: SUB EAX,EDX
// 0053baed: SAR EAX,0x1
// 0053baef: PUSH EAX
// 0053baf0: LEA EAX,[ESP + 0x434]
//   XREF to: Stack[-0x1c] (DATA)
// 0053baf7: PUSH EAX
// 0053baf8: CALL core_msnedit.cpp_FUN_00535c60
//   XREF to: 00535c60 (UNCONDITIONAL_CALL)
// 0053bafd: LEA EDX,[ESI + 0x20]
// 0053bb00: FLD float ptr [EAX]
// 0053bb02: ADD ESP,0xc
// 0053bb05: FSTP float ptr [EDX]
// 0053bb07: PUSH 0x0
// 0053bb09: MOV EBX,ESI
// 0053bb0b: MOV ECX,dword ptr [EAX + 0x4]
// 0053bb0e: MOV dword ptr [EDX + 0x4],ECX
// 0053bb11: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053bb16: MOV ECX,dword ptr [EAX + 0x8]
// 0053bb19: MOV dword ptr [EDX + 0x8],ECX
// 0053bb1c: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0053bb21: MOV EDI,dword ptr [0x00680814]
//   XREF to: 00680814 (READ)
// 0053bb27: ADD ESP,0x8
// 0053bb2a: TEST EDI,EDI
// 0053bb2c: JZ 0x0053bbb9
//   XREF to: 0053bbb9 (CONDITIONAL_JUMP)
// 0053bb32: LEA EDI,[ESP + 0x40c]
//   XREF to: Stack[-0x3c] (DATA)
// 0053bb39: PUSH EDI
// 0053bb3a: MOV AL,byte ptr [ESI]
//   Label: LAB_0053bb3a
// 0053bb3c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x3c] (DATA)
// 0053bb3e: CMP AL,0x0
// 0053bb40: JZ 0x0053bb52
//   XREF to: 0053bb52 (CONDITIONAL_JUMP)
// 0053bb42: MOV AL,byte ptr [ESI + 0x1]
// 0053bb45: ADD ESI,0x2
// 0053bb48: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x3b] (WRITE)
// 0053bb4b: ADD EDI,0x2
// 0053bb4e: CMP AL,0x0
// 0053bb50: JNZ 0x0053bb3a
//   XREF to: 0053bb3a (CONDITIONAL_JUMP)
// 0053bb52: POP EDI
//   Label: LAB_0053bb52
// 0053bb53: PUSH 0x1
//   Label: LAB_0053bb53
// 0053bb55: PUSH 0x1e
// 0053bb57: LEA EAX,[ESP + 0x414]
//   XREF to: Stack[-0x3c] (DATA)
// 0053bb5e: PUSH EAX
// 0053bb5f: PUSH 0x63b7b6
//   XREF to: 0063b7b6 (DATA)
// 0053bb64: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053bb69: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0053bb6a: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0053bb6f: ADD ESP,0x14
// 0053bb72: TEST EAX,EAX
// 0053bb74: JZ 0x0053bc29
//   XREF to: 0053bc29 (CONDITIONAL_JUMP)
// 0053bb7a: LEA EAX,[ESP + 0x40c]
//   XREF to: Stack[-0x3c] (DATA)
// 0053bb81: PUSH EAX
// 0053bb82: PUSH EBX
// 0053bb83: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0053bb89: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 0053bb8a: CALL core_msnedit.cpp_FUN_0053d220
//   XREF to: 0053d220 (UNCONDITIONAL_CALL)
// 0053bb8f: ADD ESP,0xc
// 0053bb92: TEST EAX,EAX
// 0053bb94: JZ 0x0053bb53
//   XREF to: 0053bb53 (CONDITIONAL_JUMP)
// 0053bb96: LEA ESI,[ESP + 0x40c]
//   XREF to: Stack[-0x3c] (DATA)
// 0053bb9d: MOV EDI,EBX
// 0053bb9f: PUSH EDI
// 0053bba0: MOV AL,byte ptr [ESI]
//   Label: LAB_0053bba0
//   XREF to: Stack[-0x3c] (DATA)
// 0053bba2: MOV byte ptr [EDI],AL
// 0053bba4: CMP AL,0x0
// 0053bba6: JZ 0x0053bbb8
//   XREF to: 0053bbb8 (CONDITIONAL_JUMP)
// 0053bba8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x3b] (READ)
// 0053bbab: ADD ESI,0x2
// 0053bbae: MOV byte ptr [EDI + 0x1],AL
// 0053bbb1: ADD EDI,0x2
// 0053bbb4: CMP AL,0x0
// 0053bbb6: JNZ 0x0053bba0
//   XREF to: 0053bba0 (CONDITIONAL_JUMP)
// 0053bbb8: POP EDI
//   Label: LAB_0053bbb8
// 0053bbb9: PUSH EBP
//   Label: LAB_0053bbb9
// 0053bbba: MOV EAX,dword ptr [EBP + 0x154]
// 0053bbc0: CALL dword ptr [EAX + 0xd8]
// 0053bbc6: ADD ESP,0x4
// 0053bbc9: TEST EAX,EAX
// 0053bbcb: JZ 0x0053bc54
//   XREF to: 0053bc54 (CONDITIONAL_JUMP)
// 0053bbd1: PUSH EBP
// 0053bbd2: MOV EDX,dword ptr [ESP + 0x450]
// 0053bbd9: PUSH EDX
// 0053bbda: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 0053bbdf: ADD ESP,0x8
// 0053bbe2: MOV ECX,dword ptr [ESP + 0x44c]
// 0053bbe9: PUSH ECX
// 0053bbea: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053bbef: ADD ESP,0x4
// 0053bbf2: MOV EAX,dword ptr [EBP + 0x154]
// 0053bbf8: PUSH EBP
// 0053bbf9: CALL dword ptr [EAX]
// 0053bbfb: ADD ESP,0x4
// 0053bbfe: PUSH EBP
// 0053bbff: MOV EBX,dword ptr [ESP + 0x450]
// 0053bc06: PUSH EBX
// 0053bc07: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053bc0c: ADD ESP,0x8
//   Label: LAB_0053bc0c
// 0053bc0f: PUSH 0x0
//   Label: LAB_0053bc0f
// 0053bc11: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x448] (DATA)
// 0053bc15: PUSH EAX
// 0053bc16: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053bc1b: ADD ESP,0x8
// 0053bc1e: ADD ESP,0x438
// 0053bc24: POP EBP
// 0053bc25: POP EDI
// 0053bc26: POP ESI
// 0053bc27: POP EBX
// 0053bc28: RET
// 0053bc29: MOV ECX,0x8ff
//   Label: LAB_0053bc29
// 0053bc2e: MOV EDX,0x63c6f3
//   XREF to: 0063c6f3 (PARAM)
// 0053bc33: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0053bc39: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0053bc3f: TEST EBP,EBP
// 0053bc41: JZ 0x0053bc0f
//   XREF to: 0053bc0f (CONDITIONAL_JUMP)
// 0053bc43: PUSH 0x2
// 0053bc45: MOV EAX,dword ptr [EBP + 0x154]
// 0053bc4b: PUSH EBP
// 0053bc4c: CALL dword ptr [EAX + 0xe4]
// 0053bc52: JMP 0x0053bc0c
//   XREF to: 0053bc0c (UNCONDITIONAL_JUMP)
// 0053bc54: MOV EAX,0x906
//   Label: LAB_0053bc54
// 0053bc59: PUSH 0x2
// 0053bc5b: MOV EDI,0x63c707
//   XREF to: 0063c707 (DATA)
// 0053bc60: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 0053bc65: PUSH EBP
// 0053bc66: MOV EAX,dword ptr [EBP + 0x154]
// 0053bc6c: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 0053bc72: CALL dword ptr [EAX + 0xe4]
// 0053bc78: JMP 0x0053bc0c
//   XREF to: 0053bc0c (UNCONDITIONAL_JUMP)
