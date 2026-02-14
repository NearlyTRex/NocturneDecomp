// Name: engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
// Address: 004ba620
// Address Range: [[004ba620, 004ba6b3]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager *this_ptr,CStrList *pod_list)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager *this_ptr,CStrList *pod_list)

{
  _FILE *file;
  char *pcVar1;
  int index;
  char *format;
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("pod.ini",(char *)0x0,"wt","..\\engine\\fileio.cpp",0xe94)
  ;
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe95;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create POD.INI!");
  }
  pcVar1 = (char *)pod_list->item_count;
  format = "%d\n";
  index = 0;
  while( true ) {
    _fprintf(file,format,pcVar1);
    if (pod_list->item_count <= index) break;
    pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(pod_list,index);
    format = "%s\n";
    index = index + 1;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0xe9b);
  return;
}
