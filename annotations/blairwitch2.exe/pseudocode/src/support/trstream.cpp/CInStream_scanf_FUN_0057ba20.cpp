// Name: support_trstream.cpp_CInStream_scanf_FUN_0057ba20
// Address: 0057ba20
// Address Range: [[0057ba20, 0057ba49]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStream_scanf_FUN_0057ba20(CInStream *this_ptr,char *format,...)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStream_scanf_FUN_0057ba20(CInStream *this_ptr,char *format,...)

{
  int iVar1;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  iVar1 = support_trstream_cpp_CInStream_vscanf_FUN_0057bb80(this_ptr,format,(va_list_t)&puStack_8);
  return iVar1;
}
