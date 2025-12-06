// Name: crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0
// Address: 0060bdc0
// Address Range: [[0060bdc0, 0060bddc]]
// Convention: __cdecl
// Signature: void crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0(ios * stream_ptr)

#include "nocturne.h"

void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_0060bdc0(ios *stream_ptr)

{
  uint *puVar1;
  uint *buffer;
  
  buffer = *(uint **)&stream_ptr->__fill_character;
  while (buffer != (uint *)0x0) {
    puVar1 = (uint *)*buffer;
    crt_iostream_cpp_freeBuffer_FUN_0060d7a0(buffer);
    buffer = puVar1;
  }
  return;
}
