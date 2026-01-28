// Name: core_msnedit.cpp_FUN_00537dd0
// Address: 00537dd0
// Address Range: [[00537dd0, 00537f55]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_00537dd0(void)

#include "nocturne.h"

void core_msnedit_cpp_FUN_00537dd0(void)

{
  int iVar1;
  FILE *file_ptr;
  FILE *file_ptr_00;
  int character;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  FILE *file;
  
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880(in_stack_0000000c,in_stack_00000004);
  if (-1 < iVar1) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50
                         (in_stack_0000000c,in_stack_00000004,"rb");
    if (file_ptr == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2eb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",in_stack_00000004);
    }
    file_ptr_00 = engine_dosio_c_getFile_FUN_00481a50
                            (in_stack_0000000c,in_stack_00000008,"wb");
    if (file_ptr_00 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2ed;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Can't create world\\%s",in_stack_00000008);
    }
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      file = file_ptr_00;
      character = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
      crt_stdio_c_fputc_FUN_006007a0(character,file);
    }
    if ((file_ptr->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f2;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Error reading world\\%s",in_stack_00000004);
    }
    if ((file_ptr_00->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f3;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Error writing world\\%s",in_stack_00000008);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",0x2f4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\msnedit.cpp",0x2f5);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Copied %s\\%s to %s\\%s",in_stack_0000000c,in_stack_00000004,
               in_stack_0000000c,in_stack_00000008);
    return;
  }
  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
            (g_CEditorToolsPtr,"Can't find %s\\%s to copy to %s\\%s",in_stack_0000000c,
             in_stack_00000004,in_stack_0000000c,in_stack_00000008);
  return;
}
