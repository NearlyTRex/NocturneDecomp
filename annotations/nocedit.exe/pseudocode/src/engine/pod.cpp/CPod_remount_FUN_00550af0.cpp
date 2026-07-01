// Name: engine_pod.cpp_CPod_remount_FUN_00550af0
// Address: 00550af0
// Address Range: [[00550af0, 00550b82]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_remount_FUN_00550af0(CPod *this_ptr)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_remount_FUN_00550af0(CPod *this_ptr)

{
  char cVar2;
  int iVar2;
  CPod *pCVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_110 [256];
  char cVar1;
  
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
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar2;
        pcVar6 = pcVar6 + 2;
      } while (cVar2 != '\0');
      iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(pCVar3->pod_files[0],local_110);
      if (iVar2 == 0) {
        g_CurrentLineNumber = 947;
        g_CurrentFilename = "..\\engine\\pod.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't re-mount %s",local_110);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar4 < this_ptr->pod_file_count);
  }
  return;
}
