// Name: crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff
// Address: 0060d5ff
// Address Range: [[0060d5ff, 0060d64e]]
// Convention: __watcallStack
// Signature: streambuf * crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff(streambuf * this_ptr, void * buffer_start, int buffer_size)
// Function calls:
//   crt_iostream.cpp_setBuffer_FUN_0060d6a8

#include "nocturne.h"

streambuf * __watcallStack
crt_iostream_cpp_streambuf_setbuf_FUN_0060d5ff
          (streambuf *this_ptr,void *buffer_start,int buffer_size)

{
  void *buffer_end;
  
  if (this_ptr->__reserve_base != (char *)0x0) {
    return (streambuf *)0x0;
  }
  if ((buffer_start == (void *)0x0) || (buffer_size < 1)) {
    buffer_end = (void *)0x0;
    buffer_start = (void *)0x0;
  }
  else {
    if (buffer_size < 5) {
      crt_iostream_cpp_setBuffer_FUN_0060d6a8(this_ptr,(void *)0x0,(void *)0x0,0);
      return (streambuf *)0x0;
    }
    buffer_end = (void *)((int)buffer_start + buffer_size);
  }
  crt_iostream_cpp_setBuffer_FUN_0060d6a8(this_ptr,buffer_start,buffer_end,0);
  return this_ptr;
}


// Assembly code:
// 0060d5ff: PUSH EBX
//   Label: crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff
// 0060d600: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060d604: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060d608: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060d60c: MOV EAX,dword ptr [EBX + 0x4]
// 0060d60f: TEST EAX,EAX
// 0060d611: JNZ 0x0060d633
//   XREF to: 0060d633 (CONDITIONAL_JUMP)
// 0060d613: TEST ECX,ECX
// 0060d615: JZ 0x0060d637
//   XREF to: 0060d637 (CONDITIONAL_JUMP)
// 0060d617: TEST EDX,EDX
// 0060d619: JLE 0x0060d637
//   XREF to: 0060d637 (CONDITIONAL_JUMP)
// 0060d61b: CMP EDX,0x4
// 0060d61e: JLE 0x0060d63f
//   XREF to: 0060d63f (CONDITIONAL_JUMP)
// 0060d620: PUSH EAX
// 0060d621: LEA EAX,[ECX + EDX*0x1]
// 0060d624: PUSH EAX
// 0060d625: PUSH ECX
// 0060d626: PUSH EBX
//   Label: LAB_0060d626
// 0060d627: CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)
// 0060d62c: ADD ESP,0x10
// 0060d62f: MOV EAX,EBX
// 0060d631: POP EBX
// 0060d632: RET
// 0060d633: XOR EAX,EAX
//   Label: LAB_0060d633
// 0060d635: POP EBX
// 0060d636: RET
// 0060d637: PUSH 0x0
//   Label: LAB_0060d637
// 0060d639: PUSH 0x0
// 0060d63b: PUSH 0x0
// 0060d63d: JMP 0x0060d626
//   XREF to: 0060d626 (UNCONDITIONAL_JUMP)
// 0060d63f: PUSH EAX
//   Label: LAB_0060d63f
// 0060d640: PUSH EAX
// 0060d641: PUSH EAX
// 0060d642: PUSH EBX
// 0060d643: CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)
// 0060d648: ADD ESP,0x10
// 0060d64b: XOR EAX,EAX
// 0060d64d: POP EBX
// 0060d64e: RET
