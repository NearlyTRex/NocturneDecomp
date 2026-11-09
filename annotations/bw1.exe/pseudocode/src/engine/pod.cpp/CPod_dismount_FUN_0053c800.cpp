// Name: engine_pod.cpp_CPod_dismount_FUN_0053c800
// Address: 0053c800
// Address Range: [[0053c800, 0053c896]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismount_FUN_0053c800(CPod *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismount_FUN_0053c800(CPod *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CPod *pCVar4;
  char *pcVar5;
  char acStack_224 [256];
  char acStack_124 [276];
  
  pcVar5 = acStack_224;
  do {
    cVar1 = *filename;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_dosio_cpp_findFileNormally_FUN_00478ef0(acStack_224);
  if ((iVar2 != 0) && (iVar2 = 0, pCVar4 = this_ptr, 0 < *(int *)this_ptr)) {
    do {
      while (iVar3 = _stricmp
                               ((char *)(*(int *)&pCVar4->field_0x4 + 4),acStack_124), iVar3 == 0) {
        engine_pod_cpp_CPod_dismountPod_FUN_0053d490(this_ptr,iVar2);
        if (*(int *)this_ptr <= iVar2) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      pCVar4 = (CPod *)&pCVar4->field_0x4;
    } while (iVar2 < *(int *)this_ptr);
  }
  return;
}
