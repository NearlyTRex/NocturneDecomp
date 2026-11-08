// Name: FUN_005c9f30
// Address: 005c9f30
// Address Range: [[005c9f30, 005c9f6c]]
// Convention: unknown
// Signature: void FUN_005c9f30(char *param_1)

#include "nocturne.h"

void FUN_005c9f30(char *param_1)

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
  WriteFile(*(HANDLE *)(DAT_00626838 + 8),param_1,nNumberOfBytesToWrite,&local_8,(LPOVERLAPPED)0x0);
  FUN_005c53a0();
  return;
}
