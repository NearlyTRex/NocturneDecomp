// Name: core_ground.cpp_openFileWithExtension_FUN_004eebc0
// Address: 004eebc0
// Address Range: [[004eebc0, 004eec9e]]
// Convention: __cdecl
// Signature: _FILE * __cdecl core_ground_cpp_openFileWithExtension_FUN_004eebc0 (char *base_filename,char *file_extension,char *open_mode)

#include "nocturne.h"

_FILE * __cdecl
core_ground_cpp_openFileWithExtension_FUN_004eebc0
          (char *base_filename,char *file_extension,char *open_mode)

{
  char cVar1;
  _FILE *p_Var2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000010;
  char local_60 [80];
  
  pcVar4 = local_60;
  do {
    cVar1 = *file_extension;
    *pcVar4 = cVar1;
    pcVar3 = local_60;
    if (cVar1 == '\0') break;
    cVar1 = file_extension[1];
    file_extension = file_extension + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_60;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004eec03;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_004eec03;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004eec03:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar4 = pcVar4 + 1;
  do {
    cVar1 = *open_mode;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = open_mode[1];
    open_mode = open_mode + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50(base_filename,local_60,in_stack_00000010);
  if (p_Var2 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
    return (_FILE *)0x0;
  }
  return p_Var2;
}
