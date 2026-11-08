// Name: FUN_005c1be0
// Address: 005c1be0
// Address Range: [[005c1be0, 005c1c1c]]
// Convention: unknown
// Signature: void FUN_005c1be0(char *param_1)

#include "nocturne.h"

void FUN_005c1be0(char *param_1)

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
  WriteFile(*(HANDLE *)(DAT_0061f4d8 + 8),param_1,nNumberOfBytesToWrite,&local_8,(LPOVERLAPPED)0x0);
  FUN_005bd0d0();
  return;
}
