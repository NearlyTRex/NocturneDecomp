// Name: crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
// Address: 0060b8da
// Address Range: [[0060b8da, 0060b931]]
// Convention: __watcallStack
// Signature: void crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815(streambuf * this_ptr, char * buffer_ptr, int buffer_size, char * put_start)
// Cross-references:
//   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 (00606456) at 006064b3 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f (0060658f) at 006065d5 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe (006060fe) at 00606166 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __watcallStack
crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815
          (streambuf *this_ptr,char *buffer_ptr,int buffer_size,char *put_start)

{
  this_ptr->__b_lock = (void *)0x0;
  this_ptr->__get_end = (char *)0x0;
  this_ptr->__get_base = (char *)0x0;
  this_ptr->__get_ptr = (char *)0x0;
  this_ptr->__put_base = (char *)0x6;
  this_ptr->__put_end = (char *)0x0;
  *(undefined1 *)&this_ptr->__flags = 0x20;
  this_ptr->__reserve_end = (char *)0x0;
  this_ptr->__put_ptr = (char *)0x0;
  if (buffer_ptr == (char *)0x0) {
    this_ptr->__get_end = &DAT_00000001;
  }
  this_ptr->__reserve_base = buffer_ptr;
  return;
}


// Assembly code:
// 0060b8da: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_streambuf_initBuffer_FUN_0060b815
//   XREF to: Stack[0x4] (READ)
// 0060b8de: MOV dword ptr [EAX],0x0
// 0060b8e4: MOV dword ptr [EAX + 0x10],0x0
// 0060b8eb: MOV dword ptr [EAX + 0xc],0x0
// 0060b8f2: MOV dword ptr [EAX + 0x14],0x0
// 0060b8f9: MOV dword ptr [EAX + 0x18],0x6
// 0060b900: MOV dword ptr [EAX + 0x1c],0x0
// 0060b907: MOV byte ptr [EAX + 0x24],0x20
// 0060b90b: MOV dword ptr [EAX + 0x8],0x0
// 0060b912: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0060b916: MOV dword ptr [EAX + 0x20],0x0
// 0060b91d: TEST EDX,EDX
// 0060b91f: JZ 0x0060b929
//   XREF to: 0060b929 (CONDITIONAL_JUMP)
// 0060b921: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0060b921
//   XREF to: Stack[0x8] (READ)
// 0060b925: MOV dword ptr [EAX + 0x4],EDX
// 0060b928: RET
// 0060b929: MOV dword ptr [EAX + 0x10],0x1
//   Label: LAB_0060b929
// 0060b930: JMP 0x0060b921
//   XREF to: 0060b921 (UNCONDITIONAL_JUMP)
