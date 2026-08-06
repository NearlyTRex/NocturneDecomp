// Name: core_ground.cpp_openFileWithExtension_FUN_004b1090
// Address: 004b1090
// Address Range: [[004b1090, 004b116e]]
// Convention: __cdecl
// Signature: _FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004b1090(char *directory,char *filename,char *new_extension,char *open_mode)

#include "nocturne.h"

_FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004b1090(char *directory,char *filename,char *new_extension,char *open_mode)

{
  char cVar1;
  _FILE *p_Var2;
  char *pcVar3;
  char *pcVar4;
  char local_60 [80];
  
  pcVar4 = local_60;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    pcVar3 = local_60;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_60;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004b10d3;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_004b10d3;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004b10d3:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 64;
    core_main_c_displayErrorAndQuit_FUN_004c8440("eopen - ext not found!");
  }
  pcVar4 = pcVar4 + 1;
  do {
    cVar1 = *new_extension;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = new_extension[1];
    new_extension = new_extension + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  p_Var2 = engine_dosio_cpp_getFile_FUN_00456a60(directory,local_60,open_mode);
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 68;
    core_main_c_displayErrorAndQuit_FUN_004c8440("eopen - Cannot open file");
    return (_FILE *)0x0;
  }
  return p_Var2;
}
