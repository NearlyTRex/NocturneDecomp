// Name: core_glass.cpp_CGlass_writeDependencies_FUN_004eb690
// Address: 004eb690
// Address Range: [[004eb690, 004eb812]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_writeDependencies_FUN_004eb690(CGlass *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_glass_cpp_CGlass_writeDependencies_FUN_004eb690(CGlass *this_ptr,_FILE *file_handle)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_110 [256];
  
  pcVar2 = (this_ptr->glass_texture).texture_name;
  _fprintf(file_handle,"ART\\%s\n",pcVar2);
  pcVar4 = local_110;
  pcVar5 = local_110;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = local_110;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_110;
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
  _fprintf(file_handle,"ART\\%s\n",local_110);
  if (this_ptr->background_flag == 0) {
    return;
  }
  pcVar2 = (this_ptr->broken_texture).texture_name;
  _fprintf(file_handle,"ART\\%s\n",pcVar2);
  do {
    cVar1 = *pcVar2;
    *pcVar5 = cVar1;
    pcVar4 = local_110;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
    pcVar4 = local_110;
  } while (cVar1 != '\0');
  do {
    pcVar2 = pcVar4;
    if (*pcVar4 == '.') goto LAB_004eb7b0;
    if (*pcVar4 == '\0') break;
    pcVar2 = pcVar4 + 1;
    if (*pcVar2 == '.') goto LAB_004eb7b0;
    pcVar4 = pcVar4 + 2;
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
  _fprintf(file_handle,"ART\\%s\n",local_110);
  return;
}
