// Name: engine_pod.cpp_CPod_locateFile_FUN_00514c20
// Address: 00514c20
// Address Range: [[00514c20, 00514ca2]]
// Convention: __cdecl
// Signature: CPodFile * __cdecl engine_pod_cpp_CPod_locateFile_FUN_00514c20(CPod *this_ptr,char *base_path,char *filename,int *file_index_out)

#include "nocturne.h"

CPodFile * __cdecl engine_pod_cpp_CPod_locateFile_FUN_00514c20(CPod *this_ptr,char *base_path,char *filename,int *file_index_out)

{
  int iVar1;
  int iVar2;
  CPod *pCVar3;
  char acStack_224 [532];
  
  iVar2 = 0;
  engine_dosio_cpp_FUN_00465660(acStack_224,base_path,filename);
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      iVar1 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00513c30(pCVar3->pod_files[0],acStack_224);
      if (-1 < iVar1) {
        if (file_index_out != (int *)0x0) {
          *file_index_out = iVar1;
        }
        return this_ptr->pod_files[iVar2];
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return (CPodFile *)0x0;
}
