// Name: engine_pod.cpp_CPod_dismount_FUN_00514560
// Address: 00514560
// Address Range: [[00514560, 005145f6]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismount_FUN_00514560(CPod *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismount_FUN_00514560(CPod *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CPod *pCVar4;
  SFoundFileInfo *pSVar5;
  SFoundFileInfo SStack_224;
  
  pSVar5 = &SStack_224;
  do {
    cVar1 = *filename;
    pSVar5->found_path[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    *(char *)((int)pSVar5 + 1) = cVar1;
    pSVar5 = (SFoundFileInfo *)((int)pSVar5 + 2);
  } while (cVar1 != '\0');
  iVar2 = engine_dosio_cpp_findFileNormally_FUN_00465730(&SStack_224);
  if ((iVar2 != 0) && (iVar2 = 0, pCVar4 = this_ptr, 0 < this_ptr->pod_file_count)) {
    do {
      while (iVar3 = _stricmp
                               (pCVar4->pod_files[0]->filename,SStack_224.target_path), iVar3 == 0)
      {
        engine_pod_cpp_CPod_dismountPod_FUN_005151f0(this_ptr,iVar2);
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
