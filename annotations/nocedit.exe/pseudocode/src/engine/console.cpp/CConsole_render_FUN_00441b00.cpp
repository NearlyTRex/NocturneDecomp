// Name: engine_console.cpp_CConsole_render_FUN_00441b00
// Address: 00441b00
// Address Range: [[00441b00, 00441c2f]]
// Convention: __cdecl
// Signature: void engine_console.cpp_CConsole_render_FUN_00441b00(CConsole * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004daad0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_drawString_FUN_00402080

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_render_FUN_00441b00(CConsole *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CConsole *pCVar3;
  int iVar4;
  int y1;
  CConsole *pCVar5;
  int iVar6;
  int local_18;
  char local_14 [4];
  
  local_14[1] = 0;
  iVar6 = 0;
  if (0 < this_ptr->consoleHeight) {
    local_18 = 0;
    pCVar3 = this_ptr;
    do {
      iVar2 = 0;
      pCVar5 = pCVar3;
      if (0 < this_ptr->consoleWidth) {
        iVar4 = 0;
        iVar1 = local_18;
        do {
          local_14[0] = pCVar3->consoleBuffer[0];
          if (local_14[0] != '\0') {
            engine_2d_c_drawString_FUN_00402080
                      (local_14,this_ptr->screenX + iVar4,iVar1 + this_ptr->screenY,0xf8);
          }
          pCVar3 = (CConsole *)((int)&pCVar3->fileLoggingEnabled + 1);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 7;
        } while (iVar2 < this_ptr->consoleWidth);
      }
      pCVar3 = (CConsole *)(pCVar5->consoleBuffer + 0x4c);
      local_18 = local_18 + 0xb;
      iVar6 = iVar6 + 1;
    } while (iVar6 < this_ptr->consoleHeight);
  }
  iVar2 = this_ptr->screenX;
  iVar1 = this_ptr->screenY;
  iVar4 = this_ptr->consoleHeight;
  iVar6 = iVar2 + this_ptr->consoleWidth * 7;
  y1 = iVar1 + -1;
  g_ActiveRenderColor = 0xf8;
  engine_2d_c_drawLine_FUN_004011b0(iVar2,y1,iVar6,y1);
  iVar1 = iVar1 + iVar4 * 0xb + 1;
  engine_2d_c_drawLine_FUN_004011b0(iVar2,iVar1,iVar6,iVar1);
  engine_2d_c_drawLine_FUN_004011b0(iVar2 + -1,y1,iVar2 + -1,iVar1);
  engine_2d_c_drawLine_FUN_004011b0(iVar6 + 1,y1,iVar6 + 1,iVar1);
  return;
}


