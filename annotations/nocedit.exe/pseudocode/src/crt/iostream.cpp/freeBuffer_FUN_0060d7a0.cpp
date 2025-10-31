// Name: crt_iostream.cpp_freeBuffer_FUN_0060d7a0
// Address: 0060d7a0
// Address Range: [[0060d7a0, 0060d7ad]]
// Convention: __watcallStack
// Signature: void crt_iostream.cpp_freeBuffer_FUN_0060d7a0(void * buffer)
// Cross-references:
//   crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0 (0060bdc0) at 0060bdd1 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_setBuffer_FUN_0060d6a8 (0060d6a8) at 0060d6e7 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_streambuf_destructor_FUN_0060d64f (0060d64f) at 0060d66b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_free_FUN_00601cd0

#include "nocturne.h"

void __watcallStack crt_iostream_cpp_freeBuffer_FUN_0060d7a0(void *buffer)

{
  crt_memory_c_free_FUN_00601cd0(buffer);
  return;
}


// Assembly code:
// 0060d7a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_freeBuffer_FUN_0060d7a0
//   XREF to: Stack[0x4] (READ)
// 0060d7a4: PUSH EDX
// 0060d7a5: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060d7aa: ADD ESP,0x4
// 0060d7ad: RET
