// Name: crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
// Address: 0060bddd
// Address Range: [[0060bddd, 0060bdf8]]
// Convention: __cdecl
// Signature: filebuf * crt_fstream.cpp_filebuf_ctor_FUN_0060bddd(filebuf * this_ptr)
// Cross-references:
//   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 (00606456) at 0060647d [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f (0060658f) at 0060659f [UNCONDITIONAL_CALL]
// Globals:
//   filebuf_vtable g_FilebufVTable
// Function calls:
//   crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2

#include "nocturne.h"

filebuf * __cdecl crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(filebuf *this_ptr)

{
  filebuf *pfVar1;
  
  pfVar1 = (filebuf *)crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2(&this_ptr->streambuf);
  pfVar1->__file_handle = -1;
  pfVar1->__vtable = &g_FilebufVTable;
  return pfVar1;
}


// Assembly code:
// 0060bddd: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_filebuf_ctor_FUN_0060bddd
//   XREF to: Stack[0x4] (READ)
// 0060bde1: PUSH EDX
// 0060bde2: CALL crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
//   XREF to: 0060b7c2 (UNCONDITIONAL_CALL)
// 0060bde7: MOV dword ptr [EAX + 0x2c],0xffffffff
// 0060bdee: ADD ESP,0x4
// 0060bdf1: MOV dword ptr [EAX + 0x28],0x665fcc
//   XREF to: 00665fcc (DATA)
// 0060bdf8: RET
