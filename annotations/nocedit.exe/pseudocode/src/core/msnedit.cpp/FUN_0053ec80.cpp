// Name: core_msnedit.cpp_FUN_0053ec80
// Address: 0053ec80
// Address Range: [[0053ec80, 0053edfe]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053ec80()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538910 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Setting_up_actors_0063d07f
//   TerminatedCString s_Finding_sound_files_in_m_0063d094
//   TerminatedCString s_s_s_s_0063d0b6
//   TerminatedCString s_Finding_sound_files_in_s_0063d0bf
//   TerminatedCString s_Sound_files_used_0063d0e0
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CScript* g_CScriptPtr = 0310f858
//   CEditorTools g_CEditorToolsPtr
//   CScript g_CScriptInstance
// Function calls:
//   core_actor.cpp_CActorProperty_FUN_0040ea50
//   core_actor.cpp_FUN_0040e130
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_script.cpp_FUN_00567bc0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053ec80(undefined4 param_1) */

void core_msnedit_cpp_FUN_0053ec80(void)

{
  CDemonActor *this_ptr;
  int *piVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CDemonMission *in_stack_00000004;
  int in_stack_ffffd564;
  uint in_stack_ffffd570;
  uint in_stack_ffffd574;
  uint in_stack_ffffd578;
  uint in_stack_ffffd57c;
  uint in_stack_ffffd580;
  undefined1 local_5ac [28];
  undefined1 auStack_590 [916];
  char acStack_1fc [4];
  char acStack_1f8 [296];
  char cStack_d0;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_5ac);
  if (*(int *)(in_stack_00000004->field6_0x54c + 0x338) == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Setting up actors...");
    core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in mission...");
  for (this_ptr = in_stack_00000004->first_actor; this_ptr != (CDemonActor *)0x0;
      this_ptr = this_ptr->next_actor) {
    core_actor_cpp_FUN_0040e130();
    (*this_ptr->vtable->getPropertyList)(this_ptr,(CActorPropertyList *)&stack0xffffd54c);
    iVar2 = 0;
    if (0 < in_stack_ffffd564) {
      piVar1 = (int *)&stack0xffffd568;
      do {
        if ((*piVar1 == 8) && (core_actor_cpp_CActorProperty_FUN_0040ea50(), cStack_d0 != '\0')) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1fc,"%s\t%s %s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_5ac + 0xc),acStack_1f8);
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 0x3b;
      } while (iVar2 < in_stack_ffffd564);
    }
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in script...");
  core_script_cpp_FUN_00567bc0();
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)(local_5ac + 0x18));
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)auStack_590,"Sound files used",-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(auStack_590 + 4),0,in_stack_ffffd570,in_stack_ffffd574,in_stack_ffffd578,
             in_stack_ffffd57c,in_stack_ffffd580);
  return;
}


