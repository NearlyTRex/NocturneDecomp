// Name: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490
// Address: 00437490
// Address Range: [[00437490, 004375f4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_00437490(char *base_filename,uchar *output_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_00437490(char *base_filename,uchar *output_buffer)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uchar *puVar5;
  char *pcVar6;
  byte bVar7;
  char acStack_d8 [80];
  char acStack_88 [80];
  CInStreamFile CStack_38;
  
  bVar7 = 0;
  support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(&CStack_38);
  pcVar6 = acStack_d8;
  pcVar4 = acStack_d8;
  do {
    cVar1 = *base_filename;
    *pcVar6 = cVar1;
    pcVar3 = acStack_d8;
    if (cVar1 == '\0') break;
    cVar1 = base_filename[1];
    base_filename = base_filename + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
    pcVar3 = acStack_d8;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004374ef;
    if (*pcVar3 == '\0') break;
    pcVar6 = pcVar3 + 1;
    if (*pcVar6 == '.') goto LAB_004374ef;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004374ef:
  if (pcVar6 == (char *)0x0) {
    do {
      pcVar6 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_00437513;
      if (*pcVar4 == '\0') break;
      pcVar6 = pcVar4 + 1;
      if (*pcVar6 == '\0') goto LAB_00437513;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
  }
LAB_00437513:
  pcVar4 = (char *)0x5d60be;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar2 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                    (&CStack_38,0x5d60c3,acStack_d8,1);
  if (iVar2 == 0) {
    puVar5 = (uchar *)0x1c4ecf8;
    for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)output_buffer = *(uint *)puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -8 + 4;
      output_buffer = output_buffer + (uint)bVar7 * -8 + 4;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *output_buffer = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      output_buffer = output_buffer + (uint)bVar7 * -2 + 1;
    }
  }
  else {
    iVar2 = support_trstream_cpp_CInStreamFile_read_FUN_005a0c10
                      (&CStack_38,(uint *)output_buffer,0x300);
    if (iVar2 != 0x300) {
      _sprintf(acStack_88,"Error reading %s.");
      _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
      _DAT_01d1d404 = 0x119;
      core_main_c_FUN_005030e0(acStack_88);
    }
    support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&CStack_38);
  }
  support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_38,0);
  return;
}
