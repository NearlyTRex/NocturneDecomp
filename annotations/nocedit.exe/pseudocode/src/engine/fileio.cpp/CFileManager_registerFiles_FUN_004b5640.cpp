// Name: engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
// Address: 004b5640
// Address Range: [[004b5640, 004b5904]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager *this_ptr,char *filename_list)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager *this_ptr,char *filename_list)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char (*pacVar3) [128];
  int iVar4;
  char *pcVar5;
  char *pcVar4;
  char *pcVar6;
  char (*pacVar6) [128];
  int iVar7;
  char *pcVar7;
  char (*pacVar8) [128];
  char local_580 [260];
  char local_47c [256];
  char local_37c [256];
  char local_27c [256];
  char local_17c [200];
  char local_b4 [80];
  char local_64 [80];
  char (*local_14) [128];
  char cVar1;
  
  pcVar7 = local_64;
  pcVar5 = filename_list;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  pcVar6 = local_64;
  do {
    pcVar4 = pcVar6;
    if (*pcVar6 == ',') goto LAB_004b5693;
    if (*pcVar6 == '\0') break;
    pcVar4 = pcVar6 + 1;
    if (*pcVar4 == ',') goto LAB_004b5693;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004b5693:
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  iVar4 = 0;
  pacVar3 = this_ptr->file_entries;
  if (0 < this_ptr->tracked_file_count) {
    do {
      pcVar6 = local_b4;
      pacVar6 = pacVar3;
      do {
        cVar2 = (*pacVar6)[0];
        *pcVar6 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = (*pacVar6)[1];
        pacVar6 = (char (*) [128])(*pacVar6 + 2);
        pcVar6[1] = cVar2;
        pcVar6 = pcVar6 + 2;
      } while (cVar2 != '\0');
      pcVar6 = local_b4;
      do {
        pcVar4 = pcVar6;
        if (*pcVar6 == ',') goto LAB_004b5706;
        if (*pcVar6 == '\0') break;
        pcVar4 = pcVar6 + 1;
        if (*pcVar4 == ',') goto LAB_004b5706;
        pcVar6 = pcVar6 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_004b5706:
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
  do {
    cVar2 = *filename_list;
    (*pacVar8)[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = filename_list[1];
    filename_list = filename_list + 2;
    (*pacVar8)[1] = cVar2;
    pacVar8 = (char (*) [128])(*pacVar8 + 2);
  } while (cVar2 != '\0');
  iVar7 = this_ptr->tracked_file_count + 1;
  this_ptr->tracked_file_count = iVar7;
  if (9999 < iVar7) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x767;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many files - get Mark");
  }
  engine_dosio_c_splitPath_FUN_00481f20(local_64,(char *)0x0,local_47c,local_27c,local_37c);
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
  engine_dosio_c_makePath_FUN_00481f50(local_580,(char *)0x0,local_47c,local_27c,"OPA");
  iVar7 = engine_dosio_c_getFileSize_FUN_00481880((char *)0x0,local_580);
  if (iVar7 < 0) {
    return;
  }
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880((char *)0x0,local_64);
  if (iVar7 != iVar3) {
    _sprintf(local_17c,"%s is not the same size as %s",local_580,local_64);
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x786;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_17c);
  }
  engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(this_ptr,local_580);
  return;
}
