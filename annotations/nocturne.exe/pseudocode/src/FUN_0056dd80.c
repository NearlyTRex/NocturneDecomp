// Name: FUN_0056dd80
// Address: 0056dd80
// Address Range: [[0056dd80, 0056ddbc]]
// Convention: unknown
// Signature: void FUN_0056dd80(char *param_1)

#include "nocturne.h"

void FUN_0056dd80(char *param_1)

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
  WriteFile(*(HANDLE *)(DAT_005c1f54 + 8),param_1,nNumberOfBytesToWrite,&local_8,(LPOVERLAPPED)0x0);
  FUN_005674b0();
  return;
}
