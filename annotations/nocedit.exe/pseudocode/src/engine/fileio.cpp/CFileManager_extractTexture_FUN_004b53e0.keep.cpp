// Name: engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
// Address: 004b53e0
// MANUAL RECONSTRUCTION
// Address Range: [[004b53e0, 004b54d0]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0(CFileManager *this_ptr,char *texture_filename)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0(CFileManager *this_ptr,char *texture_filename)

{
  _FILE *file_ptr;
  char *pcVar5;
  char local_58 [80];

  _fprintf(this_ptr->file_ptr,"ART\\%s\n",texture_filename);
  strcpy(local_58,texture_filename);
  pcVar5 = strchr(local_58,'.');
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 1760;
    core_main_c_displayErrorAndQuit_FUN_00506f10("fileManger::extractTexture - Extension not found");
  }
  strcpy(pcVar5,".ACT");
  file_ptr = engine_dosio_cpp_getFile_FUN_00481a50("art",local_58,"rb");
  if (file_ptr != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",1767);
    _fprintf(this_ptr->file_ptr,"ART\\%s\n",local_58);
    return;
  }
  return;
}
