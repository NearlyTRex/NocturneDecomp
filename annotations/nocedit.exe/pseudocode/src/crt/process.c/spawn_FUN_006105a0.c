// Name: crt_process.c_spawn_FUN_006105a0
// Address: 006105a0
// Address Range: [[006105a0, 00610752]]
// Convention: __cdecl
// Signature: int crt_process.c_spawn_FUN_006105a0(int mode, char * cmdline, char * envblock, void * reserved)

#include "nocturne.h"

int __cdecl crt_process_c_spawn_FUN_006105a0(int mode,char *cmdline,char *envblock,void *reserved)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  char **in_stack_00000014;
  HANDLE hSourceHandle;
  HANDLE *lpTargetHandle;
  DWORD dwOptions;
  _STARTUPINFOA local_6c;
  _PROCESS_INFORMATION local_28;
  HANDLE pvStack_18;
  HANDLE pvStack_14;
  
  crt_process_c_build_command_line_FUN_006103a4(cmdline,in_stack_00000014,envblock,0);
  crt_memory_c_memset_FUN_005fde40(&local_6c,0,0x44);
  local_6c.wShowWindow = 1;
  BVar1 = (*g_CreateProcessAFunc)
                    ((LPCSTR)0x0,envblock,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,1,0,
                     reserved,(LPCSTR)0x0,&local_6c,&local_28);
  if (BVar1 == 0) {
    DVar2 = (*g_GetLastErrorFunc)();
    if (((DVar2 == 5) || (DVar2 == 0xc1)) || (DVar2 == 0xa1)) {
      DVar2 = 2;
    }
    pvStack_18 = (HANDLE)crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DVar2);
  }
  else {
    if (mode == 0) {
      if ((g_WindowsPlatformVersion < 0x8000) || (3 < g_WindowsMinorVersion)) {
        DVar2 = (*g_WaitForSingleObjectFunc)(local_28.hProcess,0xffffffff);
        if (DVar2 == 0) {
          (*g_GetExitCodeProcessFunc)(local_28.hProcess,(LPDWORD)&pvStack_18);
        }
        else {
          pvStack_18 = (HANDLE)crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        }
      }
      else {
        (*g_SleepFunc)(1000);
        pvStack_18 = (HANDLE)0x103;
        do {
          (*g_SleepFunc)(100);
          BVar1 = (*g_GetExitCodeProcessFunc)(local_28.hProcess,(LPDWORD)&pvStack_18);
          if (BVar1 == 0) {
            DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
            return DVar2;
          }
        } while (pvStack_18 == (HANDLE)0x103);
      }
      (*g_CloseHandleFunc)(local_28.hProcess);
    }
    else if (mode == 3) {
      (*g_CloseHandleFunc)(local_28.hProcess);
      pvStack_18 = (HANDLE)local_28.dwProcessId;
    }
    else {
      dwOptions = 2;
      BVar1 = 0;
      DVar2 = 0;
      lpTargetHandle = &pvStack_14;
      hTargetProcessHandle = (*g_GetCurrentProcessFunc)();
      hSourceHandle = local_28.hProcess;
      hSourceProcessHandle = (*g_GetCurrentProcessFunc)();
      BVar1 = (*g_DuplicateHandleFunc)
                        (hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                         DVar2,BVar1,dwOptions);
      pvStack_18 = pvStack_14;
      if (BVar1 == 0) {
        pvStack_14 = local_28.hProcess;
        pvStack_18 = pvStack_14;
      }
    }
    (*g_CloseHandleFunc)(local_28.hThread);
  }
  return (int)pvStack_18;
}
