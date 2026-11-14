// Name: support_trstream.cpp_COutStream_printf_FUN_005744b0
// Address: 005744b0
// Address Range: [[005744b0, 005744d9]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStream_printf_FUN_005744b0(COutStream *this_ptr,char *format,...)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStream_printf_FUN_005744b0(COutStream *this_ptr,char *format,...)

{
  int iVar1;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = support_trstream_cpp_COutStream_vprintf_FUN_005744e0(this_ptr,format,(va_list_t)&local_8);
  return iVar1;
}
