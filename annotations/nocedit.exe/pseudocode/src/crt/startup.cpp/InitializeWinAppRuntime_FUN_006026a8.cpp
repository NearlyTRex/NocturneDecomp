// Name: crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
// Address: 006026a8
// Address Range: [[006026a8, 006026fe]]
// Convention: __watcallRegister
// Signature: void crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8(void * pParam)
// Cross-references:
//   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 (00609e70) at 00609eb1 [UNCONDITIONAL_CALL]
// Globals:
//   GetModuleHandleA* GetModuleHandleA = 00211f6e
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24 = 00602458
//   undefined4 DAT_00684ff4
// Function calls:
//   crt_exception.c_installExceptionHandler_FUN_0060aba8
//   crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
//   crt_memory.c_GetMemoryBounds_FUN_0060a6a0
//   crt_startup.c_initialize_runtime_FUN_0060245c
//   crt_sync.c_CriticalSectionStub_FUN_00602458
//   crt_thread.c_GetTLS_FUN_0060242c
//   GetModuleHandleA

#include "nocturne.h"

/* Signature: undefined1 unk_GetModuleHandleA1() */

void crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(void *pParam)

{
  ThreadData *pStackBound;
  ExceptionFrame *pExceptionFrame;
  HMODULE unaff_retaddr;
  void *in_stack_00000004;
  int in_stack_00000008;
  uint *pHeapBound;
  
  (*GetModuleHandleA)((LPCSTR)0x0);
  crt_startup_c_initialize_runtime_FUN_0060245c(unaff_retaddr,in_stack_00000004,in_stack_00000008);
  pHeapBound = (uint *)&DAT_00684ff4;
  pStackBound = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  crt_memory_c_GetMemoryBounds_FUN_0060a6a0(pStackBound,pHeapBound);
  crt_exception_c_installExceptionHandler_FUN_0060aba8(pExceptionFrame);
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(0x21);
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f24)();
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(0xff);
  return;
}


// Assembly code:
// 006026a8: PUSH EBX
//   Label: crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
// 006026a9: PUSH 0x0
// 006026ab: CALL dword ptr CS:[0x6115b4]
//   XREF to: EXTERNAL:00000078 (COMPUTED_CALL)
//   XREF to: 006115b4 (READ)
// 006026b2: PUSH EAX
// 006026b3: MOV EDX,dword ptr [ESP + 0x10]
// 006026b7: PUSH EDX
// 006026b8: PUSH 0x0
// 006026ba: CALL crt_startup.c_initialize_runtime_FUN_0060245c
//   XREF to: 0060245c (UNCONDITIONAL_CALL)
// 006026bf: ADD ESP,0xc
// 006026c2: PUSH 0x684ff4
//   XREF to: 00684ff4 (DATA)
// 006026c7: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 006026cd: PUSH EAX
// 006026ce: CALL crt_memory.c_GetMemoryBounds_FUN_0060a6a0
//   XREF to: 0060a6a0 (UNCONDITIONAL_CALL)
// 006026d3: ADD ESP,0x8
// 006026d6: MOV EBX,dword ptr [ESP + 0x8]
// 006026da: PUSH EBX
// 006026db: CALL crt_exception.c_installExceptionHandler_FUN_0060aba8
//   XREF to: 0060aba8 (UNCONDITIONAL_CALL)
// 006026e0: ADD ESP,0x4
// 006026e3: MOV EAX,0x21
// 006026e8: CALL crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
//   XREF to: 0060ac30 (UNCONDITIONAL_CALL)
// 006026ed: CALL dword ptr [PTR_crt_sync.c_CriticalSectionStub_FUN_00602458_00684f24]
//   XREF to: 00602458 (COMPUTED_CALL)
//   XREF to: 00684f24 (READ)
// 006026f3: MOV EAX,0xff
// 006026f8: CALL crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
//   XREF to: 0060ac30 (UNCONDITIONAL_CALL)
// 006026fd: POP EBX
// 006026fe: RET
