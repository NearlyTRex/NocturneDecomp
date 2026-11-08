// Name: FUN_0051bc90
// Address: 0051bc90
// Address Range: [[0051bc90, 0051bcb7]]
// Convention: unknown
// Signature: void FUN_0051bc90(undefined4 param_1,char *param_2)

#include "nocturne.h"

void FUN_0051bc90(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d33b20;
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
