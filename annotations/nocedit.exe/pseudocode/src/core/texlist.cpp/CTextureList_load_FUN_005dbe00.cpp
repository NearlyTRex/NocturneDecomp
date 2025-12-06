// Name: core_texlist.cpp_CTextureList_load_FUN_005dbe00
// Address: 005dbe00
// Address Range: [[005dbe00, 005dc0c6]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_load_FUN_005dbe00(CTextureList * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_load_FUN_005dbe00(CTextureList *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char acStack_11c [248];
  FILE *local_24;
  FILE *local_20;
  FILE *local_1c;
  int local_18;
  CTextureList *local_14;
  int iVar10;
  CTextureList *pCVar11;
  
  bVar9 = 0;
  pcVar8 = &stack0xfffffed4;
  do {
    cVar1 = *filename;
    *pcVar8 = cVar1;
    pcVar6 = &stack0xfffffed4;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar6 = &stack0xfffffed4;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar6;
    if (*pcVar6 == '.') goto LAB_005dbe50;
    if (*pcVar6 == '\0') break;
    pcVar8 = pcVar6 + 1;
    if (*pcVar8 == '.') goto LAB_005dbe50;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dbe50:
  if (pcVar8 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0x61;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - No extension found");
  }
  pcVar6 = ".tex";
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_24 = engine_dosio_c_getFile_FUN_00481a50("data",&stack0xfffffed8,"rt");
  if (local_24 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0x6a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - Bad filename!");
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%d\n");
  iVar10 = 0;
  if (this_ptr->texture_count < 1) {
LAB_005dc05c:
    iVar10 = this_ptr->texture_count;
    if (iVar10 < 1000) {
      pcVar8 = this_ptr->texture_entries[0].texture_name + iVar10 * 4 + -0xc;
      do {
        iVar10 = iVar10 + 1;
        *(uint *)(pcVar8 + 0x5dc4) = 0;
        pcVar8 = pcVar8 + 4;
      } while (iVar10 < 1000);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\core\\texlist.cpp",0x96);
    return;
  }
  local_18 = 0;
  pcVar8 = this_ptr->texture_entries[0].texture_name;
  local_14 = this_ptr;
  pCVar11 = this_ptr;
LAB_005dbf13:
  crt_stdio_c_fscanf_FUN_005fe7c0(local_1c,"%s\n");
  pcVar6 = acStack_11c;
  do {
    pcVar7 = pcVar6;
    if (*pcVar6 == ',') goto LAB_005dbf47;
    if (*pcVar6 == '\0') break;
    pcVar7 = pcVar6 + 1;
    if (*pcVar7 == ',') goto LAB_005dbf47;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_005dbf47:
  if (pcVar7 == (char *)0x0) {
    pCVar11->texture_values[0] = 0;
  }
  else {
    *pcVar7 = '\0';
    iVar2 = crt_stdlib_c_atoi_FUN_005ffef0(pcVar7 + 1);
    this_ptr->texture_values[1] = iVar2;
  }
  iVar2 = local_18;
  pcVar7 = acStack_11c;
  pcVar6 = pcVar8;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  uVar5 = 0;
  local_14->texture_entries[0].base.count = 0;
  do {
    uVar4 = 0xffffffff;
    pcVar6 = this_ptr->texture_entries[0].texture_name + iVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 <= uVar5) break;
    iVar3 = uVar5 + iVar2;
    uVar5 = uVar5 + 1;
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0
                      ((uint)(byte)this_ptr->texture_entries[0].texture_name[iVar3]);
    this_ptr->texture_entries[0].texture_name[uVar5 + iVar2 + -1] = (char)iVar3;
  } while( true );
  pCVar11 = (CTextureList *)pCVar11->texture_entries;
  local_18 = local_18 + 0x18;
  local_14 = (CTextureList *)(local_14->texture_entries[0].texture_name + 0xc);
  pcVar8 = pcVar8 + 0x18;
  iVar10 = iVar10 + 1;
  if (this_ptr->texture_count <= iVar10) goto LAB_005dc05c;
  goto LAB_005dbf13;
}
