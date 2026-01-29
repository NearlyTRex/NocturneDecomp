// Name: crt_math.c_print_error_message_FUN_0060e298
// Address: 0060e298
// Address Range: [[0060e298, 0060e2e4]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c_print_error_message_FUN_0060e298(int errorType,char *errorData)

#include "nocturne.h"

void __cdecl print_error_message(int errorType,char *errorData)

{
  _FILE *file;
  
  file = get_standard_file_handle(2);
  _fputs(g_MathErrorMessages[errorType],file);
  _fputs(&g_SpaceCharacter,file);
  _fputs(errorData,file);
  _fputc(10,file);
  return;
}
