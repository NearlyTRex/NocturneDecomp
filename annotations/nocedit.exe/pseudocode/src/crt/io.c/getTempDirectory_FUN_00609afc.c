// Name: crt_io.c_getTempDirectory_FUN_00609afc
// Address: 00609afc
// Address Range: [[00609afc, 00609bc9]]
// Convention: __cdecl
// Signature: undefined crt_io.c_getTempDirectory_FUN_00609afc()

#include "nocturne.h"

char * __cdecl crt_io_c_getTempDirectory_FUN_00609afc(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char ***pppcVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (g_TempDirectoryBuffer[0] == '\0') {
    for (pppcVar4 = &g_TempEnvVarNames; *(char *)*pppcVar4 != '\0'; pppcVar4 = pppcVar4 + 1) {
      pcVar2 = crt_env_c_getenv_FUN_006013f0((char *)*pppcVar4);
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
          crt_io_c_realpath_FUN_00601140(g_TempDirectoryBuffer,pcVar2,0x103);
          break;
        }
      }
    }
    if (g_TempDirectoryBuffer[0] == '\0') {
      pcVar2 = crt_io_c_getcwd_FUN_00608d20((char *)0x0,0);
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
    if ((*(char *)(uVar3 + 0x6852da) != '\\') && (*(char *)(uVar3 + 0x6852da) != '/')) {
      (&DAT_006852db)[uVar3] = 0x5c;
      g_TempDirectoryBuffer[uVar3] = '\0';
    }
  }
  return g_TempDirectoryBuffer;
}
