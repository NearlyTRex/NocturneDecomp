// Name: crt_unknown.c_StringBufferCallback_FUN_005639f0
// Address: 005639f0
// Address Range: [[005639f0, 00563a06]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_StringBufferCallback_FUN_005639f0(StringOutputContext *context,char character)

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
