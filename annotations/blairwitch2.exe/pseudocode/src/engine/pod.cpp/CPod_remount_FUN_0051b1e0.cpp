// Name: engine_pod.cpp_CPod_remount_FUN_0051b1e0
// Address: 0051b1e0
// Address Range: [[0051b1e0, 0051b272]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_remount_FUN_0051b1e0(CPod *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_remount_FUN_0051b1e0(CPod *this_ptr)

{
  char cVar1;
  int iVar2;
  CPod *pCVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_110 [256];
  
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      pcVar5 = pCVar3->pod_files[0]->filename;
      pcVar6 = acStack_110;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00(pCVar3->pod_files[0],acStack_110);
      if (iVar2 == 0) {
        _DAT_01d046a4 = 0x404;
        _DAT_01d046a0 = "..\\engine\\pod.cpp";
        core_main_c_FUN_004e4500("Can't re-mount %s",acStack_110);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar4 < this_ptr->pod_file_count);
  }
  return;
}
