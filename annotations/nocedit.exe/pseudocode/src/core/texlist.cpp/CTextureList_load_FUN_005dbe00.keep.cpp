// Name: core_texlist.cpp_CTextureList_load_FUN_005dbe00
// Address: 005dbe00
// MANUAL RECONSTRUCTION
// Address Range: [[005dbe00, 005dc0c6]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_load_FUN_005dbe00(CTextureList *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_load_FUN_005dbe00(CTextureList *this_ptr,char *filename)

{
  char cVar2;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar3;
  char *pcVar6;
  char *pcVar4;
  int iVar5;
  char *pcVar7;
  byte bVar8;
  char local_12c [256];
  int local_28;
  CTextureList *local_24;
  char *local_20;
  int local_1c;
  CTextureList *local_18;
  char cVar1;
  
  bVar8 = 0;
  pcVar7 = local_12c;
  do {
    cVar1 = *filename;
    *pcVar7 = cVar1;
    pcVar4 = local_12c;
    if (cVar1 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
    pcVar4 = local_12c;
  } while (cVar2 != '\0');
  do {
    pcVar3 = pcVar4;
    if (*pcVar4 == '.') goto LAB_005dbe50;
    if (*pcVar4 == '\0') break;
    pcVar3 = pcVar4 + 1;
    if (*pcVar3 == '.') goto LAB_005dbe50;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_005dbe50:
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0x61;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - No extension found");
  }
  pcVar6 = ".tex";
  do {
    cVar2 = *pcVar6;
    *pcVar3 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar3[1] = cVar2;
    pcVar3 = pcVar3 + 2;
  } while (cVar2 != '\0');
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",local_12c,"rt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0x6a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - Bad filename!");
  }
  _fscanf(file,"%d\n",&this_ptr->texture_count);
  local_1c = 0;
  if (this_ptr->texture_count < 1) {
LAB_005dc05c:
    iVar5 = this_ptr->texture_count;
    if (iVar5 < 1000) {
      pcVar4 = this_ptr->texture_entries[0].texture_name + iVar5 * 4 + -0xc;
      do {
        iVar5 = iVar5 + 1;
        *(uint *)(pcVar4 + 0x5dc4) = 0;
        pcVar4 = pcVar4 + 4;
      } while (iVar5 < 1000);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\texlist.cpp",0x96);
    return;
  }
  local_18 = this_ptr;
  local_28 = 0;
  local_20 = this_ptr->texture_entries[0].texture_name;
  local_24 = this_ptr;
LAB_005dbf13:
  _fscanf(file,"%s\n",local_12c);
  pcVar4 = local_12c;
  do {
    pcVar3 = pcVar4;
    if (*pcVar4 == ',') goto LAB_005dbf47;
    if (*pcVar4 == '\0') break;
    pcVar3 = pcVar4 + 1;
    if (*pcVar3 == ',') goto LAB_005dbf47;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_005dbf47:
  pcVar4 = local_20;
  if (pcVar3 == (char *)0x0) {
    local_18->texture_values[0] = 0;
    pcVar3 = local_12c;
  }
  else {
    *pcVar3 = '\0';
    iVar2 = atoi(pcVar3 + 1);
    local_18->texture_values[0] = iVar2;
    pcVar3 = local_12c;
  }
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar4[1] = cVar2;
    pcVar3 = pcVar3 + 2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  uVar5 = 0;
  local_24->texture_entries[0].base.count = 0;
  do {
    uVar4 = 0xffffffff;
    pcVar4 = this_ptr->texture_entries[0].texture_name + local_28;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar4 - 1 <= uVar5) break;
    iVar5 = uVar5 + local_28;
    uVar5 = uVar5 + 1;
    iVar3 = toupper
                      ((uint)(byte)this_ptr->texture_entries[0].texture_name[iVar5]);
    this_ptr->texture_entries[0].texture_name[uVar5 + local_28 + -1] = (char)iVar3;
  } while( true );
  local_18 = (CTextureList *)local_18->texture_entries;
  local_28 = local_28 + 0x18;
  local_24 = (CTextureList *)(local_24->texture_entries[0].texture_name + 0xc);
  local_20 = local_20 + 0x18;
  local_1c = local_1c + 1;
  if (this_ptr->texture_count <= local_1c) goto LAB_005dc05c;
  goto LAB_005dbf13;
}
