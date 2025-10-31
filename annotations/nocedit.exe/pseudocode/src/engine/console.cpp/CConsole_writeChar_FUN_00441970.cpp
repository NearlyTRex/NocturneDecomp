// Name: engine_console.cpp_CConsole_writeChar_FUN_00441970
// Address: 00441970
// Address Range: [[00441970, 00441a38]]
// Convention: __cdecl
// Signature: void engine_console.cpp_CConsole_writeChar_FUN_00441970(CConsole * this_ptr, char character)
// Cross-references:
//   engine_console.cpp_CConsole_printf_FUN_00441890 (00441890) at 00441903 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_console.cpp_CConsole_scrollUp_FUN_00441a80

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00441970(CConsole *this_ptr,char character)

{
  int iVar1;
  int iVar2;
  
  if (character == '\n') {
    this_ptr->currentColumn = 0;
    iVar2 = this_ptr->currentRow + 1;
    iVar1 = this_ptr->consoleHeight + -1;
    this_ptr->currentRow = iVar2;
    if (iVar1 < iVar2) {
LAB_00441a05:
      this_ptr->currentRow = iVar1;
      engine_console_cpp_CConsole_scrollUp_FUN_00441a80(this_ptr);
      return;
    }
  }
  else {
    if (character == '\0') {
      this_ptr->consoleBuffer[this_ptr->currentColumn + this_ptr->currentRow * 0x50] = '\0';
      return;
    }
    this_ptr->consoleBuffer[this_ptr->currentColumn + this_ptr->currentRow * 0x50] = character;
    iVar1 = this_ptr->currentColumn + 1;
    this_ptr->currentColumn = iVar1;
    if (this_ptr->consoleWidth + -1 < iVar1) {
      this_ptr->currentColumn = 0;
      iVar2 = this_ptr->currentRow + 1;
      iVar1 = this_ptr->consoleHeight + -1;
      this_ptr->currentRow = iVar2;
      if (iVar1 < iVar2) goto LAB_00441a05;
    }
  }
  return;
}


// Assembly code:
// 00441970: PUSH EBX
//   Label: engine_console.cpp_CConsole_writeChar_FUN_00441970
// 00441971: PUSH EDI
// 00441972: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00441976: MOV BL,byte ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0044197a: CMP BL,0xa
// 0044197d: JZ 0x004419e3
//   XREF to: 004419e3 (CONDITIONAL_JUMP)
// 0044197f: TEST BL,BL
// 00441981: JZ 0x00441a17
//   XREF to: 00441a17 (CONDITIONAL_JUMP)
// 00441987: MOV ECX,dword ptr [EAX + 0xfa8]
// 0044198d: LEA EDX,[ECX*0x4 + 0x0]
// 00441994: ADD EDX,ECX
// 00441996: SHL EDX,0x4
// 00441999: MOV ECX,dword ptr [EAX + 0xfa4]
// 0044199f: ADD EDX,EAX
// 004419a1: ADD EDX,ECX
// 004419a3: MOV byte ptr [EDX + 0x4],BL
// 004419a6: MOV EBX,dword ptr [EAX + 0xfa4]
// 004419ac: MOV EDX,dword ptr [EAX + 0xfac]
// 004419b2: INC EBX
// 004419b3: DEC EDX
// 004419b4: MOV dword ptr [EAX + 0xfa4],EBX
// 004419ba: CMP EDX,EBX
// 004419bc: JGE 0x004419e0
//   XREF to: 004419e0 (CONDITIONAL_JUMP)
// 004419be: MOV EDI,dword ptr [EAX + 0xfa8]
// 004419c4: MOV EDX,dword ptr [EAX + 0xfb0]
// 004419ca: MOV dword ptr [EAX + 0xfa4],0x0
// 004419d4: INC EDI
// 004419d5: DEC EDX
// 004419d6: MOV dword ptr [EAX + 0xfa8],EDI
// 004419dc: CMP EDX,EDI
// 004419de: JL 0x00441a05
//   XREF to: 00441a05 (CONDITIONAL_JUMP)
// 004419e0: POP EDI
//   Label: LAB_004419e0
// 004419e1: POP EBX
// 004419e2: RET
// 004419e3: MOV EBX,dword ptr [EAX + 0xfa8]
//   Label: LAB_004419e3
// 004419e9: MOV EDX,dword ptr [EAX + 0xfb0]
// 004419ef: MOV dword ptr [EAX + 0xfa4],0x0
// 004419f9: INC EBX
// 004419fa: DEC EDX
// 004419fb: MOV dword ptr [EAX + 0xfa8],EBX
// 00441a01: CMP EDX,EBX
// 00441a03: JGE 0x004419e0
//   XREF to: 004419e0 (CONDITIONAL_JUMP)
// 00441a05: PUSH EAX
//   Label: LAB_00441a05
// 00441a06: MOV dword ptr [EAX + 0xfa8],EDX
// 00441a0c: CALL engine_console.cpp_CConsole_scrollUp_FUN_00441a80
//   XREF to: 00441a80 (UNCONDITIONAL_CALL)
// 00441a11: ADD ESP,0x4
// 00441a14: POP EDI
// 00441a15: POP EBX
// 00441a16: RET
// 00441a17: MOV ECX,dword ptr [EAX + 0xfa8]
//   Label: LAB_00441a17
// 00441a1d: LEA EDX,[ECX*0x4 + 0x0]
// 00441a24: ADD EDX,ECX
// 00441a26: SHL EDX,0x4
// 00441a29: MOV ECX,dword ptr [EAX + 0xfa4]
// 00441a2f: ADD EDX,EAX
// 00441a31: ADD EDX,ECX
// 00441a33: MOV byte ptr [EDX + 0x4],BL
// 00441a36: POP EDI
// 00441a37: POP EBX
// 00441a38: RET
