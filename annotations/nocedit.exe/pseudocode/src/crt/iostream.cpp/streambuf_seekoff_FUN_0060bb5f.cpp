// Name: crt_iostream.cpp_streambuf_seekoff_FUN_0060bb5f
// Address: 0060bb5f
// Address Range: [[0060bb5f, 0060bb7b]]
// Convention: __watcallStack
// Signature: void crt_iostream.cpp_streambuf_seekoff_FUN_0060bb5f(streambuf * this_ptr, int off, int dir, int which)

#include "nocturne.h"

void __watcallStack
crt_iostream_cpp_streambuf_seekoff_FUN_0060bb5f(streambuf *this_ptr,int off,int dir,int which)

{
  (**(code **)((int)this_ptr[1].__b_lock + 0x18))();
  return;
}


// Assembly code:
// 0060bb5f: PUSH EBX
//   Label: crt_iostream.cpp_streambuf_seekoff_FUN_0060bb5f
// 0060bb60: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060bb64: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060bb68: PUSH ECX
// 0060bb69: PUSH 0x0
// 0060bb6b: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060bb6f: PUSH EBX
// 0060bb70: MOV EAX,dword ptr [EDX + 0x28]
// 0060bb73: PUSH EDX
// 0060bb74: CALL dword ptr [EAX + 0x18]
// 0060bb77: ADD ESP,0x10
// 0060bb7a: POP EBX
// 0060bb7b: RET
