// Name: crt_iostream.cpp_ostream_flush_FUN_00565e59
// Address: 00565e59
// Address Range: [[00565e59, 00565e93]]
// Convention: __cdecl
// Signature: int __cdecl crt_iostream_cpp_ostream_flush_FUN_00565e59(void *this_ptr)

#include "nocturne.h"

int __cdecl crt_iostream_cpp_ostream_flush_FUN_00565e59(void *this_ptr)

{
  FileEmbeddedData *embedded_data;
  int iVar1;
  int extraout_EAX;
  
  embedded_data = (FileEmbeddedData *)(*(int *)(*(int *)this_ptr + 4) + (int)this_ptr);
  if (embedded_data->stream != (_FILE *)0x0) {
    iVar1 = FUN_0056cd52(embedded_data->stream);
    if (iVar1 != 0) {
      return iVar1;
    }
    embedded_data = (FileEmbeddedData *)((int)this_ptr + *(int *)(*(int *)this_ptr + 4));
  }
  reportStreamError(embedded_data,2);
  return extraout_EAX;
}
