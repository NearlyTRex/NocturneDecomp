// Name: crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
// Address: 0060a23c
// Address Range: [[0060a23c, 0060a278]]
// Convention: __cdecl
// Signature: void * crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c(void * pThreadData)
// Cross-references:
//   crt_startup.c_initialize_runtime_FUN_0060245c (0060245c) at 0060246f [UNCONDITIONAL_CALL]
//   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8 (0060a2d8) at 0060a2ed [UNCONDITIONAL_CALL]
// Globals:
//   DWORD g_RuntimeBufferSize = 0xf4
// Function calls:
//   crt_memory.c_calloc_FUN_0060ca90
//   crt_thread.c_InitializeThreadContext_FUN_0060ccf0

#include "nocturne.h"

void * __cdecl crt_startup_cpp_GetOrCreateThreadData_FUN_0060a23c(void *pThreadData)

{
  DWORD DVar1;
  ThreadData *in_stack_00000004;
  
  if (in_stack_00000004 == (ThreadData *)0x0) {
    in_stack_00000004 = (ThreadData *)crt_memory_c_calloc_FUN_0060ca90(1,g_RuntimeBufferSize);
    DVar1 = g_RuntimeBufferSize;
    if (in_stack_00000004 != (ThreadData *)0x0) {
      in_stack_00000004->padding_0x52[0] = '\x01';
      *(DWORD *)(in_stack_00000004->unknown_E2 + 0xe) = DVar1;
    }
  }
  crt_thread_c_InitializeThreadContext_FUN_0060ccf0(in_stack_00000004);
  return in_stack_00000004;
}


// Assembly code:
// 0060a23c: PUSH EBX
//   Label: crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c
// 0060a23d: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060a241: TEST EBX,EBX
// 0060a243: JNZ 0x0060a26c
//   XREF to: 0060a26c (CONDITIONAL_JUMP)
// 0060a245: MOV EDX,dword ptr [0x006854f8]
//   XREF to: 006854f8 (READ)
// 0060a24b: PUSH EDX
// 0060a24c: PUSH 0x1
// 0060a24e: CALL crt_memory.c_calloc_FUN_0060ca90
//   XREF to: 0060ca90 (UNCONDITIONAL_CALL)
// 0060a253: ADD ESP,0x8
// 0060a256: MOV EBX,EAX
// 0060a258: TEST EAX,EAX
// 0060a25a: JZ 0x0060a26c
//   XREF to: 0060a26c (CONDITIONAL_JUMP)
// 0060a25c: MOV EDX,dword ptr [0x006854f8]
//   XREF to: 006854f8 (READ)
// 0060a262: MOV byte ptr [EAX + 0x52],0x1
// 0060a266: MOV dword ptr [EAX + 0xf0],EDX
// 0060a26c: PUSH EBX
//   Label: LAB_0060a26c
// 0060a26d: CALL crt_thread.c_InitializeThreadContext_FUN_0060ccf0
//   XREF to: 0060ccf0 (UNCONDITIONAL_CALL)
// 0060a272: ADD ESP,0x4
// 0060a275: MOV EAX,EBX
// 0060a277: POP EBX
// 0060a278: RET
