// Name: core_event.cpp_CEventList_FUN_004aac00
// Address: 004aac00
// Address Range: [[004aac00, 004aacb7]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004aac00(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aabe0 (004aabe0) at 004aabf3 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004add40 (004add40) at 004add61 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_00624603
//   CConsole* g_CConsolePtr = 0083b1a4
//   char[256] g_CharacterClassificationTable
//   CConsole g_ConsolePtr
//   undefined4 DAT_02d0a45c
//   undefined1 DAT_02d0a460
// Function calls:
//   core_event.cpp_CEventList_FUN_004aacc0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004aac00(CEventList *this_ptr)

{
  char cVar1;
  char *pcVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  undefined4 local_6c;
  
  do {
    pcVar2 = (char *)&local_6c;
    while ((g_CharacterClassificationTable[(byte)(*in_stack_00000008 + 1)] & 2U) != 0) {
      in_stack_00000008 = in_stack_00000008 + 1;
    }
    cVar1 = *in_stack_00000008;
    pcVar4 = in_stack_00000008;
    if (cVar1 == '\0') {
      return 1;
    }
    while (cVar1 != ';') {
      *pcVar2 = *pcVar4;
      pcVar2 = pcVar2 + 1;
      if (pcVar4[1] == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    }
    while ((in_stack_00000008 = pcVar4 + 1, &local_6c < pcVar2 &&
           ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) != 0))) {
      pcVar2 = pcVar2 + -1;
    }
    if (&local_6c < pcVar2) {
      *pcVar2 = '\0';
      pCVar3 = core_event_cpp_CEventList_FUN_004aacc0(this_ptr);
      if (pCVar3 == (CDemonActor *)0x0) {
        if (DAT_02d0a45c != 0) {
          return 0;
        }
        local_6c = &DAT_02d0a460;
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n");
      }
    }
  } while( true );
}


// Assembly code:
// 004aac00: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004aac00
// 004aac01: PUSH ESI
// 004aac02: SUB ESP,0x64
// 004aac05: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 004aac09: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 004aac0d: MOV EDX,EBX
//   Label: LAB_004aac0d
// 004aac0f: MOV AL,byte ptr [EDX]
//   Label: LAB_004aac0f
// 004aac11: INC AL
// 004aac13: AND EAX,0xff
// 004aac18: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aac1f: JZ 0x004aac24
//   XREF to: 004aac24 (CONDITIONAL_JUMP)
// 004aac21: INC EDX
// 004aac22: JMP 0x004aac0f
//   XREF to: 004aac0f (UNCONDITIONAL_JUMP)
// 004aac24: MOV CL,byte ptr [EDX]
//   Label: LAB_004aac24
// 004aac26: MOV EBX,EDX
// 004aac28: TEST CL,CL
// 004aac2a: JZ 0x004aacad
//   XREF to: 004aacad (CONDITIONAL_JUMP)
// 004aac30: MOV EAX,ESP
// 004aac32: CMP CL,0x3b
// 004aac35: JZ 0x004aac61
//   Label: LAB_004aac35
//   XREF to: 004aac61 (CONDITIONAL_JUMP)
// 004aac37: MOV DL,byte ptr [EBX]
// 004aac39: MOV byte ptr [EAX],DL
//   XREF to: Stack[-0x6c] (DATA)
// 004aac3b: INC EAX
// 004aac3c: MOV DH,byte ptr [EBX + 0x1]
// 004aac3f: INC EBX
// 004aac40: TEST DH,DH
// 004aac42: JNZ 0x004aac64
//   XREF to: 004aac64 (CONDITIONAL_JUMP)
// 004aac44: MOV EDX,ESP
//   Label: LAB_004aac44
// 004aac46: CMP EAX,EDX
// 004aac48: JBE 0x004aac69
//   XREF to: 004aac69 (CONDITIONAL_JUMP)
// 004aac4a: MOV DL,byte ptr [EAX + -0x1]
//   XREF to: Stack[-0x6c] (READ)
// 004aac4d: INC DL
// 004aac4f: AND EDX,0xff
// 004aac55: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004aac5c: JZ 0x004aac69
//   XREF to: 004aac69 (CONDITIONAL_JUMP)
// 004aac5e: DEC EAX
// 004aac5f: JMP 0x004aac44
//   XREF to: 004aac44 (UNCONDITIONAL_JUMP)
// 004aac61: INC EBX
//   Label: LAB_004aac61
// 004aac62: JMP 0x004aac44
//   XREF to: 004aac44 (UNCONDITIONAL_JUMP)
// 004aac64: CMP byte ptr [EBX],0x3b
//   Label: LAB_004aac64
// 004aac67: JMP 0x004aac35
//   XREF to: 004aac35 (UNCONDITIONAL_JUMP)
// 004aac69: MOV EDX,ESP
//   Label: LAB_004aac69
// 004aac6b: CMP EAX,EDX
// 004aac6d: JBE 0x004aac0d
//   XREF to: 004aac0d (CONDITIONAL_JUMP)
// 004aac6f: PUSH EDX
// 004aac70: PUSH ESI
// 004aac71: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0x6b] (DATA)
// 004aac74: CALL core_event.cpp_CEventList_FUN_004aacc0
//   XREF to: 004aacc0 (UNCONDITIONAL_CALL)
// 004aac79: ADD ESP,0x8
// 004aac7c: TEST EAX,EAX
// 004aac7e: JNZ 0x004aac0d
//   XREF to: 004aac0d (CONDITIONAL_JUMP)
// 004aac80: CMP dword ptr [0x02d0a45c],0x0
//   XREF to: 02d0a45c (READ)
// 004aac87: JZ 0x004aac8f
//   XREF to: 004aac8f (CONDITIONAL_JUMP)
// 004aac89: ADD ESP,0x64
// 004aac8c: POP ESI
// 004aac8d: POP EBX
// 004aac8e: RET
// 004aac8f: PUSH 0x2d0a460
//   Label: LAB_004aac8f
//   XREF to: 02d0a460 (DATA)
// 004aac94: PUSH 0x624603
//   XREF to: 00624603 (DATA)
// 004aac99: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004aac9f: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004aaca0: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004aaca5: ADD ESP,0xc
// 004aaca8: JMP 0x004aac0d
//   XREF to: 004aac0d (UNCONDITIONAL_JUMP)
// 004aacad: MOV EAX,0x1
//   Label: LAB_004aacad
// 004aacb2: ADD ESP,0x64
// 004aacb5: POP ESI
// 004aacb6: POP EBX
// 004aacb7: RET
