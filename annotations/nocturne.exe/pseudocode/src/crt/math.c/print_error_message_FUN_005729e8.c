// Name: crt_math.c_print_error_message_FUN_005729e8
// Address: 005729e8
// Address Range: [[005729e8, 00572a34]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c_print_error_message_FUN_005729e8(int errorType,char *errorData)

#include "nocturne.h"

void __cdecl print_error_message(int errorType,char *errorData)

{
  _FILE *file;
  
  file = get_standard_file_handle(2);
  _fputs(*(char **)(&DAT_005c2148 + errorType * 4),file);
  _fputs(" in ",file);
  _fputs(errorData,file);
  _fputc(10,file);
  return;
}
