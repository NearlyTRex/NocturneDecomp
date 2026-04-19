// Name: core_ground.cpp_openFileWithExtension_FUN_004eebc0
// Address: 004eebc0
// MANUAL RECONSTRUCTION
// Address Range: [[004eebc0, 004eec9e]]
// Convention: __cdecl
// Signature: _FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004eebc0(char *directory,char *filename,char *new_extension,char *open_mode)

#include "nocturne.h"

_FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004eebc0(char *directory,char *filename,char *new_extension,char *open_mode)

{
  _FILE *p_Var2;
  char *pcVar5;
  char local_60 [80];

  strcpy(local_60,filename);
  pcVar5 = strchr(local_60,'.');
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar5 = pcVar5 + 1;
  strcpy(pcVar5,new_extension);
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50(directory,local_60,open_mode);
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
    return (_FILE *)0x0;
  }
  return p_Var2;
}
