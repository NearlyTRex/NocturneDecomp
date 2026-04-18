// Name: engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
// Address: 004ba4f0
// MANUAL RECONSTRUCTION
// Address Range: [[004ba4f0, 004ba614]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager *this_ptr,CStrList *pod_list)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager *this_ptr,CStrList *pod_list)

{
  _FILE *file;
  int iVar2;
  char local_10c [260];
  int local_8;

  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("pod.ini",(char *)0x0,"rt","..\\engine\\fileio.cpp",0xe7c)
  ;
  if (file == (_FILE *)0x0) {
    return;
  }
  local_8 = -1;
  _fscanf(file,"%d\n",&local_8);
  if (local_8 < 0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe81;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing POD.INI");
  }
  iVar2 = 0;
  if (0 < local_8) {
    do {
      memcpy(local_10c,g_FilenameBufferTemplate,0x104);
      _fscanf(file,"%s\n",local_10c);
      if (local_10c[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xe86;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing POD.INI");
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(pod_list,local_10c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_8);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0xe89);
  return;
}
