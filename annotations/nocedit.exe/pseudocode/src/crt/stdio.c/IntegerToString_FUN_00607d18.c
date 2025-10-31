// Name: crt_stdio.c_IntegerToString_FUN_00607d18
// Address: 00607d18
// Address Range: [[00607d18, 00607d46]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
// Cross-references:
//   crt_process.c_build_file_info_env_FUN_0060ffd0 (0060ffd0) at 00610143 [UNCONDITIONAL_CALL]
//   crt_stdio.c_FormatFixedPoint_FUN_0060305c (0060305c) at 00603099 [UNCONDITIONAL_CALL]
//   crt_stdio.c_FormatHexWithPadding_FUN_00602ff8 (00602ff8) at 00603008 [UNCONDITIONAL_CALL]
//   crt_thread.c_create_thread_with_sync_FUN_0060f960 (0060f960) at 0060f9d2 [UNCONDITIONAL_CALL]
//   crt_time.c_strftime_FUN_006002d4 (006002d4) at 00600534 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdlib.c_itoa_FUN_00607cc0

#include "nocturne.h"

char * __cdecl crt_stdio_c_IntegerToString_FUN_00607d18(int value,char *buffer,int base)

{
  char *buffer_00;
  
  buffer_00 = buffer;
  if ((base == 10) && (value < 0)) {
    value = -value;
    buffer_00 = buffer + 1;
    *buffer = '-';
  }
  crt_stdlib_c_itoa_FUN_00607cc0(value,buffer_00,base);
  return buffer;
}


// Assembly code:
// 00607d18: PUSH EBX
//   Label: crt_stdio.c_IntegerToString_FUN_00607d18
// 00607d19: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00607d1d: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00607d21: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00607d25: MOV EDX,EBX
// 00607d27: CMP ECX,0xa
// 00607d2a: JNZ 0x00607d38
//   XREF to: 00607d38 (CONDITIONAL_JUMP)
// 00607d2c: TEST EAX,EAX
// 00607d2e: JGE 0x00607d38
//   XREF to: 00607d38 (CONDITIONAL_JUMP)
// 00607d30: NEG EAX
// 00607d32: LEA EDX,[EBX + 0x1]
// 00607d35: MOV byte ptr [EBX],0x2d
// 00607d38: PUSH ECX
//   Label: LAB_00607d38
// 00607d39: PUSH EDX
// 00607d3a: PUSH EAX
// 00607d3b: CALL crt_stdlib.c_itoa_FUN_00607cc0
//   XREF to: 00607cc0 (UNCONDITIONAL_CALL)
// 00607d40: ADD ESP,0xc
// 00607d43: MOV EAX,EBX
// 00607d45: POP EBX
// 00607d46: RET
