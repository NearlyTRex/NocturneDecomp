// Name: crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8
// Address: 0060bbf8
// Address Range: [[0060bbf8, 0060bc21]]
// Convention: __cdecl
// Signature: strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_ctor_FUN_0060bbf8(strstreambuf *this_ptr)

#include "nocturne.h"

strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_ctor_FUN_0060bbf8(strstreambuf *this_ptr)

{
  strstreambuf *this_ptr_00;
  
  this_ptr_00 = (strstreambuf *)crt_iostream_cpp_streambuf_ctor_FUN_0060b7c2(&this_ptr->_streambuf);
  this_ptr_00->__vtable = &g_StrstreambufVTable;
  crt_strstream_cpp_strstreambuf_init_FUN_0060b815(this_ptr_00,(char *)0x0,0,(char *)0x0);
  return this_ptr_00;
}
