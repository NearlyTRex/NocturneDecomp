// Name: crt_stdio.c_formatTwoDigits_FUN_006002a0
// Address: 006002a0
// Address Range: [[006002a0, 006002d2]]
// Convention: __cdecl
// Signature: void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)
// Cross-references:
//   crt_time.c_strftime_FUN_006002d4 (006002d4) at 006005e2 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl crt_stdio_c_formatTwoDigits_FUN_006002a0(char *buffer,int value)

{
  *buffer = (char)((longlong)value / 10) + '0';
  buffer[2] = '\0';
  buffer[1] = (char)((longlong)value % 10) + '0';
  return;
}


// Assembly code:
// 006002a0: PUSH EBX
//   Label: crt_stdio.c_formatTwoDigits_FUN_006002a0
// 006002a1: PUSH ESI
// 006002a2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 006002a6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 006002aa: MOV ECX,0xa
// 006002af: MOV EDX,EBX
// 006002b1: MOV EAX,EBX
// 006002b3: SAR EDX,0x1f
// 006002b6: IDIV ECX
// 006002b8: MOV EDX,EBX
// 006002ba: ADD EAX,0x30
// 006002bd: SAR EDX,0x1f
// 006002c0: MOV byte ptr [ESI],AL
// 006002c2: MOV EAX,EBX
// 006002c4: IDIV ECX
// 006002c6: MOV byte ptr [ESI + 0x2],0x0
// 006002ca: ADD EDX,0x30
// 006002cd: MOV byte ptr [ESI + 0x1],DL
// 006002d0: POP ESI
// 006002d1: POP EBX
// 006002d2: RET
