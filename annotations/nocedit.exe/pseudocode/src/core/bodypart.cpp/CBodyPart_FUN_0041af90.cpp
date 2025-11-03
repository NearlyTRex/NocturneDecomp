// Name: core_bodypart.cpp_CBodyPart_FUN_0041af90
// Address: 0041af90
// Address Range: [[0041af90, 0041b06d]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_FUN_0041af90(CBodyPart * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0 (0059c5e0) at 0059cb10 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_bodypart_cpp_00615e6a
//   TerminatedCString s_Too_many_body_part_textu_00615e7f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_FUN_0041af90(CBodyPart *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000008;
  
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->field1_0x158 + 0x34)) {
    pcVar4 = this_ptr->field1_0x158 + 0x40;
    do {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar4,in_stack_00000008);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x18;
    } while (iVar3 < *(int *)(this_ptr->field1_0x158 + 0x34));
  }
  if (9 < *(int *)(this_ptr->field1_0x158 + 0x34)) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0x47a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many body part textures!");
  }
  crt_memory_c_memset_FUN_005fde40
            (this_ptr->field1_0x158 + *(int *)(this_ptr->field1_0x158 + 0x34) * 0x18 + 0x38,0,0x18);
  pcVar4 = this_ptr->field1_0x158 + *(int *)(this_ptr->field1_0x158 + 0x34) * 0x18 + 0x40;
  do {
    cVar1 = *in_stack_00000008;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)(this_ptr->field1_0x158 + 0x34);
  *(int *)(this_ptr->field1_0x158 + 0x34) = iVar3 + 1;
  return iVar3;
}


// Assembly code:
// 0041af90: PUSH EBX
//   Label: core_bodypart.cpp_CBodyPart_FUN_0041af90
// 0041af91: PUSH ESI
// 0041af92: PUSH EDI
// 0041af93: PUSH EBP
// 0041af94: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0041af98: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0041af9c: MOV EDX,dword ptr [EBX + 0x18c]
// 0041afa2: XOR ESI,ESI
// 0041afa4: TEST EDX,EDX
// 0041afa6: JLE 0x0041afce
//   XREF to: 0041afce (CONDITIONAL_JUMP)
// 0041afa8: LEA EDI,[EBX + 0x198]
// 0041afae: PUSH EBP
//   Label: LAB_0041afae
// 0041afaf: PUSH EDI
// 0041afb0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0041afb5: ADD ESP,0x8
// 0041afb8: TEST EAX,EAX
// 0041afba: JZ 0x0041b067
//   XREF to: 0041b067 (CONDITIONAL_JUMP)
// 0041afc0: INC ESI
// 0041afc1: MOV ECX,dword ptr [EBX + 0x18c]
// 0041afc7: ADD EDI,0x18
// 0041afca: CMP ESI,ECX
// 0041afcc: JL 0x0041afae
//   XREF to: 0041afae (CONDITIONAL_JUMP)
// 0041afce: CMP dword ptr [EBX + 0x18c],0xa
//   Label: LAB_0041afce
// 0041afd5: JL 0x0041aff9
//   XREF to: 0041aff9 (CONDITIONAL_JUMP)
// 0041afd7: MOV EDI,0x615e6a
//   XREF to: 00615e6a (DATA)
// 0041afdc: MOV EAX,0x47a
// 0041afe1: PUSH 0x615e7f
//   XREF to: 00615e7f (DATA)
// 0041afe6: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0041afec: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0041aff1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041aff6: ADD ESP,0x4
// 0041aff9: MOV ESI,dword ptr [EBX + 0x18c]
//   Label: LAB_0041aff9
// 0041afff: LEA EAX,[ESI*0x4 + 0x0]
// 0041b006: PUSH 0x18
// 0041b008: SUB EAX,ESI
// 0041b00a: LEA EDI,[EBX + 0x190]
// 0041b010: SHL EAX,0x3
// 0041b013: PUSH 0x0
// 0041b015: ADD EAX,EDI
// 0041b017: PUSH EAX
// 0041b018: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0041b01d: MOV ESI,dword ptr [EBX + 0x18c]
// 0041b023: LEA EAX,[ESI*0x4 + 0x0]
// 0041b02a: SUB EAX,ESI
// 0041b02c: SHL EAX,0x3
// 0041b02f: ADD ESP,0xc
// 0041b032: ADD EDI,EAX
// 0041b034: MOV ESI,EBP
// 0041b036: ADD EDI,0x8
// 0041b039: PUSH EDI
// 0041b03a: MOV AL,byte ptr [ESI]
//   Label: LAB_0041b03a
// 0041b03c: MOV byte ptr [EDI],AL
// 0041b03e: CMP AL,0x0
// 0041b040: JZ 0x0041b052
//   XREF to: 0041b052 (CONDITIONAL_JUMP)
// 0041b042: MOV AL,byte ptr [ESI + 0x1]
// 0041b045: ADD ESI,0x2
// 0041b048: MOV byte ptr [EDI + 0x1],AL
// 0041b04b: ADD EDI,0x2
// 0041b04e: CMP AL,0x0
// 0041b050: JNZ 0x0041b03a
//   XREF to: 0041b03a (CONDITIONAL_JUMP)
// 0041b052: POP EDI
//   Label: LAB_0041b052
// 0041b053: MOV EAX,dword ptr [EBX + 0x18c]
// 0041b059: LEA ESI,[EAX + 0x1]
// 0041b05c: MOV dword ptr [EBX + 0x18c],ESI
// 0041b062: POP EBP
// 0041b063: POP EDI
// 0041b064: POP ESI
// 0041b065: POP EBX
// 0041b066: RET
// 0041b067: MOV EAX,ESI
//   Label: LAB_0041b067
// 0041b069: POP EBP
// 0041b06a: POP EDI
// 0041b06b: POP ESI
// 0041b06c: POP EBX
// 0041b06d: RET
