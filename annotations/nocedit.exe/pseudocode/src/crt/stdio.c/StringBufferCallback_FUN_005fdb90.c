// Name: crt_stdio.c_StringBufferCallback_FUN_005fdb90
// Address: 005fdb90
// Address Range: [[005fdb90, 005fdba6]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_StringBufferCallback_FUN_005fdb90(StringOutputContext *context,char character)

#include "nocturne.h"

void __cdecl StringBufferCallback(StringOutputContext *context,char character)

{
  char *pcVar1;
  
  pcVar1 = context->buffer_ptr;
  context->buffer_ptr = pcVar1 + 1;
  *pcVar1 = character;
  context->chars_written = context->chars_written + 1;
  return;
}
