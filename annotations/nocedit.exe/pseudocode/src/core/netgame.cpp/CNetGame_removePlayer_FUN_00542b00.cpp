// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
// Address: 00542b00
// Address Range: [[00542b00, 00542ce5]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00()
// Cross-references:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540f0a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 (00542470) at 00542675 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063dbcc
//   TerminatedCString s_CNetGame_removePlayer_in_0063dbe0
//   TerminatedCString s_core_netgame_cpp_0063dc0e
//   TerminatedCString s_CNetGame_removePlayer_tr_0063dc22
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f98ad0
//   undefined4 DAT_02f98ad4
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_removePlayer(CNetGame* param_1, undefined4
   param_2) */

void core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(void)

{
  int iVar1;
  void *src;
  void *unaff_EBP;
  undefined *dest;
  undefined1 *dest_00;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x1c) <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x862;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::removePlayer - invalid player index");
  }
  if (in_stack_0000000c == *(int *)(in_stack_00000008 + 0x114)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x869;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::removePlayer - tried to remove myself!");
  }
  if (in_stack_0000000c == *(int *)(in_stack_00000008 + 0x110)) {
    *(undefined4 *)(in_stack_00000008 + 0x110) = 0xffffffff;
  }
  if (in_stack_0000000c == *(int *)(in_stack_00000008 + 0x114)) {
    *(undefined4 *)(in_stack_00000008 + 0x114) = 0xffffffff;
  }
  iVar1 = *(int *)(in_stack_00000008 + 0x1c) + -1;
  *(int *)(in_stack_00000008 + 0x1c) = iVar1;
  crt_string_c_memmove_FUN_005fe5e0
            ((void *)(in_stack_0000000c * 0x78 + in_stack_00000008 + 0x20),
             (void *)((in_stack_0000000c + 1) * 0x78 + in_stack_00000008 + 0x20),
             (iVar1 - in_stack_0000000c) * 0x78);
  iVar1 = 0;
  if (0 < DAT_02f98ad0) {
    dest_00 = &DAT_02f98adc + in_stack_00000010;
    src = (void *)((int)unaff_EBP + 0x2f98adc);
    dest = &DAT_02f98ae0 + in_stack_00000010 * 4;
    do {
      crt_string_c_memmove_FUN_005fe5e0
                (dest_00,src,*(int *)(in_stack_0000000c + 0x1c) - in_stack_00000010);
      iVar1 = iVar1 + 1;
      src = (void *)((int)src + 0x114);
      crt_string_c_memmove_FUN_005fe5e0
                (dest,unaff_EBP,(*(int *)(in_stack_00000008 + 0x1c) - in_stack_0000000c) * 4);
      dest_00 = dest_00 + 0x114;
      dest = dest + 0x114;
    } while (iVar1 < DAT_02f98ad0);
  }
  if (in_stack_00000010 < *(int *)(in_stack_0000000c + 0x110)) {
    *(int *)(in_stack_0000000c + 0x110) = *(int *)(in_stack_0000000c + 0x110) + -1;
  }
  if (in_stack_00000010 < *(int *)(in_stack_0000000c + 0x114)) {
    *(int *)(in_stack_0000000c + 0x114) = *(int *)(in_stack_0000000c + 0x114) + -1;
    return;
  }
  return;
}


