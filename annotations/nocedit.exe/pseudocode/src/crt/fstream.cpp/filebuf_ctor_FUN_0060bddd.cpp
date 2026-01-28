// Name: crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
// Address: 0060bddd
// Address Range: [[0060bddd, 0060bdf8]]
// Convention: __cdecl
// Signature: filebuf * __cdecl crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(filebuf *this_ptr)

#include "nocturne.h"

filebuf * __cdecl crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(filebuf *this_ptr)

{
  filebuf *pfVar1;
  
  pfVar1 = (filebuf *)crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2(&this_ptr->_streambuf);
  pfVar1->__file_handle = -1;
  pfVar1->__vtable = &g_FilebufVTable;
  return pfVar1;
}