// Assembly code:
// 00441b00: PUSH EBX
//   Label: engine_console.cpp_CConsole_render_FUN_00441b00
// 00441b01: PUSH ESI
// 00441b02: PUSH EDI
// 00441b03: PUSH EBP
// 00441b04: SUB ESP,0x14
// 00441b07: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00441b0b: XOR AH,AH
// 00441b0d: MOV byte ptr [ESP + 0x11],AH
//   XREF to: Stack[-0x13] (WRITE)
// 00441b11: XOR EDX,EDX
// 00441b13: MOV ECX,dword ptr [EBX + 0xfb0]
// 00441b19: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00441b1d: TEST ECX,ECX
// 00441b1f: JLE 0x00441bb4
//   XREF to: 00441bb4 (CONDITIONAL_JUMP)
// 00441b25: XOR ECX,ECX
// 00441b27: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x24] (DATA)
// 00441b2a: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00441b2e: MOV ESI,dword ptr [EBX + 0xfac]
//   Label: LAB_00441b2e
// 00441b34: XOR EBP,EBP
// 00441b36: TEST ESI,ESI
// 00441b38: JLE 0x00441b89
//   XREF to: 00441b89 (CONDITIONAL_JUMP)
// 00441b3a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00441b3e: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00441b41: XOR EDI,EDI
// 00441b43: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00441b47: MOV AL,byte ptr [ESI + 0x4]
//   Label: LAB_00441b47
// 00441b4a: MOV byte ptr [ESP + 0x10],AL
//   XREF to: Stack[-0x14] (WRITE)
// 00441b4e: TEST AL,AL
// 00441b50: JZ 0x00441b7a
//   XREF to: 00441b7a (CONDITIONAL_JUMP)
// 00441b52: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 00441b56: MOV EDX,dword ptr [EBX + 0xfb8]
// 00441b5c: PUSH 0xf8
// 00441b61: ADD EAX,EDX
// 00441b63: PUSH EAX
// 00441b64: MOV EAX,dword ptr [EBX + 0xfb4]
// 00441b6a: ADD EAX,EDI
// 00441b6c: PUSH EAX
// 00441b6d: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x14] (DATA)
// 00441b71: PUSH EAX
// 00441b72: CALL engine_2d.c_drawString_FUN_00402080
//   XREF to: 00402080 (UNCONDITIONAL_CALL)
// 00441b77: ADD ESP,0x10
// 00441b7a: INC ESI
//   Label: LAB_00441b7a
// 00441b7b: INC EBP
// 00441b7c: MOV EAX,dword ptr [EBX + 0xfac]
// 00441b82: ADD EDI,0x7
// 00441b85: CMP EBP,EAX
// 00441b87: JL 0x00441b47
//   XREF to: 00441b47 (CONDITIONAL_JUMP)
// 00441b89: MOV ESI,dword ptr [ESP]
//   Label: LAB_00441b89
//   XREF to: Stack[-0x24] (DATA)
// 00441b8c: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00441b90: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 00441b94: MOV EDX,dword ptr [EBX + 0xfb0]
// 00441b9a: ADD ESI,0x50
// 00441b9d: ADD EDI,0xb
// 00441ba0: INC EBP
// 00441ba1: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x24] (DATA)
// 00441ba4: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00441ba8: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 00441bac: CMP EBP,EDX
// 00441bae: JL 0x00441b2e
//   XREF to: 00441b2e (CONDITIONAL_JUMP)
// 00441bb4: MOV EBP,dword ptr [EBX + 0xfac]
//   Label: LAB_00441bb4
// 00441bba: MOV ESI,dword ptr [EBX + 0xfb4]
// 00441bc0: LEA EAX,[EBP*0x8 + 0x0]
// 00441bc7: MOV EDI,dword ptr [EBX + 0xfb8]
// 00441bcd: SUB EAX,EBP
// 00441bcf: MOV EBX,dword ptr [EBX + 0xfb0]
// 00441bd5: LEA EBP,[ESI + EAX*0x1]
// 00441bd8: LEA EAX,[EBX*0x4 + 0x0]
// 00441bdf: SUB EAX,EBX
// 00441be1: SHL EAX,0x2
// 00441be4: SUB EAX,EBX
// 00441be6: LEA EBX,[EDI + EAX*0x1]
// 00441be9: DEC EDI
// 00441bea: PUSH EDI
// 00441beb: PUSH EBP
// 00441bec: PUSH EDI
// 00441bed: MOV ECX,0xf8
// 00441bf2: PUSH ESI
// 00441bf3: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 00441bf9: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00441bfe: ADD ESP,0x10
// 00441c01: INC EBX
// 00441c02: PUSH EBX
// 00441c03: PUSH EBP
// 00441c04: PUSH EBX
// 00441c05: PUSH ESI
// 00441c06: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00441c0b: ADD ESP,0x10
// 00441c0e: PUSH EBX
// 00441c0f: DEC ESI
// 00441c10: PUSH ESI
// 00441c11: PUSH EDI
// 00441c12: PUSH ESI
// 00441c13: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00441c18: ADD ESP,0x10
// 00441c1b: PUSH EBX
// 00441c1c: INC EBP
// 00441c1d: PUSH EBP
// 00441c1e: PUSH EDI
// 00441c1f: PUSH EBP
// 00441c20: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00441c25: ADD ESP,0x10
// 00441c28: ADD ESP,0x14
// 00441c2b: POP EBP
// 00441c2c: POP EDI
// 00441c2d: POP ESI
// 00441c2e: POP EBX
// 00441c2f: RET
