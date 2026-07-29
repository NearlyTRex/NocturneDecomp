// Name: crt_fstream.cpp_filebuf_ctor_FUN_0057042d
// Address: 0057042d
// Address Range: [[0057042d, 00570448]]
// Convention: __cdecl
// Signature: filebuf * __cdecl crt_fstream_cpp_filebuf_ctor_FUN_0057042d(filebuf *this_ptr)

#include "nocturne.h"

filebuf * __cdecl crt_fstream_cpp_filebuf_ctor_FUN_0057042d(filebuf *this_ptr)

{
  filebuf *pfVar1;
  
  pfVar1 = (filebuf *)crt_iostream_cpp_streambuf_ctor_FUN_0056fe12(&this_ptr->_streambuf);
  pfVar1->__file_handle = -1;
  pfVar1->__vtable = &g_FilebufVTable;
  return pfVar1;
}
