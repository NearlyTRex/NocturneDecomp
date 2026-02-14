// Name: core_curtain.cpp_CCurtain_addFilesToExtract_FUN_0044b960
// Address: 0044b960
// Address Range: [[0044b960, 0044ba2f]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_addFilesToExtract_FUN_0044b960(CCurtain *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_addFilesToExtract_FUN_0044b960(CCurtain *this_ptr,_FILE *file_handle)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char local_108 [256];
  
  pcVar2 = this_ptr->curtain_texture;
  _fprintf(file_handle,"ART\\%s\n",pcVar2);
  pcVar4 = local_108;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = local_108;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_108;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0044b9c3;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_0044b9c3;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_0044b9c3:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\curtain.cpp";
    g_CurrentLineNumber = 0x438;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find curtain texture extension");
  }
  pcVar2 = ".ACT";
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  _fprintf(file_handle,"ART\\%s\n",local_108);
  return;
}
