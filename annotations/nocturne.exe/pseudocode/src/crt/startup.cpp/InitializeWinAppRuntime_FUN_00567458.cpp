// Name: crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458
// Address: 00567458
// Address Range: [[00567458, 005674ae]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_startup_cpp_InitializeWinAppRuntime_FUN_00567458(void *pParam)

#include "nocturne.h"

void __watcallRegister crt_startup_cpp_InitializeWinAppRuntime_FUN_00567458(void *pParam)

{
  HMODULE unused;
  ThreadData *pStackBound;
  uint in_stack_00000004;
  void *in_stack_00000008;
  uint *pHeapBound;
  
  unused = GetModuleHandleA((LPCSTR)0x0);
  initialize_runtime((HMODULE)0x0,in_stack_00000008,(int)unused);
  pHeapBound = (uint *)&DAT_005c1cec;
  pStackBound = (ThreadData *)(*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  __GetStackLimits(pStackBound,pHeapBound);
  installExceptionHandler(in_stack_00000004);
  ProcessInitTermHandlers(0x21);
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_00567208_005c1afc)();
  ProcessInitTermHandlers(0xff);
  return;
}
