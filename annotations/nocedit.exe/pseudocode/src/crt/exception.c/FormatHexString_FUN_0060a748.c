// Name: crt_exception.c_FormatHexString_FUN_0060a748
// Address: 0060a748
// Address Range: [[0060a748, 0060a7a3]]
// Convention: __cdecl
// Signature: void crt_exception.c_FormatHexString_FUN_0060a748(char * dest, char * format, DWORD value)
// Cross-references:
//   crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4 (0060a7a4) at 0060a8e6 [UNCONDITIONAL_CALL]
// Globals:
//   char[17] g_HexLookupTable

#include "nocturne.h"

void __cdecl crt_exception_c_FormatHexString_FUN_0060a748(char *dest,char *format,DWORD value)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x0;
  cVar1 = *dest;
  while (cVar1 != '\0') {
    pcVar4 = dest + 1;
    dest = dest + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = dest + 9;
  while( true ) {
    cVar1 = *format;
    *dest = cVar1;
    if (cVar1 == '\0') break;
    if ((cVar1 == '0') && (format[1] == 'x')) {
      pcVar3 = pcVar4;
    }
    pcVar4 = pcVar4 + 1;
    dest = dest + 1;
    format = format + 1;
  }
  if ((pcVar3 != (char *)0x0) && (value != 0)) {
    do {
      uVar2 = value & 0xf;
      value = value >> 4;
      *pcVar3 = g_HexLookupTable[uVar2];
      pcVar3 = pcVar3 + -1;
    } while (value != 0);
  }
  return;
}


// Assembly code:
// 0060a748: PUSH EBX
//   Label: crt_exception.c_FormatHexString_FUN_0060a748
// 0060a749: PUSH ESI
// 0060a74a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060a74e: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060a752: MOV CL,byte ptr [EAX]
// 0060a754: XOR EBX,EBX
// 0060a756: TEST CL,CL
// 0060a758: JZ 0x0060a762
//   XREF to: 0060a762 (CONDITIONAL_JUMP)
// 0060a75a: MOV CH,byte ptr [EAX + 0x1]
//   Label: LAB_0060a75a
// 0060a75d: INC EAX
// 0060a75e: TEST CH,CH
// 0060a760: JNZ 0x0060a75a
//   XREF to: 0060a75a (CONDITIONAL_JUMP)
// 0060a762: LEA ESI,[EAX + 0x9]
//   Label: LAB_0060a762
// 0060a765: MOV CL,byte ptr [EDX]
//   Label: LAB_0060a765
// 0060a767: MOV byte ptr [EAX],CL
// 0060a769: TEST CL,CL
// 0060a76b: JZ 0x0060a77f
//   XREF to: 0060a77f (CONDITIONAL_JUMP)
// 0060a76d: CMP CL,0x30
// 0060a770: JNZ 0x0060a77a
//   XREF to: 0060a77a (CONDITIONAL_JUMP)
// 0060a772: CMP byte ptr [EDX + 0x1],0x78
// 0060a776: JNZ 0x0060a77a
//   XREF to: 0060a77a (CONDITIONAL_JUMP)
// 0060a778: MOV EBX,ESI
// 0060a77a: INC ESI
//   Label: LAB_0060a77a
// 0060a77b: INC EAX
// 0060a77c: INC EDX
// 0060a77d: JMP 0x0060a765
//   XREF to: 0060a765 (UNCONDITIONAL_JUMP)
// 0060a77f: TEST EBX,EBX
//   Label: LAB_0060a77f
// 0060a781: JZ 0x0060a7a1
//   XREF to: 0060a7a1 (CONDITIONAL_JUMP)
// 0060a783: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0060a787: TEST EAX,EAX
// 0060a789: JZ 0x0060a7a1
//   XREF to: 0060a7a1 (CONDITIONAL_JUMP)
// 0060a78b: MOV EDX,EAX
//   Label: LAB_0060a78b
// 0060a78d: AND EDX,0xf
// 0060a790: DEC EBX
// 0060a791: MOV DL,byte ptr [EDX + 0x6853f8]
//   XREF to: 006853f8 (DATA)
// 0060a797: SHR EAX,0x4
// 0060a79a: MOV byte ptr [EBX + 0x1],DL
// 0060a79d: TEST EAX,EAX
// 0060a79f: JNZ 0x0060a78b
//   XREF to: 0060a78b (CONDITIONAL_JUMP)
// 0060a7a1: POP ESI
//   Label: LAB_0060a7a1
// 0060a7a2: POP EBX
// 0060a7a3: RET
