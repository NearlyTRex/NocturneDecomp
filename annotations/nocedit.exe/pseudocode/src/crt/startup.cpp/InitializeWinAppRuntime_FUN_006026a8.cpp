// Name: crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
// Address: 006026a8
// Address Range: [[006026a8, 006026fe]]
// Convention: __watcallRegister
// Signature: void crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(void *pParam)

#include "nocturne.h"

/* Signature: byte unk_GetModuleHandleA1() */

void crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(void *pParam)

{
  ThreadData *pStackBound;
  ExceptionFrame *pExceptionFrame;
  HMODULE unaff_retaddr;
  void *in_stack_00000004;
  int in_stack_00000008;
  uint *pHeapBound;
  
  (*g_GetModuleHandleAFunc)((LPCSTR)0x0);
  crt_startup_c_initialize_runtime_FUN_0060245c(unaff_retaddr,in_stack_00000004,in_stack_00000008);
  pHeapBound = (uint *)&DAT_00684ff4;
  pStackBound = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  crt_memory_c_GetMemoryBounds_FUN_0060a6a0(pStackBound,pHeapBound);
  crt_exception_c_installExceptionHandler_FUN_0060aba8(pExceptionFrame);
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(0x21);
  (*PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f24)();
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(0xff);
  return;
}
