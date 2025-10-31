// Name: crt_thread.c_InitializeThreadContext_FUN_0060ccf0
// Address: 0060ccf0
// Address Range: [[0060ccf0, 0060cd19]]
// Convention: __cdecl
// Signature: void crt_thread.c_InitializeThreadContext_FUN_0060ccf0(ThreadData * pThreadData)
// Cross-references:
//   crt_startup.cpp_GetOrCreateThreadData_FUN_0060a23c (0060a23c) at 0060a26d [UNCONDITIONAL_CALL]
// Globals:
//   GetCurrentThreadId* PTR_GetCurrentThreadId_00611584 = 00211e84
// Function calls:
//   crt_memory.c_GetMemoryBounds_FUN_0060a6a0
//   GetCurrentThreadId

#include "nocturne.h"

void __cdecl crt_thread_c_InitializeThreadContext_FUN_0060ccf0(ThreadData *pThreadData)

{
  void *pvVar1;
  
  if (pThreadData != (ThreadData *)0x0) {
    pThreadData->random_seed = 1;
    crt_memory_c_GetMemoryBounds_FUN_0060a6a0(pThreadData,(uint *)0x0);
    pvVar1 = (void *)(*PTR_GetCurrentThreadId_00611584)();
    pThreadData->cleanup_data = pvVar1;
  }
  return;
}


// Assembly code:
// 0060ccf0: PUSH EBX
//   Label: crt_thread.c_InitializeThreadContext_FUN_0060ccf0
// 0060ccf1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060ccf5: TEST EBX,EBX
// 0060ccf7: JZ 0x0060cd18
//   XREF to: 0060cd18 (CONDITIONAL_JUMP)
// 0060ccf9: PUSH 0x0
// 0060ccfb: PUSH EBX
// 0060ccfc: MOV dword ptr [EBX + 0xc],0x1
// 0060cd03: CALL crt_memory.c_GetMemoryBounds_FUN_0060a6a0
//   XREF to: 0060a6a0 (UNCONDITIONAL_CALL)
// 0060cd08: ADD ESP,0x8
// 0060cd0b: CALL dword ptr CS:[0x611584]
//   XREF to: EXTERNAL:0000006c (COMPUTED_CALL)
//   XREF to: 00611584 (READ)
// 0060cd12: MOV dword ptr [EBX + 0xda],EAX
// 0060cd18: POP EBX
//   Label: LAB_0060cd18
// 0060cd19: RET
