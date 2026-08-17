// Name: engine_pod.cpp_CPod_remount_FUN_004f8970
// Address: 004f8970
// Address Range: [[004f8970, 004f8a02]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_remount_FUN_004f8970(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_remount_FUN_004f8970(CPod *this_ptr)

{
  char cVar1;
  int iVar2;
  CPod *pCVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_110 [256];
  
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      pcVar5 = pCVar3->pod_files[0]->filename;
      pcVar6 = local_110;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = engine_pod_cpp_CPodFile_FUN_004f7ae0(pCVar3->pod_files[0],local_110);
      if (iVar2 == 0) {
        g_CurrentLineNumber = 640;
        g_CurrentFilename = "..\\engine\\pod.cpp";
        core_main_c_displayErrorAndQuit_FUN_004c8440("Can't re-mount %s",local_110);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar4 < this_ptr->pod_file_count);
  }
  return;
}
