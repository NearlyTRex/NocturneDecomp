// Name: FUN_0044beb0
// Address: 0044beb0
// Address Range: [[0044beb0, 0044bef0]]
// Convention: unknown
// Signature: undefined4 * FUN_0044beb0(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_0044beb0(uint *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  param_1[0x12] = 0;
  pcVar2 = "unnamed";
  *param_1 = 0x40;
  pcVar3 = (char *)(param_1 + 2);
  param_1[1] = 0x40;
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
