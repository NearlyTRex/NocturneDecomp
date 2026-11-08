// Name: FUN_00486780
// Address: 00486780
// Address Range: [[00486780, 004867b3]]
// Convention: unknown
// Signature: int FUN_00486780(int param_1)

#include "nocturne.h"

int FUN_00486780(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "NITESKY.RAW";
  pcVar3 = (char *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return param_1;
}
