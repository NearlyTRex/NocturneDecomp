// Name: FUN_005750e0
// Address: 005750e0
// Address Range: [[005750e0, 00575135]]
// Convention: unknown
// Signature: undefined1 * FUN_005750e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005750e0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  _DAT_026534f4 = 0xd;
  _DAT_026534f8 = _DAT_02652eac;
  pcVar3 = &DAT_026534fc;
  pcVar2 = (char *)(_DAT_02652eb0 + _DAT_02652eac * 0x60 + 8);
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return &DAT_026534f4;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return &DAT_026534f4;
}
