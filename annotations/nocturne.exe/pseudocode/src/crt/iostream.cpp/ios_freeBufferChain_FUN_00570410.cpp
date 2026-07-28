// Name: crt_iostream.cpp_ios_freeBufferChain_FUN_00570410
// Address: 00570410
// Address Range: [[00570410, 0057042c]]
// Convention: __cdecl
// Signature: void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_00570410(ios *stream_ptr)

#include "nocturne.h"

void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_00570410(ios *stream_ptr)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)&stream_ptr->__fill_character;
  while (puVar2 != (uint *)0x0) {
    puVar1 = (uint *)*puVar2;
    FUN_00571ef0(puVar2);
    puVar2 = puVar1;
  }
  return;
}
