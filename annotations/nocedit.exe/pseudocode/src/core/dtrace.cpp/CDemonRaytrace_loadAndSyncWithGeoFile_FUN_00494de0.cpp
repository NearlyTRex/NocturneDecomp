// Name: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
// Address: 00494de0
// Address Range: [[00494de0, 00494f44]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0(CDemonRaytrace *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0(CDemonRaytrace *this_ptr,char *filename)

{
  _FILE *p_Var1;
  int iVar2;
  int iVar1;
  _FILE *file;
  SFoundFileInfo local_224;
  
  p_Var1 = engine_dosio_c_getFile_FUN_00481a50("data",filename,"rb");
  if (p_Var1 == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004947a0(this_ptr,p_Var1);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var1,"..\\core\\dtrace.cpp",0x212);
  if (INT_02cee5ac == 1) {
    _sprintf(local_224.found_path,"data\\%s",filename);
    iVar2 = engine_dosio_c_findFile_FUN_00481760(&local_224);
    if ((iVar2 == 0) || (local_224.is_archive == 0)) {
      core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040(this_ptr,filename);
      return 1;
    }
    iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Old .GEO file %s exists in file:\n%s\nShall I patch it?\nIf you're not sure what this means, type N.",filename,
                       local_224.target_path);
    if (iVar1 != 0) {
      file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_224.target_path,(char *)0x0,"rb+","..\\core\\dtrace.cpp",
                        0x21d);
      if (file == (_FILE *)0x0) {
        g_CurrentFilename = "..\\core\\dtrace.cpp";
        g_CurrentLineNumber = 0x21e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't rewrite .POD file for unknown reason");
      }
      _fseek(file,local_224.file_offset,0);
      core_dtrace_cpp_CDemonRaytrace_saveBinary_FUN_00494f50(this_ptr,file);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dtrace.cpp",0x221);
    }
  }
  return 1;
}
