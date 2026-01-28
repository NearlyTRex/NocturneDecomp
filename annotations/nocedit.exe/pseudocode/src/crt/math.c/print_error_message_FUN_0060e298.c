// Name: crt_math.c_print_error_message_FUN_0060e298
// Address: 0060e298
// Address Range: [[0060e298, 0060e2e4]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c_print_error_message_FUN_0060e298(int errorType,char *errorData)

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
