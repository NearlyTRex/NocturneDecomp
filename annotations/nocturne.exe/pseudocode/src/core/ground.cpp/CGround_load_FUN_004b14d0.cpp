// Name: core_ground.cpp_CGround_load_FUN_004b14d0
// Address: 004b14d0
// Address Range: [[004b14d0, 004b17f0]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_load_FUN_004b14d0(CGround *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_load_FUN_004b14d0(CGround *this_ptr,char *filename)

{
  char cVar1;
  byte *pbVar2;
  _FILE *file;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
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
  
  pcVar7 = local_cc;
  pcVar6 = local_cc;
  pcVar5 = filename;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_24 = "data";
  local_20 = "rb";
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_004b153d;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_004b153d;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004b153d:
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 64;
    core_main_c_displayErrorAndQuit_FUN_004c8440("eopen - ext not found!");
  }
  pcVar7 = local_20;
  pcVar5 = pcVar5 + 1;
  pcVar6 = "raw";
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  file = engine_dosio_cpp_getFile_FUN_00456a60(local_24,local_cc,pcVar7);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 68;
    core_main_c_displayErrorAndQuit_FUN_004c8440("eopen - Cannot open file");
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
  pcVar5 = local_7c;
  _fclose(file);
  local_28 = "data";
  local_2c = "rb";
  pcVar7 = filename;
  do {
    cVar1 = *pcVar7;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = local_7c;
  do {
    pcVar7 = pcVar5;
    if (*pcVar5 == '.') goto LAB_004b1687;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_004b1687;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_004b1687:
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 64;
    core_main_c_displayErrorAndQuit_FUN_004c8440("eopen - ext not found!");
  }
  pcVar7 = pcVar7 + 1;
  pcVar5 = "clr";
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_1c = engine_dosio_cpp_getFile_FUN_00456a60(local_28,local_7c,local_2c);
  if (local_1c == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 68;
    core_main_c_displayErrorAndQuit_FUN_004c8440("eopen - Cannot open file");
  }
  local_14 = 0;
  if (0 < this_ptr->height) {
    do {
      iVar8 = 0;
      if (0 < this_ptr->width) {
        do {
          iVar4 = local_14 * this_ptr->width + iVar8;
          iVar8 = iVar8 + 1;
          _fread(&this_ptr->terrain_data[iVar4].color,1,2,local_1c);
        } while (iVar8 < this_ptr->width);
      }
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->height);
  }
  _fclose(local_1c);
  core_texlist_cpp_CTextureList_load_FUN_00544950(this_ptr->texture_list,filename);
  return;
}
