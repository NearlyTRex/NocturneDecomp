// Name: crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790
// Address: 0060d790
// Address Range: [[0060d790, 0060d79d]]
// Convention: __watcallStack
// Signature: void * crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790(uint size)
// Cross-references:
//   crt_iostream.cpp_doallocate_FUN_0060d677 (0060d677) at 0060d67c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0

#include "nocturne.h"

void * __watcallStack crt_iostream_cpp_streambuf_allocBuffer_FUN_0060d790(uint size)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_malloc_FUN_00601bb0(size);
  return pvVar1;
}


// Assembly code:
// 0060d790: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790
//   XREF to: Stack[0x4] (READ)
// 0060d794: PUSH EDX
// 0060d795: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060d79a: ADD ESP,0x4
// 0060d79d: RET
