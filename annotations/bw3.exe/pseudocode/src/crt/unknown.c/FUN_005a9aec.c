// Name: crt_unknown.c_FUN_005a9aec
// Address: 005a9aec
// Address Range: [[005a9aec, 005a9bb9]]
// Convention: unknown
// Signature: undefined1 * crt_unknown_c_FUN_005a9aec(void)

#include "nocturne.h"

byte * FUN_005a9aec(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte **ppuVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (DAT_00607a08 == '\0') {
    for (ppuVar4 = &PTR_DAT_006079f4; **ppuVar4 != '\0'; ppuVar4 = ppuVar4 + 1) {
      pcVar2 = getenv(*ppuVar4);
      if (pcVar2 != (char *)0x0) {
        uVar3 = 0xffffffff;
        pcVar5 = pcVar2;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        if (~uVar3 - 1 < 0x104) {
          _fullpath(&DAT_00607a08,pcVar2,0x103);
          break;
        }
      }
    }
    if (DAT_00607a08 == '\0') {
      pcVar2 = FUN_005acb10((char *)0x0,0);
      pcVar5 = &DAT_00607a08;
      do {
        cVar1 = *pcVar2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    uVar3 = 0xffffffff;
    pcVar2 = &DAT_00607a08;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    if ((*(char *)(uVar3 + 0x607a06) != '\\') && (*(char *)(uVar3 + 0x607a06) != '/')) {
      (&DAT_00607a07)[uVar3] = 0x5c;
      (&DAT_00607a08)[uVar3] = 0;
    }
  }
  return &DAT_00607a08;
}
