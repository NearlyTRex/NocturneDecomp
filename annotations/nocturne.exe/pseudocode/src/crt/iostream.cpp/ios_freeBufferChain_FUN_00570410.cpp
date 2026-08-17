// Name: crt_iostream.cpp_ios_freeBufferChain_FUN_00570410
// Address: 00570410
// Address Range: [[00570410, 0057042c]]
// Convention: __cdecl
// Signature: void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_00570410(ios *stream_ptr)

#include "nocturne.h"

void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_00570410(ios *stream_ptr)

{
  uint *puVar1;
  uint *buffer;
  
  buffer = *(uint **)&stream_ptr->__fill_character;
  while (buffer != (uint *)0x0) {
    puVar1 = (uint *)*buffer;
    freeBuffer(buffer);
    buffer = puVar1;
  }
  return;
}
