// Name: crt_unknown.c_FUN_005acda0
// Address: 005acda0
// Address Range: [[005acda0, 005acddc]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005acda0(char *param_1)

#include "nocturne.h"

void FUN_005acda0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  DWORD nNumberOfBytesToWrite;
  DWORD local_8;
  
  nNumberOfBytesToWrite = 0;
  pcVar2 = param_1;
  while (cVar1 = *pcVar2, pcVar2 = pcVar2 + 1, cVar1 != '\0') {
    nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
  }
  WriteFile(*(HANDLE *)(DAT_00607bdc + 8),param_1,nNumberOfBytesToWrite,&local_8,(LPOVERLAPPED)0x0);
  FUN_005a8210();
  return;
}
