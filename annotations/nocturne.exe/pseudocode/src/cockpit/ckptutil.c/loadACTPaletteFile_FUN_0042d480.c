// Name: cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480
// Address: 0042d480
// Address Range: [[0042d480, 0042d5b5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_0042d480(char *base_filename,uchar *output_buffer)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_0042d480(char *base_filename,uchar *output_buffer)

{
  char cVar1;
  _FILE *file;
  SIZE_T SVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uchar *puVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_ac [80];
  char acStack_5c [80];
  
  bVar8 = 0;
  pcVar7 = acStack_ac;
  pcVar5 = acStack_ac;
  do {
    cVar1 = *base_filename;
    *pcVar7 = cVar1;
    pcVar4 = acStack_ac;
    if (cVar1 == '\0') break;
    cVar1 = base_filename[1];
    base_filename = base_filename + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar4 = acStack_ac;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar4;
    if (*pcVar4 == '.') goto LAB_0042d4cf;
    if (*pcVar4 == '\0') break;
    pcVar7 = pcVar4 + 1;
    if (*pcVar7 == '.') goto LAB_0042d4cf;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_0042d4cf:
  if (pcVar7 == (char *)0x0) {
    do {
      pcVar7 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_0042d4f3;
      if (*pcVar5 == '\0') break;
      pcVar7 = pcVar5 + 1;
      if (*pcVar7 == '\0') goto LAB_0042d4f3;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_0042d4f3:
  pcVar5 = ".ACT";
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  file = engine_dosio_cpp_getFile_FUN_00456a60("art",acStack_ac,"rb");
  if (file == (_FILE *)0x0) {
    puVar6 = (uchar *)0x1c00948;
    for (iVar3 = 0xc0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)output_buffer = *(uint *)puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -8 + 4;
      output_buffer = output_buffer + (uint)bVar8 * -8 + 4;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *output_buffer = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      output_buffer = output_buffer + (uint)bVar8 * -2 + 1;
    }
    return;
  }
  SVar2 = _fread(output_buffer,0x100,3,file);
  if (SVar2 != 3) {
    _sprintf(acStack_5c,"Error reading %s.");
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    g_INT_01cc4804 = 0x135;
    core_main_c_FUN_004c8440(acStack_5c);
  }
  _fclose(file);
  return;
}
