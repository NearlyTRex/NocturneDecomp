// Name: crt_startup.c_WriteErrorAndExit_FUN_0056dd80
// Address: 0056dd80
// Address Range: [[0056dd80, 0056ddbc]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_WriteErrorAndExit_FUN_0056dd80(char *error_message,int exit_code)

#include "nocturne.h"

void __cdecl WriteErrorAndExit(char *error_message,int exit_code)

{
  char cVar1;
  char *pcVar2;
  DWORD nNumberOfBytesToWrite;
  DWORD in_stack_fffffff8;
  
  nNumberOfBytesToWrite = 0;
  pcVar2 = error_message;
  while (cVar1 = *pcVar2, pcVar2 = pcVar2 + 1, cVar1 != '\0') {
    nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
  }
  WriteFile(*(HANDLE *)(DAT_005c1f54 + 8),error_message,nNumberOfBytesToWrite,
            (LPDWORD)&stack0xfffffff8,(LPOVERLAPPED)0x0);
  ExitProcess(in_stack_fffffff8);
  return;
}
