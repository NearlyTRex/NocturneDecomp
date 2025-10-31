// Name: engine_pcx.c_writePCXScanline_FUN_00548c50
// Address: 00548c50
// Address Range: [[00548c50, 00548d1f]]
// Convention: __cdecl
// Signature: void engine_pcx.c_writePCXScanline_FUN_00548c50(int row_index, FILE * pcx_file)
// Cross-references:
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 005491f4 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   void*[1024] g_ScreenBufferArray
// Function calls:
//   crt_stdio.c_fputc_FUN_006007a0

#include "nocturne.h"

void __cdecl engine_pcx_c_writePCXScanline_FUN_00548c50(int row_index,FILE *pcx_file)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint character;
  
  iVar2 = 0;
  pbVar1 = (byte *)g_ScreenBufferArray[row_index];
  if (0 < g_WindowWidth) {
    do {
      if (0xbf < *pbVar1) {
        if (((pcx_file->_flag & 0x400) == 0) && (1 < pcx_file->_bufsize - pcx_file->_cnt)) {
          *pcx_file->_ptr = -0x3f;
          if (*pcx_file->_ptr != '\n') {
            iVar3 = pcx_file->_cnt;
            *(byte *)((int)&pcx_file->_flag + 1) = *(byte *)((int)&pcx_file->_flag + 1) | 0x10;
            pcx_file->_cnt = iVar3 + 1;
            pcx_file->_ptr = pcx_file->_ptr + 1;
            goto LAB_00548c8e;
          }
          iVar3 = 10;
        }
        else {
          iVar3 = 0xc1;
        }
        crt_stdio_c_fputc_FUN_006007a0(iVar3,pcx_file);
      }
LAB_00548c8e:
      if (((pcx_file->_flag & 0x400) == 0) && (1 < pcx_file->_bufsize - pcx_file->_cnt)) {
        *pcx_file->_ptr = *pbVar1;
        if (*pcx_file->_ptr == '\n') {
          character = 10;
          goto LAB_00548c9a;
        }
        iVar3 = pcx_file->_cnt;
        *(byte *)((int)&pcx_file->_flag + 1) = *(byte *)((int)&pcx_file->_flag + 1) | 0x10;
        pcx_file->_cnt = iVar3 + 1;
        pcx_file->_ptr = pcx_file->_ptr + 1;
      }
      else {
        character = (uint)*pbVar1;
LAB_00548c9a:
        crt_stdio_c_fputc_FUN_006007a0(character,pcx_file);
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar2 < g_WindowWidth);
  }
  return;
}


