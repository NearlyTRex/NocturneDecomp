// Name: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
// Address: 00431ac0
// Address Range: [[00431ac0, 00431bff]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(char *base_filename,uchar *output_buffer)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(char *base_filename,uchar *output_buffer)

{
  char cVar2;
  _FILE *file;
  SIZE_T SVar2;
  int iVar3;
  int iVar4;
  char *pcVar4;
  char *pcVar6;
  char *pcVar5;
  char *pcVar8;
  uchar *puVar6;
  char *pcVar7;
  byte bVar8;
  char local_ac [80];
  char local_5c [80];
  char cVar1;
  
  bVar8 = 0;
  pcVar7 = local_ac;
  pcVar5 = local_ac;
  do {
    cVar1 = *base_filename;
    *pcVar7 = cVar1;
    pcVar4 = local_ac;
    if (cVar1 == '\0') break;
    cVar2 = base_filename[1];
    base_filename = base_filename + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
    pcVar4 = local_ac;
  } while (cVar2 != '\0');
  do {
    pcVar6 = pcVar4;
    if (*pcVar4 == '.') goto LAB_00431b0f;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_00431b0f;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00431b0f:
  if (pcVar6 == (char *)0x0) {
    do {
      pcVar6 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_00431b33;
      if (*pcVar5 == '\0') break;
      pcVar6 = pcVar5 + 1;
      if (*pcVar6 == '\0') goto LAB_00431b33;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
  }
LAB_00431b33:
  pcVar8 = ".ACT";
  do {
    cVar2 = *pcVar8;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  file = engine_dosio_c_getFile_FUN_00481a50("art",local_ac,"rb");
  if (file == (_FILE *)0x0) {
    puVar6 = g_DefaultPalette;
    for (iVar3 = 0xc0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)output_buffer = *(uint *)puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -8 + 4;
      output_buffer = output_buffer + (uint)bVar8 * -8 + 4;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      *output_buffer = *puVar6;
      puVar6 = puVar6;
      output_buffer = output_buffer + (uint)bVar8 * -2 + 1;
    }
    return;
  }
  SVar2 = _fread(output_buffer,0x100,3,file);
  if (SVar2 != 3) {
    _sprintf(local_5c,"Error reading %s.",local_ac);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x13d;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_5c);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x140);
  return;
}
