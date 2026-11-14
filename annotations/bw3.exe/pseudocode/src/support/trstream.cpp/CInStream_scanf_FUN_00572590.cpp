// Name: support_trstream.cpp_CInStream_scanf_FUN_00572590
// Address: 00572590
// Address Range: [[00572590, 005725b9]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStream_scanf_FUN_00572590(CInStream *this_ptr,char *format,...)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStream_scanf_FUN_00572590(CInStream *this_ptr,char *format,...)

{
  int iVar1;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  iVar1 = support_trstream_cpp_CInStream_vscanf_FUN_005726f0(this_ptr,format,(va_list_t)&puStack_8);
  return iVar1;
}
