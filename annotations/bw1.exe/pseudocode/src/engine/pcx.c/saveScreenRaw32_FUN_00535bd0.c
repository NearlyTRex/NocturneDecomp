// Name: engine_pcx.c_saveScreenRaw32_FUN_00535bd0
// Address: 00535bd0
// Address Range: [[00535bd0, 00535d77]]
// Convention: __cdecl
// Signature: void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00535bd0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00535bd0(char *filename)

{
  char cVar1;
  _FILE *file;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char local_6c [80];
  uint local_1c;
  int local_18;
  int local_14;
  
  pcVar6 = local_6c;
  do {
    cVar1 = *filename;
    *pcVar6 = cVar1;
    pcVar4 = local_6c;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
    pcVar4 = local_6c;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar4;
    if (*pcVar4 == '.') goto LAB_00535c13;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_00535c13;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00535c13:
  if (pcVar6 == (char *)0x0) {
    _DAT_01d1d400 = "..\\engine\\pcx.c";
    _DAT_01d1d404 = 0x98;
    core_main_c_FUN_005030e0("saveScreenRaw32 - No ext found");
  }
  pcVar4 = ".RAW";
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  file = _fopen(local_6c,"wb");
  if (file == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\engine\\pcx.c";
    _DAT_01d1d404 = 0x9e;
    core_main_c_FUN_005030e0("saveScreenRaw32 - Unable to open output");
  }
  local_14 = 0;
  if (0 < DAT_0061b49c) {
    local_18 = 0;
    do {
      iVar5 = 0;
      puVar2 = *(uint **)(&DAT_01c4354c + local_18);
      if (0 < DAT_0061b498) {
        do {
          uVar3 = (*puVar2 >> (DAT_01c4e9e0 & 0x1f)) * _DAT_01c4e9e4;
          local_1c = (*puVar2 >> (DAT_01c4e9ec & 0x1f)) * _DAT_01c4e9f0 & 0xff;
          _fputc(_DAT_01c4e9d8 * (*puVar2 >> (DAT_01c4e9d4 & 0x1f)) & 0xff,file);
          _fputc(uVar3 & 0xff,file);
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + 1;
          _fputc(local_1c,file);
        } while (iVar5 < DAT_0061b498);
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < DAT_0061b49c);
  }
  _fclose(file);
  return;
}
