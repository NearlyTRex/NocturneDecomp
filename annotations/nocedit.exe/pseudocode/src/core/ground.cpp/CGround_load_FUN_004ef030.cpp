// Name: core_ground.cpp_CGround_load_FUN_004ef030
// Address: 004ef030
// Address Range: [[004ef030, 004ef370]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)

{
  char cVar2;
  _FILE *file;
  uint uVar3;
  _FILE *file_00;
  int iVar4;
  char *pcVar5;
  char *pcVar3;
  char *pcVar6;
  char *pcVar4;
  int iVar5;
  char *pcVar7;
  int iVar8;
  char local_cc [80];
  char local_7c [80];
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  _FILE *local_1c;
  int local_18;
  int local_14;
  byte *pbVar2;
  char cVar1;
  
  pcVar7 = local_cc;
  pcVar5 = filename;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    pcVar6 = local_cc;
    if (cVar1 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
    pcVar6 = local_cc;
  } while (cVar2 != '\0');
  do {
    pcVar3 = pcVar6;
    if (*pcVar6 == '.') goto LAB_004ef09d;
    if (*pcVar6 == '\0') break;
    pcVar3 = pcVar6 + 1;
    if (*pcVar3 == '.') goto LAB_004ef09d;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004ef09d:
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 64;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar3 = pcVar3 + 1;
  pcVar4 = "raw";
  do {
    cVar2 = *pcVar4;
    *pcVar3 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar2;
    pcVar3 = pcVar3 + 2;
  } while (cVar2 != '\0');
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",local_cc,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 68;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
  }
  local_18 = 0;
  if (0 < this_ptr->height) {
    do {
      iVar8 = 0;
      if (0 < this_ptr->width) {
        do {
          if ((file->_cnt < 1) || ((byte)*file->_ptr - 0xd < 0xfe)) {
            uVar3 = _fgetc(file);
          }
          else {
            file->_cnt = file->_cnt + -1;
            pbVar2 = (byte *)file->_ptr;
            file->_ptr = (char *)(pbVar2 + 1);
            uVar3 = (uint)*pbVar2;
          }
          this_ptr->terrain_data[local_18 * this_ptr->width + iVar8].height = (short)(uVar3 << 7);
          iVar8 = iVar8 + 1;
        } while (iVar8 < this_ptr->width);
      }
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->height);
  }
  pcVar3 = local_7c;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\ground.cpp",258);
  pcVar4 = filename;
  do {
    cVar2 = *pcVar4;
    *pcVar3 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar2;
    pcVar3 = pcVar3 + 2;
  } while (cVar2 != '\0');
  pcVar3 = local_7c;
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004ef1f1;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_004ef1f1;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004ef1f1:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 64;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar4 = pcVar4 + 1;
  pcVar3 = "clr";
  do {
    cVar2 = *pcVar3;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  file_00 = engine_dosio_cpp_getFile_FUN_00481a50("data",local_7c,"rb");
  if (file_00 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 68;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
  }
  local_14 = 0;
  if (0 < this_ptr->height) {
    do {
      iVar5 = 0;
      if (0 < this_ptr->width) {
        do {
          iVar4 = local_14 * this_ptr->width + iVar5;
          iVar5 = iVar5 + 1;
          _fread(&this_ptr->terrain_data[iVar4].color,1,2,file_00);
        } while (iVar5 < this_ptr->width);
      }
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->height);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_00,"..\\core\\ground.cpp",268);
  core_texlist_cpp_CTextureList_load_FUN_005dbe00(this_ptr->texture_list,filename);
  return;
}