// Assembly code:
// 0053ec80: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053ec80
// 0053ec81: PUSH ESI
// 0053ec82: PUSH EDI
// 0053ec83: PUSH EBP
// 0053ec84: SUB ESP,0x2aa0
// 0053ec8a: MOV EDI,dword ptr [ESP + 0x2ab4]
//   XREF to: Stack[0x4] (READ)
// 0053ec91: LEA EAX,[ESP + 0x2504]
//   XREF to: Stack[-0x5ac] (DATA)
// 0053ec98: PUSH EAX
// 0053ec99: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053ec9e: MOV EDX,dword ptr [EDI + 0x884]
// 0053eca4: ADD ESP,0x4
// 0053eca7: TEST EDX,EDX
// 0053eca9: JNZ 0x0053ecc8
//   XREF to: 0053ecc8 (CONDITIONAL_JUMP)
// 0053ecab: PUSH 0x63d07f
//   XREF to: 0063d07f (DATA)
// 0053ecb0: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ecb6: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053ecb7: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053ecbc: ADD ESP,0x8
// 0053ecbf: PUSH EDI
// 0053ecc0: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 0053ecc5: ADD ESP,0x4
// 0053ecc8: PUSH 0x63d094
//   Label: LAB_0053ecc8
//   XREF to: 0063d094 (DATA)
// 0053eccd: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ecd3: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0053ecd4: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053ecd9: MOV EDI,dword ptr [EDI + 0x548]
// 0053ecdf: ADD ESP,0x8
// 0053ece2: TEST EDI,EDI
// 0053ece4: JZ 0x0053ed8e
//   XREF to: 0053ed8e (CONDITIONAL_JUMP)
// 0053ecea: MOV EAX,ESP
//   Label: LAB_0053ecea
// 0053ecec: PUSH EAX
// 0053eced: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 0053ecf2: ADD ESP,0x4
// 0053ecf5: MOV EAX,ESP
// 0053ecf7: PUSH EAX
// 0053ecf8: MOV EBX,dword ptr [EDI + 0x154]
// 0053ecfe: PUSH EDI
// 0053ecff: CALL dword ptr [EBX + 0xd4]
// 0053ed05: ADD ESP,0x8
// 0053ed08: MOV EBP,dword ptr [ESP + 0x4]
// 0053ed0c: XOR ESI,ESI
// 0053ed0e: TEST EBP,EBP
// 0053ed10: JLE 0x0053ed80
//   XREF to: 0053ed80 (CONDITIONAL_JUMP)
// 0053ed12: LEA EBX,[ESP + 0x8]
// 0053ed16: CMP dword ptr [EBX],0x8
//   Label: LAB_0053ed16
// 0053ed19: JNZ 0x0053ed71
//   XREF to: 0053ed71 (CONDITIONAL_JUMP)
// 0053ed1b: LEA EAX,[ESP + 0x29d8]
// 0053ed22: PUSH EAX
// 0053ed23: PUSH EDI
// 0053ed24: PUSH EBX
// 0053ed25: CALL core_actor.cpp_CActorProperty_FUN_0040ea50
//   XREF to: 0040ea50 (UNCONDITIONAL_CALL)
// 0053ed2a: ADD ESP,0xc
// 0053ed2d: CMP byte ptr [ESP + 0x29d8],0x0
// 0053ed35: JZ 0x0053ed71
//   XREF to: 0053ed71 (CONDITIONAL_JUMP)
// 0053ed37: LEA EAX,[EBX + 0x4]
// 0053ed3a: PUSH EAX
// 0053ed3b: PUSH EDI
// 0053ed3c: LEA EAX,[ESP + 0x29e0]
// 0053ed43: PUSH EAX
// 0053ed44: PUSH 0x63d0b6
//   XREF to: 0063d0b6 (DATA)
// 0053ed49: LEA EAX,[ESP + 0x28bc]
// 0053ed50: PUSH EAX
// 0053ed51: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053ed56: ADD ESP,0x14
// 0053ed59: LEA EAX,[ESP + 0x28ac]
// 0053ed60: PUSH EAX
// 0053ed61: LEA EAX,[ESP + 0x2508]
// 0053ed68: PUSH EAX
// 0053ed69: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053ed6e: ADD ESP,0x8
// 0053ed71: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0053ed71
// 0053ed75: INC ESI
// 0053ed76: ADD EBX,0xec
// 0053ed7c: CMP ESI,EAX
// 0053ed7e: JL 0x0053ed16
//   XREF to: 0053ed16 (CONDITIONAL_JUMP)
// 0053ed80: MOV EDI,dword ptr [EDI + 0x14c]
//   Label: LAB_0053ed80
// 0053ed86: TEST EDI,EDI
// 0053ed88: JNZ 0x0053ecea
//   XREF to: 0053ecea (CONDITIONAL_JUMP)
// 0053ed8e: PUSH 0x63d0bf
//   Label: LAB_0053ed8e
//   XREF to: 0063d0bf (DATA)
// 0053ed93: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ed99: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053ed9a: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053ed9f: ADD ESP,0x8
// 0053eda2: LEA EAX,[ESP + 0x2504]
// 0053eda9: PUSH EAX
// 0053edaa: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053edb0: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 0053edb1: CALL core_script.cpp_FUN_00567bc0
//   XREF to: 00567bc0 (UNCONDITIONAL_CALL)
// 0053edb6: ADD ESP,0x8
// 0053edb9: LEA EAX,[ESP + 0x2504]
// 0053edc0: PUSH EAX
// 0053edc1: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053edc6: ADD ESP,0x4
// 0053edc9: PUSH 0x0
// 0053edcb: PUSH -0x1
// 0053edcd: PUSH 0x63d0e0
//   XREF to: 0063d0e0 (DATA)
// 0053edd2: LEA EAX,[ESP + 0x2510]
// 0053edd9: PUSH EAX
// 0053edda: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053eddf: ADD ESP,0x10
// 0053ede2: PUSH 0x0
// 0053ede4: LEA EAX,[ESP + 0x2508]
// 0053edeb: PUSH EAX
// 0053edec: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053edf1: ADD ESP,0x8
// 0053edf4: ADD ESP,0x2aa0
// 0053edfa: POP EBP
// 0053edfb: POP EDI
// 0053edfc: POP ESI
// 0053edfd: POP EBX
// 0053edfe: RET
