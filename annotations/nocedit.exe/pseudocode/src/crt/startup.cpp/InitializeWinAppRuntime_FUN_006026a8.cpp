// Name: crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
// Address: 006026a8
// Address Range: [[006026a8, 006026fe]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(void *pParam)

#include "nocturne.h"

void __watcallRegister crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(void *pParam)

{
  HMODULE unused;
  ThreadData *pStackBound;
  ExceptionFrame *pExceptionFrame;
  void *in_stack_00000008;
  uint *pHeapBound;
  
  unused = (*g_GetModuleHandleAFunc)((LPCSTR)0x0);
  initialize_runtime((HMODULE)0x0,in_stack_00000008,(int)unused);
  pHeapBound = (uint *)&DAT_00684ff4;
  pStackBound = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  __GetStackLimits(pStackBound,pHeapBound);
  installExceptionHandler(pExceptionFrame);
  ProcessInitTermHandlers(0x21);
  (*PTR_crt_sync_c_CriticalSectionStub_FUN_00602458_00684f24)();
  ProcessInitTermHandlers(0xff);
  return;
}
