// Name: support_trstream.cpp_COutStream_printf_FUN_005a14c0
// Address: 005a14c0
// Address Range: [[005a14c0, 005a14e9]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStream_printf_FUN_005a14c0(COutStream *this_ptr,char *format,...)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStream_printf_FUN_005a14c0(COutStream *this_ptr,char *format,...)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = support_trstream_cpp_COutStream_vprintf_FUN_005a14f0(this_ptr,format,(va_list_t)&local_8);
  return iVar1;
}
