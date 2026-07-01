// Name: core_msnedit.cpp_copyFile_FUN_00537dd0
// Address: 00537dd0
// Address Range: [[00537dd0, 00537f55]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_copyFile_FUN_00537dd0(char *src_filename,char *dest_filename,char *directory)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_copyFile_FUN_00537dd0(char *src_filename,char *dest_filename,char *directory)

{
  int iVar1;
  _FILE *file_ptr;
  _FILE *file_ptr_00;
  int character;
  _FILE *file;
  
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00481880(directory,src_filename);
  if (-1 < iVar1) {
    file_ptr = engine_dosio_cpp_getFile_FUN_00481a50(directory,src_filename,"rb");
    if (file_ptr == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 747;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",src_filename);
    }
    file_ptr_00 = engine_dosio_cpp_getFile_FUN_00481a50(directory,dest_filename,"wb");
    if (file_ptr_00 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 749;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create world\\%s",dest_filename);
    }
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      file = file_ptr_00;
      character = _fgetc(file_ptr);
      _fputc(character,file);
    }
    if ((file_ptr->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 754;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading world\\%s",src_filename);
    }
    if ((file_ptr_00->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 755;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing world\\%s",dest_filename);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",756);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\msnedit.cpp",757);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Copied %s\\%s to %s\\%s",directory,src_filename,directory,
               dest_filename);
    return;
  }
  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
            (g_CEditorToolsPtr,"Can't find %s\\%s to copy to %s\\%s",directory,src_filename,directory,
             dest_filename);
  return;
}
