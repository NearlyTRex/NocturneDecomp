// Name: crt_stdlib.c_itoa_FUN_00607cc0
// Address: 00607cc0
// Address Range: [[00607cc0, 00607d14]]
// Convention: __cdecl
// Signature: char * crt_stdlib.c_itoa_FUN_00607cc0(int value, char * buffer, int base)
// Cross-references:
//   crt_stdio.c_IntegerToString_FUN_00607d18 (00607d18) at 00607d3b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_0123456789abcdefghijkl_006851d8

#include "nocturne.h"

char * __cdecl crt_stdlib_c_itoa_FUN_00607cc0(int value,char *buffer,int base)

{
  char cVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char local_37 [35];
  uint local_14;
  
  pcVar2 = local_37;
  do {
    local_14 = (uint)value / (uint)base;
    *pcVar2 = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)value % (uint)base];
    pcVar2 = pcVar2 + 1;
    value = local_14;
    pcVar3 = buffer;
  } while (local_14 != 0);
  do {
    cVar1 = pcVar2[-1];
    pcVar2 = pcVar2 + -1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return buffer;
}


// Assembly code:
// 00607cc0: PUSH EBX
//   Label: crt_stdlib.c_itoa_FUN_00607cc0
// 00607cc1: PUSH ESI
// 00607cc2: PUSH EDI
// 00607cc3: PUSH EBP
// 00607cc4: SUB ESP,0x28
// 00607cc7: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 00607ccb: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 00607ccf: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 00607cd3: LEA ECX,[ESP + 0x1]
//   XREF to: Stack[-0x37] (DATA)
// 00607cd7: XOR AH,AH
// 00607cd9: MOV ESI,EBP
// 00607cdb: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0x38] (DATA)
// 00607cde: LEA EBX,[ESP + 0x24]
//   Label: LAB_00607cde
//   XREF to: Stack[-0x14] (DATA)
// 00607ce2: MOV EAX,EDX
// 00607ce4: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00607ce8: XOR EDX,EDX
// 00607cea: DIV dword ptr [EBX]
//   XREF to: Stack[-0x14] (DATA)
// 00607cec: MOV dword ptr [EBX],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00607cee: MOV DL,byte ptr [EDX + 0x6851d8]
//   XREF to: 006851d8 (DATA)
// 00607cf4: MOV byte ptr [ECX],DL
//   XREF to: Stack[-0x37] (DATA)
// 00607cf6: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00607cfa: INC ECX
// 00607cfb: TEST EDX,EDX
// 00607cfd: JNZ 0x00607cde
//   XREF to: 00607cde (CONDITIONAL_JUMP)
// 00607cff: INC ESI
//   Label: LAB_00607cff
// 00607d00: MOV DL,byte ptr [ECX + -0x1]
//   XREF to: Stack[-0x37] (READ)
// 00607d03: DEC ECX
// 00607d04: MOV byte ptr [ESI + -0x1],DL
// 00607d07: TEST DL,DL
// 00607d09: JNZ 0x00607cff
//   XREF to: 00607cff (CONDITIONAL_JUMP)
// 00607d0b: MOV EAX,EBP
// 00607d0d: ADD ESP,0x28
// 00607d10: POP EBP
// 00607d11: POP EDI
// 00607d12: POP ESI
// 00607d13: POP EBX
// 00607d14: RET
