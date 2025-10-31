// Name: core_script.cpp_FUN_00565d00
// Address: 00565d00
// Address Range: [[00565d00, 00565e6f]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00565d00()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565684 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00565c70 = 00565d10
//   TerminatedCString s_No_such_actor_s_00643e99
//   TerminatedCString s_No_such_label_s_00643eaa
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   void* PTR_s_label_006441c0_00680e28 = 006441c0
//   CEditorTools g_CEditorToolsPtr
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_0310aa4c
//   undefined4 DAT_0310ab1c
//   undefined4 DAT_0310ad74
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_msnedit.cpp_FUN_0053eb40
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   core_script.cpp_CScript_Unk18_FUN_005669a0
//   core_script.cpp_FUN_00560160
//   core_script.cpp_FUN_005644e0
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00565d00(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_FUN_00565d00(void)

{
  int iVar1;
  char *pcVar2;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (-1 < in_stack_0000000c) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_0000000c < iVar1) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                ((CStrList *)(in_stack_00000004 + 0x38),in_stack_0000000c);
      iVar1 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
      if (-1 < iVar1) {
        switch(*(undefined4 *)(&DAT_0310ad74 + iVar1 * 0x328)) {
        case 3:
          pcVar2 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
          if (pcVar2 == (char *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No such actor %s");
            return;
          }
          core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
          return;
        case 5:
          core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
          iVar1 = core_script_cpp_FUN_00560160();
          if (-1 < iVar1) {
            DAT_0310fd48 = *(int *)(*(int *)(in_stack_00000004 + 0x34) + iVar1 * 8) + -1;
            DAT_0310fd44 = 0;
            core_script_cpp_FUN_005644e0();
            core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
            core_script_cpp_CScript_Unk18_FUN_005669a0();
            return;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No such label %s");
          return;
        case 0xd:
        case 0x19:
          core_msnedit_cpp_FUN_0053eb40();
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00565d00: PUSH EBX
//   Label: core_script.cpp_FUN_00565d00
// 00565d01: PUSH ESI
// 00565d02: PUSH EDI
// 00565d03: PUSH EBP
// 00565d04: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00565d08: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00565d0c: TEST EDI,EDI
// 00565d0e: JGE 0x00565d15
//   XREF to: 00565d15 (CONDITIONAL_JUMP)
// 00565d10: POP EBP
//   Label: caseD_20
// 00565d11: POP EDI
// 00565d12: POP ESI
// 00565d13: POP EBX
// 00565d14: RET
// 00565d15: LEA ESI,[EBX + 0x38]
//   Label: LAB_00565d15
// 00565d18: PUSH ESI
// 00565d19: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00565d1e: ADD ESP,0x4
// 00565d21: CMP EDI,EAX
// 00565d23: JGE 0x00565d10
//   XREF to: 00565d10 (CONDITIONAL_JUMP)
// 00565d25: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00565d29: PUSH EDX
// 00565d2a: PUSH EDI
// 00565d2b: PUSH EBX
// 00565d2c: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00565d31: ADD ESP,0xc
// 00565d34: PUSH 0x78
// 00565d36: PUSH 0x680e28
//   XREF to: 00680e28 (DATA)
// 00565d3b: PUSH EAX
// 00565d3c: PUSH EDI
// 00565d3d: PUSH ESI
// 00565d3e: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00565d43: ADD ESP,0x8
// 00565d46: PUSH EAX
// 00565d47: PUSH 0x310aa4c
//   XREF to: 0310aa4c (DATA)
// 00565d4c: CALL core_script.cpp_SCmdParse_bestParse_FUN_00561db0
//   XREF to: 00561db0 (UNCONDITIONAL_CALL)
// 00565d51: ADD ESP,0x14
// 00565d54: MOV ESI,EAX
// 00565d56: TEST EAX,EAX
// 00565d58: JL 0x00565d10
//   XREF to: 00565d10 (CONDITIONAL_JUMP)
// 00565d5a: IMUL EAX,EAX,0x328
// 00565d60: MOV EAX,dword ptr [EAX + 0x310ad74]
//   XREF to: 0310ad74 (DATA)
// 00565d66: CMP EAX,0x20
// 00565d69: JA 0x00565d10
//   XREF to: 00565d10 (CONDITIONAL_JUMP)
// 00565d6b: JMP dword ptr [EAX*0x4 + 0x565c70]
//   Label: switchD
//   XREF to: 00565d10 (COMPUTED_JUMP)
//   XREF to: 00565d72 (COMPUTED_JUMP)
//   XREF to: 00565dd0 (COMPUTED_JUMP)
//   XREF to: 00565e4c (COMPUTED_JUMP)
//   XREF to: 00565c70 (DATA)
// 00565d72: IMUL EAX,ESI,0x328
//   Label: caseD_3
// 00565d78: MOV EBX,0x310ab1c
//   XREF to: 0310ab1c (PARAM)
// 00565d7d: ADD EAX,EBX
// 00565d7f: ADD EAX,0x64
// 00565d82: PUSH EAX
// 00565d83: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00565d89: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 00565d8a: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 00565d8f: ADD ESP,0x8
// 00565d92: TEST EAX,EAX
// 00565d94: JNZ 0x00565dbc
//   XREF to: 00565dbc (CONDITIONAL_JUMP)
// 00565d96: IMUL ESI,ESI,0x328
// 00565d9c: ADD ESI,EBX
// 00565d9e: ADD ESI,0x64
// 00565da1: PUSH ESI
// 00565da2: MOV EAX,0x643e99
//   XREF to: 00643e99 (PARAM)
// 00565da7: PUSH EAX
//   XREF to: 00643e99 (DATA)
// 00565da8: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00565dae: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00565daf: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00565db4: ADD ESP,0xc
// 00565db7: POP EBP
// 00565db8: POP EDI
// 00565db9: POP ESI
// 00565dba: POP EBX
// 00565dbb: RET
// 00565dbc: PUSH EAX
//   Label: LAB_00565dbc
// 00565dbd: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00565dc2: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 00565dc3: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 00565dc8: ADD ESP,0x8
// 00565dcb: POP EBP
// 00565dcc: POP EDI
// 00565dcd: POP ESI
// 00565dce: POP EBX
// 00565dcf: RET
// 00565dd0: PUSH EBX
//   Label: caseD_5
// 00565dd1: CALL core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   XREF to: 0055a370 (UNCONDITIONAL_CALL)
// 00565dd6: IMUL EAX,ESI,0x328
// 00565ddc: MOV EDI,0x310ab1c
//   XREF to: 0310ab1c (DATA)
// 00565de1: ADD EAX,EDI
// 00565de3: ADD ESP,0x4
// 00565de6: ADD EAX,0x64
// 00565de9: PUSH EAX
// 00565dea: PUSH EBX
// 00565deb: CALL core_script.cpp_FUN_00560160
//   XREF to: 00560160 (UNCONDITIONAL_CALL)
// 00565df0: ADD ESP,0x8
// 00565df3: TEST EAX,EAX
// 00565df5: JL 0x00565e27
//   XREF to: 00565e27 (CONDITIONAL_JUMP)
// 00565df7: MOV ESI,dword ptr [EBX + 0x34]
// 00565dfa: MOV EAX,dword ptr [ESI + EAX*0x8]
// 00565dfd: DEC EAX
// 00565dfe: XOR ESI,ESI
// 00565e00: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 00565e05: MOV dword ptr [0x0310fd44],ESI
//   XREF to: 0310fd44 (WRITE)
// 00565e0b: CALL core_script.cpp_FUN_005644e0
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 00565e10: PUSH EBX
// 00565e11: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 00565e16: ADD ESP,0x4
// 00565e19: PUSH EBX
// 00565e1a: CALL core_script.cpp_CScript_Unk18_FUN_005669a0
//   XREF to: 005669a0 (UNCONDITIONAL_CALL)
// 00565e1f: ADD ESP,0x4
// 00565e22: POP EBP
// 00565e23: POP EDI
// 00565e24: POP ESI
// 00565e25: POP EBX
// 00565e26: RET
// 00565e27: IMUL ESI,ESI,0x328
//   Label: LAB_00565e27
// 00565e2d: LEA EAX,[EDI + ESI*0x1 + 0x64]
// 00565e31: PUSH EAX
// 00565e32: MOV EAX,0x643eaa
//   XREF to: 00643eaa (PARAM)
// 00565e37: PUSH EAX
//   XREF to: 00643eaa (DATA)
// 00565e38: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00565e3e: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00565e3f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00565e44: ADD ESP,0xc
// 00565e47: POP EBP
// 00565e48: POP EDI
// 00565e49: POP ESI
// 00565e4a: POP EBX
// 00565e4b: RET
// 00565e4c: IMUL ESI,ESI,0x328
//   Label: caseD_19
// 00565e52: ADD ESI,0x310ab1c
//   XREF to: 0310ab1c (DATA)
// 00565e58: ADD ESI,0x64
// 00565e5b: PUSH ESI
// 00565e5c: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00565e62: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 00565e63: CALL core_msnedit.cpp_FUN_0053eb40
//   XREF to: 0053eb40 (UNCONDITIONAL_CALL)
// 00565e68: ADD ESP,0x8
// 00565e6b: POP EBP
// 00565e6c: POP EDI
// 00565e6d: POP ESI
// 00565e6e: POP EBX
// 00565e6f: RET
