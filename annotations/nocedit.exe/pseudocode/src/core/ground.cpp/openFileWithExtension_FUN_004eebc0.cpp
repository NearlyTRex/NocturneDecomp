// Name: core_ground.cpp_openFileWithExtension_FUN_004eebc0
// Address: 004eebc0
// Address Range: [[004eebc0, 004eec9e]]
// Convention: __cdecl
// Signature: FILE * core_ground.cpp_openFileWithExtension_FUN_004eebc0(char * base_filename, char * file_extension, char * open_mode)

#include "nocturne.h"

FILE * __cdecl
core_ground_cpp_openFileWithExtension_FUN_004eebc0
          (char *base_filename,char *file_extension,char *open_mode)

{
  char cVar1;
  FILE *pFVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *in_stack_00000010;
  char *in_stack_00000014;
  
  pcVar5 = &stack0xffffffa0;
  pcVar3 = file_extension;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    pcVar4 = &stack0xffffffa0;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
    pcVar4 = &stack0xffffffa0;
  } while (cVar1 != '\0');
  do {
    pcVar3 = pcVar4;
    if (*pcVar4 == '.') goto LAB_004eec03;
    if (*pcVar4 == '\0') break;
    pcVar3 = pcVar4 + 1;
    if (*pcVar3 == '.') goto LAB_004eec03;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004eec03:
  if (pcVar3 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - ext not found!");
  }
  pcVar3 = pcVar3 + 1;
  do {
    cVar1 = *in_stack_00000010;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50(file_extension,&stack0xffffffa4,in_stack_00000014);
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\ground.cpp";
    g_CurrentLineNumber = 0x44;
    core_main_c_displayErrorAndQuit_FUN_00506f10("eopen - Cannot open file");
    return (FILE *)0x0;
  }
  return pFVar2;
}
