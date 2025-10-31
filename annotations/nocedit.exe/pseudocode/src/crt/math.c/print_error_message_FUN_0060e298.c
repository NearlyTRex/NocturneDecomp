// Name: crt_math.c_print_error_message_FUN_0060e298
// Address: 0060e298
// Address Range: [[0060e298, 0060e2e4]]
// Convention: __cdecl
// Signature: void crt_math.c_print_error_message_FUN_0060e298(int errorType, char * errorData)
// Cross-references:
//   crt_math.c_report_math_error_FUN_0060e2e5 (0060e2e5) at 0060e305 [UNCONDITIONAL_CALL]
// Globals:
//   char g_SpaceCharacter =  
//   char*[7] g_MathErrorMessages
// Function calls:
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_fputs_FUN_0060ebb0
//   crt_stdio.c_get_standard_file_handle_FUN_0060b7a0

#include "nocturne.h"

void __cdecl crt_math_c_print_error_message_FUN_0060e298(int errorType,char *errorData)

{
  FILE *file;
  
  file = crt_stdio_c_get_standard_file_handle_FUN_0060b7a0(2);
  crt_stdio_c_fputs_FUN_0060ebb0(g_MathErrorMessages[errorType],file);
  crt_stdio_c_fputs_FUN_0060ebb0(&g_SpaceCharacter,file);
  crt_stdio_c_fputs_FUN_0060ebb0(errorData,file);
  crt_stdio_c_fputc_FUN_006007a0(10,file);
  return;
}


// Assembly code:
// 0060e298: PUSH EBP
//   Label: crt_math.c_print_error_message_FUN_0060e298
// 0060e299: MOV EBP,ESP
// 0060e29b: PUSH EBX
// 0060e29c: PUSH 0x2
// 0060e29e: CALL crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
//   XREF to: 0060b7a0 (UNCONDITIONAL_CALL)
// 0060e2a3: ADD ESP,0x4
// 0060e2a6: MOV EBX,EAX
// 0060e2a8: PUSH EAX
// 0060e2a9: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060e2ac: MOV EDX,dword ptr [EAX*0x4 + 0x685574]
//   XREF to: 00685574 (DATA)
// 0060e2b3: PUSH EDX
// 0060e2b4: CALL crt_stdio.c_fputs_FUN_0060ebb0
//   XREF to: 0060ebb0 (UNCONDITIONAL_CALL)
// 0060e2b9: ADD ESP,0x8
// 0060e2bc: PUSH EBX
// 0060e2bd: PUSH 0x65972d
//   XREF to: 0065972d (DATA)
// 0060e2c2: CALL crt_stdio.c_fputs_FUN_0060ebb0
//   XREF to: 0060ebb0 (UNCONDITIONAL_CALL)
// 0060e2c7: ADD ESP,0x8
// 0060e2ca: PUSH EBX
// 0060e2cb: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060e2ce: PUSH ECX
// 0060e2cf: CALL crt_stdio.c_fputs_FUN_0060ebb0
//   XREF to: 0060ebb0 (UNCONDITIONAL_CALL)
// 0060e2d4: ADD ESP,0x8
// 0060e2d7: PUSH EBX
// 0060e2d8: PUSH 0xa
// 0060e2da: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0060e2df: ADD ESP,0x8
// 0060e2e2: POP EBX
// 0060e2e3: POP EBP
// 0060e2e4: RET
