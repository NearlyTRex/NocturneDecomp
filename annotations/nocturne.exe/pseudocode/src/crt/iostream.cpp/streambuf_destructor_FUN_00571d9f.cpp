// Name: crt_iostream.cpp_streambuf_destructor_FUN_00571d9f
// Address: 00571d9f
// Address Range: [[00571d9f, 00571dc6]]
// Convention: unknown
// Signature: int crt_iostream_cpp_streambuf_destructor_FUN_00571d9f(int param_1)

#include "nocturne.h"

int crt_iostream_cpp_streambuf_destructor_FUN_00571d9f(int param_1)

{
  *(byte ***)(param_1 + 0x28) = &g_StreambufVTable;
  if ((*(byte *)(param_1 + 0x24) & 2) == 0) {
    return param_1;
  }
  FUN_00571ef0(*(void **)(param_1 + 4));
  return param_1;
}
