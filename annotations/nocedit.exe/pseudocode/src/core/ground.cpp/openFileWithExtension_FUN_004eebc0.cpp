// Name: core_ground.cpp_openFileWithExtension_FUN_004eebc0
// Address: 004eebc0
// Address Range: [[004eebc0, 004eec9e]]
// Convention: __cdecl
// Signature: _FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004eebc0(char *directory,char *filename,char *new_extension,char *open_mode)

#include "nocturne.h"

_FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004eebc0(char *directory,char *filename,char *new_extension,char *open_mode)

{
  char cVar2;
  _FILE *p_Var2;
  char *pcVar3;
  char *pcVar5;
  char *pcVar4;
  char local_60 [80];
  char cVar1;
  
  pcVar4 = local_60;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    pcVar3 = local_60;
    if (cVar1 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_60;
  } while (cVar2 != '\0');
  do {
    pcVar5 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004eec03;
    if (*pcVar3 == '\0') break;
    pcVar5 = pcVar3 + 1;
    if (*pcVar5 == '.') goto LAB_004eec03;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004eec03:
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 64;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar5 = pcVar5 + 1;
  do {
    cVar2 = *new_extension;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = new_extension[1];
    new_extension = new_extension + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  p_Var2 = engine_dosio_cpp_getFile_FUN_00481a50(directory,local_60,open_mode);
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 68;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
    return (_FILE *)0x0;
  }
  return p_Var2;
}
