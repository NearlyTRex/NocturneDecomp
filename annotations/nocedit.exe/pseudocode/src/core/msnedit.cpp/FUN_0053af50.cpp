// Name: core_msnedit.cpp_FUN_0053af50
// Address: 0053af50
// Address Range: [[0053af50, 0053b02c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053af50()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ad6a [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0053af24 = 0053af6c
//   TerminatedCString s_Reloading_keyframed_mode_0063c5bc
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02f7a02c
//   undefined4 DAT_02f7c52c
//   undefined4 DAT_02f7c530
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_freeAllModels_FUN_00478cb0
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_msnedit.cpp_FUN_0053b510
//   core_msnedit.cpp_FUN_0053eb40
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053af50(undefined4 param_1, undefined4 param_2) */

void core_msnedit_cpp_FUN_0053af50(void)

{
  CKeyFramedModel *this_ptr;
  CDemonMission *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  switch(*in_stack_00000008) {
  case 5:
    if (*(int *)in_stack_00000008[0x1a] != 0) {
      core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      return;
    }
    break;
  case 6:
    this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)in_stack_00000008[0x1a]);
    core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(this_ptr);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reloading keyframed models...");
    core_dmodel_cpp_freeAllModels_FUN_00478cb0();
    core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
    return;
  case 8:
    core_msnedit_cpp_FUN_0053eb40();
    return;
  case 0xb:
    core_msnedit_cpp_RelevantActorsToTesting_FUN_0053b030();
    return;
  case 0xc:
    core_msnedit_cpp_FUN_0053b510();
    return;
  case 0xd:
    if (-1 < DAT_02f7c52c) {
      DAT_02f7c52c = 0xffffffff;
      return;
    }
    DAT_02f7c530 = 0;
    DAT_02f7c52c = (int)(in_stack_00000008 + -0xbde80b) / 0xec;
    return;
  }
  return;
}


// Assembly code:
// 0053af50: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053af50
// 0053af51: PUSH EDI
// 0053af52: PUSH EBP
// 0053af53: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0053af57: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0053af5b: MOV EDX,dword ptr [EAX]
// 0053af5d: SUB EDX,0x5
// 0053af60: CMP EDX,0x8
// 0053af63: JA 0x0053af75
//   XREF to: 0053af75 (CONDITIONAL_JUMP)
// 0053af65: JMP dword ptr [EDX*0x4 + 0x53af24]
//   Label: switchD
//   XREF to: 0053af6c (COMPUTED_JUMP)
//   XREF to: 0053af75 (COMPUTED_JUMP)
//   XREF to: 0053af87 (COMPUTED_JUMP)
//   XREF to: 0053afc2 (COMPUTED_JUMP)
//   XREF to: 0053afd0 (COMPUTED_JUMP)
//   XREF to: 0053afde (COMPUTED_JUMP)
//   XREF to: 0053aff1 (COMPUTED_JUMP)
//   XREF to: 0053af24 (DATA)
// 0053af6c: MOV EAX,dword ptr [EAX + 0x68]
//   Label: caseD_5
// 0053af6f: MOV EDX,dword ptr [EAX]
// 0053af71: TEST EDX,EDX
// 0053af73: JNZ 0x0053af79
//   XREF to: 0053af79 (CONDITIONAL_JUMP)
// 0053af75: POP EBP
//   Label: caseD_a
// 0053af76: POP EDI
// 0053af77: POP EBX
// 0053af78: RET
// 0053af79: PUSH EDX
//   Label: LAB_0053af79
// 0053af7a: PUSH EBX
// 0053af7b: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053af80: ADD ESP,0x8
// 0053af83: POP EBP
// 0053af84: POP EDI
// 0053af85: POP EBX
// 0053af86: RET
// 0053af87: MOV EDI,dword ptr [EAX + 0x68]
//   Label: caseD_6
// 0053af8a: PUSH EDI
// 0053af8b: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0053af90: ADD ESP,0x4
// 0053af93: PUSH EAX
// 0053af94: CALL core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
//   XREF to: 0047cbc0 (UNCONDITIONAL_CALL)
// 0053af99: ADD ESP,0x4
// 0053af9c: PUSH 0x63c5bc
//   XREF to: 0063c5bc (DATA)
// 0053afa1: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053afa7: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0053afa8: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053afad: ADD ESP,0x8
// 0053afb0: CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0
//   XREF to: 00478cb0 (UNCONDITIONAL_CALL)
// 0053afb5: PUSH EBX
// 0053afb6: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 0053afbb: ADD ESP,0x4
// 0053afbe: POP EBP
// 0053afbf: POP EDI
// 0053afc0: POP EBX
// 0053afc1: RET
// 0053afc2: PUSH EAX
//   Label: caseD_b
// 0053afc3: PUSH EBX
// 0053afc4: CALL core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030
//   XREF to: 0053b030 (UNCONDITIONAL_CALL)
// 0053afc9: ADD ESP,0x8
// 0053afcc: POP EBP
// 0053afcd: POP EDI
// 0053afce: POP EBX
// 0053afcf: RET
// 0053afd0: PUSH EAX
//   Label: caseD_c
// 0053afd1: PUSH EBX
// 0053afd2: CALL core_msnedit.cpp_FUN_0053b510
//   XREF to: 0053b510 (UNCONDITIONAL_CALL)
// 0053afd7: ADD ESP,0x8
// 0053afda: POP EBP
// 0053afdb: POP EDI
// 0053afdc: POP EBX
// 0053afdd: RET
// 0053afde: PUSH ESI
//   Label: caseD_8
// 0053afdf: MOV ESI,dword ptr [EAX + 0x68]
// 0053afe2: PUSH ESI
// 0053afe3: PUSH EBX
// 0053afe4: CALL core_msnedit.cpp_FUN_0053eb40
//   XREF to: 0053eb40 (UNCONDITIONAL_CALL)
// 0053afe9: ADD ESP,0x8
// 0053afec: POP ESI
// 0053afed: POP EBP
// 0053afee: POP EDI
// 0053afef: POP EBX
// 0053aff0: RET
// 0053aff1: CMP dword ptr [0x02f7c52c],0x0
//   Label: caseD_d
//   XREF to: 02f7c52c (READ)
// 0053aff8: JL 0x0053b008
//   XREF to: 0053b008 (CONDITIONAL_JUMP)
// 0053affa: MOV dword ptr [0x02f7c52c],0xffffffff
//   XREF to: 02f7c52c (WRITE)
// 0053b004: POP EBP
// 0053b005: POP EDI
// 0053b006: POP EBX
// 0053b007: RET
// 0053b008: MOV EDX,EAX
//   Label: LAB_0053b008
// 0053b00a: SUB EDX,0x2f7a02c
//   XREF to: 02f7a02c (DATA)
// 0053b010: MOV EBX,0xec
// 0053b015: MOV EAX,EDX
// 0053b017: SAR EDX,0x1f
// 0053b01a: IDIV EBX
// 0053b01c: XOR ECX,ECX
// 0053b01e: MOV dword ptr [0x02f7c530],ECX
//   XREF to: 02f7c530 (WRITE)
// 0053b024: MOV [0x02f7c52c],EAX
//   XREF to: 02f7c52c (WRITE)
// 0053b029: POP EBP
// 0053b02a: POP EDI
// 0053b02b: POP EBX
// 0053b02c: RET
