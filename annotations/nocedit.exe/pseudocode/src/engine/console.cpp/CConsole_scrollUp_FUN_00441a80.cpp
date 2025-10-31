// Name: engine_console.cpp_CConsole_scrollUp_FUN_00441a80
// Address: 00441a80
// Address Range: [[00441a80, 00441afa]]
// Convention: __cdecl
// Signature: void engine_console.cpp_CConsole_scrollUp_FUN_00441a80(CConsole * this_ptr)
// Cross-references:
//   engine_console.cpp_CConsole_writeChar_FUN_00441970 (00441970) at 00441a0c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_00441a80(CConsole *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = 0;
  pcVar5 = this_ptr->consoleBuffer;
  pcVar4 = this_ptr->consoleBuffer;
  while (pcVar5 = pcVar5 + GAME_CONSOLE_ROW_STRIDE, iVar1 = this_ptr->consoleHeight + -1,
        iVar6 < iVar1) {
    uVar3 = this_ptr->consoleWidth;
    iVar6 = iVar6 + 1;
    pcVar7 = pcVar5;
    pcVar8 = pcVar4;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcVar4 = pcVar4 + GAME_CONSOLE_ROW_STRIDE;
  }
  crt_memory_c_memset_FUN_005fde40(this_ptr->consoleBuffer + iVar1 * 0x50,0,this_ptr->consoleWidth);
  return;
}


// Assembly code:
// 00441a80: PUSH EBX
//   Label: engine_console.cpp_CConsole_scrollUp_FUN_00441a80
// 00441a81: PUSH ESI
// 00441a82: PUSH EDI
// 00441a83: PUSH EBP
// 00441a84: SUB ESP,0x4
// 00441a87: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00441a8b: ADD EDX,0x4
// 00441a8e: XOR EBP,EBP
// 00441a90: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00441a93: LEA EBX,[EDX + 0x50]
// 00441a96: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00441a96
//   XREF to: Stack[0x4] (READ)
// 00441a9a: MOV ECX,dword ptr [ECX + 0xfb0]
// 00441aa0: DEC ECX
// 00441aa1: CMP EBP,ECX
// 00441aa3: JL 0x00441ad4
//   XREF to: 00441ad4 (CONDITIONAL_JUMP)
// 00441aa5: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00441aa9: MOV EBX,dword ptr [EDX + 0xfac]
// 00441aaf: LEA EDX,[ECX*0x4 + 0x0]
// 00441ab6: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00441ab9: ADD EDX,ECX
// 00441abb: PUSH EBX
// 00441abc: SHL EDX,0x4
// 00441abf: PUSH 0x0
// 00441ac1: ADD EDX,ESI
// 00441ac3: PUSH EDX
// 00441ac4: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00441ac9: ADD ESP,0xc
// 00441acc: ADD ESP,0x4
// 00441acf: POP EBP
// 00441ad0: POP EDI
// 00441ad1: POP ESI
// 00441ad2: POP EBX
// 00441ad3: RET
// 00441ad4: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00441ad4
//   XREF to: Stack[0x4] (READ)
// 00441ad8: MOV ESI,EBX
// 00441ada: MOV EDI,EDX
// 00441adc: MOV ECX,dword ptr [ECX + 0xfac]
// 00441ae2: INC EBP
// 00441ae3: PUSH EDI
// 00441ae4: MOV EAX,ECX
// 00441ae6: SHR ECX,0x2
// 00441ae9: MOVSD.REP ES:EDI,ESI
// 00441aeb: MOV CL,AL
// 00441aed: AND CL,0x3
// 00441af0: MOVSB.REP ES:EDI,ESI
// 00441af2: POP EDI
// 00441af3: ADD EDX,0x50
// 00441af6: ADD EBX,0x50
// 00441af9: JMP 0x00441a96
//   XREF to: 00441a96 (UNCONDITIONAL_JUMP)
