// Name: core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60
// Address: 00537f60
// Address Range: [[00537f60, 005381de]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_OpenAndCreateWorld(uint param_1, uint param_2)
    */

void core_msnedit_cpp_OpenAndCreateWorld_FUN_00537f60(void)

{
  char cVar1;
  int iVar2;
  FILE *file_ptr;
  FILE *file_ptr_00;
  int character;
  BADSPACEBASE *in_ESP;
  char *full_path;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_00000010;
  FILE *in_stack_fffffc0c;
  char acStack_30c [8];
  char acStack_304 [4];
  char acStack_300 [236];
  char acStack_214 [16];
  char acStack_204 [236];
  char local_118 [16];
  char acStack_108 [248];
  
  full_path = (char *)(in_stack_00000004 + 0x44);
  engine_dosio_c_splitPath_FUN_00481f20(full_path,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000008,(char *)0x0,(char *)0x0,acStack_214,(char *)0x0);
  do {
    cVar1 = *in_stack_00000008;
    *full_path = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    full_path[1] = cVar1;
    full_path = full_path + 2;
  } while (cVar1 != '\0');
  core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190();
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"Mission and script saved");
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_30c,(char *)0x0,(char *)0x0,acStack_108,"txt");
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffbf4,(char *)0x0,(char *)0x0,acStack_204,"txt");
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("world",acStack_304);
  if (-1 < iVar2) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",acStack_300,"rb");
    if (file_ptr == (FILE *)0x0) {
      g_CurrentLineNumber = 0x2eb;
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s");
    }
    file_ptr_00 = engine_dosio_c_getFile_FUN_00481a50
                            (in_stack_00000010,&stack0xfffffbf8,"wb");
    if (file_ptr_00 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2ed;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create world\\%s");
    }
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      character = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
      crt_stdio_c_fputc_FUN_006007a0(character,in_stack_fffffc0c);
    }
    if ((file_ptr->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading world\\%s");
    }
    if ((file_ptr_00->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing world\\%s");
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",0x2f4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\msnedit.cpp",0x2f5);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Copied %s\\%s to %s\\%s");
    return;
  }
  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
            (g_CEditorToolsPtr,"Can't find %s\\%s to copy to %s\\%s","world",acStack_300);
  return;
}
