// Name: crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
// Address: 0060b7a0
// Address Range: [[0060b7a0, 0060b7c1]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_get_standard_file_handle_FUN_0060b7a0(int fd)
// Cross-references:
//   crt_math.c_print_error_message_FUN_0060e298 (0060e298) at 0060e29e [UNCONDITIONAL_CALL]
//   crt_stdio.c_prepare_stream_for_write_FUN_00606055 (00606055) at 006060a8 [UNCONDITIONAL_CALL]
// Globals:
//   FILE* g_StaticFilePoolStart = 00000000

#include "nocturne.h"

FILE * __cdecl crt_stdio_c_get_standard_file_handle_FUN_0060b7a0(int fd)

{
  if (3 < (uint)fd) {
    return (FILE *)0x0;
  }
  return (FILE *)((int)&g_StaticFilePoolStart + fd * 0x1a);
}


// Assembly code:
// 0060b7a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
//   XREF to: Stack[0x4] (READ)
// 0060b7a4: CMP EDX,0x3
// 0060b7a7: JBE 0x0060b7ac
//   XREF to: 0060b7ac (CONDITIONAL_JUMP)
// 0060b7a9: XOR EAX,EAX
// 0060b7ab: RET
// 0060b7ac: LEA EAX,[EDX*0x4 + 0x0]
//   Label: LAB_0060b7ac
// 0060b7b3: SUB EAX,EDX
// 0060b7b5: SHL EAX,0x2
// 0060b7b8: ADD EAX,EDX
// 0060b7ba: ADD EAX,EAX
// 0060b7bc: ADD EAX,0x684cc4
//   XREF to: 00684cc4 (DATA)
// 0060b7c1: RET
