// Name: crt_stdio.c_fprintf_FUN_006021c0
// Address: 006021c0
// Address Range: [[006021c0, 006021d9]]
// Convention: __cdecl
// Signature: void crt_stdio.c_fprintf_FUN_006021c0(FILE * stream, char * format, ...)

#include "nocturne.h"

void __cdecl crt_stdio_c_fprintf_FUN_006021c0(FILE *stream,char *format,...)

{
  va_list_t in_stack_0000000c;
  
  crt_stdio_c_vfprintf_FUN_00604850(stream,format,in_stack_0000000c);
  return;
}
