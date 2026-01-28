// Name: crt_stdio.c_OutputCallback_FUN_00604830
// Address: 00604830
// Address Range: [[00604830, 0060484f]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_stdio_c_OutputCallback_FUN_00604830(FORMAT_OUTPUT_CONTEXT *context,int character)

#include "nocturne.h"

void __watcallStack
crt_stdio_c_OutputCallback_FUN_00604830(FORMAT_OUTPUT_CONTEXT *context,int character)

{
  crt_stdio_c_fputc_FUN_006007a0(character,context->output_file);
  context->char_count = context->char_count + 1;
  return;
}
