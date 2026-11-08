// Name: FUN_004fc2c0
// Address: 004fc2c0
// Address Range: [[004fc2c0, 004fc30b]]
// Convention: unknown
// Signature: void FUN_004fc2c0(int *param_1)

#include "nocturne.h"

void FUN_004fc2c0(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  
  if (*param_1 != 0) {
    if ((char)param_1[0xc] == '\0') {
      pcVar2 = (char *)FUN_004fc070(param_1);
      piVar3 = param_1 + 0xc;
      do {
        cVar1 = *pcVar2;
        *(char *)piVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        *(char *)((int)piVar3 + 1) = cVar1;
        piVar3 = (int *)((int)piVar3 + 2);
      } while (cVar1 != '\0');
      *param_1 = 0;
      return;
    }
    *param_1 = 0;
  }
  return;
}
