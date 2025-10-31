// Name: crt_stdlib.c_utoa_FUN_0060ae50
// Address: 0060ae50
// Address Range: [[0060ae50, 0060aea3]]
// Convention: __cdecl
// Signature: char * crt_stdlib.c_utoa_FUN_0060ae50(uint value, char * buffer, int base)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 006036a1 [UNCONDITIONAL_CALL]
// Globals:
//   char[36] g_AlphaNumericCharacters2

#include "nocturne.h"

char * __cdecl crt_stdlib_c_utoa_FUN_0060ae50(uint value,char *buffer,int base)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char local_37 [39];
  
  pcVar3 = local_37;
  do {
    uVar2 = value / (uint)base;
    pcVar4 = pcVar3 + 1;
    *pcVar3 = g_AlphaNumericCharacters2[value % (uint)base];
    value = uVar2;
    pcVar3 = pcVar4;
    pcVar5 = buffer;
  } while (uVar2 != 0);
  do {
    cVar1 = pcVar4[-1];
    pcVar4 = pcVar4 + -1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  return buffer;
}


// Assembly code:
// 0060ae50: PUSH EBX
//   Label: crt_stdlib.c_utoa_FUN_0060ae50
// 0060ae51: PUSH ESI
// 0060ae52: PUSH EDI
// 0060ae53: PUSH EBP
// 0060ae54: SUB ESP,0x28
// 0060ae57: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0060ae5b: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0060ae5f: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 0060ae63: LEA ECX,[ESP + 0x1]
//   XREF to: Stack[-0x37] (DATA)
// 0060ae67: XOR DL,DL
// 0060ae69: MOV ESI,EBP
// 0060ae6b: MOV byte ptr [ESP],DL
//   XREF to: Stack[-0x38] (DATA)
// 0060ae6e: LEA EBX,[ESP + 0x24]
//   Label: LAB_0060ae6e
//   XREF to: Stack[-0x14] (DATA)
// 0060ae72: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0060ae76: XOR EDX,EDX
// 0060ae78: DIV dword ptr [EBX]
//   XREF to: Stack[-0x14] (DATA)
// 0060ae7a: MOV dword ptr [EBX],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0060ae7c: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (DATA)
// 0060ae80: INC ECX
// 0060ae81: MOV BL,byte ptr [EBX + 0x68543c]
//   XREF to: 0068543c (DATA)
// 0060ae87: MOV byte ptr [ECX + -0x1],BL
//   XREF to: Stack[-0x37] (WRITE)
// 0060ae8a: TEST EAX,EAX
// 0060ae8c: JNZ 0x0060ae6e
//   XREF to: 0060ae6e (CONDITIONAL_JUMP)
// 0060ae8e: INC ESI
//   Label: LAB_0060ae8e
// 0060ae8f: MOV AL,byte ptr [ECX + -0x1]
//   XREF to: Stack[-0x37] (READ)
// 0060ae92: DEC ECX
// 0060ae93: MOV byte ptr [ESI + -0x1],AL
// 0060ae96: TEST AL,AL
// 0060ae98: JNZ 0x0060ae8e
//   XREF to: 0060ae8e (CONDITIONAL_JUMP)
// 0060ae9a: MOV EAX,EBP
// 0060ae9c: ADD ESP,0x28
// 0060ae9f: POP EBP
// 0060aea0: POP EDI
// 0060aea1: POP ESI
// 0060aea2: POP EBX
// 0060aea3: RET
