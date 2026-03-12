// Name: engine_pod.cpp_CPod_dismount_FUN_00550b90
// Address: 00550b90
// Address Range: [[00550b90, 00550c26]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismount_FUN_00550b90(CPod *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismount_FUN_00550b90(CPod *this_ptr,char *filename)

{
  char cVar2;
  int iVar2;
  int iVar3;
  int index;
  CPod *pCVar4;
  SFoundFileInfo *pSVar5;
  SFoundFileInfo local_224;
  char cVar1;
  
  pSVar5 = &local_224;
  do {
    cVar1 = *filename;
    pSVar5->found_path[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pSVar5->found_path[1] = cVar2;
    pSVar5 = (SFoundFileInfo *)(pSVar5->found_path + 2);
  } while (cVar2 != '\0');
  iVar2 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_224);
  if ((iVar2 != 0) && (index = 0, pCVar4 = this_ptr, 0 < this_ptr->pod_file_count)) {
    do {
      while (iVar3 = _stricmp
                               (pCVar4->pod_files[0]->filename,local_224.target_path), iVar3 == 0) {
        engine_pod_cpp_CPod_dismountPod_FUN_005518c0(this_ptr,index);
        if (this_ptr->pod_file_count <= index) {
          return;
        }
      }
      index = index + 1;
      pCVar4 = (CPod *)pCVar4->pod_files;
    } while (index < this_ptr->pod_file_count);
  }
  return;
}
