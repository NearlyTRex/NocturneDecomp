// Name: engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
// Address: 004b5640
// MANUAL RECONSTRUCTION
// Address Range: [[004b5640, 004b5904]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager *this_ptr,char *filename_list)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager *this_ptr,char *filename_list)

{
  int iVar2;
  int iVar3;
  char (*pacVar3) [128];
  int iVar4;
  char *pcVar4;
  int iVar7;
  char (*pacVar8) [128];
  char local_580 [260];
  char local_47c [256];
  char local_37c [256];
  char local_27c [256];
  char local_17c [200];
  char local_b4 [80];
  char local_64 [80];
  
  strcpy(local_64,filename_list);
  pcVar4 = strchr(local_64,',');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  iVar4 = 0;
  pacVar3 = this_ptr->file_entries;
  if (0 < this_ptr->tracked_file_count) {
    do {
      strcpy(local_b4,*pacVar3);
      pcVar4 = strchr(local_b4,',');
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      iVar2 = _strcmp(local_64,local_b4);
      if (iVar2 == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
      pacVar3 = pacVar3 + 1;
    } while (iVar4 < this_ptr->tracked_file_count);
  }
  pacVar8 = this_ptr->file_entries + this_ptr->tracked_file_count;
  strcpy(*pacVar8,filename_list);
  iVar7 = this_ptr->tracked_file_count + 1;
  this_ptr->tracked_file_count = iVar7;
  if (9999 < iVar7) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x767;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many files - get Mark");
  }
  engine_dosio_cpp_splitPath_FUN_00481f20(local_64,(char *)0x0,local_47c,local_27c,local_37c);
  iVar7 = _stricmp(local_47c,"art");
  if ((iVar7 != 0) &&
     (iVar7 = _stricmp(local_47c,"art\\"), iVar7 != 0)) {
    return;
  }
  iVar7 = _stricmp(local_37c,"raw");
  if ((iVar7 != 0) &&
     (iVar7 = _stricmp(local_37c,".raw"), iVar7 != 0)) {
    return;
  }
  engine_dosio_cpp_makePath_FUN_00481f50(local_580,(char *)0x0,local_47c,local_27c,"OPA");
  iVar7 = engine_dosio_cpp_getFileSize_FUN_00481880((char *)0x0,local_580);
  if (iVar7 < 0) {
    return;
  }
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00481880((char *)0x0,local_64);
  if (iVar7 != iVar3) {
    _sprintf(local_17c,"%s is not the same size as %s",local_580,local_64);
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x786;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_17c);
  }
  engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(this_ptr,local_580);
  return;
}
