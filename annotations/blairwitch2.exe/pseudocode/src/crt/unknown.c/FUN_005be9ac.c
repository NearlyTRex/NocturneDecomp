// Name: crt_unknown.c_FUN_005be9ac
// Address: 005be9ac
// Address Range: [[005be9ac, 005bea79]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_005be9ac(void)

#include "nocturne.h"

char * FUN_005be9ac(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  byte **ppuVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (g_TempDirectoryBuffer[0] == '\0') {
    for (ppuVar4 = &PTR_g_EmptyStringBuffer_4_0061f2f8; **ppuVar4 != '\0'; ppuVar4 = ppuVar4 + 1) {
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
          _fullpath(g_TempDirectoryBuffer,pcVar2,0x103);
          break;
        }
      }
    }
    if (g_TempDirectoryBuffer[0] == '\0') {
      pcVar2 = FUN_005c0f10((char *)0x0,0);
      pcVar5 = g_TempDirectoryBuffer;
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
    pcVar2 = g_TempDirectoryBuffer;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    if ((*(char *)(uVar3 + 0x61f30a) != '\\') && (*(char *)(uVar3 + 0x61f30a) != '/')) {
      (&DAT_0061f30b)[uVar3] = 0x5c;
      g_TempDirectoryBuffer[uVar3] = '\0';
    }
  }
  return g_TempDirectoryBuffer;
}
