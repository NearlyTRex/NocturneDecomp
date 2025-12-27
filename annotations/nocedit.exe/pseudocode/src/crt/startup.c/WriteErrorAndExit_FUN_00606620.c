// Name: crt_startup.c_WriteErrorAndExit_FUN_00606620
// Address: 00606620
// Address Range: [[00606620, 0060665c]]
// Convention: __cdecl
// Signature: void crt_startup.c_WriteErrorAndExit_FUN_00606620(char * error_message, int exit_code)

#include "nocturne.h"

void __cdecl crt_startup_c_WriteErrorAndExit_FUN_00606620(char *error_message,int exit_code)

{
  char cVar1;
  char *pcVar2;
  DWORD nNumberOfBytesToWrite;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  DWORD local_8;
  
  nNumberOfBytesToWrite = 0;
  pcVar2 = error_message;
  while (cVar1 = *pcVar2, pcVar2 = pcVar2 + 1, cVar1 != '\0') {
    nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
  }
  (*PTR_WriteFile_00611678)
            (g_IOControlBlock->standard_handles[2],error_message,nNumberOfBytesToWrite,&local_8,
             (LPOVERLAPPED)0x0);
                    /* WARNING: Subroutine does not return */
  crt_exit_c_ExitProcess_FUN_00602700(in_stack_00000010);
}
