// Name: core_ground.cpp_CGround_load_FUN_004ef030
// Address: 004ef030
// Address Range: [[004ef030, 004ef370]]
// Convention: __cdecl
// Signature: int __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)

{
  char cVar1;
  byte *pbVar2;
  FILE *file;
  uint uVar3;
  int iVar4;
  int extraout_EAX;
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
  FILE *local_1c;
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
    if (*pcVar6 == '.') goto LAB_004ef09d;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_004ef09d;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004ef09d:
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
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
  file = engine_dosio_c_getFile_FUN_00481a50(local_24,local_cc,pcVar7);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
  }
  local_18 = 0;
  if (0 < this_ptr->height) {
    do {
      iVar8 = 0;
      if (0 < this_ptr->width) {
        do {
          if ((file->_cnt < 1) || ((byte)*file->_ptr - 0xd < 0xfe)) {
            uVar3 = crt_stdio_c_fgetc_FUN_005fe840(file);
          }
          else {
            file->_cnt = file->_cnt + -1;
            pbVar2 = (byte *)file->_ptr;
            file->_ptr = (char *)(pbVar2 + 1);
            uVar3 = (uint)*pbVar2;
          }
          *(short *)((int)this_ptr->terrain_data + (local_18 * this_ptr->width + iVar8) * 4) =
               (short)(uVar3 << 7);
          iVar8 = iVar8 + 1;
        } while (iVar8 < this_ptr->width);
      }
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->height);
  }
  pcVar5 = local_7c;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\ground.cpp",0x102);
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
    if (*pcVar5 == '.') goto LAB_004ef1f1;
    if (*pcVar5 == '\0') break;
    pcVar7 = pcVar5 + 1;
    if (*pcVar7 == '.') goto LAB_004ef1f1;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_004ef1f1:
  if (pcVar7 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
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
  local_1c = engine_dosio_c_getFile_FUN_00481a50(local_28,local_7c,local_2c);
  if (local_1c == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
  }
  local_14 = 0;
  if (0 < this_ptr->height) {
    do {
      iVar8 = 0;
      if (0 < this_ptr->width) {
        do {
          iVar4 = local_14 * this_ptr->width + iVar8;
          iVar8 = iVar8 + 1;
          crt_stdio_c_fread_FUN_005fd990
                    ((void *)((int)this_ptr->terrain_data + iVar4 * 4 + 2),1,2,local_1c);
        } while (iVar8 < this_ptr->width);
      }
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->height);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\core\\ground.cpp",0x10c);
  core_texlist_cpp_CTextureList_load_FUN_005dbe00(this_ptr->texture_list,filename);
  return extraout_EAX;
}
