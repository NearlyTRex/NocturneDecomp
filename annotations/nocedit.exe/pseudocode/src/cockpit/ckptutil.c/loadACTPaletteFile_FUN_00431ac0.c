// Name: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
// Address: 00431ac0
// Address Range: [[00431ac0, 00431bff]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0(char * base_filename, char * output_buffer)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(char *base_filename,char *output_buffer)

{
  char cVar1;
  FILE *file;
  SIZE_T SVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  uchar *puVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_54 [4];
  char acStack_50 [68];
  
  bVar8 = 0;
  pcVar7 = &stack0xffffff54;
  pcVar5 = &stack0xffffff54;
  do {
    cVar1 = *base_filename;
    *pcVar7 = cVar1;
    pcVar4 = &stack0xffffff54;
    if (cVar1 == '\0') break;
    cVar1 = base_filename[1];
    base_filename = base_filename + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar4 = &stack0xffffff54;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar4;
    if (*pcVar4 == '.') goto LAB_00431b0f;
    if (*pcVar4 == '\0') break;
    pcVar7 = pcVar4 + 1;
    if (*pcVar7 == '.') goto LAB_00431b0f;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00431b0f:
  if (pcVar7 == (char *)0x0) {
    do {
      pcVar7 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_00431b33;
      if (*pcVar5 == '\0') break;
      pcVar7 = pcVar5 + 1;
      if (*pcVar7 == '\0') goto LAB_00431b33;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_00431b33:
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
  file = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff54,"rb");
  if (file == (FILE *)0x0) {
    puVar6 = g_DefaultPalette;
    for (iVar3 = 0xc0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)output_buffer = *(uint *)puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -8 + 4;
      output_buffer = (char *)((uchar *)output_buffer + (uint)bVar8 * -8 + 4);
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *output_buffer = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      output_buffer = (char *)((uchar *)output_buffer + (uint)bVar8 * -2 + 1);
    }
    return;
  }
  SVar2 = crt_stdio_c_fread_FUN_005fd990(output_buffer,0x100,3,file);
  if (SVar2 != 3) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_54,"Error reading %s.");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x13d;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_50);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x140);
  return;
}
