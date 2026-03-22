// Name: crt_process.c_execv_FUN_006101f0
// Address: 006101f0
// Address Range: [[006101f0, 0061022c]]
// Convention: __cdecl
// Signature: int __cdecl crt_process_c_execv_FUN_006101f0(int argc,char *program,char **argv)

#include "nocturne.h"

int __cdecl execv(int argc,char *program,char **argv)

{
  UINT uExitCode;
  ThreadData *pTVar1;
  int iVar2;
  
  uExitCode = func_0x0060f39c(1,argc,program,argv);
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  if (pTVar1->errno_value != 0) {
    return -1;
  }
  (*PTR_crt_exit_c_ExitHookStub_FUN_0060b530_00685478)();
  iVar2 = (*g_ExitProcessFunc)(uExitCode);
  return iVar2;
}
