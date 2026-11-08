// Name: FUN_004d0940
// Address: 004d0940
// Address Range: [[004d0940, 004d0998]]
// Convention: unknown
// Signature: int FUN_004d0940(undefined4 param_1)

#include "nocturne.h"

int FUN_004d0940(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = &DAT_005da037;
  iVar2 = FUN_00408790(param_1);
  *(byte **)(iVar2 + 0x2b0) = &DAT_005f83f4;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x2b8);
  *(uint *)(iVar2 + 0x2b4) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
