// Name: core_msnedit.cpp_CDemonMission_saveWithNewName_FUN_00537f60
// Address: 00537f60
// MANUAL RECONSTRUCTION
// Address Range: [[00537f60, 005381de]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_saveWithNewName_FUN_00537f60(CDemonMission *this_ptr,char *name)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_saveWithNewName_FUN_00537f60(CDemonMission *this_ptr,char *name)

{
  int iVar2;
  _FILE *file_ptr;
  _FILE *file_ptr_00;
  int character;
  char local_420 [260];
  char local_31c [260];
  char local_218 [256];
  char local_118 [256];
  _FILE *file;

  engine_dosio_cpp_splitPath_FUN_00481f20(this_ptr->mission_name,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
  engine_dosio_cpp_splitPath_FUN_00481f20(name,(char *)0x0,(char *)0x0,local_218,(char *)0x0);
  strcpy(this_ptr->mission_name,name);
  core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(this_ptr,name);
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"Mission and script saved");
  engine_dosio_cpp_makePath_FUN_00481f50(local_31c,(char *)0x0,(char *)0x0,local_118,"txt");
  engine_dosio_cpp_makePath_FUN_00481f50(local_420,(char *)0x0,(char *)0x0,local_218,"txt");
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00481880("world",local_31c);
  if (-1 < iVar2) {
    file_ptr = engine_dosio_cpp_getFile_FUN_00481a50("world",local_31c,"rb");
    if (file_ptr == (_FILE *)0x0) {
      g_CurrentLineNumber = 0x2eb;
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",local_31c);
    }
    file_ptr_00 = engine_dosio_cpp_getFile_FUN_00481a50("world",local_420,"wb");
    if (file_ptr_00 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2ed;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create world\\%s",local_420);
    }
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      file = file_ptr_00;
      character = _fgetc(file_ptr);
      _fputc(character,file);
    }
    if ((file_ptr->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading world\\%s",local_31c);
    }
    if ((file_ptr_00->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing world\\%s",local_420);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",0x2f4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\msnedit.cpp",0x2f5);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Copied %s\\%s to %s\\%s","world",local_31c,
               "world",local_420);
    return;
  }
  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
            (g_CEditorToolsPtr,"Can't find %s\\%s to copy to %s\\%s","world",local_31c,
             "world",local_420);
  return;
}
