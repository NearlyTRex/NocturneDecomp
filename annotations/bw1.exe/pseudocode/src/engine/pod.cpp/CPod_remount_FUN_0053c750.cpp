// Name: engine_pod.cpp_CPod_remount_FUN_0053c750
// Address: 0053c750
// Address Range: [[0053c750, 0053c7f7]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_remount_FUN_0053c750(CPod *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_remount_FUN_0053c750(CPod *this_ptr)

{
  char cVar1;
  int iVar2;
  CPod *pCVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_310 [512];
  char acStack_110 [256];
  
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      pcVar6 = acStack_110;
      pcVar5 = pCVar3->pod_files[0]->filename;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0053b250
                        (pCVar3->pod_files[0],acStack_110,acStack_310);
      if (iVar2 == 0) {
        _DAT_01d1d404 = 0x474;
        _DAT_01d1d400 = "..\\engine\\pod.cpp";
        core_main_c_displayErrorAndQuit_FUN_005030e0("Can't re-mount %s: %s");
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar4 < this_ptr->pod_file_count);
  }
  return;
}
