// Name: crt_strstream.cpp_strstreambuf_ctor_FUN_00570248
// Address: 00570248
// Address Range: [[00570248, 00570271]]
// Convention: __cdecl
// Signature: strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_ctor_FUN_00570248(strstreambuf *this_ptr)

#include "nocturne.h"

strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_ctor_FUN_00570248(strstreambuf *this_ptr)

{
  strstreambuf *this_ptr_00;
  
  this_ptr_00 = (strstreambuf *)crt_iostream_cpp_streambuf_ctor_FUN_0056fe12(&this_ptr->_streambuf);
  this_ptr_00->__vtable = &g_StrstreambufVTable;
  crt_strstream_cpp_strstreambuf_init_FUN_0056fe65(this_ptr_00,(char *)0x0,0,(char *)0x0);
  return this_ptr_00;
}
