// Name: FUN_005be9ac
// Address: 005be9ac
// Address Range: [[005be9ac, 005bea79]]
// Convention: unknown
// Signature: undefined1 * FUN_005be9ac(void)

#include "nocturne.h"

byte * FUN_005be9ac(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte **ppuVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (DAT_0061f30c == '\0') {
    for (ppuVar4 = &PTR_DAT_0061f2f8; **ppuVar4 != '\0'; ppuVar4 = ppuVar4 + 1) {
      pcVar2 = (char *)FUN_005bac90(*ppuVar4);
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
          FUN_005ba120(&DAT_0061f30c,pcVar2,0x103);
          break;
        }
      }
    }
    if (DAT_0061f30c == '\0') {
      pcVar2 = (char *)FUN_005c0f10(0,0);
      pcVar5 = &DAT_0061f30c;
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
    pcVar2 = &DAT_0061f30c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    if ((*(char *)(uVar3 + 0x61f30a) != '\\') && (*(char *)(uVar3 + 0x61f30a) != '/')) {
      (&DAT_0061f30b)[uVar3] = 0x5c;
      (&DAT_0061f30c)[uVar3] = 0;
    }
  }
  return &DAT_0061f30c;
}
