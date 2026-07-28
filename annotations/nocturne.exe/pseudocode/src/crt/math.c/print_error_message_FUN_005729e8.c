// Name: crt_math.c_print_error_message_FUN_005729e8
// Address: 005729e8
// Address Range: [[005729e8, 00572a34]]
// Convention: unknown
// Signature: void crt_math_c_print_error_message_FUN_005729e8(int param_1,char *param_2)

#include "nocturne.h"

void print_error_message(int param_1,char *param_2)

{
  _FILE *file;
  
  file = get_standard_file_handle(2);
  _fputs(*(char **)(&DAT_005c2148 + param_1 * 4),file);
  _fputs(" in ",file);
  _fputs(param_2,file);
  _fputc(10,file);
  return;
}
