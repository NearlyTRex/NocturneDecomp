// Name: core_chain.cpp_CChain_addFilesToExtract_FUN_00431250
// Address: 00431250
// MANUAL RECONSTRUCTION
// Address Range: [[00431250, 0043132c]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_addFilesToExtract_FUN_00431250(CChain *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_addFilesToExtract_FUN_00431250(CChain *this_ptr,_FILE *file_handle)

{
  int iVar2;
  char *pcVar3;
  char *buffer;
  char local_104 [256];

  pcVar3 = this_ptr->texture_name;
  iVar2 = _stricmp(pcVar3,"CHAINLINK.RAW");
  if (iVar2 == 0) {
    return;
  }
  _fprintf(file_handle,"ART\\%s\n",pcVar3);
  strcpy(local_104,pcVar3);
  buffer = strchr(local_104,'.');
  if (buffer == (char *)0x0) {
    g_CurrentFilename = "..\\core\\chain.cpp";
    g_CurrentLineNumber = 600;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CChain::addFilesToExtractList - invalid texture");
  }
  _sprintf(buffer,".ACT");
  _fprintf(file_handle,"ART\\%s\n",local_104);
  return;
}
