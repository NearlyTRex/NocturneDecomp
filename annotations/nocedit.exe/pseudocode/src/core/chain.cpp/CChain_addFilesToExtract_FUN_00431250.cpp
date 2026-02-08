// Name: core_chain.cpp_CChain_addFilesToExtract_FUN_00431250
// Address: 00431250
// Address Range: [[00431250, 0043132c]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_addFilesToExtract_FUN_00431250(CChain *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_chain_cpp_CChain_addFilesToExtract_FUN_00431250(CChain *this_ptr,_FILE *file_handle)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_104 [256];
  
  pcVar3 = this_ptr->texture_name;
  iVar2 = stricmp(pcVar3,"CHAINLINK.RAW");
  if (iVar2 == 0) {
    return;
  }
  _fprintf(file_handle,"ART\\%s\n",pcVar3);
  pcVar4 = local_104;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = local_104;
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004312d1;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_004312d1;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004312d1:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\chain.cpp";
    g_CurrentLineNumber = 600;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CChain::addFilesToExtractList - invalid texture");
  }
  _sprintf(pcVar4,".ACT");
  _fprintf(file_handle,"ART\\%s\n",local_104);
  return;
}
