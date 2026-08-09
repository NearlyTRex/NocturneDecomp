// Name: engine_pod.cpp_CPod_dismount_FUN_004f8a10
// Address: 004f8a10
// Address Range: [[004f8a10, 004f8ae3]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_dismount_FUN_004f8a10(CPod *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_dismount_FUN_004f8a10(CPod *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CPodFile **ppCVar5;
  CPodFile *ptr;
  int iVar6;
  CPod *pCVar7;
  SFoundFileInfo *pSVar8;
  SFoundFileInfo local_220;
  
  pSVar8 = &local_220;
  do {
    cVar1 = *filename;
    pSVar8->found_path[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    *(char *)((int)pSVar8 + 1) = cVar1;
    pSVar8 = (SFoundFileInfo *)((int)pSVar8 + 2);
  } while (cVar1 != '\0');
  iVar3 = engine_dosio_cpp_findFileNormally_FUN_00456800(&local_220);
  if (iVar3 != 0) {
    iVar3 = 0;
    pCVar7 = this_ptr;
    if (0 < this_ptr->pod_file_count) {
      do {
        iVar4 = _stricmp
                          (pCVar7->pod_files[0]->filename,local_220.target_path);
        if (iVar4 == 0) {
          if (pCVar7->pod_files[0] != (CPodFile *)0x0) {
            ptr = engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(pCVar7->pod_files[0],0);
            operator_delete(ptr);
          }
          ppCVar5 = this_ptr->pod_files + iVar3 + -1;
          for (iVar4 = iVar3; iVar2 = this_ptr->pod_file_count, iVar6 = iVar2 + -1, iVar4 < iVar6;
              iVar4 = iVar4 + 1) {
            ppCVar5[1] = ppCVar5[2];
            ppCVar5 = ppCVar5 + 1;
          }
          this_ptr->pod_file_count = iVar6;
          this_ptr->pod_files[iVar2 + -1] = (CPodFile *)0x0;
        }
        else {
          iVar3 = iVar3 + 1;
          pCVar7 = (CPod *)pCVar7->pod_files;
        }
      } while (iVar3 < this_ptr->pod_file_count);
    }
    engine_texture_cpp_clearTextureCache_FUN_005459f0();
  }
  return;
}
