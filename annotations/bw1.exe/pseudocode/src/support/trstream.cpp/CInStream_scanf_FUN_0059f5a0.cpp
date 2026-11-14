// Name: support_trstream.cpp_CInStream_scanf_FUN_0059f5a0
// Address: 0059f5a0
// Address Range: [[0059f5a0, 0059f5c9]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStream_scanf_FUN_0059f5a0(CInStream *this_ptr,char *format,...)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStream_scanf_FUN_0059f5a0(CInStream *this_ptr,char *format,...)

{
  int iVar1;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  iVar1 = support_trstream_cpp_CInStream_vscanf_FUN_0059f700(this_ptr,format,(va_list_t)&puStack_8);
  return iVar1;
}
