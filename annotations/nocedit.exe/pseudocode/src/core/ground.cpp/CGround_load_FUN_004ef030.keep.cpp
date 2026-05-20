// Name: core_ground.cpp_CGround_load_FUN_004ef030
// Address: 004ef030
// MANUAL RECONSTRUCTION
// Address Range: [[004ef030, 004ef370]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)

{
  _FILE *file;
  uint uVar3;
  _FILE *file_00;
  int iVar4;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar8;
  char local_cc [80];
  char local_7c [80];
  int local_18;
  int local_14;
  byte *pbVar2;
  
  strcpy(local_cc,filename);
  pcVar3 = strchr(local_cc,'.');
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar3 = pcVar3 + 1;
  strcpy(pcVar3,"raw");
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",local_cc,"rb");
  if (file == (_FILE *)0x0) {
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
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\ground.cpp",0x102);
  strcpy(local_7c,filename);
  pcVar4 = strchr(local_7c,'.');
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar4 = pcVar4 + 1;
  strcpy(pcVar4,"clr");
  file_00 = engine_dosio_cpp_getFile_FUN_00481a50("data",local_7c,"rb");
  if (file_00 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
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
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_00,"..\\core\\ground.cpp",0x10c);
  core_texlist_cpp_CTextureList_load_FUN_005dbe00(this_ptr->texture_list,filename);
  return;
}
