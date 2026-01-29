// Name: engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
// Address: 004b7c10
// Address Range: [[004b7c10, 004b7c5e]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager *this_ptr)

{
  _FILE *p_Var1;
  
  p_Var1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("level.lst",(char *)0x0,"wt","..\\engine\\fileio.cpp",
                      0xa8c);
  this_ptr->file_ptr = p_Var1;
  if (p_Var1 != (_FILE *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\engine\\fileio.cpp";
  g_CurrentLineNumber = 0xa8e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("fileManager::openExtractFile - Unable to open level.lst");
  return;
}
