// Name: core_glass.cpp_CGlass_addFilesToExtract_FUN_004eb690
// Address: 004eb690
// MANUAL RECONSTRUCTION
// Address Range: [[004eb690, 004eb812]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_addFilesToExtract_FUN_004eb690(CGlass *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_addFilesToExtract_FUN_004eb690(CGlass *this_ptr,_FILE *file_handle)

{
  char *pcVar2;
  char *pcVar6;
  char local_110 [256];

  pcVar2 = (this_ptr->glass_texture).texture_name;
  _fprintf(file_handle,"ART\\%s\n",pcVar2);
  strcpy(local_110, pcVar2);
  pcVar6 = strchr(local_110, '.');
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 973;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find glass texture extension");
  }
  strcpy(pcVar6, ".ACT");
  _fprintf(file_handle,"ART\\%s\n",local_110);
  if (this_ptr->background_flag == 0) {
    return;
  }
  pcVar6 = (this_ptr->broken_texture).texture_name;
  _fprintf(file_handle,"ART\\%s\n",pcVar6);
  strcpy(local_110, pcVar6);
  pcVar6 = strchr(local_110, '.');
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 980;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find glass texture extension");
  }
  strcpy(pcVar6, ".ACT");
  _fprintf(file_handle,"ART\\%s\n",local_110);
  return;
}
