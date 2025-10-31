// Name: crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
// Address: 0060b7c2
// Address Range: [[0060b7c2, 0060b814]]
// Convention: __watcallStack
// Signature: streambuf * crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2(streambuf * this_ptr)
// Cross-references:
//   crt_fstream.cpp_filebuf_ctor_FUN_0060bddd (0060bddd) at 0060bde2 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe (006060fe) at 0060610f [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8 (0060bbf8) at 0060bbfe [UNCONDITIONAL_CALL]
// Globals:
//   streambuf_vtable g_StreambufVTable

#include "nocturne.h"

streambuf * __watcallStack crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2(streambuf *this_ptr)

{
  this_ptr[1].__b_lock = &g_StreambufVTable;
  this_ptr->__b_lock = (void *)0x0;
  this_ptr->__reserve_base = (char *)0x0;
  this_ptr->__reserve_end = (char *)0x0;
  this_ptr->__get_base = (char *)0x0;
  this_ptr->__get_end = (char *)0x0;
  this_ptr->__get_ptr = (char *)0x0;
  this_ptr->__put_base = (char *)0x0;
  this_ptr->__put_end = (char *)0x0;
  this_ptr->__put_ptr = (char *)0x0;
  *(byte *)&this_ptr->__flags = (byte)this_ptr->__flags & 0xfc;
  return this_ptr;
}


// Assembly code:
// 0060b7c2: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_streambuf_constructor_FUN_0060b7c2
//   XREF to: Stack[0x4] (READ)
// 0060b7c6: MOV dword ptr [EAX + 0x28],0x665f70
//   XREF to: 00665f70 (DATA)
// 0060b7cd: MOV dword ptr [EAX],0x0
// 0060b7d3: MOV dword ptr [EAX + 0x4],0x0
// 0060b7da: MOV dword ptr [EAX + 0x8],0x0
// 0060b7e1: MOV dword ptr [EAX + 0xc],0x0
// 0060b7e8: MOV dword ptr [EAX + 0x10],0x0
// 0060b7ef: MOV dword ptr [EAX + 0x14],0x0
// 0060b7f6: MOV dword ptr [EAX + 0x18],0x0
// 0060b7fd: MOV dword ptr [EAX + 0x1c],0x0
// 0060b804: MOV DL,byte ptr [EAX + 0x24]
// 0060b807: MOV dword ptr [EAX + 0x20],0x0
// 0060b80e: AND DL,0xfc
// 0060b811: MOV byte ptr [EAX + 0x24],DL
// 0060b814: RET
