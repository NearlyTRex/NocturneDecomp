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
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_12c [256];
  FILE *local_2c;
  int local_28;
  CTextureList *local_24;
  char *local_20;
  int local_1c;
  CTextureList *local_18;
  SMRGLTextureBasic *local_14;
  
  bVar8 = 0;
  pcVar7 = local_12c;
  do {
    cVar1 = *filename;
    *pcVar7 = cVar1;
    pcVar6 = local_12c;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar6 = local_12c;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar6;
    if (*pcVar6 == '.') goto LAB_005dbe50;
    if (*pcVar6 == '\0') break;
    pcVar7 = pcVar6 + 1;
    if (*pcVar7 == '.') goto LAB_005dbe50;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_005dbe50:
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0x61;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - No extension found");
  }
  pcVar6 = ".tex";
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_2c = engine_dosio_c_getFile_FUN_00481a50("data",local_12c,"rt");
  if (local_2c == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0x6a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - Bad filename!");
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(local_2c,"%d\n",this_ptr);
  local_1c = 0;
  if (this_ptr->texture_count < 1) {
LAB_005dc05c:
    iVar2 = this_ptr->texture_count;
    if (iVar2 < 1000) {
      pcVar7 = this_ptr->texture_entries[0].texture_name + iVar2 * 4 + -0xc;
      do {
        iVar2 = iVar2 + 1;
        *(uint *)(pcVar7 + 0x5dc4) = 0;
        pcVar7 = pcVar7 + 4;
      } while (iVar2 < 1000);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_2c,"..\\core\\texlist.cpp",0x96);
    return;
  }
  local_14 = this_ptr->texture_entries;
  local_18 = this_ptr;
  local_28 = 0;
  local_20 = this_ptr->texture_entries[0].texture_name;
  local_24 = this_ptr;
LAB_005dbf13:
  crt_stdio_c_fscanf_FUN_005fe7c0(local_2c,"%s\n",local_12c);
  pcVar7 = local_12c;
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == ',') goto LAB_005dbf47;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == ',') goto LAB_005dbf47;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_005dbf47:
  if (pcVar6 == (char *)0x0) {
    local_18->texture_values[0] = 0;
    pcVar7 = local_12c;
    pcVar6 = local_20;
  }
  else {
    *pcVar6 = '\0';
    iVar2 = crt_stdlib_c_atoi_FUN_005ffef0(pcVar6 + 1);
    local_18->texture_values[0] = iVar2;
    pcVar7 = local_12c;
    pcVar6 = local_20;
  }
  do {
    iVar2 = local_28;
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar6[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  uVar5 = 0;
  local_24->texture_entries[0].base.count = 0;
  do {
    uVar4 = 0xffffffff;
    pcVar7 = local_14->texture_name + iVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 <= uVar5) break;
    iVar3 = uVar5 + iVar2;
    uVar5 = uVar5 + 1;
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0
                      ((uint)(byte)this_ptr->texture_entries[0].texture_name[iVar3]);
    this_ptr->texture_entries[0].texture_name[uVar5 + iVar2 + -1] = (char)iVar3;
  } while( true );
  local_18 = (CTextureList *)local_18->texture_entries;
  local_28 = local_28 + 0x18;
  local_24 = (CTextureList *)(local_24->texture_entries[0].texture_name + 0xc);
  local_20 = local_20 + 0x18;
  local_1c = local_1c + 1;
  if (this_ptr->texture_count <= local_1c) goto LAB_005dc05c;
  goto LAB_005dbf13;
}
