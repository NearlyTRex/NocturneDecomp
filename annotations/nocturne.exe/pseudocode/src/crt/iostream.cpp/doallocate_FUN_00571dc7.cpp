// Name: crt_iostream.cpp_doallocate_FUN_00571dc7
// Address: 00571dc7
// Address Range: [[00571dc7, 00571df7]]
// Convention: unknown
// Signature: undefined4 crt_iostream_cpp_doallocate_FUN_00571dc7(streambuf *param_1)

#include "nocturne.h"

uint crt_iostream_cpp_doallocate_FUN_00571dc7(streambuf *param_1)

{
  void *new_buffer;
  
  new_buffer = (void *)FUN_00571ee0(0x204);
  if (new_buffer == (void *)0x0) {
    return 0xffffffff;
  }
  crt_iostream_cpp_setBuffer_FUN_00571df8(param_1,new_buffer,(void *)((int)new_buffer + 0x204),1);
  return 0;
}
