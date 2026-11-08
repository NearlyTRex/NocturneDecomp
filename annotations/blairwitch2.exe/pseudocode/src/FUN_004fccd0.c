// Name: FUN_004fccd0
// Address: 004fccd0
// Address Range: [[004fccd0, 004fccf7]]
// Convention: unknown
// Signature: void FUN_004fccd0(undefined4 param_1,char *param_2)

#include "nocturne.h"

void FUN_004fccd0(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d1c630;
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
