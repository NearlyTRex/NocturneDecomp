// Name: core_curtain.cpp_CCurtain_addFilesToExtract_FUN_0044b960
// Address: 0044b960
// MANUAL RECONSTRUCTION
// Address Range: [[0044b960, 0044ba2f]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_addFilesToExtract_FUN_0044b960(CCurtain *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_addFilesToExtract_FUN_0044b960(CCurtain *this_ptr,_FILE *file_handle)

{
  char *pcVar2;
  char *pcVar5;
  char local_108 [256];

  pcVar2 = (this_ptr->curtain_texture).texture_name;
  _fprintf(file_handle,"ART\\%s\n",pcVar2);
  strcpy(local_108,pcVar2);
  pcVar5 = strchr(local_108,'.');
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\curtain.cpp";
    g_CurrentLineNumber = 0x438;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find curtain texture extension");
  }
  strcpy(pcVar5,".ACT");
  _fprintf(file_handle,"ART\\%s\n",local_108);
  return;
}
