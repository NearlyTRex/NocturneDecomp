// Name: FUN_004d8ae0
// Address: 004d8ae0
// Address Range: [[004d8ae0, 004d8b1a]]
// Convention: unknown
// Signature: void FUN_004d8ae0(int param_1,char *param_2)

#include "nocturne.h"

void FUN_004d8ae0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == (char *)0x0) {
    *(byte *)(param_1 + 0x100) = 0;
    return;
  }
  pcVar2 = (char *)(param_1 + 0x100);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
