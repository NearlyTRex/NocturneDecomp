// Name: FUN_0045d950
// Address: 0045d950
// Address Range: [[0045d950, 0045d990]]
// Convention: unknown
// Signature: undefined4 * FUN_0045d950(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_0045d950(uint *param_1)

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
