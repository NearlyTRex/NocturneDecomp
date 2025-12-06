// Name: core_glass.cpp_CGlass_writeDependencies_FUN_004eb690
// Address: 004eb690
// Address Range: [[004eb690, 004eb812]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_writeDependencies_FUN_004eb690(CGlass * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_glass_cpp_CGlass_writeDependencies_FUN_004eb690(CGlass *this_ptr,FILE *file_handle)

{
  char cVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uStack_100;
  byte auStack_fc [236];
  
  pcVar2 = (this_ptr->glass_texture).texture_name;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"ART\\%s\n",pcVar2);
  pcVar4 = &stack0xfffffef4;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = &stack0xfffffef4;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = &stack0xfffffef4;
  } while (cVar1 != '\0');
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004eb6f5;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_004eb6f5;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_004eb6f5:
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x3cd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find glass texture extension");
  }
  pcVar4 = ".ACT";
  do {
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"ART\\%s\n");
  if (this_ptr->background_flag == 0) {
    return;
  }
  pcVar2 = (this_ptr->broken_texture).texture_name;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"ART\\%s\n");
  pcVar4 = (char *)&uStack_100;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = (char *)&uStack_100;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = (char *)&uStack_100;
  } while (cVar1 != '\0');
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004eb7b0;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_004eb7b0;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_004eb7b0:
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x3d4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find glass texture extension");
  }
  pcVar4 = ".ACT";
  do {
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  uStack_100 = auStack_fc;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"ART\\%s\n");
  return;
}