// Assembly code:
// 00548c50: PUSH EBX
//   Label: engine_pcx.c_writePCXScanline_FUN_00548c50
// 00548c51: PUSH ESI
// 00548c52: PUSH EDI
// 00548c53: PUSH EBP
// 00548c54: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00548c58: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00548c5c: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00548c62: XOR EDI,EDI
// 00548c64: MOV ESI,dword ptr [ESI*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00548c6b: TEST EDX,EDX
// 00548c6d: JLE 0x00548cae
//   XREF to: 00548cae (CONDITIONAL_JUMP)
// 00548c6f: XOR EAX,EAX
//   Label: LAB_00548c6f
// 00548c71: MOV AL,byte ptr [ESI]
// 00548c73: CMP EAX,0xc0
// 00548c78: JL 0x00548c8e
//   XREF to: 00548c8e (CONDITIONAL_JUMP)
// 00548c7a: TEST byte ptr [EBX + 0xd],0x4
// 00548c7e: JZ 0x00548cb3
//   XREF to: 00548cb3 (CONDITIONAL_JUMP)
// 00548c80: PUSH EBX
//   Label: LAB_00548c80
// 00548c81: PUSH 0xc1
// 00548c86: CALL crt_stdio.c_fputc_FUN_006007a0
//   Label: LAB_00548c86
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00548c8b: ADD ESP,0x8
// 00548c8e: TEST byte ptr [EBX + 0xd],0x4
//   Label: LAB_00548c8e
// 00548c92: JZ 0x00548ce8
//   XREF to: 00548ce8 (CONDITIONAL_JUMP)
// 00548c94: XOR EAX,EAX
//   Label: LAB_00548c94
// 00548c96: PUSH EBX
// 00548c97: MOV AL,byte ptr [ESI]
// 00548c99: PUSH EAX
// 00548c9a: CALL crt_stdio.c_fputc_FUN_006007a0
//   Label: LAB_00548c9a
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00548c9f: ADD ESP,0x8
// 00548ca2: MOV ECX,dword ptr [0x00679394]
//   Label: LAB_00548ca2
//   XREF to: 00679394 (READ)
// 00548ca8: INC EDI
// 00548ca9: INC ESI
// 00548caa: CMP EDI,ECX
// 00548cac: JL 0x00548c6f
//   XREF to: 00548c6f (CONDITIONAL_JUMP)
// 00548cae: POP EBP
//   Label: LAB_00548cae
// 00548caf: POP EDI
// 00548cb0: POP ESI
// 00548cb1: POP EBX
// 00548cb2: RET
// 00548cb3: MOV EBP,dword ptr [EBX + 0x4]
//   Label: LAB_00548cb3
// 00548cb6: MOV EAX,dword ptr [EBX + 0x14]
// 00548cb9: SUB EAX,EBP
// 00548cbb: CMP EAX,0x1
// 00548cbe: JBE 0x00548c80
//   XREF to: 00548c80 (CONDITIONAL_JUMP)
// 00548cc0: MOV EAX,dword ptr [EBX]
// 00548cc2: MOV byte ptr [EAX],0xc1
// 00548cc5: MOV EAX,dword ptr [EBX]
// 00548cc7: CMP byte ptr [EAX],0xa
// 00548cca: JZ 0x00548ce3
//   XREF to: 00548ce3 (CONDITIONAL_JUMP)
// 00548ccc: MOV DH,byte ptr [EBX + 0xd]
// 00548ccf: OR DH,0x10
// 00548cd2: MOV EAX,dword ptr [EBX + 0x4]
// 00548cd5: MOV byte ptr [EBX + 0xd],DH
// 00548cd8: INC EAX
// 00548cd9: MOV EDX,dword ptr [EBX]
// 00548cdb: MOV dword ptr [EBX + 0x4],EAX
// 00548cde: INC EDX
// 00548cdf: MOV dword ptr [EBX],EDX
// 00548ce1: JMP 0x00548c8e
//   XREF to: 00548c8e (UNCONDITIONAL_JUMP)
// 00548ce3: PUSH EBX
//   Label: LAB_00548ce3
// 00548ce4: PUSH 0xa
// 00548ce6: JMP 0x00548c86
//   XREF to: 00548c86 (UNCONDITIONAL_JUMP)
// 00548ce8: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_00548ce8
// 00548ceb: MOV EAX,dword ptr [EBX + 0x14]
// 00548cee: SUB EAX,ECX
// 00548cf0: CMP EAX,0x1
// 00548cf3: JBE 0x00548c94
//   XREF to: 00548c94 (CONDITIONAL_JUMP)
// 00548cf5: MOV EAX,dword ptr [EBX]
// 00548cf7: MOV DL,byte ptr [ESI]
// 00548cf9: MOV byte ptr [EAX],DL
// 00548cfb: MOV EAX,dword ptr [EBX]
// 00548cfd: CMP byte ptr [EAX],0xa
// 00548d00: JZ 0x00548d18
//   XREF to: 00548d18 (CONDITIONAL_JUMP)
// 00548d02: MOV AL,byte ptr [EBX + 0xd]
// 00548d05: OR AL,0x10
// 00548d07: MOV EBP,dword ptr [EBX + 0x4]
// 00548d0a: MOV byte ptr [EBX + 0xd],AL
// 00548d0d: INC EBP
// 00548d0e: MOV EAX,dword ptr [EBX]
// 00548d10: MOV dword ptr [EBX + 0x4],EBP
// 00548d13: INC EAX
// 00548d14: MOV dword ptr [EBX],EAX
// 00548d16: JMP 0x00548ca2
//   XREF to: 00548ca2 (UNCONDITIONAL_JUMP)
// 00548d18: PUSH EBX
//   Label: LAB_00548d18
// 00548d19: PUSH 0xa
// 00548d1b: JMP 0x00548c9a
//   XREF to: 00548c9a (UNCONDITIONAL_JUMP)
