// Name: core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60
// Address: 00537f60
// Address Range: [[00537f60, 005381de]]
// Convention: unknown
// Signature: void core_msnedit_cpp_OpenAndCreateWorld_FUN_00537f60(void)

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
  char *full_path;
  int in_stack_00000004;
  char *in_stack_00000008;
  FILE *file;
  char local_420 [260];
  char local_31c [260];
  char local_218 [256];
  char local_118 [256];
  char *local_18;
  char *local_14;
  
  full_path = (char *)(in_stack_00000004 + 0x44);
  engine_dosio_c_splitPath_FUN_00481f20(full_path,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000008,(char *)0x0,(char *)0x0,local_218,(char *)0x0);
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
  engine_dosio_c_makePath_FUN_00481f50(local_31c,(char *)0x0,(char *)0x0,local_118,"txt");
  engine_dosio_c_makePath_FUN_00481f50(local_420,(char *)0x0,(char *)0x0,local_218,"txt");
  local_18 = local_31c;
  local_14 = "world";
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("world",local_18);
  if (-1 < iVar2) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",local_31c,"rb");
    if (file_ptr == (FILE *)0x0) {
      g_CurrentLineNumber = 0x2eb;
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",local_31c);
    }
    file_ptr_00 = engine_dosio_c_getFile_FUN_00481a50(local_14,local_420,"wb");
    if (file_ptr_00 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2ed;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create world\\%s",local_420);
    }
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      file = file_ptr_00;
      character = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
      crt_stdio_c_fputc_FUN_006007a0(character,file);
    }
    if ((file_ptr->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading world\\%s",local_18);
    }
    if ((file_ptr_00->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing world\\%s",local_420);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",0x2f4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\msnedit.cpp",0x2f5);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Copied %s\\%s to %s\\%s",local_14,local_18,local_14,local_420);
    return;
  }
  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
            (g_CEditorToolsPtr,"Can't find %s\\%s to copy to %s\\%s","world",local_31c,
             "world",local_420);
  return;
}
