// Name: crt_iostream.cpp_doallocate_FUN_0060d677
// Address: 0060d677
// Address Range: [[0060d677, 0060d6a7]]
// Convention: __watcallStack
// Signature: int crt_iostream.cpp_doallocate_FUN_0060d677(streambuf * this_ptr)
// Function calls:
//   crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_doallocate_FUN_0060d677(streambuf *this_ptr)

{
  void *new_buffer;
  streambuf *in_stack_00000008;
  
  new_buffer = crt_iostream_cpp_streambuf_allocBuffer_FUN_0060d790(0x204);
  if (new_buffer == (void *)0x0) {
    return -1;
  }
  crt_iostream_cpp_setBuffer_FUN_0060d6a8
            (in_stack_00000008,new_buffer,(void *)((int)new_buffer + 0x204),1);
  return 0;
}


// Assembly code:
// 0060d677: PUSH 0x204
//   Label: crt_iostream.cpp_doallocate_FUN_0060d677
// 0060d67c: CALL crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790
//   XREF to: 0060d790 (UNCONDITIONAL_CALL)
// 0060d681: ADD ESP,0x4
// 0060d684: TEST EAX,EAX
// 0060d686: JNZ 0x0060d68e
//   XREF to: 0060d68e (CONDITIONAL_JUMP)
// 0060d688: MOV EAX,0xffffffff
// 0060d68d: RET
// 0060d68e: PUSH 0x1
//   Label: LAB_0060d68e
// 0060d690: LEA EDX,[EAX + 0x204]
// 0060d696: PUSH EDX
// 0060d697: PUSH EAX
// 0060d698: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060d69c: PUSH EDX
// 0060d69d: CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)
// 0060d6a2: ADD ESP,0x10
// 0060d6a5: XOR EAX,EAX
// 0060d6a7: RET