// Assembly code:
// 00542b00: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
// 00542b01: PUSH ESI
// 00542b02: PUSH EDI
// 00542b03: PUSH EBP
// 00542b04: SUB ESP,0x8
// 00542b07: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542b0b: TEST EDX,EDX
// 00542b0d: JL 0x00542b18
//   XREF to: 00542b18 (CONDITIONAL_JUMP)
// 00542b0f: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00542b13: CMP EDX,dword ptr [EBX + 0x1c]
// 00542b16: JL 0x00542b3b
//   XREF to: 00542b3b (CONDITIONAL_JUMP)
// 00542b18: MOV EBX,0x63dbcc
//   Label: LAB_00542b18
//   XREF to: 0063dbcc (PARAM)
// 00542b1d: MOV ESI,0x862
// 00542b22: PUSH 0x63dbe0
//   XREF to: 0063dbe0 (DATA)
// 00542b27: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00542b2d: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00542b33: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00542b38: ADD ESP,0x4
// 00542b3b: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00542b3b
//   XREF to: Stack[0x4] (READ)
// 00542b3f: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542b43: CMP EAX,dword ptr [EBX + 0x114]
// 00542b49: JNZ 0x00542b6d
//   XREF to: 00542b6d (CONDITIONAL_JUMP)
// 00542b4b: MOV EBP,0x63dc0e
//   XREF to: 0063dc0e (DATA)
// 00542b50: MOV EAX,0x869
// 00542b55: PUSH 0x63dc22
//   XREF to: 0063dc22 (DATA)
// 00542b5a: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00542b60: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00542b65: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00542b6a: ADD ESP,0x4
// 00542b6d: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00542b6d
//   XREF to: Stack[0x4] (READ)
// 00542b71: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542b75: CMP EAX,dword ptr [EBX + 0x110]
// 00542b7b: JNZ 0x00542b87
//   XREF to: 00542b87 (CONDITIONAL_JUMP)
// 00542b7d: MOV dword ptr [EBX + 0x110],0xffffffff
// 00542b87: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00542b87
//   XREF to: Stack[0x4] (READ)
// 00542b8b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542b8f: CMP EAX,dword ptr [EBX + 0x114]
// 00542b95: JNZ 0x00542ba1
//   XREF to: 00542ba1 (CONDITIONAL_JUMP)
// 00542b97: MOV dword ptr [EBX + 0x114],0xffffffff
// 00542ba1: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00542ba1
//   XREF to: Stack[0x4] (READ)
// 00542ba5: MOV EBX,dword ptr [EAX + 0x1c]
// 00542ba8: DEC EBX
// 00542ba9: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542bad: MOV dword ptr [EAX + 0x1c],EBX
// 00542bb0: MOV EAX,EBX
// 00542bb2: SUB EAX,ESI
// 00542bb4: SHL EAX,0x3
// 00542bb7: MOV EBX,EAX
// 00542bb9: SHL EAX,0x4
// 00542bbc: SUB EAX,EBX
// 00542bbe: PUSH EAX
// 00542bbf: LEA EAX,[ESI + 0x1]
// 00542bc2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00542bc6: SHL EAX,0x3
// 00542bc9: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00542bcd: MOV EBX,EAX
// 00542bcf: SHL EAX,0x4
// 00542bd2: ADD ESI,0x20
// 00542bd5: SUB EAX,EBX
// 00542bd7: ADD EAX,ESI
// 00542bd9: PUSH EAX
// 00542bda: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00542bde: SHL EAX,0x3
// 00542be1: MOV EBX,EAX
// 00542be3: SHL EAX,0x4
// 00542be6: SUB EAX,EBX
// 00542be8: ADD EAX,ESI
// 00542bea: PUSH EAX
// 00542beb: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00542bf0: XOR ESI,ESI
// 00542bf2: MOV EDI,dword ptr [0x02f98ad0]
//   XREF to: 02f98ad0 (READ)
// 00542bf8: ADD ESP,0xc
// 00542bfb: TEST EDI,EDI
// 00542bfd: JLE 0x00542ca0
//   XREF to: 00542ca0 (CONDITIONAL_JUMP)
// 00542c03: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542c07: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542c0b: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00542c0e: SHL EAX,0x2
// 00542c11: ADD EDI,0x8
// 00542c14: ADD EBX,0x8
// 00542c17: LEA EBP,[EAX + 0xc]
// 00542c1a: ADD EDI,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 00542c20: ADD EAX,0x10
// 00542c23: ADD EBX,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 00542c29: ADD EAX,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 00542c2e: ADD EBP,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 00542c34: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00542c38: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00542c38
//   XREF to: Stack[0x4] (READ)
// 00542c3c: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542c40: MOV EAX,dword ptr [EAX + 0x1c]
// 00542c43: SUB EAX,EDX
// 00542c45: PUSH EAX
// 00542c46: PUSH EBX
// 00542c47: PUSH EDI
// 00542c48: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00542c4d: ADD ESP,0xc
// 00542c50: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00542c54: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542c58: MOV EAX,dword ptr [EAX + 0x1c]
// 00542c5b: SUB EAX,ECX
// 00542c5d: SHL EAX,0x2
// 00542c60: PUSH EAX
// 00542c61: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00542c65: PUSH EAX
// 00542c66: PUSH EBP
// 00542c67: INC ESI
// 00542c68: ADD EBX,0x114
// 00542c6e: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00542c73: ADD ESP,0xc
// 00542c76: ADD EDI,0x114
// 00542c7c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00542c80: MOV ECX,dword ptr [0x02f98ad0]
//   XREF to: 02f98ad0 (READ)
// 00542c86: ADD EDX,0x114
// 00542c8c: ADD EBP,0x114
// 00542c92: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00542c96: CMP ESI,ECX
// 00542c98: JL 0x00542c38
//   XREF to: 00542c38 (CONDITIONAL_JUMP)
// 00542c9a: LEA EAX,[EAX]
// 00542ca0: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00542ca0
//   XREF to: Stack[0x4] (READ)
// 00542ca4: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542ca8: MOV ESI,dword ptr [EBX + 0x110]
// 00542cae: CMP EAX,ESI
// 00542cb0: JGE 0x00542cbb
//   XREF to: 00542cbb (CONDITIONAL_JUMP)
// 00542cb2: LEA EDI,[ESI + -0x1]
// 00542cb5: MOV dword ptr [EBX + 0x110],EDI
// 00542cbb: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00542cbb
//   XREF to: Stack[0x4] (READ)
// 00542cbf: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00542cc3: MOV EBP,dword ptr [EBX + 0x114]
// 00542cc9: CMP EAX,EBP
// 00542ccb: JL 0x00542cd5
//   XREF to: 00542cd5 (CONDITIONAL_JUMP)
// 00542ccd: ADD ESP,0x8
// 00542cd0: POP EBP
// 00542cd1: POP EDI
// 00542cd2: POP ESI
// 00542cd3: POP EBX
// 00542cd4: RET
// 00542cd5: LEA EDX,[EBP + -0x1]
//   Label: LAB_00542cd5
// 00542cd8: MOV dword ptr [EBX + 0x114],EDX
// 00542cde: ADD ESP,0x8
// 00542ce1: POP EBP
// 00542ce2: POP EDI
// 00542ce3: POP ESI
// 00542ce4: POP EBX
// 00542ce5: RET
