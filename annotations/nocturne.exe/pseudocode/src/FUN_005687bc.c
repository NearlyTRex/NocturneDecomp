// Name: FUN_005687bc
// Address: 005687bc
// Address Range: [[005687bc, 00568889]]
// Convention: unknown
// Signature: undefined1 * FUN_005687bc(void)

#include "nocturne.h"

byte * FUN_005687bc(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte **ppuVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (DAT_005c1b24 == '\0') {
    for (ppuVar4 = &PTR_DAT_005c1b10; **ppuVar4 != '\0'; ppuVar4 = ppuVar4 + 1) {
      pcVar2 = (char *)FUN_00566e10(*ppuVar4);
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
          FUN_00565d00(&DAT_005c1b24,pcVar2,0x103);
          break;
        }
      }
    }
    if (DAT_005c1b24 == '\0') {
      pcVar2 = (char *)FUN_0056c5f0(0,0);
      pcVar5 = &DAT_005c1b24;
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
    pcVar2 = &DAT_005c1b24;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    if ((*(char *)(uVar3 + 0x5c1b22) != '\\') && (*(char *)(uVar3 + 0x5c1b22) != '/')) {
      (&DAT_005c1b23)[uVar3] = 0x5c;
      (&DAT_005c1b24)[uVar3] = 0;
    }
  }
  return &DAT_005c1b24;
}
