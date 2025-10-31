// Name: crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8
// Address: 0060bbf8
// Address Range: [[0060bbf8, 0060bc21]]
// Convention: __cdecl
// Signature: strstreambuf * crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8(strstreambuf * this_ptr)
// Globals:
//   strstreambuf_vtable g_StrstreambufVTable
// Function calls:
//   crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
//   crt_strstream.cpp_strstreambuf_init_FUN_0060b815

#include "nocturne.h"

strstreambuf * __cdecl crt_strstream_cpp_strstreambuf_ctor_FUN_0060bbf8(strstreambuf *this_ptr)

{
  strstreambuf *this_ptr_00;
  
  this_ptr_00 = (strstreambuf *)
                crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2(&this_ptr->streambuf);
  this_ptr_00->__vtable = &g_StrstreambufVTable;
  crt_strstream_cpp_strstreambuf_init_FUN_0060b815(this_ptr_00,(char *)0x0,0,(char *)0x0);
  return this_ptr_00;
}


// Assembly code:
// 0060bbf8: PUSH EBX
//   Label: crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8
// 0060bbf9: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060bbfd: PUSH EDX
// 0060bbfe: CALL crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
//   XREF to: 0060b7c2 (UNCONDITIONAL_CALL)
// 0060bc03: ADD ESP,0x4
// 0060bc06: PUSH 0x0
// 0060bc08: PUSH 0x0
// 0060bc0a: PUSH 0x0
// 0060bc0c: PUSH EAX
// 0060bc0d: MOV EBX,EAX
// 0060bc0f: MOV dword ptr [EAX + 0x28],0x665d34
//   XREF to: 00665d34 (DATA)
// 0060bc16: CALL crt_strstream.cpp_strstreambuf_init_FUN_0060b815
//   XREF to: 0060b815 (UNCONDITIONAL_CALL)
// 0060bc1b: ADD ESP,0x10
// 0060bc1e: MOV EAX,EBX
// 0060bc20: POP EBX
// 0060bc21: RET
