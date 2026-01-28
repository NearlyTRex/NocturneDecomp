// Name: engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
// Address: 004b53e0
// Address Range: [[004b53e0, 004b54d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0 (CFileManager *this_ptr,char *texture_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
          (CFileManager *this_ptr,char *texture_filename)

{
  char cVar1;
  FILE *file_ptr;
  char *pcVar2;
  char *pcVar3;
  char local_58 [80];
  
  crt_stdio_c_fprintf_FUN_005fe6d0(this_ptr->file_ptr,"ART\\%s\n",texture_filename);
  pcVar3 = local_58;
  do {
    cVar1 = *texture_filename;
    *pcVar3 = cVar1;
    pcVar2 = local_58;
    if (cVar1 == '\0') break;
    cVar1 = texture_filename[1];
    texture_filename = texture_filename + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
    pcVar2 = local_58;
  } while (cVar1 != '\0');
  do {
    pcVar3 = pcVar2;
    if (*pcVar2 == '.') goto LAB_004b5436;
    if (*pcVar2 == '\0') break;
    pcVar3 = pcVar2 + 1;
    if (*pcVar3 == '.') goto LAB_004b5436;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004b5436:
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x6e0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("fileManger::extractTexture - Extension not found");
  }
  pcVar2 = ".ACT";
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("art",local_58,"rb");
  if (file_ptr != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0x6e7);
    crt_stdio_c_fprintf_FUN_005fe6d0(this_ptr->file_ptr,"ART\\%s\n",local_58);
    return;
  }
  return;
}
