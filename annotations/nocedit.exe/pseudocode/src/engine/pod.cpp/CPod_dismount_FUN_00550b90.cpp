// Name: engine_pod.cpp_CPod_dismount_FUN_00550b90
// Address: 00550b90
// Address Range: [[00550b90, 00550c26]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_dismount_FUN_00550b90(CPod * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismount_FUN_00550b90(CPod *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CPod *pCVar4;
  char *pcVar5;
  char acStack_120 [272];
  
  pcVar5 = &stack0xfffffddc;
  do {
    cVar1 = *filename;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)&stack0xfffffddc);
  if ((iVar2 != 0) && (iVar2 = 0, pCVar4 = this_ptr, 0 < this_ptr->pod_file_count)) {
    do {
      while (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pCVar4->pod_files[0]->filename,acStack_120),
            iVar3 == 0) {
        engine_pod_cpp_CPod_dismountPod_FUN_005518c0(this_ptr,iVar2);
        if (this_ptr->pod_file_count <= iVar2) {
          return;
        }
      }
      iVar2 = iVar2 + 1;
      pCVar4 = (CPod *)pCVar4->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return;
}
