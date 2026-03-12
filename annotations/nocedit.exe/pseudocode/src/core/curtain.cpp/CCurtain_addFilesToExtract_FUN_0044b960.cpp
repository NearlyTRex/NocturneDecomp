// Name: core_curtain.cpp_CCurtain_addFilesToExtract_FUN_0044b960
// Address: 0044b960
// Address Range: [[0044b960, 0044ba2f]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_addFilesToExtract_FUN_0044b960(CCurtain *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_addFilesToExtract_FUN_0044b960(CCurtain *this_ptr,_FILE *file_handle)

{
  char cVar2;
  char *pcVar2;
  char *pcVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar4;
  char local_108 [256];
  char cVar1;
  
  pcVar2 = (this_ptr->curtain_texture).texture_name;
  _fprintf(file_handle,"ART\\%s\n",pcVar2);
  pcVar4 = local_108;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = local_108;
    if (cVar1 == '\0') break;
    cVar2 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_108;
  } while (cVar2 != '\0');
  do {
    pcVar5 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0044b9c3;
    if (*pcVar3 == '\0') break;
    pcVar5 = pcVar3 + 1;
    if (*pcVar5 == '.') goto LAB_0044b9c3;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_0044b9c3:
  if (pcVar5 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\curtain.cpp";
    g_CurrentLineNumber = 0x438;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find curtain texture extension");
  }
  pcVar6 = ".ACT";
  do {
    cVar2 = *pcVar6;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  _fprintf(file_handle,"ART\\%s\n",local_108);
  return;
}
