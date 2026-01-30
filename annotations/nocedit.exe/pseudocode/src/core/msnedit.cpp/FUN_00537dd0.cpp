// Name: core_msnedit.cpp_FUN_00537dd0
// Address: 00537dd0
// Address Range: [[00537dd0, 00537f55]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_FUN_00537dd0(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_FUN_00537dd0(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  _FILE *file_ptr;
  _FILE *file_ptr_00;
  int character;
  _FILE *file;
  
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880(param_3,param_1);
  if (-1 < iVar1) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50(param_3,param_1,"rb");
    if (file_ptr == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2eb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",param_1);
    }
    file_ptr_00 = engine_dosio_c_getFile_FUN_00481a50(param_3,param_2,"wb");
    if (file_ptr_00 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2ed;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create world\\%s",param_2);
    }
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      file = file_ptr_00;
      character = _fgetc(file_ptr);
      _fputc(character,file);
    }
    if ((file_ptr->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading world\\%s",param_1);
    }
    if ((file_ptr_00->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing world\\%s",param_2);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",0x2f4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\msnedit.cpp",0x2f5);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Copied %s\\%s to %s\\%s",param_3,param_1,param_3,param_2);
    return;
  }
  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
            (g_CEditorToolsPtr,"Can't find %s\\%s to copy to %s\\%s",param_3,param_1,param_3,param_2);
  return;
}
